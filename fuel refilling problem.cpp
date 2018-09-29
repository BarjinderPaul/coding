//Fuel Refilling Problem : How many times we have to refill to reach our destination
#include<bits/stdc++.h>
using namespace std;

int checkRefills(int x[],int n,int L, int numRefill,int currentRefill){
		int lastRefill;
		while(currentRefill<=n){
			lastRefill=currentRefill; 				//lastRefill = currentRefill = 0
		//	cout<<"current refill & Last refill = " <<currentRefill<<lastRefill<<endl;
		while(currentRefill<=n && (x[currentRefill+1] - x[lastRefill]) <= L) //checking next distance is less than capacity
			{
		//			cout<<"current refill+1 & Last refill = " <<currentRefill<<lastRefill<<endl;
		//	cout<<"Entered";
			currentRefill = currentRefill + 1;
			
			}
		if(currentRefill == lastRefill)			//The first gas station from source is beyond tank's capacity
			return -1;
		if(currentRefill <= n)
			numRefill+=1;
	
	}
	return numRefill;
}

int main(){
	int L,n,numRefill=0,currentRefill=0,lastRefill; 
	cout<<"enter tank's capacity";				//L=Capacity of the tank of car
	cin>>L;
	cout<<"Enter number of intermediate gas stations";
	cin>>n;
	int x[n+1];
	x[0]=0;
	cout<<"Enter the distances and final distances";
	for(int i=1;i<=n+1;i++)
		cin>>x[i];

	cout<<"Number of Refills =" <<checkRefills(x,n,L,numRefill,currentRefill);
}
