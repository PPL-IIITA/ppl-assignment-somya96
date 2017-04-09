#ifndef L_GIFTS
#define L_GIFTS
#include "gifts.hpp"
namespace info {
	class lgifts : public gifts {
		private:
			int luxury_rating;
			int dif;
			int cost;
			int value;
			int status;
		public:
			lgifts ();
	};
}
#endif
