#include <stdio.h>

int main()
{
char str[50];
char number[] = ("Number is:");
printf("What is the number? ");
scanf("%s",str); 
printf("%s %s \n" , number, str);
   return 0;
}
