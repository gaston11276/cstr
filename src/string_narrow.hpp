#ifndef COBRA_STRING_NARROW_H
#define COBRA_STRING_NARROW_H
#include "string.hpp"

#include <iostream>

namespace cobra
{
	class csn
	{
	public:
		csn();
		csn(char*);
		csn(const char*);
		csn(int);
		~csn();

		void del();
		char* c_str();

		void operator=(char*);
		void operator=(const char*);

		void qp();

	private:
		char* m_data;
	};
}
#endif
