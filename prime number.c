#include<stdio.h>
int checkforprime(int num);//function prototype
int i;
int main()
{
	int num,result;
	printf("Enter a number:");
	scanf("%d",&num);
	i=num/2;
	result=checkforprime(num);//function call
	if(result==1)
	{
	 	printf("%d is a prime number",num);
    } 
	else
	{
		printf("%d is not a prime number",num);
    }
	return 0;
}
int checkforprime(int num)//function definition
{
	if(i==1)
	{
		return 1;
	}
	else if(num %i==0)
    {
        return 0;	
	}
	else
	{
		i=i-1;
		checkforprime(num);
	}	
}
