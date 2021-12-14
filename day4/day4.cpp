#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <ctype.h>
#include <list>

using namespace std;

typedef struct {
  vector<string> stringrows;
  vector<string> stringcols;
  vector<vector<int>> numrows;
  vector<vector<int>> numcols;
} bingoboard;

vector<int> numify(string str) {
  stringstream iss(str);
  int numbuf;
  vector<int> nums;
  while(iss >> numbuf) {
    nums.push_back(numbuf);
  }
  return nums;
}

int main() {
  vector<string> lines;
  string line;
  ifstream myfile ("test.txt");
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      lines.push_back(line);
    }
  }
  string nums = lines[0];
  lines.erase(lines.begin() + 0);
  // bingoboard boards[200];
  vector<bingoboard> boards;
  int j = 0;
  int k = 0;
  for(string i : lines) {
    bingoboard board;
    // cout << "here? " << j << endl;
    // cout << "k is " << k << endl;
    if(k == 5) {
      // cout << "k is 5" << endl;
      // for(int l = 0; l < 5; l++) {
      //   // boards[j].cols.push_back();
      //   cout << boards[j].numrows[l][0] << endl;
      // }
      boards.push_back(board);
      j++;
      k = 0;
    }
    if(!i.empty()) {
      cout << "i is " << i << endl;
      board.stringrows.push_back(i); 
      board.numrows.push_back(numify(i));
      // boards.push_back(board);
      k++;
    } 
  }
  // for(int i = 0; i < boards.size(); i++) { // Iterate through each board
  //   vector<int> cols;
  //   for(int j = 0; j < 5; j++) { // Iterate through each row
  //     for(int k = 0; k < 5; k++) { // Iterate through each col
  //       cout << "i is " << i << endl;
  //       cout << "k is " << k << endl;
  //       cout << boards[i].numrows[j][k] << endl;
  //     }
  //     // cols.push_back(boards[i].numrows[j][0]);
  //   }
  // }
  cout << boards[0].numrows[0][0] << endl;
  cout << boards[0].numrows[1][0] << endl;
  cout << boards[0].numrows[2][0] << endl;
  cout << boards[0].numrows[3][0] << endl;
  cout << boards[0].numrows[4][0] << endl;
  // cout << boards[0].stringrows[0] << endl;
  // cout << boards[0].stringrows[1] << endl;
  // cout << boards[0].stringrows[2] << endl;
  // cout << boards[0].stringrows[3] << endl;
  // cout << boards[0].stringrows[4] << endl;
  // cout << endl;
  // cout << boards[1].stringrows[0] << endl;
  // cout << boards[1].stringrows[1] << endl;
  // cout << boards[1].stringrows[2] << endl;
  // cout << boards[1].stringrows[3] << endl;
  // cout << boards[1].stringrows[4] << endl;
  // TODO:
  // Convert strings of rows into vector of nums
  // Convert rows into cols
  // Iterate through bingo calls and check every board, row, and col
  // If have num, remove num from given thing
  // If any row/col is empty, bingo
  // calculate score by adding all values in each row, multiply by winning num that was called
  // cash money

}