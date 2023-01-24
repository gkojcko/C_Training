#include <stdio.h>
int main(){

  printf("Hello there! Would you like to \nA.Convert Binary to Decimal:  \nB.Convert Decimal to Binary:\n");
  char option;
  scanf("%c",&option);
  if(option=='a'){
    int decimal_value;
    printf("Awesome now enter a decimal value that you want to be converted into binary:\n");
    scanf("%d",&decimal_value);
    int represantation = decimal_value;
    int digits[100];
    int i = 0;
    while(decimal_value!=0){
      digits[i] = decimal_value%2;
      decimal_value = decimal_value/2;
      i++;
}
  printf("The binary representation of %d is:\n",represantation);
  for(int j=i-1;j>=0;j--){
  printf("%d",digits[j]);
}




}
}
