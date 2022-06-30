#include<stdio.h>
main()
{
	int a[100],i,n,large,j=0,large1;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	large=a[0];
	for(i=1;i<n;i++)
	{
		if(large<a[i])
		{	
		large=a[i];
		j=i;
		}
	
	}
	large1=a[n-j-1];
	for(i=1;i<n;i++)
	{
		if(large1<a[i]&&j!=i)
		{
	          large1=a[i];
		}
	}
  	printf("Second biggest:%d",large1);

}
