#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>

using namespace std;

int main() {
  string line;
  // int prevnum = -1;
  int increased = 0;
  vector<int> prevnum;
  int i = 0;
  int j = 0;
  ifstream myfile ("day1.txt");
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      prevnum.push_back(stoi(line));
    }
  }
  
  for(int i = 0; i < 2000 - 3; i++) {
    int prev = 0;
    int cur = 0;
    for(int j = i; j < i + 3; j++) {
      cout << "prev is " << prevnum[j] << endl;
      prev += prevnum[j];
    }
    for(int k = i + 1; k < i + 4; k++) {
      cout << "cur is " << prevnum[k] << endl;
      cur += prevnum[k];
    }
    if(prev < cur) {
      increased++;
    }
  }
  cout << "increased: " << increased << endl;
}