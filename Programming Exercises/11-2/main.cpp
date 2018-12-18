// Programming Exercise 11.2 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 4/6/18

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <vector>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

//________________________________________Functions_________________________________________________

struct employee
{
    string name;
    int salary;
};

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}


int min_position(vector<employee>& a, int from, int to)
{
    int min_pos = from;
    int i;
    for (i = from + 1; i <= to; i++)
        if (a[i].salary < a[min_pos].salary)
            min_pos = i;
    return min_pos;
}

void selection_sort(vector<employee>& a)
{
    int next; // the next position to be set to the minimum

    for (next = 0; next < a.size() - 1; next++)
    { // find the position of the minimum
        int min_pos = min_position(a, next, a.size() - 1);
        if (min_pos != next)
            swap(a[min_pos], a[next]);
    }
}


void print(vector<employee>& a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i].name << ", " << a[i].salary;
    cout << "\n";
}

//________________________________________All Script________________________________________________

int main()
{
    int empl;
    cout << "\n\nPlease ENTER the number of employees:\n";
    cin >> empl;
    vector<employee> v(empl);
    for (int i = 0; i < empl; i++)
    {
        cout << "Enter the employee and the salary: " << endl;

        employee e; // create an employee
        cin >> e.name; // get name from user
        cin >> e.salary; // get salary from user

        v[i] = e;
    }
    print(v);
    selection_sort(v);
    cout << "_________________________" << endl;
    print(v);
    return 0;
}
