#include <bits/stdc++.h>
using namespace std;

void digit(int n,string arr[]){

	if (n==0)
	{
		return ;
	}

	int number = n%10;
	n = n/10;

	digit(n,arr);
	cout<<arr[number];

}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	string arr[]={"zero","one","two","three","fourth","fifth","six","seven","eight","nine","ten"};
    int d;
    cin>>d;
	digit(d,arr);


	return 0;
}