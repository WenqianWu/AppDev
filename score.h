#pragma once
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// usually these information are given in a header files:
//  1. Constant definition (e.g., #define PI 3.1415)
//  2. data structure definitions
//  3. function prototyes (a.k.a function declaration)

#define MAX 30

void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_result(int[], int[]);