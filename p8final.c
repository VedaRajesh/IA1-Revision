#include<stdio.h>
typedef struct Complex
{
 float real,img;
}Complex;
int get_n()
{
    int n;
    printf("how many complex numbers?\n");
    scanf("%d",&n);
    return n;
}
void input_n_complex(int n, Complex c[n])
{
    for(int i=0;i<n;i++)
        {
            printf("enter real part\n");
            scanf("%f",&c[i].real);
            printf("enter imaginary part \n");
            scanf("%f",&c[i].img);
        }
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex b;
    b.real=0;b.img=0;
    for(int i=0;i<n;i++)
        {
            b.real+=c[i].real;
            b.img+=c[i].img;
        }
    return b;
}
void output(int n, Complex c[n], Complex result)
{
    printf("sum of ");
    for(int i=0;i<n-1;i++)
        
        printf("%0.2f+%0.2fi+",c[i].real,c[i].img);
  printf("%0.2f+%0.2fi is %0.2f+%0.2f i",c[n-1].real,c[n-1].img,result.real,result.img);
}
int main()
{
    int n;
    n=get_n();
    Complex c[n],result;
    input_n_complex(n,c);
    result=add_n_complex(n,c);
    output(n,c,result);
    return 0;
}