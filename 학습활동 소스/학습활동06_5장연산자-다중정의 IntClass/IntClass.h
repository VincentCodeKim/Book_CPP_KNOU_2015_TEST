#ifndef	INTCLASS_H_INCLUDED
#define	INTCLASS_H_INCLUDED

class IntClass
{
	int	value;
public:
	IntClass(int x=0) : value(x) {}

	IntClass	operator ++()
	{
		return IntClass(++value);
	}

	IntClass	operator ++(int)
	{
		return IntClass(value++);
	}

	IntClass&	operator +=(const IntClass& n)
	{
		value += n.value;
		return *this;
	}

	int	getValue() const
	{
		return value;
	}
};


#endif	// INTCLASS_H_INCLUDED
