#include "Pair.h"

using namespace std;

Pair::Pair(const long x, const unsigned long y) : hrn(x), kop(y)
{ }

Pair::Pair(const Pair& r)
{
	hrn = r.hrn;
	kop = r.kop;
}

Pair::~Pair(void)
{ }

Pair::operator string() const
{
	stringstream ss;
	ss << "( " << GetHrn() << ", " << GetKop() << " )";

	return ss.str();
}

ostream& operator << (ostream& out, const Pair& r)
{
	return out << (string)r;
}

istream& operator >> (istream& in, Pair& r)
{
	int a, b;

	cout << "a = "; in >> a;
	cout << "b = "; in >> b;

	r.SetHrn(a); 
	r.SetKop(b);

	return in;
}