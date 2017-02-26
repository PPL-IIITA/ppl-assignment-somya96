#include <string>
using namespace std;
#include "boys.hpp"
#include "girls.hpp"
#include "es_gifts.hpp"
#include "l_gifts.hpp"
#include "u_gifts.hpp"
#include "couples.hpp"

using namespace info;

void couples::calculateHappiness (egifts * e, lgifts * l, ugifts * u) {
	//freopen ("exchanged_gifts.txt", "w", stdin);
	int spent = 0;
	int tot_cost = 0, tot_value = 0;
	int ghappy, bhappy;
	time_t now;
	if (b1.getType () == 1) {
		for (int i = 0 ; i < 100 ; i++)	{
			if (!e[i].getStatus()) {
				if (spent + e[i].getCost() <= g1.getMain()) {
					spent += e[i].getCost();
					e[i].setStatus (true);
					tot_cost += e[i].getCost();
					tot_value += e[i].getValue();
					now = time(0);
					string dt = ctime(&now);
			cout << "E"<<" "<<e[i].getCost() <<" "<<e[i].getValue() <<" "<<dt;
				}
				else {
					if (spent + e[i].getCost() < b1.getBudget()) {
					spent += e[i].getCost();
					e[i].setStatus (true);
					tot_cost += e[i].getCost();
					tot_value += e[i].getValue();
					now = time(0);
					string dt = ctime(&now);
			cout << "E"<<" "<<e[i].getCost() <<" "<<e[i].getValue() <<" "<<dt<<endl;
					}
					break;
				}
			}
		}
		if (g1.getType() == 1) ghappy = log(spent - g1.getMain());
		else if (g1.getType() == 2) ghappy = spent - g1.getMain() + tot_value;
		else ghappy = pow(2, spent - g1.getMain());
		bhappy = b1.getBudget() - spent;
	}
	else if (b1.getType() == 2) {
		for (int i = 0 ; i < 100 ; i++) {
			if (!l[i].getStatus()) {
				if (spent + l[i].getCost() <= b1.getBudget()){
					spent += l[i].getCost();
					l[i].setStatus (true);
					tot_cost += l[i].getCost();
					tot_value += l[i].getValue();
					now = time(0);
					string dt = ctime(&now);
			cout << "L"<<" "<<l[i].getCost() <<" "<<l[i].getValue() <<" "<<dt;
				}
				else{
					cout << endl;
					break;
				}
			}
		}
		if (g1.getType() == 1) ghappy = log(spent - g1.getMain());
                else if (g1.getType() == 2) ghappy = spent - g1.getMain() + tot_value;
                else ghappy = pow(2, spent - g1.getMain());
                bhappy = ghappy;
	}
	else {
		for (int i = 0 ; i < 100 ; i++) {
			if (!u[i].getStatus()) {
				if (spent + u[i].getCost() <= g1.getMain()){
					spent += u[i].getCost();
					u[i].setStatus (true);
					tot_cost += u[i].getCost();
					tot_value += u[i].getValue();
					now = time(0);
					string dt = ctime(&now);
			cout << "U"<<" "<<u[i].getCost() <<" "<<u[i].getValue() <<" "<<dt;
				}
				else {
					if (spent + u[i].getCost() < b1.getBudget()){
					spent += u[i].getCost();
					u[i].setStatus (true);
					tot_cost += u[i].getCost();
					tot_value += u[i].getValue();
					now = time(0);
					string dt = ctime(&now);
			cout << "U"<<" "<<u[i].getCost() <<" "<<u[i].getValue() <<" "<<dt;
					}
					break;
				}
			}
		}
		for (int i = 0 ; i < 100 ; i++) {	
			if (l[i].getStatus()) {
				if (spent + l[i].getCost() < b1.getBudget()) {
					tot_cost += l[i].getCost();
					tot_value += l[i].getValue();
					l[i].setStatus (true);
					now = time(0);
					string dt = ctime(&now);
			cout << "L"<<" "<<l[i].getCost() <<" "<<l[i].getValue() << " "<<dt;
					break;
				}
			}
		}
		cout << endl;
		if (g1.getType() == 1) ghappy = log(spent - g1.getMain());
                else if (g1.getType() == 2) ghappy = spent - g1.getMain() + tot_value;
                else ghappy = pow(2, spent - g1.getMain());
                bhappy = b1.getIntelligence();
	}
	happiness = ghappy + bhappy;
	
}

void couples::calculateCompatibility (egifts * e, lgifts * l, ugifts * u) {
	compatibility = b1.getBudget() - g1.getMain();
	compatibility += abs(b1.getAttr() - g1.getAttr());
	compatibility += abs(b1.getIntelligence() - g1.getIntelligence());
}

int couples::getCompatibility () {
	return compatibility;
}

int couples::getHappiness() {
	return happiness;
}

void couples::setData (boys * b, girls * g, string s1, string s2) {
	int bi;
	int gi;
	for (int i = 0 ; i < 30 ; i++) {
		if (g[i].getName() == s2) {
			gi = i;
			break;
		}
	}
	for (int i = 0 ; i < 60 ; i++) {
		if (b[i].getName() == s1) {
			bi = i;
			break;
		}
	}
	b1.setName(b[bi].getName());
	b1.setPartner(b[bi].getPartner());
	b1.setComitted(true);
	b1.setAttr(b[bi].getAttr());
	b1.setBudget(b[bi].getBudget());
	b1.setIntelligence(b[bi].getIntelligence());
	b1.setReq(b[bi].getReq());
	b1.setType(b[bi].getType());

	g1.setName(g[gi].getName());
	g1.setPartner(g[gi].getPartner());
	g1.setComitted(true);
	g1.setAttr(g[gi].getAttr());
	g1.setMain(g[gi].getMain());
	g1.setIntelligence(g[gi].getIntelligence());
	g1.setCriteria(g[gi].getCriteria());
	g1.setType(g[gi].getType());
}
