#include <stdio.h>
int rec_sumofdigits(int num);
int rec_sumofdigits(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
		return(num%10+rec_sumofdigits(num/10));
	}
}
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	int sum=rec_sumofdigits(num);
	printf("%d",sum);
	
}
