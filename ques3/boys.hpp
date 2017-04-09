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
			string getName();
                        string getPartner();
                        bool getComitted();
                        int getAttr();
                        int getBudget();
                        int getIntelligence();
                        int getReq();
                        int getType();

                        void setName(string);
                        void setPartner(string);
                        void setComitted(bool );
                        void setAttr(int);
                        void setBudget(int );
                        void setIntelligence(int );
                        void setReq(int );
                        void setType(int );
	};
}
#endif
