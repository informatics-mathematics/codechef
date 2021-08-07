#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		vector<int> x(3), y(3);

		for(int i=0; i<3; i++) cin >> x[i];
		for(int i=0; i<3; i++) cin >> y[i];

		int a = 0, b = 0;
		for(int i=0; i<3; i++)
		{
			a += x[i];
			b += y[i];
		}

		if(a > b) cout << 1 << "\n";
		else cout << 2 << "\n";
	}

	return 0;
}
