#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	for(i=4;i>0;i--)
	{
		n=4;
		for(j=4-i;j>0;j--)
		{
			cout<<n--<<" ";
		}
		for(k=i*2-1;k>0;k--)
		{
			cout<<i<<" ";
		}
		m=i+1;
		for(l=4-i;l>0;l--)
		{
			cout<<m++<<" ";
		}
		cout<<"\n";
	}
	m=2;
	for(i=1;i<=3;i++)
	{
		n=4;
		for(j=4-i;j>0;j--)
		{
			cout<<n--<<" ";
			
		}
		
		for(k=i*2-1;k>0;k--)
		{
			cout<<m<<" ";
			
		}
		m++;
		int p=m-1;
		for(l=4-i-1;l>=0;l--)
		{
			cout<<p++<<" ";
		}
		cout<<"\n";
	}
}
