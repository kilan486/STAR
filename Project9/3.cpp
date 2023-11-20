#include <cassert>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}
	int main()
	{
		 char arr1[] = "ertyf";
		 char arr2[] = "wetfy";

		my_strcpy(arr1, arr2);

		return 0;
	}