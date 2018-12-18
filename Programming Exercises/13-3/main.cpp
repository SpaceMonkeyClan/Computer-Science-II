// Programming Exercise 13.3 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 4/21/18

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <string>
#include <set>
#include <cmath>

using namespace std;

//________________________________________Functions_________________________________________________

//________________________________________All Script________________________________________________


int main(int argc, char** argv)
{
    set primes;
    int n;
    cout << "Enter upper limit to find primes:" << endl;
    cin >> n;

    for (int i=2; i<=n; i++)
        primes.insert(i);
    int root_n = (int)sqrt(n);
    for (int val = 2; val <= root_n; val++)
    {
        int i=2;
        int t = i*val;
        while (t <= n)
        {
            if(primes.count(t))
                primes.erase(t);
            i++;
            t = i*val;
        }
    }

    cout << "The required primes are:" << endl;

    for (set::iterator item = primes.begin();
         item!=primes.end(); item++)
        cout << *item << " ";
    cout << endl;

    return 0;
}
