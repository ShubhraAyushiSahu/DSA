#include<iostream>
using namespace std;
int main()
{
	 int j,i,k;
	 int n=1;
	 for(i=5;i>0;i--)
	 {
	 	for(j=0;j<i;j++)
	 	{
	 		cout<<" ";
		}
		for(k=1;k<=n;k++)
		{
			cout<<"*";
		}
		n+=2;
		cout<<"\n";
		cout<<"\n";
		 
	 }
	 for(i=6;i>0;i--)
	 {
	 		for(j=6-i;j>0;j--)
	 	{
	 		cout<<" ";
		}
	 	for(k=n;k>0;k--)
		{
			cout<<"*";
		}
	  
	 
		n-=2;
		cout<<"\n";
		cout<<"\n";
	}
	
	
	
}
