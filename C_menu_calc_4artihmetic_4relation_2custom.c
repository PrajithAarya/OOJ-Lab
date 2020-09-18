#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    
char c;
int n1, n2, res = 0;

while(1)
{
printf("\nEnter First Value:");
scanf("%d",&n1);

printf("\nEnter Operator\n+ addition,\n - subtraction,\n * multiply,\n / division  ,\n ^  power ,\n < less than ,\n > greater than,\n = equal to,\n ! not equal to,\n r remainder,\n E TO EXIT ");

scanf(" %c",&c);

printf("\nEnter Second Value:");
scanf("%d",&n2);

switch(c)
{
case '+':
   res = n1 + n2;
   printf("\nSum is = %d",res);
 break;
 
case '-':
  res = n1 - n2;
   printf("\nDifference is = %d",res);
   printf("\n\n Enter value  Again for a New Input\n");
 break;
 
case '*':
   res = n1 * n2;
   printf("\nProduct is = %d",res);
   printf("\n\n Enter value Again for a New Input\n");
 break;
 
case '/':
   res = n1 /n2;
   printf("\nQuotient is = %d",res);
   printf("\n\n Enter value Again for a New Input\n");
 break;
 
case 'r':
   res = n1 % n2;
   printf("\nReminder is = %d",res);
   printf("\n\n Enter value Again for a New Input\n");
    break;
   
 case '>':
 if(n1>>n2)
 {
 printf("yes");
 }
 else{
      printf("\n\nNo");
       printf("\n Enter value Again for a New Input\n");
 }
  break;
 
 case '<':
 if(n1>>n2)
 {
 printf("no");
 }
 else{
      printf("\n\nyes");
     printf("\n Enter value Again for a New Input\n");
 }
  break;
  
 case '=':
 if(n1==n2)
 {
 printf("yes");
 }
 else{
      printf("\n\nno");
     printf("\n Enter value Again for a New Input\n");
 }
 break; 
 case '^':
 printf("%lf",pow(n1,n2));
 break; 
 
 case '!':
 if(n1==n2)
 {
 printf("no");
 }
 else{
      printf("\n\nyes");
     printf("\n Enter value Again for a New Input\n");
 }
 break;
 case 'E':
   exit(0);
   break;
 
default:
   printf("\nEnter value Valid Operator!!!\n");
   printf("\n\n Enter value Again for a New Input\n");
}
getch();
}
return 0;
}
