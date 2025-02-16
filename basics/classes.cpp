#include <iostream>
#include <string>
using namespace std;

// Define a class named 'Book'
class Book
{
private: // => Access Modifier Private
  // data member

  string bookName;
  string author;
  float price;

public: // => Access Modifier Public
  // member methods

  // Seter The Methods
  void setBookName(string name)
  {
    bookName = name;
  };
  void setAuthor(string athr)
  {
    author = athr;
  }
  void setPrice(float prc)
  {
    price = prc;
  }

  // Geter The Methods
  string getBookName()
  {
    return bookName;
  };
  string getAuthor()
  {
    return author;
  };
  float getPrice()
  {
    return price;
  }

  // Print class member
  void print()
  {
    cout << "The Book Name Is: \"" << bookName << "\"" << endl;
    cout << "The Author Name Is: " << author << endl;
    cout << "The Price => " << price << "$" << endl;
  }
};

int main()
{
  // Create an object of the Book class
  Book cPlusPlus;
  // accessing member function
  cPlusPlus.setBookName("C++ for beginners");
  cPlusPlus.setAuthor("Jak G.");
  cPlusPlus.setPrice(99.9);
  cPlusPlus.print();

  return 0;
}