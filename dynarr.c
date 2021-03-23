#include<stdio.h>
#include <stdlib.h>

void fun(int **arr)
{
    int *xyz = (int*)malloc(sizeof(int)*3);
    
    printf("Enter the elements of array: ");
    for(int i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);
    }

}
int main()
{
   int *arr = NULL;
    fun(&arr);

    for(int i = 0; i < 3; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}