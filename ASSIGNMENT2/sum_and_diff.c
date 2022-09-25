#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
    int b;
    float c;
    float d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    int sum1=a+b;
    int diff1=a-b;
    float sum2=c+d;
    float diff2=c-d;
    printf("%d %d\n",sum1,diff1);
    printf("%0.1f %0.1f",sum2,diff2);
    return 0;
}
