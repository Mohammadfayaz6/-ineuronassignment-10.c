#include<stdio.h>
int permutation(int,int);
int fact(int n)
 {
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
      return f;
 }
    int permutation(int n,int r)
    {
        int perm=fact(n)/fact(n-r);
        return perm;
    }
 
   int main()
   {
     int x,y;
     printf("enter two numbers");
     scanf("%d%d",&x,&y); 
     int c=permutation(x,y);
     printf("%d",c);
     return 0;
   }