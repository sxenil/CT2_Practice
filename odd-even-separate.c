#include <stdio.h>
int main (){
    int arr[6]= {1,2,3,4,5,6};
    int e_arr[6];
    int o_arr[6];
    int e_count=0;
    int o_count=0;
    for (int i= 0; i<6; i++){
        if (arr[i]%2==0){
            e_arr[e_count++]=arr[i];
        }
        else {
            o_arr[o_count++]=arr[i];
        }
    }

    printf ("Even numbers: ");
    for (int i=0; i<e_count; i++){
        printf ("%d ", e_arr[i]);
    }

    printf ("\nOdd numbers: ");
    for (int i=0; i<o_count; i++){
        printf ("%d ", o_arr[i]);
    }

return 0;

}