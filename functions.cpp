#include <bits/stdc++.h>
#include "boys.hpp"
#include "girls.hpp"
#include "couples.hpp"
#include "es_gifts.hpp"
#include "l_gifts.hpp"
#include "u_gifts.hpp"

using namespace std;
using namespace info;

namespace func {
	void input_boys (boys * b){
		ifstream xx ("boys_data.txt");
		string name;
		int a,bi,in,ar,t,i = 0;
		while (!xx.eof()) {
			xx >> name >> a >> bi >> in >> ar >> t;
			b[i].setName(name);
			b[i].setPartner("");
			b[i].setComitted(false);
			b[i].setAttr(a);
			b[i].setBudget(bi);
			b[i].setIntelligence(in);
			b[i].setReq(ar);
			b[i].setType(t);
			i++;
		}
		xx.close();
	}
	void input_girls (girls *g) {
		ifstream xx ("girls_data.txt");
		string name;
		int a,m,in,c,t, i = 0;
		while (!xx.eof()) {
			xx >> name >> a >> m >> in >> c >> t;
			g[i].setName(name);
			g[i].setPartner("");
			g[i].setComitted(false);
			g[i].setAttr(a);
			g[i].setMain(m);
			g[i].setIntelligence(in);
			g[i].setCriteria(c);
			g[i].setType(t);
			i++;
		}
		xx.close ();
	}
	void make_couples (boys *b, girls *g, couples * c) {
		freopen ("couples_formed.txt", "w", stdout);
		cout << "COUPLE FORMATION STARTED\n";
		int cpn = 0;
		time_t now;
		for (int i = 0 ; i < 30 ; i++) {
			if (g[i].getCriteria() == 1) {
				int mx = -1, j;
				for (int ji = 0 ; ji < 60 ; ji++){
					if (b[ji].getBudget() > mx && (!b[ji].getComitted())) {
						mx = b[ji].getBudget();
						j = ji;
					}
				}
				if (g[i].getMain() > b[j].getBudget()) mx = -1;
				if (mx != -1) {
					if (g[i].getAttr() >= b[j].getReq()){
						g[i].setComitted (true);
						g[i].setPartner (b[j].getName());
						b[j].setComitted (true);
						b[j].setPartner (g[i].getName());
						c[cpn].setData (b, g, b[j].getName(), g[i].getName());
						cpn++;
						now = time(0);
						string dt = ctime(&now);
						cout << b[j].getPartner() <<" "<< g[i].getPartner() <<" "<< dt;
					}
				}
			}
			else if (g[i].getCriteria() == 2) {
				int mx = -1, j;
				for (int ji = 0 ; ji < 60 ; ji++){
					if (b[ji].getAttr() > mx && !b[ji].getComitted()) {
						mx = b[ji].getAttr ();
						j = ji;
					}
				}
				if (g[i].getMain() > b[j].getBudget()) mx = -1;
				if (mx != -1) {
					if (g[i].getAttr() >= b[j].getReq()){
						g[i].setComitted (true);
						g[i].setPartner (b[j].getName());
						b[j].setComitted (true);
						b[j].setPartner (g[i].getName());
						c[cpn].setData (b, g, b[j].getName(), g[i].getName());
						cpn++;
						now = time(0);
						string dt = ctime(&now);
						cout << b[j].getPartner() <<" "<< g[i].getPartner() <<" "<< dt;
					}
				}
			}
			else {
				int mx = -1,j;
				for (int ji = 0 ; ji < 60 ; ji++){
					if (b[j].getIntelligence() > mx && !b[j].getComitted()) {
						mx = b[j].getIntelligence ();
						j = ji;
					}
				}
				if (g[i].getMain() > b[j].getBudget()) mx = -1;
				if (mx != -1) {
					if (g[i].getAttr() >= b[j].getReq()){
						g[i].setComitted (true);
						g[i].setPartner (b[j].getName());
						b[j].setComitted (true);
						b[j].setPartner (g[i].getName());
						c[cpn].setData (b, g, b[j].getName(), g[i].getName());
						cpn++;
						now = time(0);
						string dt = ctime(&now);
						cout << b[j].getPartner() <<" "<< g[i].getPartner() <<" "<< dt;
					}
				}
			}
		}
		cout << endl<<endl;
	}
	void read_gifts (egifts * eg, lgifts * lg, ugifts * ug) {
		freopen ("gifts.txt", "r", stdin);
		int t, c, v, lr, dg, uv, uc;
		int egi = 0, lgi = 0, ugi = 0;
		for (int i = 0 ; i < 1000 ; i++) {
			cin >> t;
			if (t == 1) {
				cin >> c >> v;
				eg[egi].setCost (c);
				eg[egi].setValue (v);
				eg[egi].setStatus (false);
				egi++;
			}
			else if (t == 2) {
				cin >> c >> v;
				lg[lgi].setCost (c);
				lg[lgi].setValue (v);
				lg[lgi].setStatus (false);
				lgi++;
			}
			else {
				cin >> c >> v;
				ug[ugi].setCost (c);
				ug[ugi].setValue (v);
				lg[lgi].setStatus (false);
				ugi++;
			}
		}
		//sort (eg, eg+401);
		//sort (lg, lg+401);
		//sort (ug, ug+401);
		egifts temp1;
		for (int i=0 ; i<200 ; i++ )
		{
			for (int j=i+1 ; j<200 ; j++ )
			{
				if ( eg[j].getCost() < eg[i].getCost() )
				{
					temp1 = eg[i];
					eg[i] = eg[j];
					eg[j] = temp1;
				}	
			}
		}
		lgifts temp2;
		for (int i=0 ; i<200 ; i++ )
		{
			for (int j=i+1 ; j<200 ; j++ )
			{
				if ( lg[j].getCost() < lg[i].getCost() )
				{
					temp2 = lg[i];
					lg[i] = lg[j];
					lg[j] = temp2;
				}	
			}
		}
		ugifts temp3;
		for (int i=0 ; i<200 ; i++ )
		{
			for (int j=i+1 ; j<200 ; j++ )
			{
				if ( ug[j].getCost() < ug[i].getCost() )
				{
					temp3 = ug[i];
					ug[i] = ug[j];
					ug[j] = temp3;
				}	
			}
		}
		fclose (stdin);
	}

	void exchange_gifts (egifts * eg, lgifts * lg, ugifts * ug, couples * c) {
		time_t now;
		cout << "Exchange of the gifts took place in the order of couple formation\n";		
		for (int i = 0 ; i < 7 ; i++) {
			c[i].calculateHappiness (eg, lg, ug);
			//cout << c[i].getHappiness() << endl;
			c[i].calculateCompatibility(eg, lg, ug);
		}
		couples temp1;
		for (int i=0 ; i<7 ; i++ )
		{
			for (int j=i+1 ; j<7 ; j++ )
			{
				if ( c[j].getHappiness() > c[i].getHappiness() )
				{
					temp1 = c[i];
					c[i] = c[j];
					c[j] = temp1;
				}	
			}
		}
		cout <<endl << "Happiness of first three happiest couples are :\n";
		for (int i = 0 ; i < 3 ; i++) {
			now = time(0);
			string dt = ctime(&now);
			cout << c[i].getHappiness() << " " << dt;
		}
		couples temp2;
		for (int i=0 ; i<7 ; i++ )
		{
			for (int j=i+1 ; j<7 ; j++ )
			{
				if ( c[j].getCompatibility() > c[i].getCompatibility() )
				{
					temp2 = c[i];
					c[i] = c[j];
					c[j] = temp2;
				}	
			}
		}
		cout <<endl << "Compatibilities of first three most compatible couples are :\n";
		for (int i = 0 ; i < 3 ; i++) {
			now = time(0);
			string dt = ctime(&now);
			cout << c[i].getCompatibility() << " " << dt;
		}
	}
}
