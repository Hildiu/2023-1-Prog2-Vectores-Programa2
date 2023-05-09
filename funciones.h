//
// Created by MARIA HILDA BERMEJO RIOS on 5/8/23.
//

#ifndef INC_02_VECTORES_FUNCIONES_H
#define INC_02_VECTORES_FUNCIONES_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>
#include <random>
using namespace std;

typedef int number;
typedef vector<int> container;
typedef random_device device;
typedef uniform_int_distribution<number> distribution;

number randint(number first, number last);
void imprimir(container& vec);
void remover_multiplo(container& vec, number multiplo);
void ejemplo2();

#endif //INC_02_VECTORES_FUNCIONES_H
