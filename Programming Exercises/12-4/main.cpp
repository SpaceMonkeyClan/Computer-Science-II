// Programming Exercise 12.4 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 4/21/18

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <string>
#include <list>

using namespace std;

//________________________________________Functions_________________________________________________

//________________________________________All Script________________________________________________

int main()
{
    list names1;
    list names2;

    list::iterator iter;
    list::iterator iter1;
    list::iterator iter2;

    cout<<"input for first list:";

    for(int i=0;i<5;i++)
    {
        string input;
        cin>>input;
        names1.push_back(input);
    }

    cout<<"input for second list:";

    for(int i=0;i<2;i++)
    {
        string input;
        cin>>input;
        names2.push_back(input);
    }

    iter2 = names2.begin();

    for(iter1=++names1.begin(); iter1!=names1.end(); iter1++)
    {
        if(iter2!=names2.end())
        { names2.insert(iter1,*iter2);
            iter2++;
        }
    }

    for(;iter2!=names2.end();iter2++)
    {
        names1.push_back(*iter2);
    }

    cout<<"\nafter merging:\n";

    for(iter = names1.begin();iter != names1.end();iter++)
    {
        cout<<*iter<
    }

    system("pause");
    return 0;
}
