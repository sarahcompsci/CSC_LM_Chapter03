//This program will read in three grades from the keyboard and will print
//the average (to two decimal places) of those grades to the screen.

//Sarah Bender

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int grade1;
  float grade2;
  int grade3;

  cout << setprecision(2) << fixed << showpoint;
  
  cout << "Please input the first grade" << endl;
  cin >> grade1;
  
  cout << "Please input the second grade" << endl;
  cin >> grade2;
  
  cout << "Please input the third grade" << endl;
  cin >> grade3;
  
  cout << "The average of the three grades is " << (grade1 + grade2 + grade3) / 3 << endl;
}
