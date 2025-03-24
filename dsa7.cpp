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
	
	
}
