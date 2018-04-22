//
// Created by Matan Zilka on 4/18/2018.
//

#include "iostream"
#include <cmath>

using namespace std;

#ifndef CPP_TASK_4_CIRCULARINT_HPP
#define CPP_TASK_4_CIRCULARINT_HPP

class CircularInt {
private:
    int minHour;
    int maxHour;
    int circle;
    int currentHour;

public:
    CircularInt();

    int getMinHour() const;

    void setMinHour(int minHour);

    int getMaxHour() const;

    void setMaxHour(int maxHour);

    virtual ~CircularInt();

    CircularInt(int minHour, int maxHour);

    int getCircle() const;

    void setCircle(int circle);

    int getCurrentHour() const;

    void setCurrentHour(int currentHour);

    int runFormola();


        //----------Opertors-----------------

    CircularInt operator+=(const int toAdd);

    CircularInt operator++(const int toAdd);

    CircularInt& operator++();

    CircularInt operator/(int toDiv);

    CircularInt& operator--();

    CircularInt operator-- (const int toRemove);

    //CircularInt operator%= (const int toDiv);

    CircularInt operator-();

    CircularInt operator-(CircularInt& oldObj);

    //CircularInt operator-(const int a , const int b);

    CircularInt operator-(int a);

    friend CircularInt operator+(CircularInt a, CircularInt b);

    friend CircularInt operator-(const int number, CircularInt oldObj);

    CircularInt& operator-= (const int toRemove);

    CircularInt& operator*= (const int toMulti);

    friend ostream &operator<<(ostream &os, const CircularInt &anInt);


    //----------End of Opertors-------------

};

#endif //CPP_TASK_4_CIRCULARINT_HPP
