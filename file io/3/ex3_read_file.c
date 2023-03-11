#include<stdio.h>
int main()
{
 FILE *p;
 char ch;
 p=fopen("•’√®.txt","r");
 while(1){
 	
 	ch=fgetc(p);
 	if(ch==-1){break;
	 }
	 printf("%c", ch);
 }
 fclose(p);
 getchar();
 return 0;
}
