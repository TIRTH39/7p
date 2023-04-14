#include<stdio.h>

main()
{
	int a,b,c;
	printf("entre the value of A=");
	scanf("%d",&a);
	printf("entre the value of B=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("swapping value A=%d & B=%d",a,b);
}
	
    
