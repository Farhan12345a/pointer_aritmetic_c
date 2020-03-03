//Farhan Shahbaz

//Pineville



#include <stdio.h>



int main()
{

    int arr[] = {2,3,4,5,7,54,200,65,78,99};

    size_t size = sizeof(arr)/sizeof(arr[0]);

    parameter_arith(arr,size);

    return 0;

}



void parameter_arith(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("%d\n", *(arr + i));
    
}

}