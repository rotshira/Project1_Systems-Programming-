#include <math.h>
#include <stdio.h>

//#######
int fact(int a)
{
int ans=1;
for (int i =1; i <= a; i++)
{
 ans=ans*i;
}
return ans;
}

int isPrime(int a)
{
	if(a==1)
	return 1;
    int temp=0;
for (int i =2; i <=a; i++)
{
   if(a%i==0)
   temp++;
}
if(temp ==1)
return 1;
return 0;   
}

//########
int isStrong(int a) 
{
 int t=a;
		int ans=0;
		while(a>0)
		{
			int sum=fact(a%10);
			ans=ans+sum;
			a=a/10;
		}
		if(ans==t)
			return 1;
		return 0;
	}

//######## 


