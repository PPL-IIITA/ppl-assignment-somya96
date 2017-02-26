#ifndef BOYS_H
#define BOYS_H
#include <string>
using namespace std;

namespace info {
	class boys {
		private:
			string name;
			string partner;
			bool comitted;
			int attractiveness;
			int budget;
			int intelligence;
			int att_req;
			int type;

		public:
			boys (string n, int a, int b, int i, int ar, int t) {
				partner = "";
				name = n;
				budget = b;
				intelligence = i;
				ar = att_req;
				type = t;
				comitted = false;
			}
			string getName();
                        string getPartner();
                        bool getComitted();
                        int getAttr();
                        int getBudget();
                        int getIntelligence();
                        int getReq();
                        int getType();

                        string setName(string);
                        string setPartner(string);
                        bool setComitted(bool );
                        int setAttr(int);
                        int setBudget(int );
                        int setIntelligence(int );
                        int setReq(int );
                        int setType(int );
	};
}
#endif
