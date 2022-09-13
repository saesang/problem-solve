#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string name; int age, weight;
	cin >> name >> age >> weight;
	while (name != "#") {
		if (age > 17 || weight >= 80) cout << name << ' ' << "Senior" << '\n';
		else cout << name << ' ' << "Junior" << '\n';

		cin >> name >> age >> weight;
	}

	return 0;
}