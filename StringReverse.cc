<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

void stringReverse(string &str, int i, int j) {

	if (i > j) {
		return ;
	}
	swap(str[i++], str[j--]);
	stringReverse(str, i, j);
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string str = "kuldeep";
	stringReverse(str, 0, str.size() - 1);
	cout << str << endl;
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;

void stringReverse(string &str, int i, int j) {

	if (i > j) {
		return ;
	}
	swap(str[i++], str[j--]);
	stringReverse(str, i, j);
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string str = "kuldeep";
	stringReverse(str, 0, str.size() - 1);
	cout << str << endl;
	return 0;
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}