#include "l_gifts.hpp"
#include "couples.hpp"
#include <string>

using namespace std;
using namespace info;

int lgifts::getCost (){
	return cost;
}
int lgifts::getValue () {
	return value;
}
bool lgifts::getStatus () {
	return status;
}
	
void lgifts::setCost (int c) {
	cost = c;
}
void lgifts::setValue (int v) {
	value = v;
}
void lgifts::setStatus (bool s) {
	status = s;
}
