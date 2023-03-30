////ver no. 1 - без knapsack
//#include <iostream>
//#include "Combi.h"
//#include <tchar.h>
//using namespace std;
//int _tmain(int argc, _TCHAR* argv[])
//{
//    char  AA[][2] = { "A", "B", "C", "D" };
//    cout << std::endl << " - Генератор множества всех подмножеств -";
//    cout << std::endl << "Исходное множество: ";
//    cout << "{ ";
//    for (int i = 0; i < sizeof(AA) / 2; i++)
//    cout << AA[i] << ((i < sizeof(AA) / 2 - 1) ? ", " : " ");
//    cout << "}";
//    cout << std::endl << "Генерация всех подмножеств  ";
//    combi::subset s1(sizeof(AA) / 2);         // создание генератора   
//    int  n = s1.getfirst();                // первое (пустое) подмножество    
//    while (n >= 0)                          // пока есть подмножества 
//    {
//        cout << std::endl << "{ ";
//        for (int i = 0; i < n; i++)
//        cout << AA[s1.ntx(i)] << ((i < n - 1) ? ", " : " ");
//        cout << "}";
//        n = s1.getnext();                   // cледующее подмножество 
//    };
//    cout << std::endl << "всего: " << s1.count() << std::endl;
//    system("pause");
//    return 0;
//}


////ver no.2 - easy version
//#include <iostream>
//#include "Combi.h"
//#include "Knapsack.h"
//#include <tchar.h>
//#define NN 4
//int _tmain(int argc, _TCHAR* argv[])
//{
//    int V = 100,                // вместимость рюкзака              
//        v[] = { 25, 30, 60, 20 },     // размер предмета каждого типа  
//        c[] = { 25, 10, 20, 30 };     // стоимость предмета каждого типа 
//    short m[NN];                // количество предметов каждого типа  {0,1}   
//
//    int maxcc = knapsack_s(
//
//        V,   // [in]  вместимость рюкзака 
//        NN,  // [in]  количество типов предметов 
//        v,   // [in]  размер предмета каждого типа  
//        c,   // [in]  стоимость предмета каждого типа     
//        m    // [out] количество предметов каждого типа  
//    );
//
//    std::cout << std::endl << "-------- Задача о рюкзаке --------- ";
//    std::cout << std::endl << "- количество предметов : " << NN;
//    std::cout << std::endl << "- вместимость рюкзака  : " << V;
//    std::cout << std::endl << "- размеры предметов    : ";
//    for (int i = 0; i < NN; i++) std::cout << v[i] << " ";
//    std::cout << std::endl << "- стоимости предметов  : ";
//    for (int i = 0; i < NN; i++) std::cout << v[i] * c[i] << " ";
//    std::cout << std::endl << "- оптимальная стоимость рюкзака: " << maxcc;
//    std::cout << std::endl << "- вес рюкзака: ";
//    int s = 0; for (int i = 0; i < NN; i++) s += m[i] * v[i];
//    std::cout << s;
//    std::cout << std::endl << "- выбраны предметы: ";
//    for (int i = 0; i < NN; i++) std::cout << " " << m[i];
//    std::cout << std::endl << std::endl;
//
//    system("pause");
//}


////ver no.3 
//#include <iostream>
//#include "Combi.h"
//#include "Knapsack.h"
//#include <time.h>
//#include <iomanip> 
//#include <tchar.h>
//#define NN (sizeof(c)/sizeof(int))
//int _tmain(int argc, _TCHAR* argv[])
//{
//    int V = 600,              // вместимость рюкзака              
//        v[] = { 25, 56, 67, 40, 20, 27, 37, 33, 33, 44, 53, 12,
//               60, 75, 12, 55, 54, 42, 43, 14, 30, 37, 31, 12 },
//        c[] = { 15, 26, 27, 43, 16, 26, 42, 22, 34, 12, 33, 30,
//               12, 45, 60, 41, 33, 11, 14, 12, 25, 41, 30, 40 };
//    short m[NN];
//    int maxcc = 0;
//    clock_t t1, t2;
//    std::cout << std::endl << "-------- Задача о рюкзаке --------- ";
//    std::cout << std::endl << "- вместимость рюкзака  : " << V;
//    std::cout << std::endl << "-- количество ------ продолжительность -- ";
//    std::cout << std::endl << "    предметов          вычисления  ";
//    for (int i = 14; i <= NN; i++)
//    {
//        t1 = clock();
//        maxcc = knapsack_s(V, i, v, c, m);
//        t2 = clock();
//        std::cout << std::endl << "       " << std::setw(2) << i
//            << "               " << std::setw(5) << (t2 - t1);
//    }
//    std::cout << std::endl << std::endl;
//    system("pause");
//    return 0;
//}


////task 2 socetaniya
//#include <iostream>
//#include "Combi.h"
//#include <tchar.h>
//using namespace std;
//int _tmain(int argc, _TCHAR* argv[])
//{
//    char  AA[][2] = { "A", "B", "C", "D", "E" };
//    std::cout << std::endl << " --- Генератор сочетаний ---";
//    std::cout << std::endl << "Исходное множество: ";
//    std::cout << "{ ";
//    for (int i = 0; i < sizeof(AA) / 2; i++)
//
//        std::cout << AA[i] << ((i < sizeof(AA) / 2 - 1) ? ", " : " ");
//    std::cout << "}";
//    std::cout << std::endl << "Генерация сочетаний ";
//    combi::xcombination xc(sizeof(AA) / 2, 3);
//    std::cout << "из " << xc.n << " по " << xc.m;
//    int  n = xc.getfirst();
//    while (n >= 0)
//    {
//
//        std::cout << std::endl << xc.nc << ": { ";
//
//        for (int i = 0; i < n; i++)
//
//
//            std::cout << AA[xc.ntx(i)] << ((i < n - 1) ? ", " : " ");
//
//        std::cout << "}";
//
//        n = xc.getnext();
//    };
//    std::cout << std::endl << "всего: " << xc.count() << std::endl;
//    system("pause");
//    return 0;
//}

////sudno
//#include <iostream>
//#include <iomanip>
//#include "Boat.h"
//#include <tchar.h>
//using namespace std;
//
//#define NN (sizeof(v)/sizeof(int))
//#define MM 3
//int _tmain(int argc, _TCHAR* argv[])
//{
//    int V = 1000,
//        v[] = { 100,  200,   300,  400,  500,  150 },
//        c[NN] = { 10,   15,    20,   25,   30,  25 };
//    short  r[MM];
//    int cc = boat(
//        V,   // [in]  максимальный вес груза
//        MM,  // [in]  количество мест для контейнеров     
//        NN,  // [in]  всего контейнеров  
//        v,   // [in]  вес каждого контейнера  
//        c,   // [in]  доход от перевозки каждого контейнера     
//        r    // [out] результат: индексы выбранных контейнеров  
//    );
//    std::cout << std::endl << "- Задача о размещении контейнеров на судне";
//    std::cout << std::endl << "- общее количество контейнеров    : " << NN;
//    std::cout << std::endl << "- количество мест для контейнеров : " << MM;
//    std::cout << std::endl << "- ограничение по суммарному весу  : " << V;
//    std::cout << std::endl << "- вес контейнеров                 : ";
//    for (int i = 0; i < NN; i++) std::cout << std::setw(3) << v[i] << " ";
//    std::cout << std::endl << "- доход от перевозки              : ";
//    for (int i = 0; i < NN; i++) std::cout << std::setw(3) << c[i] << " ";
//    std::cout << std::endl << "- выбраны контейнеры (0,1,...,m-1): ";
//    for (int i = 0; i < MM; i++) std::cout << r[i] << " ";
//    std::cout << std::endl << "- доход от перевозки              : " << cc;
//    std::cout << std::endl << "- общий вес выбранных контейнеров : ";
//    int s = 0; for (int i = 0; i < MM; i++) s += v[r[i]]; std::cout << s;
//    std::cout << std::endl << std::endl;
//    system("pause");
//    return 0;
//
//};


//sundo time
//#include <iostream>
//#include <iomanip>
//#include "Boat.h"
//#include <time.h>
//#include <tchar.h>
//#define NN (sizeof(v)/sizeof(int))
//#define MM 6
//#define SPACE(n) std::setw(n)<<" "
//int _tmain(int argc, _TCHAR* argv[])
//{
//    int V = 1000,
//        v[] = { 250, 560, 670, 400, 200, 270, 370, 330, 330, 440, 530, 120,
//               200, 270, 370, 330, 330, 440, 700, 120, 550, 540, 420, 170,
//               600, 700, 120, 550, 540, 420, 430, 140, 300, 370, 310, 120 };
//    int c[NN] = { 15,26,  27,  43,  16,  26,  42,  22,  34,  12,  33,  30,
//               42,22,  34,  43,  16,  26,  14,  12,  25,  41,  17,  28,
//               12,45,  60,  41,  33,  11,  14,  12,  25,  41,  30,  40 };
//    short r[MM];
//    int maxcc = 0;
//    clock_t t1, t2;
//    std::cout << std::endl << "-- Задача об оптимальной загрузке судна -- ";
//    std::cout << std::endl << "-  ограничение по весу    : " << V;
//    std::cout << std::endl << "-  количество мест        : " << MM;
//    std::cout << std::endl << "-- количество ------ продолжительность -- ";
//    std::cout << std::endl << "   контейнеров        вычисления  ";
//    for (int i = 24; i <= NN; i++)
//    {
//        t1 = clock();
//        int maxcc = boat(V, MM, i, v, c, r);
//        t2 = clock();
//        std::cout << std::endl << SPACE(7) << std::setw(2) << i
//            << SPACE(15) << std::setw(5) << (t2 - t1);
//    }
//    std::cout << std::endl << std::endl;
//    system("pause");
//    return 0;
//};



////perestanovki 1
//#include <iostream>
//#include "Combi.h"
//#include <iomanip> 
//#include <tchar.h>
//int _tmain(int argc, _TCHAR* argv[])
//{
//    char  AA[][2] = { "A", "B", "C", "D" };
//    std::cout << std::endl << " --- Генератор перестановок ---";
//    std::cout << std::endl << "Исходное множество: ";
//    std::cout << "{ ";
//    for (int i = 0; i < sizeof(AA) / 2; i++)
//
//        std::cout << AA[i] << ((i < sizeof(AA) / 2 - 1) ? ", " : " ");
//    std::cout << "}";
//    std::cout << std::endl << "Генерация перестановок ";
//    combi::permutation p(sizeof(AA) / 2);
//    __int64  n = p.getfirst();
//    while (n >= 0)
//    {
//        std::cout << std::endl << std::setw(4) << p.np << ": { ";
//
//        for (int i = 0; i < p.n; i++)
//
//            std::cout << AA[p.ntx(i)] << ((i < p.n - 1) ? ", " : " ");
//
//        std::cout << "}";
//
//        n = p.getnext();
//    };
//    std::cout << std::endl << "всего: " << p.count() << std::endl;
//    system("pause");
//    return 0;
//}
//

//komivoyajer
#include <iostream>
#include <iomanip> 
#include "Salesman.h"
#include <tchar.h>
#define N 5
int _tmain(int argc, _TCHAR* argv[])
{
    int d[N][N] = { //0   1    2    3     4        
                  {  INF,  20, 31,  INF,   10},    //  0
                  { 10,   INF,  25,  58,  74},    //  1
                  { 12,  30,   INF,  86,   59},    //  2 
                  { 27,  48,  40,   INF,   30},    //  3
                  { 83,  76,  52,  23,    INF} };   //  4  
    int r[N];                     // результат 
    int s = salesman(
        N,          // [in]  количество городов 
        (int*)d,          // [in]  массив [n*n] расстояний 
        r           // [out] массив [n] маршрут 0 x x x x  

    );
    std::cout << std::endl << "-- Задача коммивояжера -- ";
    std::cout << std::endl << "-- количество  городов: " << N;
    std::cout << std::endl << "-- матрица расстояний : ";
    for (int i = 0; i < N; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < N; j++)

            if (d[i][j] != INF) std::cout << std::setw(3) << d[i][j] << " ";

            else std::cout << std::setw(3) << "INF" << " ";
    }
    std::cout << std::endl << "-- оптимальный маршрут: ";
    for (int i = 0; i < N; i++) std::cout << i + 1 << "-->"; std::cout << 0;
    std::cout << std::endl << "-- длина маршрута     : " << s;
    std::cout << std::endl;
    system("pause");
    return 0;
}


////размещения
//#include <iostream>
//#include <iomanip> 
//#include "Combi.h"
//#include <tchar.h>
//#define N (sizeof(AA)/2)
//#define M 3
//int _tmain(int argc, _TCHAR* argv[])
//{
//	char  AA[][2] = { "A", "B", "C", "D" };
//	std::cout << std::endl << " --- Генератор размещений ---";
//	std::cout << std::endl << "Исходное множество: ";
//	std::cout << "{ ";
//	for (int i = 0; i < N; i++)
//
//		std::cout << AA[i] << ((i < N - 1) ? ", " : " ");
//	std::cout << "}";
//	std::cout << std::endl << "Генерация размещений  из  " << N << " по " << M;
//	combi::accomodation s(N, M);
//	int  n = s.getfirst();
//	while (n >= 0)
//	{
//
//		std::cout << std::endl << std::setw(2) << s.na << ": { ";
//
//		for (int i = 0; i < 3; i++)
//
//			std::cout << AA[s.ntx(i)] << ((i < n - 1) ? ", " : " ");
//
//		std::cout << "}";
//
//		n = s.getnext();
//	};
//	std::cout << std::endl << "всего: " << s.count() << std::endl;
//	system("pause");
//	return 0;
//};


////задача о судне через размещения
//#include <iostream>
//#include <iomanip> 
//#include "Boat.h"
//#include <tchar.h>
//#define NN (sizeof(v)/sizeof(int))
//#define MM 3
//int _tmain(int argc, _TCHAR* argv[])
//{
//    int v[] = { 100,  200, 300,  400 }; // вес
//    int c[] = { 10, 15,  20, 25 }; // доход 
//    int minv[] = { 350,  250,  0 };    // минимальный  вес 
//    int maxv[] = { 750,  350,  750 };    // максимальный вес
//    short r[MM];
//    int cc = boat_с(
//        MM,    // [in]  количество мест для контейнеров
//        minv,  // [in]  максимальный вес контейнера на каждом  месте 
//        maxv,  // [in]  минимальный вес контейнера на каждом  месте  
//        NN,    // [in]  всего контейнеров  
//        v,     // [in]  вес каждого контейнера  
//        c,     // [in]  доход от перевозки каждого контейнера   
//        r      // [out] номера  выбранных контейнеров  
//    );
//    std::cout << std::endl << "- Задача о размещении контейнеров на судне -";
//    std::cout << std::endl << "- общее количество контейнеров   : " << NN;
//    std::cout << std::endl << "- количество мест для контейнеров  : " << MM;
//    std::cout << std::endl << "- минимальный  вес контейнера  : ";
//    for (int i = 0; i < MM; i++) std::cout << std::setw(3) << minv[i] << " ";
//    std::cout << std::endl << "- максимальный вес контейнера  : ";
//    for (int i = 0; i < MM; i++) std::cout << std::setw(3) << maxv[i] << " ";
//    std::cout << std::endl << "- вес контейнеров      : ";
//    for (int i = 0; i < NN; i++) std::cout << std::setw(3) << v[i] << " ";
//    std::cout << std::endl << "- доход от перевозки     : ";
//    for (int i = 0; i < NN; i++) std::cout << std::setw(3) << c[i] << " ";
//    std::cout << std::endl << "- выбраны контейнеры (0,1,...,m-1) : ";
//    for (int i = 0; i < MM; i++) std::cout << r[i] << " ";
//    std::cout << std::endl << "- доход от перевозки     : " << cc;
//    std::cout << std::endl << std::endl;
//    system("pause");
//    return 0;
//};


////задача о судне через размещения (определение времени)
//#include <iostream>
//#include <iomanip> 
//#include <time.h>
//#include "Auxil.h"
//#include <tchar.h>
//#include "Boat.h"
//#define SPACE(n) std::setw(n)<<" "
//#define NN 11
//int _tmain(int argc, _TCHAR* argv[])
//{
//    int v[NN + 1], c[NN + 1], minv[NN + 1], maxv[NN + 1];
//    short r[NN];
//    auxil::start();
//    for (int i = 0; i <= NN; i++)
//    {
//        v[i] = auxil::iget(50, 500); c[i] = auxil::iget(10, 30);
//        minv[i] = auxil::iget(50, 300); maxv[i] = auxil::iget(250, 750);
//    }
//    std::cout << std::endl << "-- Задача о размещении контейнеров -- ";
//    std::cout << std::endl << "-- всего контейнеров: " << NN;
//    std::cout << std::endl << "-- количество ------ продолжительность -- ";
//    std::cout << std::endl << "  мест     вычисления  ";
//    clock_t t1, t2;
//    for (int i = 4; i < NN; i++)
//    {
//        t1 = clock();
//        boat_с(i, minv, maxv, NN, v, c, r);
//        t2 = clock();
//        std::cout << std::endl << SPACE(7) << std::setw(2) << i
//            << SPACE(15) << std::setw(6) << (t2 - t1);
//    }
//    std::cout << std::endl; system("pause");
//    return 0;
//}
//

////task 5
//#include <iostream>
//#include "Combi.h"
//#include "Knapsack.h"
//#include <tchar.h>
//#include "Auxil.h"
//#define NN 18
//int _tmain(int argc, _TCHAR* argv[])
//{
//    int V = 300,                // вместимость рюкзака              
//        v[18],     // размер предмета каждого типа  
//        c[18];     // стоимость предмета каждого типа 
//    short m[NN];                // количество предметов каждого типа  {0,1}   
//    
//    for (int i = 0; i < 18; i++) {
//        v[i] = auxil::iget(10, 300);
//    }
//    for (int i = 0; i < 18; i++) {
//        c[i] = auxil::iget(5, 55);
//    }
//    int maxcc = knapsack_s(
//
//        V,   // [in]  вместимость рюкзака 
//        NN,  // [in]  количество типов предметов 
//        v,   // [in]  размер предмета каждого типа  
//        c,   // [in]  стоимость предмета каждого типа     
//        m    // [out] количество предметов каждого типа  
//    );
//
//    std::cout << std::endl << "-------- Задача о рюкзаке --------- ";
//    std::cout << std::endl << "- количество предметов : " << NN;
//    std::cout << std::endl << "- вместимость рюкзака  : " << V;
//    std::cout << std::endl << "- размеры предметов    : ";
//    for (int i = 0; i < NN; i++) std::cout << v[i] << " ";
//    std::cout << std::endl << "- стоимости предметов  : ";
//    for (int i = 0; i < NN; i++) std::cout << v[i] * c[i] << " ";
//    std::cout << std::endl << "- оптимальная стоимость рюкзака: " << maxcc;
//    std::cout << std::endl << "- вес рюкзака: ";
//    int s = 0; for (int i = 0; i < NN; i++) s += m[i] * v[i];
//    std::cout << s;
//    std::cout << std::endl << "- выбраны предметы: ";
//    for (int i = 0; i < NN; i++) std::cout << " " << m[i];
//    std::cout << std::endl << std::endl;
//
//    system("pause");
//}

//task6
//ver no.3 
//#include <iostream>
//#include "Combi.h"
//#include "Knapsack.h"
//#include <time.h>
//#include <iomanip> 
//#include <tchar.h>
//#define NN (sizeof(c)/sizeof(int))
//int _tmain(int argc, _TCHAR* argv[])
//{
//    int V = 600,              // вместимость рюкзака              
//        v[] = { 25, 56, 67, 40, 20, 27, 37, 33, 33, 44, 53, 12,
//               60, 75, 12, 55, 54, 42, 43, 14, 30, 37, 31, 12 },
//        c[] = { 15, 26, 27, 43, 16, 26, 42, 22, 34, 12, 33, 30,
//               12, 45, 60, 41, 33, 11, 14, 12, 25, 41, 30, 40 };
//    short m[NN];
//    int maxcc = 0;
//    clock_t t1, t2;
//    std::cout << std::endl << "-------- Задача о рюкзаке --------- ";
//    std::cout << std::endl << "- вместимость рюкзака  : " << V;
//    std::cout << std::endl << "-- количество ------ продолжительность -- ";
//    std::cout << std::endl << "    предметов          вычисления  ";
//    for (int i = 14; i <= NN; i++)
//    {
//        t1 = clock();
//        maxcc = knapsack_s(V, i, v, c, m);
//        t2 = clock();
//        std::cout << std::endl << "       " << std::setw(2) << i
//            << "               " << std::setw(5) << (t2 - t1);
//    }
//    std::cout << std::endl << std::endl;
//    system("pause");
//    return 0;
//}