#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len;
    printf("Enter a string:");
    gets(str);
    len=strlen(str);

    printf("reverse string with funcion is:\n");

    for(i=len-1;i>=0;i--)
    printf("%c",str[i]);


    printf("\nreversed  string without  funcion:%s\n",str);
    for(i=0;str[i]!='\0';i++);
    for(i=i-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}

