#include <bits/stdc++.h>
using namespace std;

bool FROM_FILE = true;

class Solution {
 public:
  int solve(vector<int> &arr) { return 0; }
};

int main() {
  int test;
  ifstream f_input("input.txt");
  istream &scanner = FROM_FILE ? f_input : cin;
  if (!scanner) {
    cout << "File not found\n";
  }
  scanner >> test;
  while (test--) {
    int size;
    scanner >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
      scanner >> arr[i];
    }
    cout << "array is \n";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << '\t';
    }
    cout << endl;
  }
  return 0;
}

/*
2
3
1 2 3
4
1 2 3 4

*/
