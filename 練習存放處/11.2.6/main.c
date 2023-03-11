#include <stdio.h>

#define N 10

void M_SM(int a[],int *c,int *b);

int main(void)
{
  int i,b[N],f,g;
  for(i=0;i<10;i++){
  	scanf("%d", &b[i]);
  }
  M_SM(b,&f,&g);
	printf("%d\n", f);
	printf("%d", g);
  return 0;
}

void M_SM(int a[],int *c,int *b){
	int i;
	if(a[0]>a[1]){
		*c=*b=a[1];
	}
	else{
		*c=*b=a[0];
	}
	
	for(i=0;i<10;i++){
		if(*c<a[i]){
			
			*c=a[i];
		}
		else if(*b<a[i]&&*b!=*c){
			*b=a[i];
		}
	}
	
}
