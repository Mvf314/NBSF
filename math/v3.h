#ifndef __V3__
#define __V3__

#include <ostream>

#include "v2.h"

template<typename T>
class v3 {
public:
	v3(T const& x, T const& y, T const& z) {
		this->x = x;
		this->y = y;
		this->z = z;
	};
	v3(v2<T> const& xy, T const& z) {
		this->x = xy.x;
		this->y = xy.y;
		this->z = z;
	};
	v3(T const& x, v2<T> const& yz) {
		this->x = x;
		this->y = yz.y;
		this->z = yz.z;
	};



	// Assignment
	v3<T>& operator=(v3<T> const& v) {
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
		return *this;
	};

	// Scalar and vector addition and subtraction
	v3<T> operator+(T const& n) {
		return v3(
			this->x + n,
			this->y + n,
			this->z + n);
	};
	v3<T> operator+(v3<T> const& v) {
		return v3(
			this->x + v.x,
			this->y + v.y,
			this->z + v.z);
	};
	v3<T> operator+=(T const& n) {
		this->x += n;
		this->y += n;
		this->z += n;
		return *this;
	};
	v3<T> operator+=(v3<T> const& v) {
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
		return *this;
	}


	v3<T> operator-(T const& n) {
		return v3(
			this->x - n,
			this->y - n,
			this->z - n);
	};
	v3<T> operator-(v3<T> const& v) {
		return v3(
			this->x - v.x,
			this->y - v.y,
			this->z - v.z);
	};
	v3<T> operator-=(T const& n) {
		this->x -= n;
		this->y -= n;
		this->z -= n;
		return *this;
	};
	v3<T> operator-=(v3<T> const& v) {
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;
		return *this;
	};

	// Scalar multiplication and division
	v3<T> operator*(T const& n) {
		return v3(
			this->x * n,
			this->y * n,
			this->z * n);
	};
	v3<T> operator*=(T const& n) {
		this->x *= n;
		this->y *= n;
		this->z *= n;
		return *this;
	};


	v3<T> operator/(T const& n) {
		return v3(
			this->x / n,
			this->y / n,
			this->z / n);
	};
	v3<T> operator/=(T const& n) {
		this->x /= n;
		this->y /= n;
		this->z /= n;
		return *this;
	};

	// Negation
	v3<T> operator-() {
		return v3(
			-this->x,
			-this->y)
			-this->z;
	};

	// Increment and decrement
	v3<T> operator++() {
		this->x++;
		this->y++;
		this->z++;
		return *this;
	};

	v3<T> operator--() {
		this->x--;
		this->y--;
		this->z--;
		return *this;
	};


	// Printing
	friend std::ostream& operator<<(std::ostream& os, v3<T> const v) {
		os << v.x << " " << v.y << " " << v.z;
		return os;
	};

	T x, y, z;
};

#endif __V3__