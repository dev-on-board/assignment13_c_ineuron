//Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>

int sum_odd(int);

int sum_odd(int n){
    if(n>0)
    return 2*n-1+sum_odd(n-1);
    else 
    return 0;
}

int main(){
    int n;
    printf("enter a num :");
    scanf("%d",&n);
    printf("%d",sum_odd(n));
    return 0;
}