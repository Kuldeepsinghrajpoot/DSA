#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	
     int result=1;
	while(n>0){
		if(n&1){
			result = (1LL * (result)*(x)%m)%m;
		}
		x = (1LL * (x)%m * (x)%m)%m;
		n=n>>1;

	}
	return result;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	cout<<modularExponentiation(4,5,6);
	return 0;
}