#include<stdio.h>
int main()
{
  char ch,a[100][100];
  int i,j,k,x,y,tmp,b;

  for(i=0;a[i][j]!='0';i++){
    for(j=0;a[i][j]!='\n';j++){
      scanf("%s",&a[i][j]);}
      b=j;}

  
  for(x=0;x<i;x++){
    for(y=0;y<b;y++){
      printf("%c",a[x][y]);}
    printf("\n");}

  return 0;
}
