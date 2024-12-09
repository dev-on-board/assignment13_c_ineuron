//Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
int sum_digit(int);
int sum_digit(int n){

    if(n!=0)
      return sum_digit(n/10)+(n%10);
    
    else 
    return 0;
}

int main(){
    int n;
    printf("enter the num : ");
    scanf("%d",&n);
    printf("%d",sum_digit(n));
    return 0;
}