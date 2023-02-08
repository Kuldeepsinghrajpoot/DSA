<<<<<<< HEAD
#include <iostream>
using namespace std;

void solve() {
	int x = 1;
	int y = 1;
	int n;
	cin >> n;
	string s1;
	cin >> s1;
	int newX = 0;
	int newY = 0;
	for (int i = 0; i < n; i++) {
		if (s1[i] == 'U')
		{
			newX++;
		}
		else if (s1[i] == 'D')
		{
			newX--;
		}
		else if (s1[i] == 'R')
		{
			newY++;
		}
		else if (s1[i] == 'L')
		{
			newY--;
		}

		if (newX == 1 && newY == 1)
		{
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
=======
#include <iostream>
using namespace std;

void solve() {
	int x = 1;
	int y = 1;
	int n;
	cin >> n;
	string s1;
	cin >> s1;
	int newX = 0;
	int newY = 0;
	for (int i = 0; i < n; i++) {
		if (s1[i] == 'U')
		{
			newX++;
		}
		else if (s1[i] == 'D')
		{
			newX--;
		}
		else if (s1[i] == 'R')
		{
			newY++;
		}
		else if (s1[i] == 'L')
		{
			newY--;
		}

		if (newX == 1 && newY == 1)
		{
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}