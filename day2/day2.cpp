#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <ctype.h>

using namespace std;

int main() {
  string line;
  string intermediate;
  stringstream buf;
  ifstream myfile ("day2.txt");
  vector<int> forward;
  vector<int> up;
  vector<int> down;
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      if(line[0] == 'f') {
        int ia = line[8] - '0';
        forward.push_back(ia);
        // cout << "Forward" << endl;
      } else if(line[0] == 'u') {
        int ia = line[3] - '0';
        up.push_back(ia);
      } else if(line[0] == 'd') {
        int ia = line[5] - '0';
        down.push_back(ia);
      }
    }
  }
  int forsum = 0;
  for(auto& n : forward) {
    forsum += n;
  }
  cout << forsum << endl;
  int upsum = 0;
  for(auto& n : up) {
    upsum += n;
  }
  cout << upsum << endl;
  int downsum = 0;
  for(auto& n : down) {
    downsum += n;
  }
  cout << downsum << endl;
  cout << (downsum - upsum) * forsum << endl;
}