#include <cmath>
#include <iostream>

using namespace std;

int main() {
  string word;              // declared a string
  int number = 5;           // declared a number
  int power; // declared power
  float bigNumber = 10.123; // declared a big number
  char letter = 'a';        // declared a letter

  cout << "What is the word of the day? ";
  cin >> word;
  cout << letter << endl;
  cout << "The word of the day is " + word + ", which has a length of "
       << word.length() << " letters.\n";
  cout << number + number << endl;
  cout << bigNumber * bigNumber << endl;
  cout << bigNumber - number << endl;
  cout << number / 2 << endl;
  cout << number % 2 << endl;
  number = number + 59;
  cout << "The new number is " << number << endl;
  cout << "The square root of the number is " << sqrt(number) << endl;
  cout << "The big number rounded is " << round(bigNumber) << endl;
  cout << "The log of the number is " << log(number) << endl;
  cout << "What power should we apply to the number " << number << "?\n";
  cin >> power;
  cout << pow(number, power)<<endl;
}
