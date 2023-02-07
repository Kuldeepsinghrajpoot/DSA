#include <bits/stdc++.h>
using namespace std;


inline int check(int a,int b){
	return a>b ? a:b;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int result = check(7,6);
	cout<<result;
	
	return 0;
}