//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int,int);
int hcf(int a,int b){
    if(b==0)
     return a;
    hcf(b,a%b);
    
}

int main(){
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("%d",hcf(b,a%b));
    return 0;
}