#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100];
	int i;
	printf("Enter a string: ");
	gets(s);
	for(i=0;s[i];i++);
	printf("Length of the given string is %d",i);
	getch();
}
