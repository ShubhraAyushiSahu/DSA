#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int CountDigit(int n)
{
	int cnt=(int)(log10(n)+1);
	return cnt;
}
int main()
{
	int N;
	cout<<"enter the value of N=";
	cin>>N;
	int ans=CountDigit(N);
	cout<<"No of digits="<<ans<<endl;
	}
