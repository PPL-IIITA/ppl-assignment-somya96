#ifndef GIRLS_H
#define GIRLS_H
#include <string>
using namespace std;

namespace info {
	class girls {
		private:
			string name;
			string partner;
			bool comitted;
			int attractiveness;
			int maintenance;
			int intelligence;
			int criteria;
			int type;

		public:
			girls (string n, int a, int m, int i, int c, int t) {
				partner = "";
				name = n;
				attractiveness = a;
				maintenance = m;
				intelligence = i;
				criteria = c;
				type = t;
				comitted = false;
			}
			string getName ();
			string getPartner ();
			bool getComitted ();
			int getAttr ();
			int getMain ();
			int getIntelligence ();
			int getCriteria ();
			int getType ();
	
			string setName (string);
                        string setPartner (string);
                        bool setComitted (bool );
                        int setAttr (int );
                        int setMain (int );
                        int setIntelligence (int );
                        int setCriteria (int );
                        int setType (int );
	};
}
#endif
