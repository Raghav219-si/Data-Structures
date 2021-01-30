#include <bits/stdc++.h>
#define ll long long
using namespace std;

// calculating n to the power x using recursion

ll power(ll n, ll x){

	if(x == 0)
		return 1;

	ll ans = power(n, x-1);
	return ans*n;

}

int main(){

	ll t;
	cin >> t;

	while(t--){

		ll n, x;
		cin >> n >> x;

		if(x < 0)
			cout << "Invalid output" << "\n";

		else
			cout << power(n, x) << "\n";
	}
}
