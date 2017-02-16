#ifndef __VEC__
#define __VEC__

#define RAD_TO_DEG 180 / 3.1415926536

#include <cmath>

#include "v2.h"

class vec {
	public:
		// Length of a vector
		template<typename T>
		static T length(v2<T> v) {
			return sqrt(pow(v.x, 2) + pow(v.y, 2));
		};
		// Unit vector
		template<typename T>
		static v2<T> normalize(v2<T> v) {
			return v / length(v);
		}
		// Dot product
		template<typename T>
		static T dot(v2<T> v, v2<T> u) {
			return v.x * u.x + v.y * u.y;
		}
		// Angle between vectors
		template<typename T>
		static double angle(v2<T> v, v2<T> u) {
			// Radian to degree conversion
			return RAD_TO_DEG * acos(dot(v, u) / (length(v) * length(u)));
		}
};

#endif __VEC__