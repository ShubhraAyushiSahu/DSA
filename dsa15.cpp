#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	char ch;
	for(i=5;i>0;i--)
	{
		ch='A';
		for(j=0;j<i;j++)
		{
			cout<<ch++;
		}
		cout<<"\n";
	}
}
