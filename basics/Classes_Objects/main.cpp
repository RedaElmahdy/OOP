#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
  Person obj1;
  obj1.set_name("Reda");
  obj1.set_age(21);
  obj1.print();

  Person obj2;
  obj2.set_name("Osama");
  obj2.set_age(38);
  obj2.print();

  return 0;
}