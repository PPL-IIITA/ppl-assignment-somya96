#ifndef UGIFT_H
#define UGIFT_H
#include "gifts.hpp"
namespace info {
class ugifts : public gifts{
	private:
		int util_value;
		int util_class;
		int value;
		int cost;
		int status;

	public:
		ugifts ();
	};
}

#endif
