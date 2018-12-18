// Programming Exercise 13.2 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 4/21/18

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <string>
#include <set>

using namespace std;

//________________________________________Functions_________________________________________________

set set_union (set a, set b)
{
    set c;
    set::iterator items;
    for (items = a.begin(); items != a.end(); items++)
        c.insert(*items);
    for (items = b.begin(); items != b.end(); items++)
        c.insert(*items);
    return c;
}

set intersection(set a, set b)
{
    set c;
    set::iterator items;
    for (items = a.begin(); items != a.end(); items++)
        if (b.count(*items))
            c.insert(*items);
    return c;
}

//________________________________________All Script________________________________________________


int main(int argc, char** argv)
{
    set a, b, c, d;
    set::iterator items;
    int temp;

    cout << "Enter elements of set A (-1 to stop): " << endl;
    cin >> temp;

    while (temp != -1)
    {
        a.insert(temp);
        cin >> temp;
    }

    cout << "Enter elements of set B (-1 to stop): " << endl;
    cin >> temp;
    while (temp != -1)
    {
        b.insert(temp);
        cin >> temp;
    }
    c = set_union(a, b);
    cout << "Union of the sets is: " << endl;

    for(items = c.begin(); items != c.end(); items++)
        cout << *items << " ";
    cout << endl;
    d = intersection(a, b);
    cout << "Intersection of the sets is: " << endl;

    for (items = d.begin(); items != d.end(); items++)
        cout << *items << " ";
    cout << endl;

    return 0;
}
