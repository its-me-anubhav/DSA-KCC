#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char sw[100];
    char sentence[100];
    scanf("%c\n%s\n%[^\n]s",&ch,sw,sentence);
    printf("%c\n%s\n%s",ch,sw,sentence);

    return 0;
}
