//
//  main.c
//  ice006
//
//  Created by Iceskysl on 11/30/13.
//  Copyright (c) 2013 1sters. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


//总原则：思路清晰
typedef  struct {
    int age;
    char * name;
} People;


//Alloc
void PeopleAlloc(People ** p){
    (*p) = malloc(sizeof(People));
}

//Delete
void PeopleDelete(People * p ){
    free(p);
}

int PeopleInit(int age,char* name, People * p){
    p -> age = age;
    p -> name = name;
    return 0;
}


int main(int argc, const char * argv[])
{

    // insert code here...
    
//    People p;
//    p.age = 20;
//    p.name = "ice";
//    
//    People * p1 = &p;
//    p1->age = 18; //指针的成员
    
//    People *p;
//    CreatePeople(20, "ice", &p);
//    free(p);
    
//    People *p =CreatePeople(20, "zhangsan");
//    free(p);
//    p = CreatePeople(18, "ice");
    
//    People *p;
//    PeopleAlloc(&p);
//    PeopleInit(19, "iceskysl", p);
//    
//    
//    printf("%d\n",p->age);
//    printf("%s\n",p->name);
//    
//    PeopleDelete(p);

    return 0;
}

