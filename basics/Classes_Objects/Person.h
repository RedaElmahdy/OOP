#ifndef PERSON_H
#define PERSON_H
#include <string>
#pragma once

class Person
{
private:
    std::string name;
    int age;

public:
    Person();

    void set_name(std::string n);
    void set_age(int a);

    std::string get_name();
    int get_age();

    void print();

    ~Person();
};

#endif