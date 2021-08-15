read text , delete all the semicolons, replace'.' to ','

#include<stdio.h>
int main()
{
    char str[100], copy_str[100];
    char *pstr, *pcopy_str;
    pstr = str;
    pcopy_str = copy_str;
    printf("\n Enter a String: ");
    gets(str);
    while(*pstr != '\0')
    {
        if(*pstr != ';')
        { }
        else if(*pstr == '.')
        {
            *pcopy_str = ',';
        }
        else
        {
            *pcopy_str = *pstr;
        }
        pstr++;
        pcopy_str++;
    }
    *pcopy_str = '\0';
    printf("\n The new text is : ");
    pcopy_str = copy_str;
    while(*pcopy_str != '\0')
    {
        printf("%c",*pcopy_str);
        pcopy_str++;
    }
    re
