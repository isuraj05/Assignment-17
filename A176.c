#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100];
	int i,j;
	printf("Enter a string: ");
	gets(s);
	for(i=0;s[i];i++);
	
	for(j=i-1;j>=0;j--)
		printf("%c",s[j]);
	getch();
}
