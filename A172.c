#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100],c;
	int i,count=0;
	printf("Enter a string: ");
	gets(s);
	printf("Enter a character: ");
	scanf("%c",&c);
	for(i=0;s[i];i++)
	{
		if(s[i]==c)
		    count++;
	}
	printf("Occurence of the given character in the given string is %d",count);
	getch();
}
