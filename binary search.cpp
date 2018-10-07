#include<bits/stdc++.h>
using namespace std;

int BS(const vector<int> &firstVector, int x) {
  int l = 0, h = (int)firstVector.size() - 1; 
  while(l <= h) {
	  int m = l + (h - l)/2;
	  if (x == firstVector[m])
		  return m;
	  else if (x < firstVector[m])
		  h = m - 1;
	  else
		  l = m + 1;
  }
  return -1;
}

int LS(const vector<int> &firstVector, int x) {
  for (uint64_t i = 0; i < firstVector.size(); ++i) {
    if (firstVector[i] == x) return i;
  }
  return -1;
}

int main() {
  int input1;
  cin >> input1;
  vector<int> firstVector(input1);
  for (uint64_t i = 0; i < firstVector.size(); i++) {
    cin >> firstVector[i];
  }
  int input2;
  cin >> input2;
  vector<int> secondVector(input2);
  for (int i = 0; i < input2; ++i) {
    cin >> secondVector[i];
  }
  sort(firstVector.begin(), firstVector.end()); 
  for (int i = 0; i < input2; ++i) {
    cout << BS(firstVector, secondVector[i]) << ' ';
  }
}
