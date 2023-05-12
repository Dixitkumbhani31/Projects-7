#include<stdio.h>

fact(int num)
{
	if(num<=0)
	{
		return 1;
	}
	else
	{
		num=num*fact(num-1);
	}
	return num;
}

main()
{
	int n,ans;
	printf("Enter Number=");
	scanf("%d",&n);
	
	ans=fact(n);
	printf("Factorial=%d",ans);
}
