#include <stdio.h>
#include <locale.h>



int main()
{
setlocale(LC_ALL, "Rus");
int n = 0;
while (n++ < 3)			/* ������ 7 */
printf("n ����� %d\n", n); 	/* ������ 8 */
printf("��� ���, ��� ������ ������ ���������. \n");
return 0;
}
