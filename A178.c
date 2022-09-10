#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100], s2[100];
	int i;
	fgets(s,100,stdin);
	for(i=0;s[i];i++)
	{
		s2[i]=s[i];
		printf("%c",s2[i]);
	}
	getch();
}
	
