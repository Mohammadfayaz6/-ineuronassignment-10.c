#include<stdio.h>
void primefactors(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf(" %d,",i);
        }
    }
}
  int main()
  {
    int x;
    printf("Enter any number\n");
    scanf("%d",&x);
    primefactors(x);
    return 0;
  }