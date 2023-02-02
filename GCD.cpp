#include <bits/stdc++.h>
using namespace std;

int gcd(int n,int m){
	if (n==0)
	{
		return n;
	}
	if (m==0)
	{
		return m;
	}

	while(n!=m){

		if (n>m)
		{
			n=n-m;
		}else if(m>n){
              m = m-n;
		}
	}
	return m;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int n,m;
	cin>>n>>m;
	cout<<gcd(n,m);
	return 0;
}