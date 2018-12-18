// Programming Exercise 12.3 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 4/21/18

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <string>
#include <list>

using namespace std;

//________________________________________Functions_________________________________________________

void split(list<int>&numbers, list<int>&front, list<int>&back){
    list<int>::iterator fast;
    list<int>::iterator slow;

    if (numbers.size()<2)
    {
        front.push_back(*numbers.begin());
        back.clear();
    }
    else{
        slow = numbers.begin();
        fast = numbers.begin()++;
        while(fast!=numbers.end())
        {
            fast++;
            if(fat!=numbers.end())
            {
                fast++;
                slow++;
            }
        }
        front.splice(front.begin(), numbers, numbers.begin(), slow);
        back.splice(back,begin(), numbers, slow, numbers.end());
    }
}

Void sortedmerge(list<int>&result,list<int>&a,list<int>& b)
{
    list<int>::iterator iter_a;
    list<int>::iterator iter_b;
    list<int>::iterator iter_r;

    iter_a=a.begin();
    iter_b=b.begin();
    iter_r=result.begin();

    while (1)
    {
        if (a.empty())
        {
            result.splice(iter_r,b);
            break ;
        }

        elseif (b.empty())
        {
            result.splice(iter_r,a);
            break ;
        }

        else
        {
            if (*iter_a>*iter_b)
            {
                result.splice(iter_r,b,iter_b);
                iter_b=b.begin();
            }
            else
            {
                result.splice(iter_r,a,iter_a);
                iter_a=a.begin();
            }
        }
    }
}


void sort(list<int>& numbers)
{
    if (numbers.size()<2)
    {
        return ;
    }


    list<int> front;
    list<int> back;

    split(numbers,front,back);
    sort(front);
    sort(back);
    sortedmerge(numbers,front,back);
}

//________________________________________All Script________________________________________________

void split(list<int>&, list<int>&, list<int>&);

void sortedmerge(list<int>&, list<int>&, list<int>&);

void sort(list<int>&);

int main{
        list<int> numbers;
        list<int> front;
        list<int> back;
        numbers.push_back(4);
        numbers.push_back(2);
        numbers.push_back(7);
        numbers.push_back(1);
        numbers.push_back(4);
        list<int::iterator iter;
        for (iter = numbers.begin(); iter!=numbers.end(); iter++) {
            cout << *iter << endl;
        }

        sort(numbers);
        cout << endl << "After sorting, the new list is: " << endl;
        for (iter = numbers.begin(); iter!=numbers.end(); iter++) {
            cout << *iter << endl;
        }
}
