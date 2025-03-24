#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
//	k=1;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>0;j--)
		{
			if(j%2==0)
			cout<<"0";
			else
			cout<<"1";
			
		}
	//	k++;
		cout<<"\n";
	}
}
