
#include <stdio.h>

int main(void)
{
	char a[80];
	int i=0,b,j;
	while(1){
	
	scanf("%c", &a[i]);
	if(a[i]=='!'||a[i]=='.'||a[i]=='?'){
		break;
		
	}
	i++;
}
	b=i;
	 
	for (i=i-1;i>=0;i--){
	if (a[i]==' '){
		for (j=i+1;a[j]!=' '&&a[j]!='.'&&a[j]!='?'&&a[j]!='!';j++){ 
		printf("%c", a[j]);
		}
		printf(" ");
		}
	else if(i==0){
		for (j=0;a[j]!=' '&&a[j]!='.'&&a[j]!='?'&&a[j]!='!';j++)
		printf("%c", a[j]);
	}
}
	
	
	printf("%c", a[b]);
	

	
	return 0;
}
  
