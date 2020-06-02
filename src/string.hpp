#ifndef COBRA_STRING_H
#define COBRA_STRING_H

namespace cobra
{
	class cs
	{
	public:

		static int len(char* data)
		{
			int length = 0;
			while(*data++)
			{
				length++;
			}
			return length;
		}

		static int len(const char* data)
		{
			int length = 0;
			while(*data++)
			{
				length++;
			}
			return length;
		}

		static int len(wchar_t* data)
		{
			int length = 0;
			while(*data++)
			{
				length++;
			}
			return length;
		}

		static int len(const wchar_t* data)
		{
			int length = 0;
			while(*data++)
			{
				length++;
			}
			return length;
		}

		static void cpy(char* s, char* d, int length = -1)
		{
			if(length < 0)
			{
				while(*s != '\0')
				{
					*d++ = *s++;
				}
				*d = '\0';
			}
			else
			{
				for(int i = 0; i < length+1; i++)
				{
					d[i] = s[i];
				}
			}
		}

		static void cpy(wchar_t* s, wchar_t* d, int length = -1)
		{
			if(length < 0)
			{
				while(*s != '\0')
				{
					*d++ = *s++;
				}
				*d = '\0';
			}
			else
			{
				for(int i = 0; i < length; i++)
				{
					d[i] = s[i];
				}
				d[length] = '\0';
			}

		}
	};
}
#endif
