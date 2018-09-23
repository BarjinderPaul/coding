#include <iostream>
using namespace std;
int64_t calcPisano(int64_t m) {
    int64_t a=0,b=1,c=a+b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}

int64_t returnFib(int64_t n, int64_t m) {
    int64_t remainder = n % calcPisano(m);
	int64_t first = 0;
    int64_t second = 1;
	int64_t res = remainder;
	for (int i = 1; i < remainder; i++) {
        res = (first + second) % m;
        first = second;
        second = res;
    }
    return res % m;
}
int main() {
	 int64_t n, m;
    cin >> n >> m;
    cout << returnFib(n, m) << '\n';
}
