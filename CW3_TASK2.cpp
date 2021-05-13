#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  fstream in_file1, in_file2;

  in_file1.open("in1.txt", fstream::in | fstream::out);
  in_file2.open("in2.txt", fstream::in | fstream::out);

  ofstream out_res("out.txt");
  string first_univ, second_univ;

  while (!(in_file1.eof()))
  {
    getline(in_file1, first_univ, '\n');
    in_file2.seekg(0, in_file2.beg);
    while (!(in_file2.eof()))
    {
      getline(in_file2, second_univ, '\n');
      if (first_univ == second_univ)
      {
        out_res << first_univ << endl;
      }
    }
    in_file2.clear();
  }
  in_file1.close();
  in_file2.close();
  


  return 0;
}