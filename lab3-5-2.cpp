//This program wil input the amount of chairs sold for each style. It will
//print the total dollar sales of each style as well as the total sales 
//of all chairs in fixed point notation with two decimal places.

//Sarah Bender

#include <iostream>
#include <iomanip>
using namespace std;

const float AC_PRICE = 85.00;
const float M_PRICE = 57.50;
const float FC_PRICE = 127.75;

int main()
{
  int acQuantity;
  int mQuantity;
  int fcQuantity;
  float acSales;
  float mSales;
  float fcSales;
  float totalSales;

  cout << setprecision(2) << fixed << showpoint;

  cout << "Please input the number of American Colonial chairs sold" << endl;
  cin >> acQuantity;

  cout << "Please input the number of Modern chairs sold" << endl;
  cin >> mQuantity;

  cout << "Please input the number of French Classical chairs sold" << endl;
  cin >> fcQuantity;

  acSales = AC_PRICE * acQuantity;
  mSales = M_PRICE * mQuantity;
  fcSales = FC_PRICE * fcQuantity;
  totalSales = acSales + mSales + fcSales;

  cout << "The total sales of American Colonial chairs " << acSales << endl;
  cout << "The total sales of Modern chairs " << mSales << endl;
  cout << "The total sales of French Classical chairs " << fcSales << endl;
  cout << "The total sales of all chairs " << totalSales << endl;

  return 0;
}
