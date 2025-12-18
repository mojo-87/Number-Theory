#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> Isprime(N, true);
vector<int> primes;

void sieve()
{
    Isprime[0] = Isprime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (Isprime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                Isprime[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (Isprime[i]) primes.push_back(i);
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < primes.size() && primes[i] <= n; i++)
    {
        cout << primes[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
