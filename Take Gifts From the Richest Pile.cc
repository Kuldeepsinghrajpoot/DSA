<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;


long long pickGifts(vector<int>& gifts, int k) {

   int size = gifts.size();
	priority_queue<long long> p;
	for (auto x : gifts) {
		p.push(x);
	}

	// cout << "priority digits";
	// while (!p.empty()) {
	// 	cout << p.top() << ' ';
	// 	p.pop();
	// }
	long long result = 0;

	while (k--) {
		long long su=0;p.push(sqrt(p.top()));
		cout<<su<<endl;
		p.pop();
	}

	while (!p.empty()) {
		cout<<p.top();
		//result += p.top();
		p.pop();
	}
	return result;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	vector<int >v = {25, 64, 9, 4, 100}; int k = 4;
	cout << pickGifts(v, k);
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;


long long pickGifts(vector<int>& gifts, int k) {

   int size = gifts.size();
	priority_queue<long long> p;
	for (auto x : gifts) {
		p.push(x);
	}

	// cout << "priority digits";
	// while (!p.empty()) {
	// 	cout << p.top() << ' ';
	// 	p.pop();
	// }
	long long result = 0;

	while (k--) {
		long long su=0;p.push(sqrt(p.top()));
		cout<<su<<endl;
		p.pop();
	}

	while (!p.empty()) {
		cout<<p.top();
		//result += p.top();
		p.pop();
	}
	return result;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	vector<int >v = {25, 64, 9, 4, 100}; int k = 4;
	cout << pickGifts(v, k);
	return 0;
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}