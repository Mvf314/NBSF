#ifndef __V4__
#define __V4__

#include <ostream>

#include "v2.h"
#include "v3.h"

template<typename T>
class v4 {
public:
	v4(T const& x, T const& y, T const& z, T const& w) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = w;
	};
	v4(v2<T> const& xy, T const& z, T const& w) {
		this->x = xy.x;
		this->y = xy.y;
		this->z = z;
		this->w = w;
	};
	v4(T const& x, v2<T> const& yz, T const& w) {
		this->x = x;
		this->y = yz.x;
		this->z = yz.y;
		this->w = w;
	};
	v4(T const& x, T const& y, v2<T> const& zw) {
		this->x = x;
		this->y = y;
		this->z = zw.x;
		this->w = zw.y;
	};
	v4(v2<T> const& xy, v2<T> const& zw) {
		this->x = xy.x;
		this->y = xy.y;
		this->z = zw.x;
		this->w = zw.y;
	};
	v4(v3<T> const& xyz, T const& w) {
		this->x = xyz.x;
		this->y = xyz.y;
		this->z = xyz.z;
		this->w = w;
	};
	v4(T const& x, v3<T> const& yzw) {
		this->x = x;
		this->y = yzw.x;
		this->z = yzw.y;
		this->w = yzw.z;
	};



	// Assignment
	v4<T>& operator=(v4<T> const& v) {
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
		this->w = v.w;
		return *this;
	};

	// Scalar and vector addition and subtraction
	v4<T> operator+(T const& n) {
		return v4(
			this->x + n,
			this->y + n,
			this->z + n,
			this->w + n);
	};
	v4<T> operator+(v4<T> const& v) {
		return v4(
			this->x + v.x,
			this->y + v.y,
			this->z + v.z,
			this->w + v.w);
	};
	v4<T> operator+=(T const& n) {
		this->x += n;
		this->y += n;
		this->z += n;
		this->w += n;
		return *this;
	};
	v4<T> operator+=(v4<T> const& v) {
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
		this->w += v.w;
		return *this;
	}


	v4<T> operator-(T const& n) {
		return v4(
			this->x - n,
			this->y - n,
			this->z - n,
			this->w - n);
	};
	v4<T> operator-(v4<T> const& v) {
		return v4(
			this->x - v.x,
			this->y - v.y,
			this->z - v.z,
			this->w - v.w);
	};
	v4<T> operator-=(T const& n) {
		this->x -= n;
		this->y -= n;
		this->z -= n;
		this->w -= n;
		return *this;
	};
	v4<T> operator-=(v4<T> const& v) {
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;
		this->w -= v.w;
		return *this;
	};

	// Scalar multiplication and division
	v4<T> operator*(T const& n) {
		return v4(
			this->x * n,
			this->y * n,
			this->z * n,
			this->w * n);
	};
	v4<T> operator*=(T const& n) {
		this->x *= n;
		this->y *= n;
		this->z *= n;
		this->w *= n;
		return *this;
	};


	v4<T> operator/(T const& n) {
		return v4(
			this->x / n,
			this->y / n,
			this->z / n,
			this->w / n);
	};
	v4<T> operator/=(T const& n) {
		this->x /= n;
		this->y /= n;
		this->z /= n;
		this->w /= n;
		return *this;
	};

	// Negation
	v4<T> operator-() {
		return v4(
			-this->x,
			-this->y,
			-this->z,
			-this->w);
	};

	// Increment and decrement
	v4<T> operator++() {
		this->x++;
		this->y++;
		this->z++;
		this->w++;
		return *this;
	};

	v4<T> operator--() {
		this->x--;
		this->y--;
		this->z--;
		this->w--;
		return *this;
	};


	// Printing
	friend std::ostream& operator<<(std::ostream& os, v4<T> const v) {
		os << v.x << " " << v.y << " " << v.z << " " << v.w;
		return os;
	};

	T x, y, z, w;
};

#endif