// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  TMatrix<int> a(5), b(5), c(5), c2(5);
  TVector<int> a1(5), b1(5), c3(5), c4(5), d(4), f(4), r2(4), r3(4), g(4);
  int c5, r;
  int i, j;
  d[0] = 0;
  d[1] = 0;
  d[2] = 0;
  d[3] = 1;
  f[0] = 0;
  f[1] = 0;
  f[2] = 2;
  f[3] = 3;

  setlocale(LC_ALL, "Russian");
  cout << "Тестирование программ поддержки представления треугольных матриц"
    << endl;
  for (i = 0; i < 5; i++)
  {
      a1[i] = 1;
      // {1, 1, 1, 1, 1}
      b1[i] = 2;
      // {2, 2, 2, 2, 2}
  }
  for (i = 0; i < 5; i++)
    for (j = i; j < 5; j++ )
    {
      a[i][j] =  i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  c = a + b;
  c2 = b - a;
  c3 = a1 + b1;
  // {3, 3, 3, 3, 3}
  c4 = a1 - b1;
  // {-1, -1, -1, -1, -1}
  c5 = a1 * b1;
  // {10}
  r = d * f;
  // {3}
  r2 = d + f;
  // {0, 0, 2, 4}
  r3 = d - f;
  // {0, 0, -2, -2}
  g = f - 3;
  // {-3, -3, -1, 0}



  // в векторах d и f разные стартовые индексы, но всё работает правильно

  // отрицательные элементы в векторе отображаются правильно, в матрице нет
  // понятие не имею, почему (если дело как раз в стартовом индексе)

  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;
  cout << "Matrix c2 = a - b" << endl << c2 << endl;
  cout << "Vector c3 = a1 + b1" << endl << c3 << endl;
  cout << "Vector c4 = a1 - b1" << endl << c4 << endl;
  cout << "Vector c5 = a1 * b1" << endl << c5 << endl;
  cout << "Vector r = d * f" << endl << r << endl;
  cout << "Vector r2 = d + f" << endl << r2 << endl;
  cout << "Vector r3 = d - f" << endl << r3 << endl;
  cout << "Vector g = f - 3" << endl << g << endl;
}
//---------------------------------------------------------------------------
