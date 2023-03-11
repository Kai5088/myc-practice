#include <stdio.h>
#include <stdbool.h>


#define N 50

int read_message(char a[], int n);
bool is_palindrome_pointer(char a[], int n);
 
int main(void)
{
	char message[N];
	int length = read_message(message, N);
	if(is_palindrome_pointer(message, length)==0){
		printf("not a palindrome");
	}
	else{
		printf("palindrome");
	}
	return 0;
	
}

int read_message(char a[], int n)
{
	char ch;
	int i = 0;
	printf("Enter a message:");scanf("%c", &a[0]);
	while(a[i]!='\n'){
	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
	i++;
	scanf("%c", &a[i]);
}
	else{
		scanf("%c", &a[i]);
	}
	}
	
	return i;
	
}
bool is_palindrome_pointer(char a[], int n)
{
	
	char *start = a,*end =  a+n-1; 
	while(end > start)
	{
		if(*start++ != *end--)
		return false;
		
	//	start ++;
	//	end --;
	}
	return true;
	
}




