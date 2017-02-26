#ifndef ES_GIFTS
#define ES_GIFTS
namespace info {
class egifts {
	private:
		int cost;
		int value;
		bool status;
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
