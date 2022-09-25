#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
	
    int n,a;
    scanf("%d", &n);
    int sum=0;
    while (n!=0){
     a=n%10;
     sum =sum+a;
     n=n/10;
    }
    //Complete the code to calculate the sum of the five digits on n.
    printf("%d",sum);
    return 0;
}
