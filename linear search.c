#include <stdio.h>
int main()
{   
    int arr[] = {10,25,30,45,50};
    int key = 30;
    int i;
    int found =0;


    for (i=0; i<5; i++ )
{
    if (arr[i]==key) // i = index of array
    {
        printf("element found at position %d\n",i+1);
        found = 1;
        break;
    }

}
if (found==0)
{
    printf("element not found\n ");
}

   
    return 0;
}
