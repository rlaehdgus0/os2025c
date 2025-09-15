#include <iostream>

using namespace std;
long long d2(long long N)
{
	long long cnt = 0;
	for (long long i = 2; i <= N; i *= 2)
		cnt += N / i;
	return cnt;
}
long long d5(long long N)
{
	long long cnt = 0;
	for (long long i = 5; i <= N; i *= 5)
		cnt += N / i;
	return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int n,n2;
    cin >> n >> n2;
    cout << min(d2(n)-d2(n2)-d2(n-n2),d5(n)-d5(n2)-d5(n-n2)) << '\n';
    return 0;
}
