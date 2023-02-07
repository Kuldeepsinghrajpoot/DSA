#include <bits/stdc++.h>
using namespace std;


void addtion(int z){
	z+=z;
	cout<<z<<" ";
}

void secondAdd(int *y){
	int x = *y+2;
	addtion(x);
	*y = x-1;
	cout<<x<<" ";
}

// add by reference

void referenceAdd(){
	int a = 10;
	int *p = &a;
	int **q = &p;
	int b = 20;
	*q = &b;
	cout<<**q;
	(*p)++;

	cout<<a<<" "<<b<<endl;
}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int x = 5;
	//secondAdd(&x);
	//cout<<x;

	referenceAdd();
	return 0;
}