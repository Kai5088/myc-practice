#include<stdio.h>
int main()
{
  int A,i=0;

  while(1){
    scanf("%d",&A);
    if(A/1000==107&&A%1000<=999&&A%1000+1000>=1000){
      i++;
      
	  if(i==3){
    	break;
	}
	  

	  }
      else{
	  printf("N\n");
        }
    
}
  return 0;
}
