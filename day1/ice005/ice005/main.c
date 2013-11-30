//
//  main.c
//  ice005
//
//  Created by Iceskysl on 11/30/13.
//  Copyright (c) 2013 1sters. All rights reserved.
//

#include <stdio.h>

#define M_PI 3.14

#define MAX(a,b) \
a>b? a : b


#define HELLO() do{\
char * str = "hello eoe";\
printf("%s\n",str);\
}while(0)



int max(a,b){
    return a > b ? a : b;
}


int main(int argc, const char * argv[])
{
    HELLO();
    
    printf("__FILE__: %s\n", __FILE__);
    printf("__LINE__: %d\n", __LINE__);
    printf("__DATE__: %s\n", __DATE__);
    printf("__TIME__: %s\n", __TIME__);
    
    printf("Hello, World! \n%f,\n%d\n",MAX(1.0f, 2.0f),MAX(2,3));
    printf("%d\n",max(2,5));
    return 0;
}

