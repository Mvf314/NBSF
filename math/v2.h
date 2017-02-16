#ifndef __V2__
#define __V2__

template <typename T>
class v2 {
	public:
		v2(T const& x, T const& y) {
			this->x = x;
			this->y = y;
		};

		v2<T>& operator=(v2<T> const& v) {
			this->x = v.x;
			this->y = v.y;
			return *this;
		};


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

		 


	T x, y;
};

#endif __V2__