#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <ctype.h>

using namespace std;

int main() {
  string line;
  int horiz = 0;
  int aim = 0;
  int depth = 0;
  ifstream myfile ("day2.txt");
  vector<string> lines; 
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      lines.push_back(line);
    }
  }
  for(int i = 0; i < 1000; i++) {
    if(lines[i][0] == 'f') { // Know we're going forward
      int num = lines[i][8] - '0';
      horiz += num;
      depth += num * aim;
    } else if(lines[i][0] == 'd') {
      int num = lines[i][5] - '0';
      aim += num;
    } else if(lines[i][0] == 'u') {
      int num = lines[i][3] - '0';
      aim -= num;
    }
  }
  cout << "horiz is " << horiz << endl;
  cout << "depth is " << depth << endl;
  cout << "final is " << horiz * depth << endl;
}