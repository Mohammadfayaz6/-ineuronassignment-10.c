#include<stdio.h>
 int comb(int n,int r)
  {
    return fact(n)/(fact(r)*fact(n-r));
  }

  int fact(int n)
  {
    int i,f=1;
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
       return f;
  }

   int main()
{
  int a,b;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("the number of combinations are %d",comb(a,b));
  return 0;
}