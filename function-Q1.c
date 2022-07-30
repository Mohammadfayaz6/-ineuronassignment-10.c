#include<stdio.h>
float areaofcircle(float);
int main()
{  
    float x,result;
    printf("enter radius of a circle\n");
    scanf("%f",&x);
    result=areaofcircle(x);
    printf(" Area of circle is %.2f",result);
    return 0;
}

    float areaofcircle(float r)
    {
        float Area,pi=3.14;
        Area=pi*r*r;
        return Area;
    }

