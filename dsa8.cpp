 #include<iostream>
using namespace std;
int main()
{
	 int j,i,k;
	 int n=9;
	 for(i=5;i>0;i--)
	 {
	 		for(j=5-i;j>0;j--)
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
