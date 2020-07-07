// array progtram
#include<stdio.h>
#include<conio.h>
int sum (int a, int b);
int main()
{
	int  a, b, s ,i,c,d,o;
	int n=10;
	int z[10]={1,2,3,4,5,6,7,8,9};
	int w[10];
	int e[10];
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	s = sum(a,b);
	printf("the sum is = %d ",s);
	printf("do you wanna print array press 1 ");
	printf("do you wanna enter array 2");
	printf("do you wanna shpow reverse press 3");
	printf("do you wanna print array press 4 ");
	scanf("%d", &o);
	
	switch(o)
	{
		case 1:
			printf(" the contents of the array are ");
			   for (i = 0; i < 10; i++)
                printf( "%d\n", z[i]);
                
        case 2:
        	printf(" enter array  2");
        	for(i=0; i<10;i++)
               	scanf("%d",&w[i]);
            for(i=o ;i<10; i++)
               	printf("the array is  %d ",w[i]);
               	
        	
		
		case 3:
			printf("this is a array reverse functionality");
         for (c = n - 1, d = 0; c >= 0; c--, d++)
      z[d] = e[c];
 
    for (c = 0; c < n; c++)
      z[c] = e[c];
 
   printf("Reverse array is\n");
 
   for (c = 0; c < n; c++)
      printf("%d\n", z[c]);
 

			
			break;
	    default:
	    	
	    		printf("sorry terminating the program");
	    		return 0;
	    		
			
	}
}
int sum(int a ,int b)
{
	int sum;
	sum = a+b;
	return sum;
 
}
