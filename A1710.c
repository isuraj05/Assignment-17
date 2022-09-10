#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100],asg;
	int i,j,k,count=0;
	gets(s);
	for(i=0;s[i];i++);

	for(j=0;s[j];j++)
	{
		count=0;
		asg=s[j];
		for(k=0;k<i;k++)
		{
			if(asg==s[k])
			{
				asg=s[k];
				count++;
			}
		}
		printf("%c - %d time/s\n",asg,count);
	}	
	getch();
}
