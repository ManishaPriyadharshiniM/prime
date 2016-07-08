# prime
#include<stdio.h>
#include<conio.h>
 void main()
 {
 int i,n,flag=0;
 printf("enter the number\n");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 if(n%i==0)
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 printf("it is a prime number");
 else
 printf("it is not a prime number");
 }
 return 0;
 }
