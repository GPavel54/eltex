#include "functions.h"

void wrongFunc(){
	int y = 0;
	y += 10;
	float * f;
	f = malloc(10 * sizeof(float));
	for (int i = 0; i < 10; i++)
		f[i] = 0.0;  /Инициализация массива/
	printf("%d %f\n", y, *(f + 3));
	printf("%d\n", y);
	free(f);
}
