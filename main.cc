#include <string.h>
#include <iostream>

using namespace std;

string Longest(string word1, string word2) {
  return (word1.length() > word2.length()) ? word1 : word2;
}

bool IsLetter(int num) {
  return ((num > 64 && num < 91) || (num > 97 && num < 123));
}

int Alphabetize(string word1, string word2) {
  if (word1 == word2) {
    return 0;
  }
  int max = Longest(word1, word2).length();
  for (int i=0; i<max; ++i) {
    int first, second;
    if (word1.length() >= i) {
      first = int(word1[i]);
      if (IsLetter(first)) { first = ((first-64)%32) + 64; }
    }
    if (word2.length() >= i) {
      second = int(word2[i]);
      if (IsLetter(second)) { second = ((second-64)%32) + 64; }
    }
    if (first == second) {
    } else if (first < second) {
      return 1;
    } else {
      return 2;
    }
  }
  return 0;
}

int main() {
  string word1, word2;

  cout << "Word 1: ";
  cin >> word1;
  cout << "Word 2: ";
  cin >> word2;
  
  cout << Alphabetize(word1, word2) << endl;
  return 0;
}

