#include <bits/stdc++.h>
#include "boys.hpp"
#include "girls.hpp"

using namespace std;
using namespace info;

namespace func {
	void input_boys (vector <boys> &b) {
		freopen ("boys_data.txt", "r", stdin);
		string name;
		int a,bi,i,ar,t;
		for (int i = 1 ; i <= 20 ; i++) {
			cin >> name >> a >> bi >> i >> ar >> t;
			boys temp(name, a, bi, i, ar, t);
			b.push_back (temp);
		}
		fclose (stdin);
	}
	void input_girls (vector <girls> &g) {
		freopen ("girls_data.txt", "r", stdin);
		string name;
		int a,m,i,c,t;
		for (int i = 1 ; i <= 10 ; i++) {
			cin >> name >> a >> m >> i >> c >> t;
			girls temp(name, a, m, i, c, t);
			g.push_back (temp);
		}
		fclose (stdin);
	}
	void make_couples (vector <boys> &b, vector <girls> &g) {
		freopen ("couples.txt", "w", stdout);
		for (int i = 0 ; i < g.size() ; i++) {
			if (g[i].getCriteria() == 1) {
				boys temp("",0,0,0,0,0);
				int mx = -1, j;
				for (int ji = 0 ; ji < b.size() ; ji++){
					if (b[ji].getBudget() > mx && !b[ji].getComitted()) {
						mx = b[ji].getBudget();
						temp = b[ji];
						j = ji;
					}
				}
				if (g[i].getMain() > temp.getBudget()) mx = -1;
				if (mx != -1) {
					if (g[i].getAttr() >= temp.getReq()){
						g[i].setComitted (true);
						g[i].setPartner (b[j].getName());
						b[j].setComitted (true);
						b[j].setPartner (g[i].getName());
				cout << b[j].getPartner() <<" "<< g[i].getPartner() << endl;
					}
				}
			}
			else if (g[i].getCriteria() == 2) {
				boys temp("",0,0,0,0,0);
				int mx = -1, j;
				for (int ji = 0 ; ji < b.size() ; ji++){
					if (b[ji].getAttr() > mx && !b[ji].getComitted()) {
						mx = b[ji].getAttr ();
						temp = b[ji];
						j = ji;
					}
				}
				if (g[i].getMain() > temp.getBudget()) mx = -1;
				if (mx != -1) {
					if (g[i].getAttr() >= temp.getReq()){
						g[i].setComitted (true);
						g[i].setPartner (b[j].getName());
						b[j].setComitted (true);
						b[j].setPartner (g[i].getName());
				cout << b[j].getPartner() <<" "<< g[i].getPartner() << endl;
					}
				}
			}
			else {
				boys temp("",0,0,0,0,0);
				int mx = -1,j;
				for (int ji = 0 ; ji < b.size() ; ji++){
					if (b[j].getIntelligence() > mx && !b[j].getComitted()) {
						mx = b[j].getIntelligence ();
						temp = b[j];
					}
				}
				if (g[i].getMain() > temp.getBudget()) mx = -1;
				if (mx != -1) {
					if (g[i].getAttr() >= temp.getReq()){
						g[i].setComitted (true);
						g[i].setPartner (b[j].getName());
						b[j].setComitted (true);
						b[j].setPartner (g[i].getName());
				cout << b[j].getPartner() <<" "<< g[i].getPartner() << endl;
					}
				}
			}
		}
		fclose(stdout);
	}
}
