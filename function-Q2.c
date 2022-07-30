#include<stdio.h>
float simpleinterest(float,float,float);
int main()
{  
    float a,b,c;
    printf("enter the  principle amount rate of interest and time period\n");
    scanf("%f%f%f",&a,&b,&c);

    printf("total=%.2f",simpleinterest(a,b,c));
    return 0;
}

    float simpleinterest(float P,float R,float T)
    {
        float SI=P*R*T/100;
        return SI;
    }