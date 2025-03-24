 #include<iostream>
using namespace std;
int main()
{
	 int j,i,k;
	 int n=9;
	 for(i=5;i>0;i--)
	 {
	 		for(j=1;j<=6-i;j++)
	 	{
	 		cout<<j;
		}
	 	for(k=n;k>1;k--)
		{
			cout<<" ";
		}
			for(j=6-i;j>=1;j--)
	 	{
	 		cout<<j;
		}
	  
	 
		n-=2;
		cout<<"\n";
		cout<<"\n";
		 
	 }
	
	
}
