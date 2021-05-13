#include <iostream>
#include <string>
using namespace std;

class Triangle
{
private:
  int a;
  int b;
  int c;

public:
  Triangle()
  {
    a = 0;
    b = 0;
    c = 0;
  }
  void Set_ABC(int new_a, int new_b, int new_c)
  {
    a = new_a;
    b = new_b;
    c = new_c;
  }
  void Print_Triangle()
  {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << endl;
  }
  bool Check_equilateral()
  {
    if (a == b && b == c && c == a)
    {
      return true;
    }
    return false;
  }
  bool Check_rectangular()
  {
    if (pow(a, 2) + pow(b, 2) == pow(c, 2))
    {
      return true;
    }
    return false;
  }

};


int main()
{
  Triangle my_triangle;
  my_triangle.Set_ABC(3, 4, 5);
  my_triangle.Print_Triangle();
  
  if (my_triangle.Check_rectangular())
  {
    cout << "Triangle is rectangular" << endl;
  }
  else
  {
    cout << "Triangle isn't rectangular" << endl;
  }

  if (my_triangle.Check_equilateral())
  {
    cout << "Triangle is equilateral" << endl;
  }
  else
  {

    cout << "Triangle isn't equilateral" << endl;
  }

  return 0;
}