#include <stdio.h>
#include <string.h>
int main(){


int numbers [15];
char options;
int i;
int z;
int o;
  

printf("Enter maximum 15 numbers\n");
for(i=0;i<15;i++){
  printf("Enter number %d: ",i);
  scanf("%d",&numbers[i]);
  if(i>=9){
    break;  
  } 
}
    printf("You have reached 10 digits, do you wish to stop now?\n");
    printf("Y - For Yes, N- For no: ");
    scanf(" %c",&options);
    if(options=='Y'){
      printf("The numbers stored in the array are: ");
      for(i=0;i<10;i++){
        printf("\n%d",numbers[i]);
      }
    }
      else{
        printf("Okay now enter the 5 rest numbers: ");
        for(z=10;z<15;z++){
          scanf("%d",&numbers[z]);
          
        }
        printf("The numbers in the array are: ");
        for(o=0;o<15;o++){
          printf("\n%d",numbers[o]);
        }
      }
      

      
    }

  
















