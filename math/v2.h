#ifndef __V2__
#define __V2__

#include <ostream>

template<typename T>
class v2 {
public:
	v2(T const& x, T const& y) {
		this->x = x;
		this->y = y;
	};

	// Assignment
	v2<T>& operator=(v2<T> const& v) {
		this->x = v.x;
		this->y = v.y;
		return *this;
	};

	// Scalar and vector addition and subtraction
	v2<T> operator+(T const& n) {
		return v2(
			this->x + n,
			this->y + n);
	};
	v2<T> operator+(v2<T> const& v) {
		return v2(
			this->x + v.x,
			this->y + v.y);
	};
	v2<T> operator+=(T const& n) {
		this->x += n;
		this->y += n;
		return *this;
	};
	v2<T> operator+=(v2<T> const& v) {
		this->x += v.x;
		this->y += v.y;
		return *this;
	}


	v2<T> operator-(T const& n) {
		return v2(
			this->x - n,
			this->y - n);
	};
	v2<T> operator-(v2<T> const& v) {
		return v2(
			this->x - v.x,
			this->y - v.y);
	};
	v2<T> operator-=(T const& n) {
		this->x -= n;
		this->y -= n;
		return *this;
	};
	v2<T> operator-=(v2<T> const& v) {
		this->x -= v.x;
		this->y -= v.y;
		return *this;
	};

	// Scalar multiplication and division
	v2<T> operator*(T const& n) {
		return v2(
			this->x * n,
			this->y * n);
	};
	v2<T> operator*=(T const& n) {
		this->x *= n;
		this->y *= n;
		return *this;
	};


	v2<T> operator/(T const& n) {
		return v2(
			this->x / n,
			this->y / n);
	};
	v2<T> operator/=(T const& n) {
		this->x /= n;
		this->y /= n;
		return *this;
	};

	// Negation
	v2<T> operator-() {
		return v2(
			-this->x,
			-this->y);
	};

	// Increment and decrement
	v2<T> operator++() {
		this->x++;
		this->y++;
		return *this;
	};

	v2<T> operator--() {
		this->x--;
		this->y--;
		return *this;
	};


	// Printing
	friend std::ostream& operator<<(std::ostream& os, v2<T> const v) {
		os << v.x << " " << v.y;
		return os;
	};

	T x, y;

};

#endif