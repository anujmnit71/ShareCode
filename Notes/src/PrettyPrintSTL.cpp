
#include <bits/stdc++.h>

#include "prettyprint.hpp"
using namespace std;

bool FROM_FILE = true;

int main() {
  // Pretty-print of STL using "prettyprint.hpp"
  // without this STL data structures wont be printed
  stack<int> st;
  vector<int> vec = {1, 2, 3};
  set<int> s;
  map<char, vector<int>> ch_vec;
  map<char, vector<int>>::iterator it;

  st.push(1);
  st.push(2);
  ch_vec['a'] = vec;
  ch_vec['b'] = vec;
  s.insert(1);
  s.insert(2);

  cout << "VECTOR : " << vec << "\n";
  cout << "SET : " << s << "\n";
  cout << "MAP : " << ch_vec << "\n";

  it = ch_vec.find('a');
  cout << "using iterator -- " << *it << '\n';

  // print content:
  cout << "elements in mymap:" << '\n';
  cout << "a => " << ch_vec.find('a')->second << '\n';
  return 0;
}
