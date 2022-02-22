#include <iostream>
#include <string>
#include <iomanip>
#include "Simplecalculator.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Add loop for range [x1, x2] with step (x2-x1)/10
	calculator::SimpleCalculator calc(2.1, 3.9);
	cout << "RESULT: " << calc.compute(0.1) << endl;
}