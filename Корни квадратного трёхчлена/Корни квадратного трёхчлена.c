#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char ch;
	do {
		float dis, a, b, c;
		//Введение коэффициентов
		printf("Input your coefficiets a, b ,c: ");
		scanf_s("%f%f%f", &a, &b, &c);

		if (a == 0) {	//Проверка на линейность
			if (b == 0) {
				if (c != 0) {	//Константа равна 0
					printf("Empty.");
				}
				else {	//Равенство 0 = 0
					printf("Full.");
				}
			}
			else {	//Решение линейного уравнения
				printf("%f", (-c) / b);
			}
		}
		else {	//Решение квадратного уравнения
			dis = b * b - 4 * a * c;
			if (dis < 0) {	//Дискриминант меньше 0
				printf("Empty.");
			}
			else if (dis == 0) {	//Дискриминант равен 0
				printf("One root: %f", (-b) / (2 * a));
			}
			else {	//Дискриминант больше 0
				printf("Two roots: %f, %f", ((-b) + sqrtf(dis)) / (2 * a), ((-b) - sqrtf(dis)) / (2 * a));
			}
		}
		//Повтор программы
		printf("\nDo you wish to restart program? (y/n)\n");
		getchar();
		scanf_s("%c", &ch);
	} while (ch == 'y' || ch == 'Y');

	return 0;
}