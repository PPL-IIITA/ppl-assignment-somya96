#include "boys.hpp"
#include <string>
using namespace std;
using namespace info;

string boys::getName() {
	return name;
}
string boys::getPartner(){
	return partner;
}
bool boys::getComitted(){
	return comitted;
}
int boys::getAttr(){
	return attractiveness;
}
int boys::getBudget() {
	return budget;
}
int boys::getIntelligence() {
	return intelligence;
}
int boys::getReq() {
	return att_req;
}
int boys::getType() {
	return type;
}

string boys::setName(string x){
	name = x;
}
string boys::setPartner(string x) {
	partner = x;
}
bool boys::setComitted(bool x) {
	comitted = x;
}
int boys::setAttr(int x) {
	attractiveness = x;
}
int boys::setBudget(int x) {
	budget = x;
}
int boys::setIntelligence(int x) {
	intelligence = x;
}
int boys::setReq(int x) {
	att_req = x;
}
int boys::setType(int x) {
	type = x;
}
