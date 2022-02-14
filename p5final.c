#include<stdio.h>
float input()
{
    float n;
    printf("enter a number to find its squareroot\n");
    scanf("%f",&n);
    return n;
}
float my_sqrt(float n)
{
    int temp,sqrt;
    sqrt=n/2;
    while(temp!=sqrt)
        {
            temp=sqrt;
            sqrt=(n/temp+temp)/2;
            
        }
    return sqrt;
}
void output(float n, float sqrt_result)
{
    printf("squareoot of %f is %f",n,sqrt_result);
}
int main()
{
    int n,sqrt_result;
    n=input();
    sqrt_result=my_sqrt(n);
    output(n,sqrt_result);
    return 0;
}