#include <stdio.h>

int main()
{

    int no;

    printf("Enter the array's size:");
    scanf("%d", &no);

    int arr[no];
    int i;
    printf("enter the array elements:\n");
    for (i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("negative numbers:");
    for (i = 0; i < no; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d  ", arr[i]);
        }
    }
    return 0;
}