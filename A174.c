#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100];
	int i;
	printf("Enter a string: ");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		    printf("%c",s[i]);
		}
		else
		    printf("%c",s[i]);
	}
	getch();
}
