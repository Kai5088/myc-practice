#include <stdio.h>


int main() {
	int a[5][5],i,j,b=0;
	
	for (j=0;j<5;j++){ 
	for (i=0;i<5;i++){
		scanf("%d", &a[i][j]);
		
	}
	printf("\n");} 
	
	printf("Enter row 1:\nEnter row 2:\nEnter row 3:\nEnter row 4:\nEnter row 5:\n");
	
	printf("Row totals: ");
	
	for (j=0,b=0;j<5;j++){
	for (i=0,b=0;i<5;i++){
	b+=a[i][j];
}
	printf(" %d", b);}
	printf("\n");
	printf("Column totals: ");
	for (j=0,b=0;j<5;j++){
	for (i=0,b=0;i<5;i++){
	b+=a[j][i];
}
	printf(" %d", b);}
	return 0;
}
