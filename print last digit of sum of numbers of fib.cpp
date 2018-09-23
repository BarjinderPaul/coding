#include <iostream>
using namespace std;

int64_t print_last(int64_t input) {
	input = (input+2)%60;
    int fib[input+1];
    fib[0]=0;
    fib[1]=1;
    int res = 1;
    for(int i = 2; i<=input;i++){
        fib[i] = (fib[i-1]%10 + fib[i-2]%10)%10;
    }
    if(fib[input] == 0){
        return 9;
    }
    return (fib[input]%10-1);
}

int main() {
    int64_t input = 0;
    cin >> input;
	cout << print_last(input);
    return 0;
}
