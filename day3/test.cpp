#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <ctype.h>
#include <list>

using namespace std;

int main() {
  string line;
  int bit0;  
  int bit1;
  int bit2;
  int bit3;
  int bit4;
  int bit5;
  int bit6;
  int bit7;
  int bit8;
  int bit9;
  int bit10;
  int bit11;
  typedef struct {
    int zero;//[1000];
    int one;//[1000];
  } bit;
  bit zero;
  zero.zero = 0;
  zero.one = 0;
  // for(int i = 0; i < 1000; i++) {
    // zero.zero[i] = 0;
  // }
  vector<string> lines;  
  ifstream myfile ("test.txt");
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      lines.push_back(line);
    }
  }
  
  vector<int> answer;
  answer.push_back(1);
  answer.push_back(0);
  answer.push_back(1);
  answer.push_back(1);
  answer.push_back(1);

  // cout << "size is " << lines.size() << endl;
  for(int i = 0; i < 5; i++) {
    cout << "checking bit #: " << i + 1 << endl;
    for(int j = 0; j < lines.size()/*12*/; j++) {
      cout << "checking element #" << j << ": " << lines[j] << endl;
      if((lines[j][i] - '0' != answer[i])) {
        if(lines.size() == 1) {
          break;
        }
        cout << "erasing " << lines[j] << endl;
        lines.erase(lines.begin() + j);
        j -= 1;
      }
    }
  }
  cout << lines.size() << endl;
  cout << lines[0] << endl;
}