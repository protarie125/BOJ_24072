#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	cout << (c < a || b <= c ? 0 : 1);

	return 0;
}