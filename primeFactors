#include <bits/stdc++.h>
using namespace std;

int primeFactors(int n, int *factors)
{
    //Count of factors
    int factorCount = 0;

    int Count = 0;
    while(n%2 == 0){
        n = n/2;
        if(Count == 0) factors[factorCount++] = 2;
        Count++;
    }
    for(int i = 3; i <=sqrt(n); i = i+2)
    {
        Count = 0;
        while(n%i == 0){
            n = n/i;
            if(Count == 0) factors[factorCount++] = i;
            Count++;
        }
    }
    if(n > 2) factors[factorCount++] = n;
    return factorCount;
}

int main()
{
    //Array for storing divisors
    int factors[100000];
    int num;
    num = primeFactors(1000, factors);
    cout << num << endl;
    for(int i = 0; i < num; i++){
        cout<<factors[i]<<" ";
    }
    cout<<endl;

    return 0;
}
