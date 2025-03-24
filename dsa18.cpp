#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	char ch='F';
	char ph='F';
	for(i=1;i<=6;i++)
	{
		ch=ph;
		for(j=1;j<i;j++)
		{
			cout<<ch++;
			
		}
		ph=ch-j;
		cout<<"\n";
	}
}
