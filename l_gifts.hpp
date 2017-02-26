#ifndef L_GIFTS
#define L_GIFTS
namespace info {
	class lgifts {
		private:
			int luxury_rating;
			int dif;
			int cost;
			int value;
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
