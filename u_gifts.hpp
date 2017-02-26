#ifndef UGIFT_H
#define UGIFT_H
namespace info {
class ugifts {
	private:
		int util_value;
		int util_class;
		int value;
		int cost;
		int status;

	public:
		int getCost ();
		int getValue ();
		bool getStatus ();
	
		void setCost (int);
		void setValue (int);
		void setStatus (bool);
	};
}

#endif
