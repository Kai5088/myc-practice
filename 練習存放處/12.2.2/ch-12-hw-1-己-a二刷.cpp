# include<stdio.h>
# include<ctype.h>
#include <stdbool.h>
#define N 50
int read_message(char a[]);
bool is_palindrome_subscript(char a[], int n);
int main(void)
{	
	char message[N];
	int len;
	len = read_message(message);	
	printf("%spalindrome",is_palindrome_subscript(message, len)?"":"Not a ");
	return 0;
	
	
}
int read_message(char a[])
{
	char ch;
	int i = 0;
	while((ch = getchar())!= EOF && ch != '\n')
	{
		if(tolower(ch) >= 'a'&& tolower(ch) <= 'z')
		{
			a[i] = tolower(ch);
			i++;
		}
		
		
	}
	return i;
	
}

bool is_palindrome_subscript(char a[], int n)
{
	int start = 0,end = n-1;
	while(end > start)
	{
		if(a[start++] != a[end--])
		return false;
		
	}
	
	return true;
}
