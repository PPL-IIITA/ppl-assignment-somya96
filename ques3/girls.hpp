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
			/*girls (string n, int a, int m, int i, int c, int t) {
				partner = "";
				name = n;
				attractiveness = a;
				maintenance = m;
				intelligence = i;
				criteria = c;
				type = t;
				comitted = false;
			}*/
			string getName ();
			string getPartner ();
			bool getComitted ();
			int getAttr ();
			int getMain ();
			int getIntelligence ();
			int getCriteria ();
			int getType ();
	
			void setName (string);
                        void setPartner (string);
                        void setComitted (bool );
                        void setAttr (int );
                        void setMain (int );
                        void setIntelligence (int );
                        void setCriteria (int );
                        void setType (int );
	};
}
#endif
