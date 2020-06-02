#include "string_narrow.hpp"

namespace cobra
{
	void csn::qp()
	{
		std::cout << "Quickprint: " << m_data << "\n";
	}

	csn::csn()
	{
		m_data = nullptr;
	}

	csn::csn(char* data)
	{
		m_data = new char[cs::len(data) + 1];
		char* p = &m_data[0];
		while(*data != '\0')
		{
			*p++ = *data++;
		}
		*p = '\0';
	}

	csn::csn(const char* data)
	{
		m_data = new char[cs::len(data) + 1];
		char* p = &m_data[0];
		while(*data != '\0')
		{
			*p++ = *data++;
		}
		*p = '\0';
	}

	csn::csn(int n)
	{
		m_data = new char[n];
	}

	csn::~csn()
	{
		if(m_data)
		{
			delete[] m_data;
			m_data = nullptr;
		}
	}

	void csn::del()
	{
		if(m_data)
		{
			delete[] m_data;
			m_data = nullptr;
		}
	}

	char* csn::c_str()
	{
		return &m_data[0];
	}

	void csn::operator=(char* data)
	{
		del();

		m_data = new char[cs::len(data) + 1];
		char* p = &m_data[0];
		while(*data != '\0')
		{
			*p++ = *data++;
		}
		*p = '\0';
	}

	void csn::operator=(const char* data)
	{
		del();

		m_data = new char[cs::len(data) + 1];
		char* p = &m_data[0];
		while(*data != '\0')
		{
			*p++ = *data++;
		}
		*p = '\0';
	}
}
