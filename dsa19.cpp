#include<iostream>
using namespace std;
int main()
{
	int j,k,l,i,m,n,o;
	for(i=0;i<5;i++)
	{
		for(j=5-i;j>0;j--)
		{
			cout<<"*";
		}
		for(k=0;k<i;k++)
		{
			cout<<"  ";
			
		}
	     for(l=5-i;l>0;l--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
		for(i=5;i>0;i--)
		{		
	    for(m=6-i;m>0;m--)
		{
			cout<<"*";
		}
			for(k=i-1;k>0;k--)
		{
			cout<<"  ";
		}
	for(m=6-i;m>0;m--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
		
	}

