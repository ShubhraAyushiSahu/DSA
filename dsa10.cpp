#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
		cout<<"\n";
	}
	for(i=6;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
		cout<<"\n";
	}
}
