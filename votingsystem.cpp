#include<stdio.h>
int main()
{
	int i,n,count=0,temp=0,fre=0;
	printf("enter no of candidate:");
	scanf("%d",&n);//incharge will write the no of candidates
	for(i=1;i<=n;i++)
	{
	int age,vote;
	char name[50];
	char mf;
	printf("enter name:");
	scanf("%s",&name);
	printf("male(m) or female(f) :");
	scanf(" %c",&mf);
	if(mf=='m')
	{
	printf("Mr.%s",name);
    }
	else if(mf=='f')
	{
	printf("Ms.%s",name);
    }
    else
    {
    	printf("invalid\n");
    	continue;
	}
	printf("\nenter age:");
	scanf("%d",&age);
	if(age<18)
	{
	printf("under age\n");
	continue;
	}
	else
	printf("1.BJP\n2.INC\n3.AAP");
	printf("\nPARTY WHOM YOU WANT TO VOTE :");
	scanf("%d",&vote);
	switch(vote)
	{
		case 1:
			printf("1\n");//candidate will give vote to party 1
			count++;
			break;
		case 2:
			printf("2\n");//candidate will give vote to party 2
			temp++;
			break;
		case 3:
			printf("3\n");//candidate will give vote to party 3
			fre++;
			break;
		default :
			printf("0");//candidate will not give vote to any one
			break;
	}
	int g;
	printf("enter 0 for exit or 1 for continue :");
	scanf("%d",&g);
	if(g==1)
	{
		continue;
	}
	else if(g==0)
	{
		break;
	}
	else
	{
		break;
	}
	}
	printf("\nNumber of votes given to BJP :%d",count);
	printf("\nNumber of votes given to INC :%d",temp);
	printf("\nNumber of votes given to AAP :%d",fre);
	if(count>temp&&count>fre)
	{
		printf("\nBJP WIN");
	}
	else if(temp>count&&temp>fre)
	{
		printf("\nINC WIN");
	}
	else if(fre>count&&fre>temp)
	{
		printf("\nAAP WIN");
	}
	else if(count==temp)
	{
		printf("\nTIE BETWEEN BJP AND INC");
	}
	else if(count==fre)
	{
		printf("\nTIE BETWEEN BJP AND AAP");
	}
	else
	{
		printf("\nTIE BETWEEN INC AND AAP");
	}
	
}
