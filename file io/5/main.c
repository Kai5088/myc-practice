#include <stdio.h>


int main() {
	FILE *p;
	char ch,fname[20];
	scanf("%s", &fname);
	p=fopen(fname, "w+");
	while(1){
		ch=getchar();
		if(ch==-1){
			break;
		}
		fputc(ch,p);
	}
	
	
	printf("file is created\n");
	printf("enter to exit\n");
	getchar();
	printf("The contents of file are..");
	rewind(p);
	
	while(1){
		ch=fgetc(p);
		if(ch==-1){
			break;
		}
		printf("%c", ch);
	}
	fclose(p);
	printf("Please Press Enter to exit....");
  	getchar();
	return 0;
}
