//
//  main.c
//  ice009file
//
//  Created by Iceskysl on 11/30/13.
//  Copyright (c) 2013 1sters. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    // insert code here...
    
    FILE * f = fopen("/source/LearnCocos2d-x/day1/datas/datas.txt", "w");
    
    if (f!=NULL){
        for (int i = 0; i <= 100; i++){
            fprintf(f, "line %d\n",i);
        }
    fclose(f);
    }


    
    puts("this is a string");
    
    
    printf("%s\n",__FILE__);
    printf("Hello, World!\n");
    return 0;
}

