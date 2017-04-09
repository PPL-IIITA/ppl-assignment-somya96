#ifndef COUPLES_H
#define COUPLES_H
#include <bits/stdc++.h>
#include "boys.hpp"
#include "girls.hpp"
#include "es_gifts.hpp"
#include "l_gifts.hpp"
#include "u_gifts.hpp"

namespace info {
	class couples {
		private:
			int happiness;
			int compatibility;
			boys b1;
			girls g1;
		public:
			void calculateHappiness (egifts * e, lgifts * l, ugifts * u);
			void calculateCompatibility (egifts * e, lgifts * l, ugifts * u);
			int getCompatibility ();
			int getHappiness ();
			void setData(boys *, girls *, string, string);
	};
}
#endif
