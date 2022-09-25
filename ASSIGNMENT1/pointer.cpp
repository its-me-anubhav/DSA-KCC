#include <stdio.h>
void pointer(int*a,int*b){ 
    int sum =*a+*b;
    int diff;
    if (*a>*b)
    {
    diff=*a-*b;
    }  
    else {
    diff=*b-*a;
    }
    *a=sum;
    *b= diff;
}
int main() {
    int a,b;
int *ptra=&a;
    int *ptrb=&b;
    scanf("%d %d",&a,&b);
        pointer(ptra,ptrb);
    printf("%d\n%d",a,b);
   
    return 0;
}
