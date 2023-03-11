#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[8][10] = {{"Mercury"},{"Venus"},{"Earth"},{"Mars"}
					,{"Jupiter"},{"Saturn"},{"Uranus"},{"Neptune"}}; 
	char str2[10];
	int i;
	scanf("%s",str2);
	for (i=0;i<8;i++)
	{
		if (strcmp(str1[i], str2) == 0) {
	    printf("%s is a planet.",str2);
	    break;
		}
		else{
	    printf("%s is not a planet.",str2);
		}	
	}				

	return 0;
}
