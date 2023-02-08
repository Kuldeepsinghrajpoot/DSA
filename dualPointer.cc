<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;


void swaping(char *x,char*y){
	char *t = x;
	x=y;
	y=t;

	
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	

	char *x = "ninjasquiz";
	char *y = "codingninjas";
	swaping(x,y);

	cout<<x<<" -  "<<y;

	char *t=x;
	x=y;
	y=t;
    cout<<" "<<x<<" "<<y;
   
   // basic concept
     string *ba="8";
       cout<<ba<<" -- "<<*(ba);
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;


void swaping(char *x,char*y){
	char *t = x;
	x=y;
	y=t;

	
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	

	char *x = "ninjasquiz";
	char *y = "codingninjas";
	swaping(x,y);

	cout<<x<<" -  "<<y;

	char *t=x;
	x=y;
	y=t;
    cout<<" "<<x<<" "<<y;
   
   // basic concept
     string *ba="8";
       cout<<ba<<" -- "<<*(ba);
	return 0;
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}