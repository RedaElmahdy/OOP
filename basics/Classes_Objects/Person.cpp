#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person() : name("Unknown"), age(0)
{
}

Person::~Person()
{
}

void Person::set_name(string n)
{
  name = n;
}
void ::Person::set_age(int a)
{
  age = a;
}

string Person::get_name()
{
  return name;
}

int Person::get_age()
{
  return age;
}

void ::Person::print()
{
  cout << "Name is: " << name << endl;
  cout << "Age is: " << age << endl;
}