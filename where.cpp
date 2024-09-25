#include "findchar.h"
#include <cassert>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;


int main()
{
  string searchString{}, targetString{};

  assert(findInString("apples", 'e') == 4);
  assert(findInString("apples", 'g') == -1);
  assert(findInString("apples", "led") == -1);
  assert(findInString("apples", "les") == 3);
  assert(findInString("banana", "na") == 2);
  assert(findInString("Bananaglue", "glu") == 6);
  assert(findInString("Bananaglue", "") == -1);
  assert(findInString("Bananaglue", "apple") == -1);
  assert(findInString("Beckman", "Braxton") == -1);
  assert(findInString("The quick, agile fox", ' ') == 3);


  cout << "Welcome to the string finder demo! Here, you'll first enter the string you'd like to search, then you'll "
          "enter the character/substring you'd like to search for."
       << endl
       << "\nFirst, please enter the string you'd like to search through: ";
  getline(cin, searchString);
  // cin >> searchString;
  cout << "Next, please enter the string/character you'd like to find: ";
  getline(cin, targetString);
  // cin >> targetString;

  cout << "The string that you are searching for begins in position " << findInString(searchString, targetString) + 1
       << " in the string." << endl;

  cout << "Thank you for using string finder!\n";
}
