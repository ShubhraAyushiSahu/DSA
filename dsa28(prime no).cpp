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
void prime(int n,int p)
{
	int i,j,c,k;
	c=0;
	for(i=1;i<=p;i++)
	{
		if(p%i==0)
		c++;
		//cout<<i<<",";
	}
	if(c==2)
	cout<<"prime no";
	else
	cout<<"not prime no";\
	
}
int main()
{
	int N;
	cout<<"enter the value of N=";
	cin>>N;
	int ans=CountDigit(N);
	prime(ans,N);
}
