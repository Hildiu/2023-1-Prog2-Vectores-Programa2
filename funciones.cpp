//
// Created by MARIA HILDA BERMEJO RIOS on 5/8/23.
//

#include "funciones.h"

device dev;

number randint (number first, number last)
{
  distribution dist(first, last);
  return dist(dev);
}

void imprimir(container& vec)
{
  for (const auto & item: vec)
    cout << setw(3) << item;
  cout << endl;
}


void remover_multiplo(container& vec, number multiplo)
{
  auto last = remove_if(begin(vec), end(vec),
                        [multiplo](number n){ return n % multiplo == 0; });
  vec.erase(last, end(vec));
}

void ejemplo2()
{
  number n;

  cout << "ingrese un número: ";
  cin >> n;
  container vec(n);
  for (auto & item: vec)
    item = randint(1, 30);
  imprimir(vec);
  remover_multiplo(vec, 3);
  imprimir(vec);
}


