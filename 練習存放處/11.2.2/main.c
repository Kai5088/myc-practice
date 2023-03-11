#include <stdio.h>

#define N 10

void re(int a[], int *h, int *b); 
int main(void)
{
	int i=0,b[N],d,e;
  for (i=0;i<10;i++){
  	scanf("%d", &b[i]);
  }
  
  re(b,&d,&e);
  
  printf("Max %d\n", d);
  printf("Min %d", e);
  
  return 0;
}

void re(int a[], int *h, int *b){
	int i,avg=0;
	for(i=0;i<10;i++){
  	avg+=a[i];
  }
  	avg/=10;
	*h=*b=avg;
	for(i=0;i<10;i++){
		if(a[i]>*h){
			*h=a[i];
		}
		else if(a[i]<*b){
			*b=a[i];
		}
	}
	
}

