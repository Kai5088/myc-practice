#include <stdio.h>
#include <stdlib.h>

void a(int b[],int n,int *M,int *m);

int main() {
	int c[100], i,e,f;
	for(i=0;i<10;i++)
	{
		scanf("%d", &c[i]);
		}
	a(c,10,&e,&f);
	printf("largest %d\n", e);
	printf("smallest %d", f);
			
	return 0;
}

void a(int b[],int n,int *M,int *m){
	*m=*M=b[0];
	int i;
	for(i=0;i<10;i++){
		if(b[i]>*M){
			*M=b[i];
		}
		else if(b[i]<*m){
			*m=b[i];
		}
		
		
	}
	
	
	
}


