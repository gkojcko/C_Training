
#include <stdio.h>
  
int main()
//integrating variables, comments, escape sequences
{
char name[] = "Peter";
int age = 5;
char first_letter = 'A';
float height = 1.80;

printf("\nHello %s , \nI see that you are: %1d Years old, \nthe first letter of your name is %1c, \nand your height is around %1.2f  \n\t Your welcome.",name,age,first_letter,height);
}
