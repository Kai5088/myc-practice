#include <stdio.h>
void str_read(char str[]);

int main() {
	char str[100];
	str_read(str);
	int i=0;
	printf("Enter message:\n");
	printf("In B1FF-speak: ");
	while(str[i] != '\0'){
		if (str[i]=='H'){
		printf("H");}
		else if (str[i]==39){
		printf("'");}
		else if (str[i]==':'){
		printf(":");}
		else if (str[i]=='F'){
		printf("F");}
		else if (str[i]=='W'){
		printf("W");}
		else if (str[i]=='Y'){
		printf("Y");}
		else if (str[i]=='T'){
		printf("T");}
		else if (str[i]==' '){
		printf(" ");}
		else if (str[i]=='C'){
		printf("C");}
		else if (str[i]==','){
		printf(",");}
		else if (str[i]=='a'){
		printf("4");}
		else if (str[i]=='b'){
		printf("8");}
		else if (str[i]=='e'){
		printf("3");}
		else if (str[i]=='i'){
		printf("1");}
		else if (str[i]=='o'){
		printf("0");}
		else if (str[i]=='s'){
		printf("5");}
		else {
		printf("%c",str[i]-' ');}
		
		i++;
		
}
printf("!!!!!!!!!!");

	return 0;
}
void str_read(char str[]){
	int i=0;
	while (1) {
		scanf("%c", &str[i]);
		
		if (str[i] == '\n'){ 
			break;
		
		}
		i++;	
	}
	str[i] = '\0';
}


