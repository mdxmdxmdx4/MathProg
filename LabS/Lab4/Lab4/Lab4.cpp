#include <iostream>
#include <random>
#include <string>

#include <algorithm>
#include <ctime>
#include <cmath>
#include <memory.h>
#include <iomanip>

#include "Levenshtein.h"
#include "MultyMatrix.h"

using namespace std;

const int S1_SIZE = 300;
const int S2_SIZE = 200;
#define N 6

char generateRandomChar() {
    return 'a' + rand() % 26;
}

int main() {
    // дистанция Леванштейна
    //srand(time(nullptr));

    //char S1[S1_SIZE];
    //char S2[S2_SIZE];

    //// Заполнение массива S1
    //for (int i = 0; i < S1_SIZE; i++) {
    //    S1[i] = generateRandomChar();
    //}

    //// Заполнение массива S2
    //for (int i = 0; i < S2_SIZE; i++) {
    //    S2[i] = generateRandomChar();
    //}

    //// Вывод массива S1
    //cout << "S1: ";
    //for (int i = 0; i < S1_SIZE; i++) {
    //    cout << S1[i];
    //}
    //cout << endl;

    //// Вывод массива S2
    //cout << "S2: ";
    //for (int i = 0; i < S2_SIZE; i++) {
    //    cout << S2[i];
    //}
    //cout << endl;


    //clock_t t1 = 0, t2 = 0, t3 = 0, t4 = 0;

    //cout << "\n\n-- расстояние Левенштейна -----";
    //cout << "\n\n--длина --- рекурсия -- дин.програм. ---\n";
    //int x = 0;
    //for (int i = 2; i < S1_SIZE/20; i++)
    //{
    //    t1 = clock(); levenshtein_r(i, S1, i - 2, S2); t2 = clock(); 
    //    t3 = clock(); levenshtein(i, S1, i - 2, S2); t4 = clock();
    //    std::cout << std::right << std::setw(2) << i - 2 << "/" << std::setw(2) << i
    //        << "        " << std::left << std::setw(10) << (t2 - t1)
    //        << "   " << std::setw(10) << (t4 - t3) << std::endl;


    //}


    ////for (int i = 1000; i < S1_SIZE; i += 400)
    ////{
    ////    /*       t1 = clock(); levenshtein_r(i, S1, i - 2, S2); t2 = clock(); */

    ////    t3 = clock(); levenshtein(i, S1, i - 2, S2); t4 = clock();
    ////    std::cout << std::right << std::setw(2) << i - 2 << "/" << std::setw(2) << i
    ////        << "        " << std::left << std::setw(10) << (t2 - t1)
    ////        << "   " << std::setw(10) << (t4 - t3) << std::endl;


    ////} динамическое программирование при кол-ве символов 3000

    int Mc[N + 1] = { 100,15,20,43,70,40,71 }, Ms[N][N], r = 0, rd = 0;

    memset(Ms, 0, sizeof(int) * N * N);
    r = OptimalM(1, N, N, Mc, OPTIMALM_PARM(Ms));
    cout << endl;
    cout << endl << "-- расстановка скобок (рекурсивное решение) "
        << endl;
    cout << endl << "размерности матриц: ";
    for (int i = 1; i <= N; i++) std::cout << "(" << Mc[i - 1] << "," << Mc[i] << ") ";
    cout << endl << "минимальное количество операций умножения: " << r;
    cout << endl << std::endl << "матрица S" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << std::endl;
        for (int j = 0; j < N; j++)  cout << Ms[i][j] << "  ";
    }
    cout << std::endl;

    memset(Ms, 0, sizeof(int) * N * N);
    rd = OptimalMD(N, Mc, OPTIMALM_PARM(Ms));
    cout << endl
        << "-- расстановка скобок (динамичеое программирование) " << endl;
    cout << endl << "размерности матриц: ";
    for (int i = 1; i <= N; i++)
        std::cout << "(" << Mc[i - 1] << "," << Mc[i] << ") ";
    cout << endl << "минимальное количество операций умножения: "
        << rd;
    cout << endl << endl << "матрица S" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << std::endl;
        for (int j = 0; j < N; j++)  cout << Ms[i][j] << "  ";
    }
    cout << endl << endl;
    system("pause");

    return 0;

}