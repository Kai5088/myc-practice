#include <stdio.h>

void avg_sum(double a[] ,int n, double *avg, double *sum);
int main(){
	 double b[10]={34,82,49,102,7,94,23,11,50,31};
	 double a,s;
	 avg_sum(b,10,&a,&s);
	 printf("%f\n", a);
	 printf("%f", s);
	return 0;
}

void avg_sum(double a[] , int n, double *avg, double *sum){
	int i;
	 
	 *sum=0.0;
	 for(i=0;i<n;i++){
	 *sum+=a[i];}
	 *avg=*sum/n;
	 
}
