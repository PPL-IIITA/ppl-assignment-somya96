#ifndef GIFT_H
#define GIFT_H
namespace info {
class gifts {
	private:
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
