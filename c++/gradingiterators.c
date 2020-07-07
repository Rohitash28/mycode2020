#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f,sum,per;
	
	printf("enter the grades of the student \n");
	printf("enter marks in C ");
	scanf("%d",&a);
	printf("enter marks in D ");
	scanf("%d",&b);
	printf("enter marks in E ");
	scanf("%d",&c);
	printf("enter marks in F ");
	scanf("%d",&d);
	printf("enter marks in G ");
	scanf("%d",&e);
	sum= a+b+c+d+e;
	printf("the total marks are = %d",sum);
	per= (sum/500)*100;
	printf("the percentage is = %d ",per);
if (per>=90){
	printf("you got A grade");
	
}
	else if (per >= 70)
	{
		printf("you got B grade");
		
		}	
		else if (per>= 50){
			printf("you got C grade");
		}
		else{
			printf("you got fail");
		}
		return 0;          
}
