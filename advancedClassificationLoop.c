#include <stdio.h>
#include <math.h>
#include <string.h>

int pow1(int a,int b)
{
int result=1;
for (int i=b; i>0; i--)
{
result = result * a;
}
return result;
}

int dig(int num){
int  digits = 0;
            while(num != 0)
            {
                num/=10;
                digits++;
            }
            return digits;
}


double isArmstrong(int num)
{
    int num_c=num;
    double ans=0;
int n=dig(num);
while (num>0)
{
   ans=ans+(pow1(num%10,n));
   num=num/10;
}
if(ans==num_c)
return 1;
return 0;
}
int revers(int n){
     int  reversed = 0;
     int remainder;
    while (n != 0) 
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}

int isPalindrome(int num)
{
int numRev=revers(num);
while(numRev>0)
{
if(numRev%10 != num%10)
return 0;
numRev=numRev/10;
num=num/10;
}
return 1;
}



