#include<stdio.h>
main()
{
int a[20],b[20],i,j=0,k,n,count=1;
printf("enter size of frame");
scanf("%d",&n);
printf("enter bits");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
i=0;
while(i<n)
{
	if(a[i]==1)
	{
	b[j]=a[i];
	for(k=i+1;a[k]==1 && count<5 && k<n;k++)
	{
		j++;
		b[j]=a[k];
		count++;
		if(count==5)
		{
			j++;
	     	b[j]=0;
	    	count=0;
		}
		i=k;
	}
	
   }
   else{
    b[j]=a[i];}
   i++;
   j++;
}
printf("after bit stuffing\n");
for(i=0;i<j;i++)
printf("%d",b[i]);
}


