#include <stdio.h>

int main()
{
 int array[5],i;
 int max=0,min=10,a;
 for(i=0;i<5;i++){
  scanf("%d", &array[i]);
  if(array[i]<min){
   min=array[i];
  }
}

  for(i=0;i<5;i++){
  if(array[i]>max){
  	max=array[i];
  }
 }
 a=max+min;
 printf("%d",a);
 return 0;
 }
