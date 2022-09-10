#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100];
	int i,count=0;
	printf("Enter a string: ");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		    count++;
	}
	printf("Number of vowels in the given string is %d",count);
	getch();
}
