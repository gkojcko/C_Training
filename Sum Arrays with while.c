#include <stdio.h>
int main(){
	
int numbers[7];
int i = 0;

printf("Enter 7 numbers");

while(i<7){
	printf("\nEnter number %d: ",i);
	scanf("%d",&numbers[i]);
	++i;
}
int z = 0;

while(z<7){
	printf("Number No:%d is %d\n ",z,numbers[z]);
	++z;
	
}
}
