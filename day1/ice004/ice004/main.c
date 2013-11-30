//
//  main.c
//  ice004
//
//  Created by Iceskysl on 11/30/13.
//  Copyright (c) 2013 1sters. All rights reserved.
//

#include <stdio.h>


int max(int a,int b){
    return a>b? a : b;
}

char* getWords(){
    char buf[20];
    buf[0] = 'H';
    buf[1] = 'e';
    buf[2] = '\0';
    
    return buf;
}

int main(int argc, const char * argv[])
{
    
    do {
        int a= 10;
    } while (0);
    
    char * words = getWords();
    
    printf("Hello, World!\n");
    return 0;
}

