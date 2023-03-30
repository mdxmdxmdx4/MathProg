#pragma once
#pragma once 
namespace combi
{
    struct  subset       // генератор  множества всех подмножеств    
    {
        short  n,                // количество элементов исходного множества < 64  
            sn,               // количество элементов текущего  подмножества
            * sset;             // массив индексов текущего подмножества 
        unsigned __int64 mask;    // битовая маска  
        subset(short n = 1);      // конструктор(количество элементов исходного множества) 
        short getfirst();         // сформормировать массив индексов по битовой маске    
        short getnext();          // ++маска и сформировать массив индексов 
        short ntx(short i);
        unsigned __int64 count();
        void reset();
    };

    struct  xcombination           // генератор  сочетаний (эвристика) 
    {
        short  n,                  // количество элементов исходного множества  
            m,                  // количество элементов в сочетаниях 

            * sset;            	  // массив индексов текущего сочетания  
        xcombination(
            short n = 1, //количество элементов исходного множества  
            short m = 1  // количество элементов в сочетаниях
        );
        void reset();              // сбросить генератор, начать сначала 
        short getfirst();          // сформировать первый массив индексов    
        short getnext();           // сформировать следующий массив индексов  
        short ntx(short i);        // получить i-й элемент массива индексов  
        unsigned __int64 count() const;
        unsigned __int64 nc;       // номер 
    };
    struct  permutation    // генератор   перестановок     
    {
        const static bool L = true;  // левая стрелка 
        const static bool R = false; // правая стрелка   

        short  n,              // количество элементов исходного множества 
            * sset;           // массив индексов текущей перестановки
        bool* dart;           // массив  стрелок (левых-L и правых-R) 
        permutation(short n = 1); // конструктор (количество элементов исходного множества) 

        void reset();                // сбросить генератор, начать сначала 

        __int64 getfirst();          // сформировать первый массив индексов    
        __int64 getnext();           // сформировать случайный массив индексов  

        short ntx(short i);          // получить i-й элемент масива индексов 
        unsigned __int64 count() const;
        unsigned __int64 np;         // номер перествновки 0,... count()-1 

    };
    struct  accomodation  // генератор размещений 
    {
        short  n,      // количество элементов исходного множества  
            m,      // количество элементов в размещении 
            * sset;      // массив индесов текущего размещения  
        xcombination* cgen;   // указатель на генератор сочетаний
        permutation* pgen;   // указатель на генератор перестановок
        accomodation(short n = 1, short m = 1);  // конструктор  
        void reset();     // сбросить генератор, начать сначала 
        short getfirst();     // сформировать первый массив индексов   
        short getnext();      // сформировать следующий массив индексов  
        short ntx(short i);   // получить i-й элемент массива индексов  
        unsigned __int64 na;  // номер размещения 0, ..., count()-1 
        unsigned __int64 count() const;  // общее количество размещений 
    };

}