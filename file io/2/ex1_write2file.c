#include<stdio.h>
int main()
{
 FILE *p;
 char ch;
 p=fopen("•’√®.txt","w");
 while(1){
 	ch=getchar();
 	if(ch==-1){
 		break;
	 }
	 fputc(ch,p);
 }
 fclose(p);
 printf("file is created");
 
 return 0;
}
