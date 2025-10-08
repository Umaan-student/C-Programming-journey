#include <stdio.h>
int main()
{
char name[50];
printf("Please enter your Name:");
scanf("%s",name);  // we also use fgets later
printf("your Name is: %s",name);
return 0;
}
