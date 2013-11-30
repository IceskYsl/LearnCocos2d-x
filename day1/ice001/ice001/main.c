//
//  main.c
//  ice001
//
//  Created by Iceskysl on 11/30/13.
//  Copyright (c) 2013 1sters. All rights reserved.
//

#include <stdio.h>

void hello(){
    printf("hello ice from hello~\n");
}

typedef void(*H)();

int main(int argc, const char * argv[])
{

//  void (*h)();

    H h;
    h = &hello;
    h();
    
    printf("helo eoe~~\n");
    return 0;
}



