//Largest number that can be formed from the array :
#include<bits/stdc++.h>
using namespace std;
int main(){
	 vector<int> a;
	 for(int i=0;i<5;i++){
	 	a.push_back(i);
	 }
	sort(a.rbegin(),a.rend());
	cout<<"Largest Number " ;
	
	 for(int i=0;i<a.size();i++){
	 	cout<<a[i];
	  }
	
	
}
