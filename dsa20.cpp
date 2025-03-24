#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	for(i=0;i<5;i++)
	{
		
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
	for(i=0;i<4;i++){
	
		for(j=4-i;j>0;j--)
		{
			cout<<"*";
		}
		for(k=i+1;k>0;k--)
		{
			cout<<"  ";
		}
	 
	     for(l=4-i;l>0;l--)
		{
			cout<<"*";
		}
		cout<<"\n";
	} 
}
}
 
