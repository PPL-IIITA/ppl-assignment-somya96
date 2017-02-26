#ifndef L_GIFTS
#define L_GIFTS
namespace info {
class lgifts {
public:
	int luxury_rating;
	int dif;
	int price;
	int value;
	
	lgifts (int lr, int d, int p , int v) {
		luxury_rating = lr;
		dif = d;
		price  = p;
		value = v;
	}
};
}
#endif
