#ifndef COBRA_STRING_WIDE_H
#define COBRA_STRING_WIDE_H
#include "string.hpp"

#include <iostream>

namespace cobra
{
	class csw
	{
	public:
		csw();
		csw(wchar_t*);
		csw(const wchar_t*);
		csw(int);
		~csw();

		void del();
		wchar_t* c_str();

		void operator=(wchar_t*);
		void operator=(const wchar_t*);

		void qp();

	private:
		wchar_t* m_data;
	};
}
#endif
