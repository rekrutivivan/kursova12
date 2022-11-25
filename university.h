//
// Created by Ivan on 02.11.2022.
//

#ifndef KURSOVA_UNIVERSITY_H
#define KURSOVA_UNIVERSITY_H
#include <utility>
#include <vector>
#include "kafedra.h"
using namespace  std;
class university {
private:
    kafedra array[10];
public:
    // клас-ітератор
    class iter{
    private:
        kafedra *p;
    public:
        iter(kafedra* ptr) : p(ptr) {}//конструктор ініціалізації
        kafedra& operator*() const { return *p; }//перевантажена операція розіменування
        kafedra* operator->() { return p; }//перевантажена операція розіменування
        iter& operator++() { p++; return *this; }//перевантажена операція інкремента
        iter operator++(int) { iter tmp = *this; ++(*this); return tmp; }//перевантажена
        //операція інкремента
        friend bool operator== (const iter& a, const iter& b) { return a.p == b.p;
        };//перевантажена операція порівняння
        friend bool operator!= (const iter& a, const iter& b) { return a.p != b.p;
        };//перевантажена операція порівняння
    };
    iter begin() { return iter(&array[0]); }//метод, що повертає перший елемент
    iter end() { return iter(&array[10]); }//метод, що повертає останній елемент
    university();//конструктор без параметрів
    void display();//метод для виведення масиву об'єктів
};


#endif //KURSOVA_UNIVERSITY_H
