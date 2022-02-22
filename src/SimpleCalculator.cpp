#include "Simplecalculator.hpp"
#include <cmath>

using std::pow;
using std::sin;
using std::abs;
using std::exp;

namespace calculator {
	SimpleCalculator::SimpleCalculator(const double& a_, const double& b_)
		: a(a_)
		, b(b_)
	{}

	double SimpleCalculator::compute(const double& x) const
	{
		return (sin(b) * x / x) * exp(-a * x);

	}

}