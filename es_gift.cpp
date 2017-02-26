#include "es_gifts.hpp"
#include <string>

using namespace std;
using namespace info;

int egifts::getCost (){
	return cost;
}
int egifts::getValue () {
	return value;
}
bool egifts::getStatus () {
	return status;
}
	
void egifts::setCost (int c) {
	cost = c;
}
void egifts::setValue (int v) {
	value = v;
}
void egifts::setStatus (bool s) {
	status = s;
}
