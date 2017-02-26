#include <bits/stdc++.h>
using namespace std;

char al[] = "abcdefghijklmnopqrstuvwxyz";

int main () {
	freopen ("girls_data.txt", "w", stdout);
	srand (time(NULL));
	
	string s;
	for (int i = 1 ; i <= 10 ; i++) {
		s = "";
		for (int j = 0 ; j < 6 ; j++) {
			s += al[rand()%26];
		}
		cout << s << endl;
		cout << (rand()%10 + 1) << endl;
		cout << (rand()%1000 + 1) << endl;
		cout << (rand()%10 + 1) << endl;
		cout << (rand()%3 + 1) << endl;
		cout << (rand()%3 + 1) << endl;
	}

	return 0;
}
