#ifndef FUNC_H
#define FUNC_H
#include <bits/stdc++.h>
#include "boys.hpp"
#include "girls.hpp"


using namespace std;
using namespace info;


namespace func {
	void input_boys (boys * b);
	void input_girls (girls * g);
	void make_couples (boys * b, girls * g, couples* c);
	void read_gifts (egifts * eg, lgifts * lg, ugifts * ug);
	void exchange_gifts (egifts * eg, lgifts * lg, ugifts * ug, couples * c);
}

#endif
