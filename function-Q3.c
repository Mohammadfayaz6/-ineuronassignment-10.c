#include<stdio.h>
int check(int);
int main()
{
    int num;
    printf("Enter any positive number\n");
    scanf("%d",&num);
    if(check(num)==1)
       printf("%d is even",num);
    else
       printf("%d is odd",num);
    return 0;
}

 int check(int var)
  {
     if(var%2==0)
    {
       return 1;
    } 
     else
    {
         return 0;
    }
  
  }