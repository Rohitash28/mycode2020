#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int array[N];
    cin>>N;
    for(int i = 0 ;i < N ; i++)
    {
        cin>>array[i];
    }
   
    
    
    cout<<array[N];
    
    for(int i=N; i>=0; i--)
    {
        cout<< array[i];
    }
	return array[N];   
}
