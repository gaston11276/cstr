#include "string.hpp"
#include "string_narrow.hpp"
#include "string_wide.hpp"


#include <iostream>
using namespace std;

int main()
{
	cobra::csn narrow1 = "Narrow!";
	cobra::csw wide1 = L"Wide!";
	cout << "Narrow: " << narrow1.c_str() << "\n";
	wcout << L"Wide: " << wide1.c_str() << "\n";

	cobra::csn narrow2(12);
	cobra::cs::cpy(narrow1.c_str(), narrow2.c_str());
	narrow2.qp();

	cobra::csw wide2(12);
	cobra::cs::cpy(wide1.c_str(), wide2.c_str());
	wide2.qp();

	return 0;
}
