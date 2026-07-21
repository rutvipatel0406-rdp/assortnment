#include<stdio.h>

int main(){
    char name[5];
    int i;
    printf("enter the string:");
    for(i=0;i<5;i++)
    {
        scanf("%s",&name[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s",name[i],name);
    }

return 0;


}