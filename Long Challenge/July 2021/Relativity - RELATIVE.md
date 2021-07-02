```
#include <iostream>
using namespace std;

int main(){
	int T, g, c;

	cin >> T;

	for(int i = 1; i <= T; i++){
		cin >> g >> c;
		cout << (c*c)/(2*g) <<"\n";
	}

	return 0;
}
```
