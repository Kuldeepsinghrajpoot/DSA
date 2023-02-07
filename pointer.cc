#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	float f = 10.5;
	float p = 2.5;
	float* ptr = &f;
	(*ptr)++;
	*ptr = p;
//	cout<<*ptr<<" "<<f<<""<<p<<".";

int a=7;
int b = 17;
int *c = &b;
 *c = 7;
 //cout<<a<<" "<<b<<endl;	
 
int *ptr1 = 0;
int ab = 10;
ptr1 = &ab;
//cout<<*ptr<<endl;   


// location

int newA=7;
int *newC = &newA;
newC++;
//cout<<newA<<" "<<*newC<<endl;

// memory location;
// asume a =400;
int aa =7;
int *cc = &aa;
//cout<<cc<<endl;
cc=cc+3;
//cout<<cc<<endl;	

//array 

int A[5];
int *C;
//cout<<sizeof(A)<<" "<<sizeof(C)<<endl;


// indexing array

int Aa[]={4,5,6,7};

//cout<<*(Aa)<<" "<<*(Aa+1)<<endl;
//cout<<*(Aa+2)<<endl;

int *pointer = (Aa+1);
//cout<<*Aa+9<<endl;


// string 

char ch[]="xyz";
//cout<<ch[0]<<endl;
char *charter = ch;
//cout<<charter[0]<<endl;



// from the looping.

char arr[20];
int i=0;
for (int i = 0; i < 10; i++)
{
	*(arr+i)=65+i;
}
*(arr+i) = '\0';

//cout<<arr;


	

	// new loop question
char *Ptrs;
char Str[] = "abcdefg";
Ptrs = Str;
Ptrs += 5;
cout << Ptrs;
return 0;

}
