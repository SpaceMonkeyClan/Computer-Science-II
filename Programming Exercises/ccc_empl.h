//
// Created by Rene Dena on 3/8/18.
//

#ifndef CSIIPE97_CCC_EMPL_H
#define CSIIPE97_CCC_EMPL_H

#endif //CSIIPE97_CCC_EMPL_H


// #include "ccc_empl.h"

/*
double string_to_double(string s)
{
    istringstream instr(s);
    double x;
    instr >> x;
    return x;
}

void raise_salary(Employee& e, double percent)
{
    double new_salary = e.get_salary() * (1 + percent / 100);
    e.set_salary(new_salary);
}


void read_employee(Employee& e, istream& in)
{
    string line;
    getline(in, line);
    if (in.fail()) return;
    string name = line.substr(0, 30);
    double salary = string_to_double(line.substr(30, 10));
    e = Employee(name, salary);
}

void write_employee(Employee e, ostream& out)
{
    out << e.get_name()
        << setw(10 + (30 - e.get_name().length()))
        << fixed << setprecision(2)
        << e.get_salary();
}


int main()
{
    cout << "Please enter the data file name: ";
    string filename;
    cin >> filename;
    fstream fs;
    fs.open(filename.c_str());
    fs.seekg(0, ios::end); // Go to end of file
    int nrecord = fs.tellg() / RECORD_SIZE;

    cout << "Please enter the record to update: (0 - "
         << nrecord - 1 << ") ";
    int pos;
    cin >> pos;

    const double SALARY_CHANGE = 5.0;

    Employee e;
    fs.seekg(pos * RECORD_SIZE, ios::beg);
    read_employee(e, fs);
    raise_salary(e, SALARY_CHANGE);
    cout << "New salary: " + e.getSalary();
    fs.seekp(pos * RECORD_SIZE, ios::beg);
    write_employee(e, fs);

    fs.close();
    return 0;
}

 */

// +++++++++=================================================