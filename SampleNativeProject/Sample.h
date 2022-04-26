#pragma once
#ifdef SAMPLE_EXPORTS
#define SAMPLE_API __declspec(dllexport)
#else
#define SAMPLE_API __declspec(dllimport)
#endif

extern "C" SAMPLE_API int getRandomNumber();
extern "C" SAMPLE_API bool isThisCpp();
extern "C" SAMPLE_API int sumNumbers(int a,int b);
extern "C" SAMPLE_API int* getPointer();
extern "C" SAMPLE_API void FillString(char* myString, int length);

