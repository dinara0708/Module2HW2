#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>



void main()
{
	setlocale(LC_ALL, "Rus");

	int v = 0;
	printf("������� ����� ������:\t");
	scanf("%d", &v);

	if (v == 1) {
		/*1.	���� ��� �������������� �����.
		������� ������ �����, ���� ��� ������ �������, � ��� �����, ���� ��� �� ���.*/

		float x, y;
		printf("������� ��� �����:\n");
		scanf("%f %f", &x, &y);
		if (x > y) {
			printf("%f\n", x);
		}
		else {
			printf("%f \n%f\n", x, y);
		}

	}
	else if (v == 2) {
		/* 2.	���� ��� �������������� �����. �������� ������ ����� �����,
		���� ��� ������ ��� ����� �������, � �������� ����� ��� ��������� � ��������� ������.*/

		float x, y;
		printf("������� ��� �����:\n");
		scanf("%f %f", &x, &y);
		if (x <= y) {
			x = 0;
			printf("x=%f \ny=%f\n", x, y);
		}
		else {
			printf("x=%f \ny=%f\n", x, y);
		}
	}
	else if (v == 3) {
		/*3.	���� ��� �������������� �����. ������� �� ��� ��, ������� ����������� ��������� (1, 3).*/

		float x, y, z;
		printf("������� ��� �����:\n");
		scanf("%f %f %f", &x, &y, &z);
		if (1 < x && x < 3) {
			printf("%f\n", x);
		}
		else if (1 < y && y < 3) {
			printf("%f\n", y);
		}
		else if (1 < z && z < 3) {
			printf("%f\n", z);
		}
		else {
			printf("����� �� ������ � �������� ��������\n");
		}
	}
	else if (v == 4) {
		/*4.	���� �������������� ����� �, � (�!=� ). ������� ��. ���� ���� ����� �������� �� ����������*,
		� ������� � �� ��������� �������������.*/

		float x, y;
		printf("������� ��� �����:\n");
		scanf("%f %f", &x, &y);
		if (x < y) {
			x = (x + y) / 2;
			y = x*y * 2;
			printf("x=%f \ny=%f\n", x, y);
		}
		else {
			y = (x + y) / 2;
			x = x*y * 2;
			printf("x=%f \ny=%f\n", x, y);
		}
	}
	else if (v == 5) {
		/*5.	���� ��� �������������� �����. �������� � ������� �� �� ���, �������� ������� ��������������.*/

		double x, y, z;
		printf("������� ��� �����:\n");
		scanf("%lf %lf %lf", &x, &y, &z);
		if (x > 0) {
			x = pow(x, 2);
			printf("x=%lf\n", x);
		}
		if (y > 0) {
			y = pow(y, 2);
			printf("y=%lf\n", y);
		}
		if (z > 0) {
			z = pow(z, 2);
			printf("z=%lf\n", z);
			//���������� ���� �� ����� ������ ����������� ������ ������e, ������� ��� if, � �� else if.
		}
		else {
			printf("��� ����� ������������\n");
		}
	}
	else if (v == 6) {
		/*6.	���� ����� ���� ������� ��������� �������������� ����� �, �, z ������ �������,
		�� ���������� �� ���� ���� ����� �������� ����������* ���� ������;
		� ��������� ������ �������� ������� �� � � � ����������* ���� ���������� ��������.  */

		float x, y, z;
		printf("������� ��� �����:\n");
		scanf("%f %f %f", &x, &y, &z);
		if (x != y && y != z) {
			if (x + y + z < 1) {
				if (x < y&&x < z) {
					x = (y + z) / 2;
					printf("x=%f \ny=%f \nz=%f", x, y, z);
				}
				else if (y < x&&y < z) {
					y = (x + z) / 2;
					printf("x=%f \ny=%f \nz=%f", x, y, z);
				}
				else if (z < y&&z < x) {
					z = (x + y) / 2;
					printf("x=%f \ny=%f \nz=%f", x, y, z);
				}
			}
			else {
				if (x < y) {
					x = (z + y) / 2;
					printf("x=%f \ny=%f \nz=%f", x, y, z);
				}
				else {
					y = (x + z) / 2;
					printf("x=%f \ny=%f \nz=%f", x, y, z);
				}
			}
		}
		else {
			printf("����� �� ������ ���� ������� �����. ������� ������ �����\n");
		}
	}
	else if (v == 7) {
		/* 7.	���� �������������� ����� �, �. ���� � � � ������������, �� ������ �������� �������� ��� �������;
		���� ������������ ������ ���� �� ���, �� ��� �������� ��������� �� 0.5;
		���� ��� �������� �������������� � �� ���� �� ��� �� ����������� ������� [0.5, 2.0],
		�� ��� �������� ��������� � 10 ���; � ��������� ������� � � � �������� ��� ���������.*/

		double x, y;
		printf("������� ��� �����:\n");
		scanf("%f %f", &x, &y);
		if (x < 0 && y < 0) {
			x = fabs(x);
			y = fabs(y);
			printf("x=%lf \ny=%lf \n", x, y);
		}
		else if ((x > 0 && y < 0) || (x < 0 && y>0)) {
			x = x + 0.5;
			y = y + 0.5;
			printf("x=%f \ny=%f \n", x, y);
		}
		else if ((x > 0 && y > 0) && (x<0.5 || x>2.0) && (y<0.5 || y>2.0)) {
			x = x / 10;
			y = y / 10;
			printf("x=%f \ny=%f \n", x, y);
		}
		else {
			printf("x=%f \ny=%f \n", x, y);
		}
	}
	else if (v == 8) {
		/* 8. ���� �������������� ������������� ����� �, �, z. 
		a) ��������, ���������� �� ����������� � ������� ������ �, �, z. 
		b) ���� ����������� ����������, �� ����������������� �� �� �������������. */

		float x, y, z;
		printf("������� ��� �����:\n");
		scanf("%f %f %f", &x, &y, &z);
		if (x < y + z || y < x + z || z < x + y) {
			printf("����������� � ������ ��������� ����������\n");
			if ((x > y&&x > z) && (pow(x, 2) < pow(y, 2) + pow(z, 2))) {
				printf("����������� �������������\n");
			}
			else if ((y > x&&y > z) && (pow(y, 2) < pow(x, 2) + pow(z, 2))) {
				printf("����������� �������������\n");
			}
			else if ((z > x&&z > y) && (pow(z, 2) < pow(x, 2) + pow(y, 2))) {
				printf("����������� �������������\n");
			}
			else {
				printf("����������� �� ������������\n");
			}
		}
		else {
			printf("����������� � ������ ��������� �� ����������");
		}
	}
	else if (v == 9) {
		/* 9. ���� �������������� ����� �, b, � (a!=0). ��������� ����������� ������������ ��������� ��4 + ��2 + �=0,
		�. �. ���� �������������� ������ ���, �� ������ ���� ������ ��������� �� ����, ����� ������ ���� ������ ��� ��� ������ �����. */

		float a, b, c, x1, x2, x3, x4, D, y1, y2;
		printf("������� ��� �����:\n");
		scanf("%f %f %f", &a, &b, &c);
		if (a != 0) {
			D = pow(b,2) - 4 * a*c;
			if (D >= 0) {
				y1 = (-b + pow(D,0.5)) / (2 * a);
				y2 = (-b - pow(D,0.5)) / (2 * a);
				if (y1 >= 0) {
					x1 = sqrt(y1);
					x2 = -sqrt(y1);
					printf("������ ���� ������:\n %f \n%f \n", x1, x2);
				}
				if (y2 >= 0) {
					x3 = sqrt(y2);
					x4 = -sqrt(y2);
					printf("������ ���� ������:\n %f \n%f \n", x3, x4);
				}
				if (y1 < 0) {
					printf("������ ���� ������ ���\n");
				}
				if (y2 < 0) {
					printf("������ ���� ������ ���\n");
				}
			}
			else {
				printf("������ ���\n");
			}
		}
		else {
			printf("������ ���\n");
		}
	}

	else if (v == 10) {
		/* 10. ���� �������������� ����� �. ��������
		a) ����� ����� ����� �;
		�) ���������� �, ����������� �� ���������� ������;
		�) ���������� � ��� ������� ���� */

		float x;
		double a, b, c, d;
		printf("x=\t");
		scanf("%f", &x);

		a = (int)x;
		printf("a) ����� ����� �����: %lf\n", a);

		b = roundf(x);
		printf("�) ����������� �� ���������� ������: %lf\n", b);

		c = modf(x, &d);
		printf("�) ����� ��� ������� ����: %lf\n", d);
	}
	else {
		printf("��� �������");
	}
}

