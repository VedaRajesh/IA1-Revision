#include<stdio.h>
void input_two_string(char *a, char *b)
{
   printf("enter two strings\n");
    scanf("%s%s",a,b);
}
int strcmp(char *a, char *b)
{
    int result;
    for(int i=0;a[i]!='\0' || b[i]!='\0';i++)
        {
            if(a[i]>b[i])
            {
              return 1;
            }
            else if(a[i]==b[i])
            {
                return 0;
            }
         else 
                return -1;
        }
  
}
void output(char *a, char *b, int result)
{
    if(result>0)
    printf("%s is greater than %s",a,b);
    else if(result==0)
        printf("%s is equal to  %s",a,b);
    else 
        printf("%s is greater than %s",b,a);
     
}
int main()
{
    char a[100],b[100];
    input_two_string(a, b);
    int result;
    result=strcmp(a,b);
    output(a,b,result);
    return 0;
}