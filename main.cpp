#include "all.h"
using namespace std;

/*
#include <bits/stdc++.h>
using namespace std;
*/
int main() {
  string str;
  cin >> str;
  cout << "size:" << str.size() << endl;
  int count = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str.at(i) == 'O') {
      count++;
    }
  }

  cout << count << endl;
}
