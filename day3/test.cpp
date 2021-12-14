#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <ctype.h>
#include <list>

using namespace std;

typedef struct {
    int zero;//[1000];
    int one;//[1000];
  } bit;

int findmostcommon(vector<string> lines, bit zero, int index) {
  // for(int i = 0; i < 5; i++) {
    for(int j = 0; j < lines.size(); j++) {
      if(lines[j][index] - '0' == 1) {
        zero.one++;
      } else {
        zero.zero++;
      }
    }
    cout << "# of zeroes: " << zero.zero << endl;
    cout << "# of ones: " << zero.one << endl;
    if(zero.zero > zero.one) {
      cout << "returning zero\n";
      return 0;
    } else {
      cout << "returning one\n";
      return 1;
    }
    zero.zero = 0;
    zero.one = 0;
  // }
}

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
  
  bit zero;
  zero.zero = 0;
  zero.one = 0;
  // for(int i = 0; i < 1000; i++) {
    // zero.zero[i] = 0;
  // }
  vector<string> lines;  
  ifstream myfile ("day3.txt");
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      lines.push_back(line);
    }
  }

  // findmostcommon(lines, zero);

  // vector<int> answer;
  // answer.push_back(1);
  // answer.push_back(0);
  // answer.push_back(1);
  // answer.push_back(1);
  // answer.push_back(1);
  int newbit;
  // // cout << "size is " << lines.size() << endl;
  for(int i = 0; i < 12/*5*/; i++) {
    cout << "checking bit #: " << i + 1 << endl;
    newbit = findmostcommon(lines,zero, i);
    for(int j = 0; j < lines.size()/*12*/; j++) {
      cout << "checking element #" << j << ": " << lines[j] << endl;
      if((lines[j][i] - '0' != newbit/*answer[i]*/)) {
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