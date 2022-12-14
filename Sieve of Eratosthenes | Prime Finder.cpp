#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=100000000;
    vector<int>primes;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {//Here the loop traverses and finds all the prime numbers lower than n.
        if (is_prime[i]) {
            primes.push_back(i);//Primes are added
            for (int j = i * i; j <= n; j += i)//taking no.s from taken no.s square to the last no.
                is_prime[j] = false;           //making multiples of the taken no. 0 in declare is_prime array
        }   
    }
    
    int test,pos;
    cin>>test;
    while(test--){
        cin>>pos;
        cout<<primes[pos-1]<<"\n";
    }
    return 0;
}
