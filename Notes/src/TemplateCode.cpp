
#include <bits/stdc++.h>

#include <algorithm>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "../../prettyprint.hpp"


#define FROM_FILE true

using namespace std;

class Solution {
 public:
  int func(vector<int>& prices) { return 0; }
};

int main() {
  int test;
  // srand (time(NULL));
  ifstream ptrfile("ip");
  istream& infile = FROM_FILE ? ptrfile : cin;
  const char ch = ' ';
  vector<int> prices;
  vector<int> prices1(3, 10);
  vector<int> prices2(5);
  infile >> test;
  while (test--) {
    int size;
    infile >> size;
    // if not comma separated
    for (int i = 0; i < size; i++) {
      infile >> arr[i];
    }

    // for comma separated
    string input_str;
    getline(infile, input_str);  // to read the '\n' character at end of line
    getline(infile, input_str);

    // do not use this
    //		stringstream ss(input_str);
    //		int i;
    //		while (ss >> i){
    //		  prices.push_back(i);
    //		  //prices[i] = rand();
    //		  if (ss.peek() == ',')
    //		    ss.ignore();
    //		}
    vector<int> prices;
    stringstream linestream(input_str);
    string value;
    while (getline(linestream, value, ch)) {
      prices.push_back(stoi(value));
    }
    int n = prices.size();
    cout << "anuj verma total elements " << n << endl;
    for (unsigned int i = 0; i < prices.size(); i++) {
      cout << prices[i] << '\t';
    }
    cout << endl;
  }
  map<char, vector<int>> mymap;
  map<char, vector<int>>::iterator it;
  vector<int> prices1 = {1, 2, 3};
  vector<int> prices2 = {4, 5, 6};

  mymap['a'] = prices;
  mymap['b'] = prices1;
  mymap['c'] = prices2;
  mymap['d'] = prices2;

  set<int> s;
  s.insert(1);
  s.insert(2);
  cout << "SET : " << s << "\n";
  cout << "MAP : " << mymap << "\n";
  it = mymap.find('b');
  cout << *it << '\n';

  // print content:
  cout << "elements in mymap:" << '\n';
  cout << "a => " << mymap.find('a')->second << '\n';
  cout << "c => " << mymap.find('c')->second << '\n';
  cout << "d => " << mymap.find('d')->second << '\n';
  return 0;
}

/*
2
3
1,2,3
4
1,2,3,4


*/
