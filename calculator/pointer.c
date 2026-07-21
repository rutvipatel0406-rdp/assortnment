#include<stdio.h>

int main(){

    int a=10;
    int*ptr;
    int**pptr;

    ptr=&a;
    pptr=&ptr;
    printf("%d",**pptr);

    return 0;
}