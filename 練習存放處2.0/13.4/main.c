#include <stdio.h>
#include <string.h>


int main(void) {
	char a[50][63];
	char d[3],msg[61],ch;
	int day,i,j,num=0;
	
	for(;;){
		if(num==50){
			printf("-- No space left --\n");
			break;
		}
	
	
	scanf("%2d", &day);
	if(day==0){
		break;
	}
	sprintf(d,"%2d", day);
	while((ch=getchar())!='\n'){
		if(i<60){
		msg[i++]=ch;	
		}
		msg[i]='\0';
	}
	
	for(i=0;i<num;i++){
		if(strcmp(d,a[i])<0)
			break;
		}
	
	for(j=num;j>i;j--){
		strcpy(a[j],a[j-1]);
	}
	
	strcpy(a[i],d);
	strcat(a[i],msg);
	
	num++;
}

	for(i=0;i<num;i++){
		printf(" %s\n", a[i]);
	}
			
	return 0;
}


