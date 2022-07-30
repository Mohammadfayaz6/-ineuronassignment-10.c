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
     printf("sum of first N  odd natural numbers:\n");
     for(i=1;i<=n;i+=2)
     {
        printf("\n%d",i);
     }   
   }