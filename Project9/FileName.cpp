#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int FIB(int n)
{
	if (n <= 2)
		return 1;
	else
		return FIB(n - 1) + FIB(n - 2);


}



int main()
{
	int n = 0;
		int ret = 0;
		scanf("%d", &n);
		ret = FIB(n)
			printf("ret=%d\n", ret;
	return 0;
}