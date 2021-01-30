#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Calculating factorial of a number using recursion

ll factorial(ll n){

	if(n == 0 || n == 1)
		return 1;

	ll ans = factorial(n-1);
	return ans*n;

}

int main(){

	ll t;
	cin >> t;

	while(t--){

		ll n;
		cin >> n;

		if(n < 0)
			cout << "Invalid output" << "\n";

		else
			cout << factorial(n) << "\n";
	}
}
