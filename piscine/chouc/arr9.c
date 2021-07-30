#include <stdio.h>

int	main()
{
	char	moji = 'E';

	if ('a' <= moji && moji <= 'z')
		printf("%cはa~zの間の文字です", moji);
	else
		printf("%cはa~zの間の文字でないです", moji);

	getchar();

}
