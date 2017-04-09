#ifndef ES_GIFTS
#define ES_GIFTS
#include "gifts.hpp"
namespace info {
class egifts : public gifts {
	private:
		int cost;
		int value;
		bool status;
	public:
		egifts ();
	};
}
#endif
