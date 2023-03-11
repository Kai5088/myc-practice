#include<stdio.h>
int main()
{
  int A,i=0;

  do{
    scanf("%d",&A);
    if(A/1000==107&&A%1000<=999&&A%1000+1000>=1000){
      i++;
	  }
      else{
	  printf("N\n");
        }
    
}while(i!=3);
  return 0;
}
