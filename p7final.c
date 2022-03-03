#include<stdio.h>

struct _fraction
{
int num, den;
};

typedef struct _fraction Fraction;

  int gcd(int a, int b){
    int t;
    while(b != 0)
      {
        t = b;
        b = a%b;
        a = t;
      }
    return a;
  }

Fraction input_fraction(){
  Fraction f;
  printf("input a fraction\n");
  scanf("%d%d", &f.num, &f.den);
  return f;
}

int main(){
  Fraction f;
  f = input_fraction();
  printf("%d/%d\n", f.num, f.den);
  return 0;
  }