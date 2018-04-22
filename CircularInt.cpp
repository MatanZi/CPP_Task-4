//
// Created by Matan Zilka on 4/18/2018.
//


#include "CircularInt.hpp"

CircularInt::CircularInt() {

}

CircularInt::CircularInt(int minHour, int maxHour) : minHour(minHour), maxHour(maxHour) {}

CircularInt::~CircularInt() {

}

int CircularInt::getMinHour() const {
    return minHour;
}


void CircularInt::setMinHour(int minHour) {
    CircularInt::minHour = minHour;
}

int CircularInt::getMaxHour() const {
    return maxHour;
}

void CircularInt::setMaxHour(int maxHour) {
    CircularInt::maxHour = maxHour;
}

void CircularInt::setCircle(int circle) {
    CircularInt::circle = circle;
}

int CircularInt::getCurrentHour() const {
    return currentHour;
}

void CircularInt::setCurrentHour(int currentHour) {
    CircularInt::currentHour = currentHour;
}

int CircularInt::getCircle() const {
    return circle;
}

int CircularInt::runFormola() {
    return this->currentHour + (ceil(((double) this->minHour - (double) this->currentHour) / (double) this->circle)) * this->circle;
}

//--------------- Opertors -------------------

CircularInt operator+ ( CircularInt& oldObj_1, const CircularInt& oldObj_2) {
    CircularInt newObj;
    oldObj_1.setCurrentHour(oldObj_1.getCurrentHour() + oldObj_2.getCurrentHour());
    oldObj_1.setCurrentHour(oldObj_1.runFormola());
    return oldObj_1;
}
/*
CircularInt operator +(const int a, const int b){
    CircularInt newObj;
    newObj.currentHour = a+b;
    newObj.currentHour = newObj.runFormola();
    return newObj;
}*/

CircularInt CircularInt::operator- () {
    CircularInt newObj = *this;
    newObj.currentHour =  maxHour - currentHour;
    newObj.currentHour = newObj.runFormola();
    return newObj;
}

CircularInt CircularInt::operator-(CircularInt &oldObj) {
    CircularInt newObj;
    newObj.currentHour = newObj.maxHour - oldObj.getCurrentHour();
    newObj.currentHour = runFormola();
}

CircularInt CircularInt::operator+=(const int toAdd) {
    this->currentHour = this->currentHour + toAdd;
    this->currentHour = this->runFormola();
    return *this;
}
CircularInt& CircularInt::operator++() {
    this->currentHour = this->currentHour+1;
    this->currentHour = this->runFormola();
    return *this;
}

CircularInt CircularInt::operator++(const int toAdd) {
    CircularInt oldObj = *this;
    this->currentHour = this->currentHour+1;
    this->currentHour = this->runFormola();
    return oldObj;
}

CircularInt CircularInt::operator/(int toDiv) {
    this->currentHour = this->currentHour/toDiv;
    this->currentHour = this->runFormola();
    return *this;
}

CircularInt& CircularInt::operator--() {
    this->currentHour = this->currentHour-1;
    this->currentHour = this->runFormola();
    return *this;
}

CircularInt CircularInt::operator--(const int toRemove) {
    CircularInt oldObj = *this;
    this->currentHour = this->currentHour-1;
    this->currentHour = this->runFormola();
    return oldObj;
}
/*
CircularInt CircularInt::operator-(const int a, const int b){
    this->currentHour = (this->maxHour+a) -b;
    this->currentHour = this->runFormola();
    return *this;
}*/

CircularInt operator-(const int number, CircularInt oldObj){
    CircularInt newObj;
    newObj.currentHour = number - oldObj.currentHour;
    newObj.currentHour = newObj.runFormola();
    return newObj;
}


CircularInt operator+(CircularInt a, CircularInt b) {
    CircularInt newObj;
    newObj.currentHour = a.currentHour+b.currentHour;
    newObj.currentHour = newObj.runFormola();
    return newObj;
}

CircularInt CircularInt::operator-(int a) {
    this->currentHour = this->maxHour - a;
    this->currentHour = this->runFormola();
    return *this;
}

CircularInt& CircularInt::operator*=(const int toMulti) {
    this->currentHour = this->currentHour*toMulti;
    this->currentHour = this->runFormola();
    return *this;
}

CircularInt& CircularInt::operator-=(const int toRemove) {
    this->currentHour = this->currentHour - toRemove;
    this->currentHour = this->runFormola();
    return *this;
}


ostream &operator<<(ostream &os, const CircularInt &anInt) {
    os << "minHour: " << anInt.minHour << " maxHour: " << anInt.maxHour << " circle: " << anInt.circle
       << " currentHour: " << anInt.currentHour;
    return os;
}

