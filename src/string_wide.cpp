#include "string_wide.hpp"

namespace cobra
{
	void csw::qp()
	{
		std::wcout << L"Quickprint: " << m_data << "\n";
	}

	csw::csw()
	{
		m_data = nullptr;
	}

	csw::csw(wchar_t* data)
	{
		m_data = new wchar_t[cs::len(data) + 1];
		wchar_t* p = &m_data[0];
		while(*data != L'\0')
		{
			*p++ = *data++;
		}
		*p = L'\0';
	}

	csw::csw(const wchar_t* data)
	{
		m_data = new wchar_t[cs::len(data) + 1];
		wchar_t* p = &m_data[0];
		while(*data != L'\0')
		{
			*p++ = *data++;
		}
		*p = L'\0';
	}

	csw::csw(int n)
	{
		m_data = new wchar_t[n];
	}

	csw::~csw()
	{
		if(m_data)
		{
			delete[] m_data;
			m_data = nullptr;
		}
	}

	void csw::del()
	{
		if(m_data)
		{
			delete[] m_data;
			m_data = nullptr;
		}
	}

	wchar_t* csw::c_str()
	{
		return &m_data[0];
	}

	void csw::operator=(wchar_t* data)
	{
		del();

		m_data = new wchar_t[cs::len(data) + 1];
		wchar_t* p = &m_data[0];
		while(*data != L'\0')
		{
			*p++ = *data++;
		}
		*p = L'\0';
	}

	void csw::operator=(const wchar_t* data)
	{
		del();

		m_data = new wchar_t[cs::len(data) + 1];
		wchar_t* p = &m_data[0];
		while(*data != L'\0')
		{
			*p++ = *data++;
		}
		*p = L'\0';
	}
}
