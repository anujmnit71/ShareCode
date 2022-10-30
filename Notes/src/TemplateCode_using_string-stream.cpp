
#include <bits/stdc++.h>

#include "prettyprint.hpp"
using namespace std;

bool FROM_FILE = true;

class Solution {
 public:
  int solve(vector<int>& arr) { return 0; }
};

int main() {
  ifstream f_input("read_line.txt");
  istream& scanner = FROM_FILE ? f_input : cin;
  if (!scanner) {
    cout << "File not found\n";
  }

  const char ch = ' ';
  vector<int> vec;
  string str;
  while (getline(scanner, str)) {
    int val;
    stringstream s_in(str);
    while (s_in >> val) {
      vec.push_back(val);
    }
    cout << "vec == " << vec << endl;
    vec.clear();
  }

  return 0;
}
