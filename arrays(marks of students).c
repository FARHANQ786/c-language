// #include <stdio.h>
// int main(){
//     int marks[5] = {10,20,30,40,50}; // [5]- only five elements
//     int i;

//     printf("marks of studnets are : \n");
//     for (i=0 ; i<5 ; i++ ){
//         printf("marks of student %d: %d\n",i+1,marks[i]);
//     }
//     return 0;
// }

// initilization of array with user input
#include <stdio.h>
int main(){
    int marks[5];
    int i;
    printf("enter elelments of array : ");

    for (i=0 ; i<5 ; i++)
    {
        scanf("%d",&marks[i]);
    }

    for (i=0 ; i<5 ; i++)
    {
        printf("marks of student %d: %d\n",i+1,marks[i]);
    }
    return 0;

}



