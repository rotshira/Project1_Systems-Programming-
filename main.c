#include <stdio.h>
#include "NumClass.h"

int main()
{
int a,b;
scanf("%d%d", &a, &b);
int min=a;
int max=b;
if(a>b){
 max=a;
 min=b;
}
 printf("The Armstrong numbers are:");
for (int i =min; i < max; i++)
{
   if(isArmstrong(i)==1)
   printf(" %d",i );
}

printf("\n");

printf("The Palindromes are:");
for (int i =min; i <= max; i++){
   if(isPalindrome(i)==1)
   printf(" %d",i );
}
printf("\n");
printf("The Prime numbers are:");
for (int i =min; i <= max; i++)
{
   if(isPrime(i)==1)
   printf(" %d",i );
}
printf("\n");
printf("The Strong numbers are: ");
for (int i =min; i <= max; i++)
{
   if (isStrong(i)==1)
   printf(" %d",i );
}
printf("\n");
}