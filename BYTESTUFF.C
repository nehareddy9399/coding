#include<stdio.h>
#include<string.h>
main()
{
int i=0,j=0,k,n,count=0;
char a[50],s[50],b[50]="dlestx",e[50]="dleetx";
printf("enter size");
scanf("%d",&n);
printf("enter string");
scanf("%s",&s);

for(i=0;i<n;i++)
{
	a[j]=s[i];
	if(s[i]=='d' && s[i+1]=='l' && s[i+2]=='e')
	{
	  for(k=n;k>i+2;k--)
	  s[k+1]=s[k];
	  s[i+3]='r';
	 // count=0;
	  n++; 
	  }
    j++;
}
strcat(b,a);
strcat(b,e);
printf("%s",b);
}
    
    
    
    
    
    
    
    
	  
	  
	  
	  
	
	
