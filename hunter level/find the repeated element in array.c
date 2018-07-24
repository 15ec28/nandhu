#include<stdio.h>
void main()
{
int n[20],m,i,j,count=0;
printf("\nEnter the numbers");
scanf("%d",&m);
printf("\nArray values");
for(i=1;i<=m;i++)
{
	scanf("\n%d",&n[i]);
}
for(i=0;i<=m;i++)
{
	for(j=i+1;j<=m;j++)
	{
		if(n[i]==n[j])
		{
			printf("%d",n[i]);
			count=count+1;
		}
	}
}
if(count==0)
{
	printf("UNIQUE");
}
}
