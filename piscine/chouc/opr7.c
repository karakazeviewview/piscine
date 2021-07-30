#include <stdio.h>

int	main()
{
	while(1)
	{
		printf("プログラムを終了しますか？\n");
		printf("y=終了 n=キャンセル\n");
		int	c = getchar();

		if (c == 'y')
		{
			break;
		}
		printf("終了をキャンセルしました\n\n");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
	printf("何かキー入力で終了\n");
	getchar();
}
