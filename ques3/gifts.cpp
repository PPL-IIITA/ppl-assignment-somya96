#include "gifts.hpp"
#include <string>

using namespace std;
using namespace info;

int gifts::getCost (){
	return cost;
}
int gifts::getValue () {
	return value;
}
bool gifts::getStatus () {
	return status;
}
	
void gifts::setCost (int c) {
	cost = c;
}
void gifts::setValue (int v) {
	value = v;
}
void gifts::setStatus (bool s) {
	status = s;
}
