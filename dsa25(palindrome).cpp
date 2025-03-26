#include<iostream>
using namespace std;
bool palindrome(int n)
{
	int i,d,k;
	k=0;
	for(i=n;i>0;i/=10)
	{
		d=i%10;
		k=k*10+d;
	}
	if(n==k)
	return true;
	else
	 return false;
}

int main()
{
	int N;
	cout<<"enter the value of N=";
	cin>>N;
	bool ans=palindrome(N);
	cout<<"it is "<<ans<<endl;
}
