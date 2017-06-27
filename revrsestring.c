
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[50],temp;
 int i,j=0;
 clrscr();
 printf("\nEnter any the string :");
 scanf("%c",s);
 i=0;
 j=strlen(s)-1;
  while(i<j)
   {
   temp=s[i];
   s[i]=s[j];
   s[j]=temp;
   i++;
   j--;
   }
 printf("\nReverse string is: ",s);
 getch();
}
