#ifndef	ARRAY_H_INCLUDED
#define	ARRAY_H_INCLUDED

template <class T, int N>
class	Array {
	T	arr[N];
public:
	T&	operator [] (int i) {
		return arr[i];
	}

	const T&	operator [] (int i) const {
		return arr[i];
	}
};

#endif	// ARRAY_H_INCLUDED
