//This program will determine the batting average of a player.
//The number of hits and at bats are set internally in the program.

//Sarah Bender

#include <iostream>
#include <iomanip>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{ 
  float batAvg;
  cout << setprecision(6) << fixed << showpoint;
  batAvg = HITS / AT_BAT;  //an assignment statement
  batAvg = static_cast<float>(HITS)/AT_BAT;
  cout << "The batting average is " << batAvg << endl;

  return 0;
}

//Run this program and record the results. 
//The batting average is 0

//Does changing the type of batAvg from int to float solve the problem? Make that change and run the program again and record the result. 
//The batting average is still 0, which means that changing the type to float didn't solve the problem.
