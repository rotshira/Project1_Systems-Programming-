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



int dig(int num)
{
int  digits = 0;
            while(num != 0)
            {
                num/=10;
                digits++;
            }
            return digits;
}

int ArmsHelp(int num,int sum,int n)
{
if(num<10)
return sum+pow1(num,n);
else
{
    sum=sum+(pow1((num%10),n));
    num=num/10;
    return ArmsHelp(num,sum,n);
}
}

int isArmstrong(int num)
{
int n=dig(num);
int sumArm=ArmsHelp(num,0,n);
if(sumArm==num)
return 1;
return 0;
}

int numOfDigits(int num){
int  digits = 0;
        while(num != 0)
       {
        num/=10;
        digits++;
     }
        return digits;
}
int digit(int num , int place){
    for(int i = 0 ; i < place ; i++){
        num = num/10;
    }
    return (num % 10);
}

int isPalindromehelp(int num, int i){
    if(i >= ((numOfDigits(num)/2)))return 1;
    if(digit(num, i) != digit(num,numOfDigits(num) -i-1))return 0;
    i++;
    return isPalindromehelp(num, i);
}

int isPalindrome(int num){
    if(isPalindromehelp(num, 0) == 1){
        return 1;
    }
    return 0; 
}






