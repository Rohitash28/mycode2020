#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[40];
	cout<<"Enter the array : "<<endl;
	for(int i=0;i<40;i++)
	{
		scanf("%d\n"
		,&array[40]);
	}
	printf("the array is : ");
	for(int i=0; i<40; i++)
	{
		cout<<array[i]<<endl;
	}
	// Printing in the reverse order
	cout<<"The array in the reverse order"<<endl;
	for(int i = 39; i>=0;i--)
	{
		cout<<array[i]<<endl;
	}
	
	return 0;
	
}
