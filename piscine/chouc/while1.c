#include <stdio.h>

int	main()
{
	while (1)
	{
		printf("変換したい文字を入力\n");
		while (1)
		{
			char	c = getchar();
			if (c == '\n')
				break;

			printf("%d", c);
		}

		printf("\n終了しますか？\n");
		printf("y=yes / n=no\n");
		char	c = getchar();
		if (c == 'y')
			break;
		if (c != '\n')
			while (getchar() != '\n');
		printf("\n");
	}
}
