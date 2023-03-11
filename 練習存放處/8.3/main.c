#include <stdio.h>

 

int main() {

 

   int number[90] ;

   int i = 0, j = 0, k=0;

   int temp = 0;

for (k=0; k<10; k++){
scanf("%d", &number[k]);}
   
   
   for( i = 0; i < 10; i++) {
		
       for( j = i; j < 10; j++) {

           if( number[j] < number[i] ) {
           	   

               temp = number[j];

               number[j] = number[i];

               number[i] = temp;

           }

       }

   }

 

   for( i = 0; i < 10; i++ ) {

       printf("%d ", number[i]);

   }

 

return 0;

}

