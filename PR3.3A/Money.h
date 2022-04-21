#pragma once

#include "Pair.h"

class Money : public Pair
{
public:
	Money(const long x = 0, const unsigned long y = 0);
	Money(const Money& r);
	Money(double z);
	~Money(void);

	Money& operator = (const Money&);

	friend Money operator -(const Money& l, const Money& r);
	friend Money operator *(const Money& l, const double k);
	friend Money operator *(const double k, const Money& r);

	bool operator ==(const Money&);
	bool operator !=(const Money&);
	bool operator >(const Money&);
	bool operator <(const Money&);
	bool operator >=(const Money&);
	bool operator <=(const Money&);

	operator string() const;
	friend ostream& operator << (ostream&, const Money&);
	friend istream& operator >> (istream&, Money&);

	Money& operator ++();
	Money& operator --();
	Money operator ++(int);
	Money operator --(int);
};