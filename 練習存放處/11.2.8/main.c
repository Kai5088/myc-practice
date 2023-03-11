#include <stdio.h>

#define N 10

void max(int a[], int n, int *max);

int main(void)
{
  int b[N], i, big;

  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++) 
    scanf("%d", &b[i]);

  max(b, N, &big);

  printf("Largest: %d", big);
  

  return 0;
}
void max(int a[], int n, int *max)
{
  int i;

  *max = a[0];
  for (i = 1; i < n; i++) {
    if (a[i] > *max)
      *max = a[i];
  }
}

