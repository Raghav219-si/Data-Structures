#include <bits/stdc++.h>
#define ll long long
using namespace std;

// checking if an array is sorted or not using recursion

bool isSorted(ll *ar, ll n){

	if(n == 0 || n == 1 || ar == NULL)
		return true;

	if(ar[0] <= ar[1] && isSorted(ar+1, n-1))
		return true;

	return false;
}


int main(){

	ll t;
	cin >> t;

	while(t--){

		ll n;
		cin >> n;

		ll ar[n];
		for(ll i = 0;i<n;i++)
			cin >> ar[i];

		bool ans = isSorted(ar, n);

		if(ans){
			cout << "Array is sorted" << "\n";
		}
		else{
			cout << "Array is not sorted" << "\n";
		}
	}
}
