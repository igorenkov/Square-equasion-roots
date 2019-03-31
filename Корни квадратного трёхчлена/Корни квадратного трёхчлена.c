#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char ch;
	do {
		float dis, a, b, c;
		//�������� �������������
		printf("Input your coefficiets a, b ,c: ");
		scanf_s("%f%f%f", &a, &b, &c);

		if (a == 0) {	//�������� �� ����������
			if (b == 0) {
				if (c != 0) {	//��������� ����� 0
					printf("Empty.");
				}
				else {	//��������� 0 = 0
					printf("Full.");
				}
			}
			else {	//������� ��������� ���������
				printf("%f", (-c) / b);
			}
		}
		else {	//������� ����������� ���������
			dis = b * b - 4 * a * c;
			if (dis < 0) {	//������������ ������ 0
				printf("Empty.");
			}
			else if (dis == 0) {	//������������ ����� 0
				printf("One root: %f", (-b) / (2 * a));
			}
			else {	//������������ ������ 0
				printf("Two roots: %f, %f", ((-b) + sqrtf(dis)) / (2 * a), ((-b) - sqrtf(dis)) / (2 * a));
			}
		}
		//������ ���������
		printf("\nDo you wish to restart program? (y/n)\n");
		getchar();
		scanf_s("%c", &ch);
	} while (ch == 'y' || ch == 'Y');

	return 0;
}