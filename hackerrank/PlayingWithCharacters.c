#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch, s[8],sen[50];
    scanf("%c", &ch);
    printf("%c\n",ch);
    scanf("%s", &s);
    printf("%s",s);
    scanf("%[^s]", sen);
    printf("%s", sen);
    return 0;
}
