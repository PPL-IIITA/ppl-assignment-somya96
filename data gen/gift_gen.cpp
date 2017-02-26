#include <bits/stdc++.h>
using namespace std;

int main () {
	srand (time(NULL));
	freopen ("gifts.txt", "w", stdout);
	for (int i = 0 ; i < 1500 ; i++) {
		int t = rand()%3 + 1;
		int cost = rand()%50 + 1;
		int value = rand()%25 + 1;
		cout << t <<" " << cost <<" " << value << endl;
	}
	return 0;
}
