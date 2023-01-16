#include <stdio.h>

int fact(int n){
    if(n == 1){
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}


int main(){
    // int a, b;
    // int *p, *c;
    // scanf("%d %d", &a, &b );
    // p = &a;
    // c = &b;
    // printf("a + b == p + c :  %d", *p + *c );

    // #############Using Pinter with array

    // int n;
    // scanf("%d", &n);

    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &arr[i]);
    // }

    // int *p ;

    // // Initialize the pointer with the first index of Array:
    // int i = 1;
    
    // p = arr;

    // int sum;

    // sum = 0;

    // for(int i = 0 ; i < n ; i++){
    //     sum += *(p + i);
    //     // sum++ ==> sum =  sum + 1
    //     // printf("%d \n", sum);
    // }   

    // printf("%d", sum);

    // RECURSION ||| RECURSIVE FUNCITION ||| RECURSION

    // n!

    int n;

    scanf("%d", &n);

    int result = fact(n);

    printf("Result is : %d", result);

    return 0; 
}