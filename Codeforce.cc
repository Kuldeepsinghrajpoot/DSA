<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

void checkString(){
	char a;
		cin>>a;
		string c = "codeforces";
		//cin>>a;

		for(auto x:c){
			if (x==a)
			{
				cout<<"YES"<<endl;
				return;
			}
		}
		cout<<"NO"<<endl;
	
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--){
		
		checkString();
	}

	
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;

void checkString(){
	char a;
		cin>>a;
		string c = "codeforces";
		//cin>>a;

		for(auto x:c){
			if (x==a)
			{
				cout<<"YES"<<endl;
				return;
			}
		}
		cout<<"NO"<<endl;
	
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--){
		
		checkString();
	}

	
	return 0;
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}