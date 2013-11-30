//
//  main.c
//  ice010Assert
//
//  Created by Iceskysl on 11/30/13.
//  Copyright (c) 2013 1sters. All rights reserved.
//

#include <stdio.h>
#include <assert.h>

int add(int a,int b){
    assert(a<100);
    assert(b<200);
    return a+b;
    
}

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("%d\n",add(200, 3));
    printf("Hello, World!\n");
    return 0;
}

