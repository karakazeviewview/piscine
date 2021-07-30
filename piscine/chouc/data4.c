#include <stdio.h>

int	main()
{
	unsigned char	_uchar = 255;
	_uchar = _uchar + 1;
	printf("%d\n", _uchar);
	_uchar = _uchar - 1;
	printf("%d", _uchar);
	getchar();
}
