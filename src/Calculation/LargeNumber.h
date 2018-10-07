#pragma once
#include <string>
#ifndef MAX
#define MAX 1024
#endif

struct Number {
  int bits[MAX];
  int len;
  bool negative;

  Number();
  Number(int n);
  Number(long n);
  Number(const Number &other);
  Number &operator=(const Number &other);

  friend bool operator==(const Number &a, const Number &b);
  friend bool operator!=(const Number &a, const Number &b);
};

Number Add(const Number &a, const Number &b);
Number Sub(const Number &a, const Number &b);
Number Mul(const Number &a, const Number &b);
Number Div(const Number &a, const Number &b);

std::string ToString(const Number &a);

