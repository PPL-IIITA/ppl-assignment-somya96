#include <bits/stdc++.h>
using namespace std;
#include "boys.hpp"
#include "girls.hpp"
#include "variables.hpp"
#include "functions.hpp"

int main () {
	func::input_boys (B);
	func::input_girls (G);
	func::make_couples (B, G, C);
	func::read_gifts (eg, lg, ug);
	func::exchange_gifts (eg, lg, ug, C);
	return 0;
}
