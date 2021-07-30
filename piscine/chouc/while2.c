#include <stdio.h>

int	main()
{
	int	flag = 0;
	while (1)
	{
		printf("外側ループ開始\n");
		while (1)
		{
			printf("内側ループ開始\n");
			flag = 1;
			if (flag)
				break;
		}
		if (flag)
			break;
	}
	printf("プログラム終了\n");
	getchar();
}
