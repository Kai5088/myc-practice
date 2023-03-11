#include <stdio.h>

void split_time (long total_sec, int *hr,int *min,int*sec);
int main() {
	int a,h,m,s;
	scanf("%d", &a);
	split_time(a, &h, &m, &s);
	printf("%d\n", h);
	printf("%d\n", m);
	printf("%d", s);
	return 0;
}

void split_time (long total_sec, int *hr,int *min,int*sec){

	*hr=total_sec/3600;
	*min=(total_sec-*hr*3600)/60;
	*sec=total_sec-*hr*3600-*min*60;
}
	
	
