#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int number[5];
	int *p;
	p = number;
	*p = 10;
	p = &number[2];
	*p = 20;
	p--;
	// this pointer is back to the address and loaction new after that new location is fill than they go to new location
	
	*p = 30;
	p = number+3;
	*p = 40;
	p = number;
	*(p+4) = 50;

	for (int i = 0; i < 5; ++i)
	{
		cout<<number[i]<<",";
	}

	return 0;
}