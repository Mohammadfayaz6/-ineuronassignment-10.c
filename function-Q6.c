#include<stdio.h>
int factorial(int,int );
int main()
{
    int n,m=1,result;
    printf("enter a number\n");
    scanf("%d",&n);
    result=factorial(m,n);
    printf("factorial of %d is %d",n,result);
   return 0;
}
  int factorial(int fact,int x)
  {
    int i;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
       return fact;
  }