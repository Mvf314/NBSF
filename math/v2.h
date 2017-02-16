#ifndef __V2__
#define __V2__

template <typename T>
class v2 {
	public:
		v2(T const& x, T const& y) {
			this->x = x;
			this->y = y;
		};

	T x, y;
};

#endif __V2__