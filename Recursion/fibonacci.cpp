#include <bits/stdc++.h>
#define ll long long
using namespace std;

// fibonacci series is 0,1,1,2,3,5,8,13,21,34,55,89,144........

ll fibo(ll n){

	if(n < 2)
		return n;

	ll ans = fibo(n-1)+fibo(n-2);
	return ans;
}

int main(){

	ll t;
	cin >> t;

	while(t--){

		//Enter n to print nth term

		ll n;
		cin >> n;

		cout << fibo(n) << "\n";

	}
}