#include<iostream> 
using namespace std;


long long int a(long int m, long int n) {
	if (m == 0)
		return (n + 1);
	if (n == 0 && m > 0)
		return a(m - 1, 1);
	if (m > 0 && n > 0)
		return(a(m - 1, a(m, n - 1)));

}
int main() {
	long int x, y;
	long long int res;
	cin >> x >> y;
	res = a(x, y);
	cout << res;
	system("pause");
	return 0;

}