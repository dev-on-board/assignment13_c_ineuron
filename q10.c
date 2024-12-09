//Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>

int power(int,int);

int power(int n,int a){
    if(a==0)
      return 1;
    return n*power(n,a-1);
}

int main(){
    int n,a;
    printf("enter the num : ");
    scanf("%d",&n);

    printf("\nenter the power you want : ");
    scanf("%d",&a);
    
    printf("%d",power(n,a));
    return 0;
}