#ifndef __VEC__
#define __VEC__

#define RAD_TO_DEG 180 / 3.1415926536

#include <cmath>

#include "v2.h"
#include "v3.h"
#include "v4.h"

class vec {
	public:
		// Length of a vector
		template<typename T>
		static T length(v2<T> v) {
			return sqrt(pow(v.x, 2) + pow(v.y, 2));
		};
		template<typename T>
		static T length(v3<T> v) {
			return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
		};
		template<typename T>
		static T length(v4<T> v) {
			return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2) + pow(v.w, 2));
		};
		// Unit vector
		template<typename T>
		static v2<T> normalize(v2<T> v) {
			return v / length(v);
		};
		template<typename T>
		static v3<T> normalize(v3<T> v) {
			return v / length(v);
		};
		template<typename T>
		static v4<T> normalize(v4<T> v) {
			return v / length(v);
		};
		// Dot product
		template<typename T>
		static T dot(v2<T> v, v2<T> u) {
			return v.x * u.x + v.y * u.y;
		};
		template<typename T>
		static T dot(v3<T> v, v3<T> u) {
			return v.x * u.x + v.y * u.y + v.z * u.z;
		};
		template<typename T>
		static T dot(v4<T> v, v4<T> u) {
			return v.x * u.x + v.y * u.y + v.z * u.z + v.w * u.w;
		};
		// Cross product
		template<typename T>
		static v3<T> cross(v3<T> v, v3<T> u) {
			return v3<T>(v.y * u.z - v.z * u.y,
						 v.z * u.x - v.x * u.z,
						 v.x * u.y - v.y * u.x);
		};
		// Angle between vectors
		template<typename T>
		static double angle(v2<T> v, v2<T> u) {
			return RAD_TO_DEG * acos(dot(v, u) / (length(v) * length(u)));
		};
		template<typename T>
		static double angle(v3<T> v, v3<T> u) {
			return RAD_TO_DEG * acos(dot(v, u) / (length(v) * length(u)));
		};
		template<typename T>
		static double angle(v4<T> v, v4<T> u) {
			return RAD_TO_DEG * acos(dot(v, u) / (length(v) * length(u)));
		};
};

#endif __VEC__