#include<stdio.h>
int checkdigit(int num,int digit)
{
    int rem;
    while(num)
    {
        rem=num%10;
        if(rem==digit)
        {
            return 1;
            num=num/10;
        }
         return 0;
    }
}
  int main()
  {
    int x,y;
    printf("Enter the number & digit\n");
    scanf("%d%d",&x,&y);
    int z;
    z=checkdigit(x,y);
    if(z==1)
    {
        printf("given number %d contains given digit %d",x,y);
    }
    else
    {
        printf("given number %d not contains given digit %d",x,y);;
    }

    return 0;
  }