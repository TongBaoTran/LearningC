#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 20

int main()
{
char string1[LENGTH], string2[100];
printf("Enter string 1:");
gets(string1);
strcpy(string2,string1);
strcat(string1,string2);
printf("New string length: %d", strlen(string1));

return 0;
}
