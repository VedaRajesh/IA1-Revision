#include<stdio.h>
typedef struct Complex
{
int real,img;
}Complex;
Complex input_complex()
{
    Complex k;
    printf("enter the real part\n");
    scanf("%d",&k.real);
    printf("enter imaginary part\n");
    scanf("%d",&k.img);
    return k;
}
Complex add(Complex a, Complex b)
{
    Complex z;
    z.real=a.real+b.real;
    z.img=a.img+b.img;
    return z;
}
void output(Complex a, Complex b, Complex c)
{
    printf("sum of %d+%di + %d+%di is %d+%di",a.real,a.img,b.real,b.img,c.real,c.img);
}
int main()
{
    Complex a,b,c;
    a=input_complex();
    b=input_complex();
    c=add(a,b);
    output(a,b,c);
    return 0;
}