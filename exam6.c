#include<stdio.h>
main()
{
	char ch[30]="RaMU is A gOOd Boy";
	int space=0;
	int upper=0;
	int lower=0;
	int i=0;
	int count=0;
	//printf("enter a string\n");
	//scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
//	count++;
//	printf("%d\n",count);
	if(ch[i]=='-')
	{	
	space++;
	}
	else if(ch[i]>='A' && ch[i]<='Z')
	{
	upper++;
	}
	else if(ch[i]>='a' && ch[i]<='z')
	{
	lower++;
	}
}
	printf("spaces:%d-upper:%d-lower:%d\n",space,upper,lower);
}
