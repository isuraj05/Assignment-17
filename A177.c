#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100];
	int i,cal=0,cdig=0,cspl=0;
	printf("Enter a string: ");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
			cal++;
		else
		    if(s[i]>='0'&&s[i]<='9')
		        cdig++;
		    else
		        cspl++;
	}
	printf("Total number of alphabets %d\n",cal);
	printf("Total number of digits %d\n",cdig);
	printf("Total number of special characters %d",cspl);
	getch();
}
