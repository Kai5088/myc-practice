#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d", &a);
	do{
	scanf("%d", &b);	
	if(b<a){
		printf("bigger\n");
	}
	else if(b>a){
		printf("smaller\n");
	}	
		
		
	}while(b!=a);
	
  printf("bingo");
    

  return 0;
}
