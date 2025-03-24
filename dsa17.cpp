#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	char ch,ph;
	for(i=5;i>0;i--)
	{
		ch='A';
		for(j=i;j>0;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=6-i;k++)
		{
			cout<<ch++;
			
		}
		//ch-'A';
		for(l=5-i;l>0;l--)
		{
			cout<<ph--;
			
		}
		ph=ch-1;
		cout<<"\n";
	}
}
