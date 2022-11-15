#include<stdio.h>
int main()

{
float n1,n2,n3;


printf("Enter three numbers\n");
scanf("%f%f%f",&n1,&n2,&n3);

if(n1>n2&&n1>n3){
	printf("%f is bigger than all",n1);
}
	
else if(n2>n1 && n2>n3){
	printf("%f is bigger than all",n2);
}
	
else if(n3>n1&&n3>n2){
	printf("%f is bigger than all",n3);
}







}
