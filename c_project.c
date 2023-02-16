#include <stdio.h>>
#include <stdlib.h>

void dec_to_bin(int octet1, int octet2, int octet3, int octet4); //initializing both functions
void bin_to_dec(int binaryip1, int binaryip2, int binaryip3, int binaryip4);
int main() {
  printf("Hello there!, would you like to convert your IP Adress to:\n A.Decimal to Binary\n B.Binary to Decimal\n");
  char option;
  int octet1, octet2, octet3, octet4;
  scanf("%c", & option);
  if (option == 'A' || option == 'a') {
    printf("Enter an IP Adress in Decimal form:\n");

    scanf(" %d.%d.%d.%d", & octet1, & octet2, & octet3, & octet4); //storing each IP octet, into octet variables seperated by a decimal point
    dec_to_bin(octet1, octet2, octet3, octet4);
  } else if (option == 'B' || option == 'b') {
    printf("Great! Enter a binary IP Adress:\n");
    int binaryip1, binaryip2, binaryip3, binaryip4;
    scanf("%d.%d.%d.%d", & binaryip1, & binaryip2, & binaryip3, & binaryip4);
    bin_to_dec(binaryip1, binaryip2, binaryip3, binaryip4);
  } else {
    while ((option != 'A' || option != 'a') || (option != 'B' || option != 'b')) {
      printf("Choose a valid option: ");
      scanf(" %c", & option);
      if (option == 'A' || option == 'a') {
        printf("Enter an IP Adress in Decimal form:\n");
        scanf(" %d.%d.%d.%d", & octet1, & octet2, & octet3, & octet4);
        dec_to_bin(octet1, octet2, octet3, octet4);
        break;

      } else if (option == 'B' || option == 'b') {
        printf("Great! Enter a binary IP Adress:\n");
        int binaryip1, binaryip2, binaryip3, binaryip4;
        scanf("%d.%d.%d.%d", & binaryip1, & binaryip2, & binaryip3, & binaryip4);
        bin_to_dec(binaryip1, binaryip2, binaryip3, binaryip4);
        break;

      }
    }
  }
  printf("\n");
  system("pause");
}

void dec_to_bin(int octet1, int octet2, int octet3, int octet4) {

  int binary1[8], binary2[8], binary3[8], binary4[8];

  for (int i = 0; i < 8; i++) {
    binary1[i] = octet1 % 2; //extracting 1 if odd, 0 if even
    octet1 = octet1 / 2;
    binary2[i] = octet2 % 2;
    octet2 = octet2 / 2;
    binary3[i] = octet3 % 2;
    octet3 = octet3 / 2;
    binary4[i] = octet4 % 2;
    octet4 = octet4 / 2;
  }

  printf("The IP you provided in binary form is : ");
  for (int i = 7; i >= 0; i--) { //printing the bits from the right to the left, starting from 7 all the way to 0 backwards 
    printf("%d", binary1[i]);
  }
  printf(".");
  for (int i = 7; i >= 0; i--) {
    printf("%d", binary2[i]);
  }
  printf(".");
  for (int i = 7; i >= 0; i--) {
    printf("%d", binary3[i]);
  }
  printf(".");
  for (int i = 7; i >= 0; i--) {
    printf("%d", binary4[i]);
  }
  printf("\n");
}
void bin_to_dec(int binaryip1, int binaryip2, int binaryip3, int binaryip4) {
  int decimal1 = 0, decimal2 = 0, decimal3 = 0, decimal4 = 0, weight = 1;
  int rem;

  while (binaryip1 != 0) {
    rem = binaryip1 % 10; //extracting the last digit of int binaryip1
    decimal1 += rem * weight; //incrementing decimal, by the the last digit of binaryip1 then multiplying it by its weight
    weight *= 2; //weight is gonna be doubled in each iteration
    binaryip1 /= 10;
  }
  weight = 1; //weight reseted to 1

  while (binaryip2 != 0) {
    rem = binaryip2 % 10;
    decimal2 += rem * weight;
    weight *= 2;
    binaryip2 /= 10;
  }
  weight = 1;

  while (binaryip3 != 0) {
    rem = binaryip3 % 10;
    decimal3 += rem * weight;
    weight *= 2;
    binaryip3 /= 10;
  }
  weight = 1;

  while (binaryip4 != 0) {
    rem = binaryip4 % 10;
    decimal4 += rem * weight;
    weight *= 2;
    binaryip4 /= 10;
  }
  weight = 1;
  printf("The decimal represenation of your binary IP adress is: ");
  printf("%d.%d.%d.%d", decimal1, decimal2, decimal3, decimal4);
}
