#include "u_gifts.hpp"
#include <string>

using namespace std;
using namespace info;

int ugifts::getCost (){
	return cost;
}
int ugifts::getValue () {
	return value;
}
bool ugifts::getStatus () {
	return status;
}
	
void ugifts::setCost (int c) {
	cost = c;
}
void ugifts::setValue (int v) {
	value = v;
}
void ugifts::setStatus (bool s) {
	status = s;
}
