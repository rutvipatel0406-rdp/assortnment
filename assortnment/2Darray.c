#include<stdio.h>

int main(){

    int row,col;
     printf("Enter the array's row size:");
     scanf("%d",&row);
     printf("Enter the array's column size:");
     scanf("%d",&col);

     int a[row][col];
     int i,j;
      
      printf("Enter the array's elements:\n");
      for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
             
        }
       
    }
    
      for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]>a[0][0])
            {
                a[0][0]=a[i][j];
               printf("a[%d][%d] = %d\n",i,j,a[i][j]);
            }
        }
    }
     printf("largest elememts:\n");
 
}