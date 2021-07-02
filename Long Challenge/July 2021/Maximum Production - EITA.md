```
#include <iostream>
using namespace std;

int main() {
	int T, d, x, y, z;

	cin >> T;

	for(int i = 1; i <= T; i++){
		cin >> d >> x >> y >> z;

		int a = x*7;
		int b = y*d + z*(7-d);

		cout << max(a,b) <<"\n";
	}

	return 0;
}
```
