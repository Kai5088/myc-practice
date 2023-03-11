#include <stdio.h>
int S(int);
int main() {
	int N;
	while(1){
	scanf("%d", &N);
	if (N==-1){
	return 0;}
	printf("%d\n", S(N));
	
}
}
int S(int N)  { 
	 if (N<=2) {
	 	return N;
	 } 
	else {

	return S(N-1)+S(N-2); 
}
}
