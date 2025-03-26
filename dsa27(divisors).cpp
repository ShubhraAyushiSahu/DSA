#include<iostream>
using namespace std;
#include<cmath>
#include<algorithm>
using namespace std;
int CountDigit(int n)
{
	int cnt=(int)(log10(n)+1);
	return cnt;
}
void divisors(int n,int p)
{
	int i,j,k;
	for(i=1;i<=p;i++)
	{
		if(p%i==0)
		cout<<i<<",";
	}
	
}
int main()
{
	int N;
	cout<<"enter the value of N=";
	cin>>N;
	int ans=CountDigit(N);
	divisors(ans,N);
}
