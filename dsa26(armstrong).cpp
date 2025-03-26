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
int Armstrong(int n,int p)
{
	int i,d,j,s;
	j=0;
	s=0;
	for(i=p;i>0;i/=10)
	{
	 
		d=i%10;
		j=pow(d,n);
		s=s+j;
		
	}
	return s;
}
int main()
{
	int N;
	cout<<"enter the value of N=";
	cin>>N;
	int ans=CountDigit(N);
	int s=Armstrong(ans,N);
	if(s==N)
	cout<<"it Armstrong is";
	else
	cout<<"its not Armstrong";
}
