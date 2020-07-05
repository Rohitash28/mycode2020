#include<iostream>
using namespace std;
int main()
{
	int i= 0;
	for (i=0;i<20;++i)
	{
		cout<<i<<endl;
		switch(i){
			case 0:i += 2;
			case 1: i += 5;
			case 5:i += 5;
			default : i += 3;
			break;
		}
		cout<<"after loop i"<<i;
	}
	return 0;
}
