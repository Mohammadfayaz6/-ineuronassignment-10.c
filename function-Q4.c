#include<stdio.h>
void print(int);
int main()
{  
    int N;
    printf("enter a number\n");
    scanf("%d",&N);

    print(N);
    return 0;

}
   void print(int n)
   {
     int i;
     printf("sum of first N natural numbers:\n");
     for(i=1;i<=n;i++)
     {
        printf("\n%d",i);
     }   
   }