#include <stdio.h>
int main (){
    int arr[5];
    printf ("Enter array elements: ");
    for (int i=0; i<5; i++){
        scanf ("%d", &arr[i]);
    }

    printf ("Array: ");

    for (int i=0; i<5; i++){
        printf ("%d ", arr[i]);
    }
    
    int largest = arr[0];

    for (int i=0; i<5; i++){
        if (arr[i]>largest){
            largest= arr[i];
        }
    }

    printf ("\nLargest number in the array is %d", largest);

    return 0;
}