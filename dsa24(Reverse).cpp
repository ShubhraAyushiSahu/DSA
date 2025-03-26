#include<iostream>
using namespace std;
int Reverse(int n)
{
	int i,d,j;
	j=0;
	for(i=n;i>0;i/=10)
	{
	 
		d=i%10;
		if(j==0 && d==0)
		continue;
		j=j*10+d;
	}
	return j;
}
int main()
{
	int N;
	cout<<"enter the value of N=";
	cin>>N;
	int ans=Reverse(N);
	cout<<"reverse is="<<ans<<endl;
}
