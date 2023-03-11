#include <stdio.h>

void re(float a,int *b, float *c);

int main(void)
{
  int e; 
  float d;
  re(3.14159,&e,&d);
  printf("interger %d\n", e);
  printf("remain %f", d);
  return 0;
}

void re(float a,int *b, float *c){
	
	*b=(int)a;
	*c=a-*b;
	
}
