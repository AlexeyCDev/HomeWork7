#include "iostream"
using namespace std;

int main()
{

int mainNumber;
 cout <<"Enter a four-digit number";
 cin>>mainNumber;
 cout << "Given an integer: " << mainNumber << endl;
 cout << "Number inside out: ";
 cout << mainNumber % 10; // 5678 % 10 = 8
mainNumber /= 10;
 cout << mainNumber % 10;
mainNumber /= 10;
 cout << mainNumber % 10;
mainNumber /= 10;
 cout << mainNumber % 10;
mainNumber /= 10;

cout << endl << endl;

return 0;
}
