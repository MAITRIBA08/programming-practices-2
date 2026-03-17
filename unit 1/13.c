//Enter a string and find out length of string with using string
function and without string function.//

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,lenwith=0,lenwithout=0;
    printf("Enter a string:");
    gets (str);

    while(str[i]!='\0')
    {
        lenwithout++;
        i++;
    }
    lenwith=strlen(str);
    printf("length using string funcion=%d\n",lenwith);
    printf("length without using string funcion=%d\n",lenwithout);

    return 0;
}
