#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m;
	for(j=2;j>0;j--){
	
	for(i=j;i>0;i--)
	{
		cout<<"*";
		
	}
	for(l=2-j;l>0;l--)
	{
		cout<<"  ";
	}
	for(k=j;k>0;k--)
	{
		cout<<"*";
		
	}
	cout<<"\n";
}
for(j=1;j<2;j++)
{
	for(i=1;i<=2;i++)
	{
		cout<<"*";
	}
	for(k=j;k>1;k--)
	{
		cout<<"  ";
	}
	for(l=1;l<=2;l++)
	{
		cout<<"*";
	}
	cout<<"\n";
	
}
}
