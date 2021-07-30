#include <stdio.h>

int	main()
{
	while (1)
	{
		printf("外側ループ開始\n");
		while (1)
		{
			printf("内側ループ開始\n");
			goto loopend;
		}
	}
loopend:
		printf("プログラム終了\n");
	getchar();
}
