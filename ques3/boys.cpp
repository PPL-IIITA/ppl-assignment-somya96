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

void boys::setName(string x){
	name = x;
}
void boys::setPartner(string x) {
	partner = x;
}
void boys::setComitted(bool x) {
	comitted = x;
}
void boys::setAttr(int x) {
	attractiveness = x;
}
void boys::setBudget(int x) {
	budget = x;
}
void boys::setIntelligence(int x) {
	intelligence = x;
}
void boys::setReq(int x) {
	att_req = x;
}
void boys::setType(int x) {
	type = x;
}
