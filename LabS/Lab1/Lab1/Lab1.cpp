#include <iostream>
#include "pch.h"
#include "Auxil.h"
using namespace std;

#define  CYCLE  70000
// количество циклов   

int main()
{
	double  av1 = 0, av2 = 0;
	clock_t  t1 = 0, t2 = 0;
	int res = 1;

	auxil::start();                          // старт генерации
	t1 = clock();                            // фиксация времени
	for (int i = 0; i < CYCLE; i++)
	{
		av1 += (double)auxil::iget(-100, 100); // сумма случайных чисел
		av2 += auxil::dget(-100, 100);         // сумма случайных чисел
	}
	t2 = clock();                            // фиксация времени
	cout << std::endl << "количество циклов:         " << CYCLE;
	cout << std::endl << "среднее значение (int):    " << av1 / CYCLE;
	cout << std::endl << "среднее значение (double): " << av2 / CYCLE;
	cout << std::endl << "продолжительность (у.е):   " << (t2 - t1);
	cout << std::endl << "                  (сек):   "
		<< ((double)(t2 - t1)) / ((double)CLOCKS_PER_SEC);
	cout << std::endl;
	system("pause");
	return 0;

}