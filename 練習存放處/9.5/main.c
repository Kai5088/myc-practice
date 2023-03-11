#include <stdio.h>

int N;

void max_min(int a[], int n, int *max, int *min,int *smax,int *smin);

int main(void)
{
  scanf("%d", &N);
  int b[N], i, big, small,Sbig,Ssmall;

  
  for (i = 0; i < N; i++) 
    scanf("%d", &b[i]);
    

  max_min(b, N, &big, &small,&Sbig,&Ssmall);

  printf("Largest: %d\n", big);
  printf("S_Largest: %d\n", Sbig);
  printf("Smallest: %d\n", small);
  printf("S_Smallest: %d\n", Ssmall);
  return 0;
}
void max_min(int a[], int n, int *max, int *min,int *smax,int *smin)
{
  int i,avg=0;
	for (i = 0; i < N; i++){
	avg+=a[i];
	}
	avg/=10;
  *max =*smax = *min =*smin =avg;
  for (i = 0; i < n; i++) {
    if (a[i] > *max)
      *max = a[i];
    else if (a[i] < *min)
      *min = a[i];
  }
  for (i = 1; i < n; i++){
  	if (a[i] > *smax&&a[i]!=*max){
      *smax = a[i];}
    if (a[i] < *smin&&a[i]!=*min){
      *smin= a[i];}
  }
}

