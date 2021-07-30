#include <stdio.h>

int Add(int	num1, int	num2)
{
	int	num;
	num = num1 + num2;
	return num;
}

int	main()
{
	int	kazu1, kazu2, kekka;
	kazu1 = 3;
	kazu2 = 4;
	kekka = Add(kazu1, kazu2);
	printf("計算結果: %d", kekka);
	getchar();
}

