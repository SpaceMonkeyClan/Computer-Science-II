// Programming Exercise 12.1 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 4/21/18
//________________________________________Misc._____________________________________________________

#include <iostream>
#include <string>
#include <list>
#include <conio.h>

using namespace std;

//________________________________________Functions_________________________________________________

int downsize(list& names)
{
    list::iterator pos;
    for(pos = names.begin(); pos!=names.end();)
    {
        pos++;
        if(pos!=names.end())
            pos = names.erase(pos);
    }
}

//________________________________________All Script________________________________________________

int main()
{
    list<string> names;
    string input;

    list::iterator iter;
    int downsize(list&);
    for(int i=0; i<5; i++){
        cin >> input;
        names.push_back(input);
    }

    downsize(names);
    cout<<"\nupdated list is:\n";


    for(iter = names.begin();iter!=names.end();iter++)
    {
        cout<<*iter<< endl;
    }
    getch();
    return 0;
}
