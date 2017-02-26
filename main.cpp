#include <bits/stdc++.h>
#include "boys.hpp"
#include "girls.hpp"
#include "variables.hpp"
#include "functions.hpp"

using namespace std;

int main () {
	func::input_boys (B);
	func::input_girls (G);
	func::make_couples (B, G);
	return 0;
}
