#include <stdio.h>

int main(void)
{
	int arr[] = { 0, 1, 2, 3, 4 };

	int length = sizeof(arr) / sizeof(arr[0]);

	printf("配列arrの要素数: %d", length);

	getchar();
}
