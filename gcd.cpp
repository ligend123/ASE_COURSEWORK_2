#include <cstdlib> // for abs(long long int)
#include <algorithm> // for min()

#include "gcd.h"

namespace ExactArithmetic
{

	long long int gcd(long long int i, long long int j)
		/*
		*  Note:
		*  This is a very inefficent algorithm for computing the greatest common divisor.
		*  Euclid's Algorithm would be much more efficient.
		*/
	{
		if(i == 0)
			return j;
		return gcd(j%i, i);
	}

} // End of namespace ExactArithmetic
