#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100],sml,temp;
	int i,j,k;
	gets(s);
	for(i=0;s[i];i++);

	for(j=0;s[j];j++)
	{
		sml=s[j];
		for(k=j;k<i-1;k++)
		{
		    if(sml>s[k+1])
			{
				temp=sml;
				sml=s[k+1];
				s[k+1]=temp;
			}
		}
		printf("%c  ",sml);
	}
	getch();
}
	
