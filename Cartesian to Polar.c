#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,xp,yp;
    printf("Enter x and y coordinates in Cartesian Form");
    scanf("%f %f",&x,&y);
    xp=sqrt(x*x+y*y);
    yp=atan2(y,x); //atan2() is returns values from all the 4 quadrants
    printf("r= %f",xp);
    printf("theta= %f",yp);

    return 0;
}
