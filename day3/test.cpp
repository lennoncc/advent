#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <ctype.h>

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
  for(int i = 0; i < 12; i++) {
    for(int j = 0; j < 5; j++) {
      // cout << lines[i][j] << endl;
      // cout << lines[i][j] - '0' << endl;
      for(int k = 0; k < 12; k++) {
        if(lines[k][j] - '0' == 1) {
          zero.one++;
        } else {
          zero.zero++;
        }
      }
      // cout << "0th bit zero: " << zero.zero << endl;
      // cout << "0th bit one: " << zero.one << endl;
      // if(zero.zero > zero.one) {
        // cout << "0";
      // } if(zero.zero < zero.one) {
        // cout << "1";
      // } if(zero.zero == zero.one) {
        // cout << "j";
      // }
      zero.zero = 0;
      zero.one = 0;
    }
    // cout << endl;
  }
  vector<int> answer;
  answer[0] = 1;
  answer[1] = 0;
  answer[2] = 1;
  answer[3] = 1;
  answer[4] = 0;

  for(int i = 0; i < 12; i++) {
    for(int j = 0; j < 5; j++) {
      if(lines[i][j] - '0' == answer[j]) {
        cout << lines[i] << endl;
      }
    }
    // if(lines[i][0] - '0' == 1) {
      // if(lines[i][1] - '0' == 0) {
        // if(lines[i][2] - '0' == 1) {
          // cout << lines[i] << endl;
        // }
      // }
    // }
  }
  // cout << "0th bit zero: " << zero.zero << endl;
  // cout << "0th bit one: " << zero.one << endl;
}