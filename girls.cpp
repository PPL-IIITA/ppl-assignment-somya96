#include "girls.hpp"
#include <string>
using namespace std;
using namespace info;

string girls::getName () {
	return name;
}
string girls::getPartner (){
	return partner;
}
bool girls::getComitted (){
	return comitted;
}
int girls::getAttr (){
	return attractiveness;
}
int girls::getMain () {
	return maintenance;
}
int girls::getIntelligence () {
	return intelligence;
}
int girls::getCriteria () {
	return criteria;
}
int girls::getType () {
	return type;
}

string girls::setName (string x){
	name = x;
}
string girls::setPartner (string x) {
	partner = x;
}
bool girls::setComitted (bool x) {
	comitted = x;
}
int girls::setAttr (int x) {
	attractiveness = x;
}
int girls::setMain (int x) {
	maintenance = x;
}
int girls::setIntelligence (int x) {
	intelligence = x;
}
int girls::setCriteria (int x) {
	criteria = x;
}
int girls::setType (int x) {
	type = x;
}
