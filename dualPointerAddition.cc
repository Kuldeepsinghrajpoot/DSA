<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;


int dualPointerAddition(int x,int *py,int **ppz){
	int z,y;
	**ppz +=1;
	z = **ppz;
	*py +=2;
	y = *py;
	x+=3;
	return x+y+z;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	

	int c,*b,**a;
	c =4;
	b = &c;
	a = &b;
	cout<<dualPointerAddition(c,b,a);
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;


int dualPointerAddition(int x,int *py,int **ppz){
	int z,y;
	**ppz +=1;
	z = **ppz;
	*py +=2;
	y = *py;
	x+=3;
	return x+y+z;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	

	int c,*b,**a;
	c =4;
	b = &c;
	a = &b;
	cout<<dualPointerAddition(c,b,a);
	return 0;
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}