#include "pch.h"
#include "framework.h"
#include "Sample.h"
#include <iostream>
#include <string>
using namespace std;

int getRandomNumber() {
	return rand();
}
int sumNumbers(int a, int b) {
	int sum = a + b;
	return sum;
}
int* getPointer() {
	int a = 6;
	return &a;
}
void FillString(char* myString, int length) {
	strcpy_s(myString, length, "hello");
}
bool isThisCpp() {
	return true;
}