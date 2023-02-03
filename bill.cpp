//This program will read in the quantity of a particular item and its price.
//It will then print out the total price.
//The input will come from the keyboard and the output will go to 
//the screen.

//Sarah Bender

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int quantity;  //contains the amount of items purchased
  float itemPrice;  //contains the price of each item
  float totalBill;  //contains the total bill

  cout << setprecision(4) << fixed << showpoint;  //formatted output

  cout << "Please input the number of items bought" << endl;
  cin >> quantity;
  cout << "Please input the price of each item" << endl;
  cin >> itemPrice;
  cout << "The total bill is " << quantity * itemPrice << endl;

  return 0;
}

//Rerun the program with fixed removed from the instruction and record your results. What do you think the fixed attribute in the cout statement does?
//My result was that the totall bill was 2.4e+02. I think that the fixed statement is what specifies that any number in the output should be represented as a decimal. 

//Rerun the program with the setprecision set to 4 and record your results. What do you think the setprecision attribute in the cout statement does?
//My result was that the total bill was 241.5600. I think that the setprecision attribute is what specifies how many decimal places any number in the output should have. 
