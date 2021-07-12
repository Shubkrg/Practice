#include<stdio.h>

void printArray(int A,int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d",A[i]);
    }
    
}

void BubbleSort(int *A,int n){
    for ( int i = 0; i < count; i++)
    {
        /* code */
    }
    
}

int main(){
    int A[]={12,43,64,75,78}
    int n =6;
    printArray(A,n); //printing the array before sorting
    BubbleSort(A,n); //function to sort the array
    printArray(A,n); //Printing the array after sorting
    
    return 0;
}