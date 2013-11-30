//
//  main.c
//  ice011GuessNum
//
//  Created by Iceskysl on 11/30/13.
//  Copyright (c) 2013 1sters. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int num;

BOOL guessNum(inputNum){
    if (inputNum > num) {
        printf("你输入的数字大了\n");
    }else if(inputNum < num){
        printf("你输入的数字小了\n");
    }else{
        printf("biingdo~~~~\n");
        return TRUE;
    }
    return FALSE;
}


int main(int argc, const char * argv[])
{
    printf("请输入0-100你猜的数字:\n");
    
    srand ((unsigned int)time(NULL));
    num = rand()%100;
    printf("%d\n",num);
    
    int inputNum;
    while (1) {
        scanf("%d",&inputNum);
        if (guessNum(inputNum)) {
            break;
        }
    }
    return 0;
}

