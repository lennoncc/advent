#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <ctype.h>
#include <list>

using namespace std;


int main() {
  vector<string> lines;
  string line;  
  ifstream myfile ("day3.txt");
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      lines.push_back(line);
    }
  }
}