#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main() {
  string line;
  int prevnum = -1;
  int increased = 0;
  int decreased = 0;
  ifstream myfile ("day1.txt");
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      if(prevnum != -1) {
        cout << "cur is " << stoi(line) << " prev is " << prevnum << endl;
        if(stoi(line) > prevnum) {
          cout << "increased" << endl;
          increased++;
        } else {
          cout << "decreased" << endl;
          decreased++;
        } 
      }
      prevnum = stoi(line);
    }
  }
  cout << "increased: " << increased << endl;
}