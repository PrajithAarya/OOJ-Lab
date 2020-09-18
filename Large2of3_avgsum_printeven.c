
#include<stdio.h>
#include<conio.h>
int main()
{


int largest2Of3(int a,int b, int c)
{
	int largest=0;
	if(a>b && a>c)
		largest=a;
	else if(b>a && b>c)
		largest=b;
	else
		largest=c;
	return largest;
}

void avg(int a, int b)
{ 
printf(" average = %d \n", ((a+b)/2));
printf(" sum  = %d  \n",(a+b));
}
void printeven(int a, int b)
{
int i;
	printf("Even numbers between %d to %d : " ,b,a);
	for (i = b; i <= a; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}

    
}
int largestNumberOf2(int a,int b)
{
	int largest=0;
	if(a>b)
		largest=a;
	else if(b>a)
		largest=b;
	
	return largest;
}

int num1,num2,num3,m,n;
printf("Enter three numbers: \n");
scanf("%d%d%d",&num1,&num2,&num3);
m = largest2Of3(num1,num2,num3);

if (m==num1)
n = largestNumberOf2(num2,num3);
else if(m==num2)
n = largestNumberOf2(num1,num3);
else
n =largestNumberOf2(num1,num2);


printf("the largest two of the given three are %d and %d \n",m,n);
avg(m,n);
printeven(m,n);


return 0;
}
