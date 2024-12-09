//Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>

int sumNatural(int);

int sumNatural(int n){
    if(n>0)
    return sumNatural(n-1)+n;
    else return 0;
}

int main(){
    int n;
    printf("enter a num  :");
    scanf("%d",&n);
    printf("%d",sumNatural(n));
    return 0;
}
