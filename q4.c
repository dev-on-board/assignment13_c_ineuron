//Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>

int sum_square(int);
int sum_square(int n){
    if(n>0)
    return n*n+sum_square(n-1);
    else return 0;
}

int main(){
    int n;
    printf("enter a num : ");
    scanf("%d",&n);
    printf("%d",sum_square(n));
    return 0;

}