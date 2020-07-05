/* Ask the user to print out the five numbers also print out the sum and the average of 
those numbers*/
#include<iostream>
using namespace std;
 int main()
 {
 	int i,n,sum;
 	for (i =0;i<5;i++)
 	{
 		cin>>n;
 		sum+=n;
	 }
	cout<<sum<<endl;
	cout<<(sum/5)<<endl;
	return 0;
 }
