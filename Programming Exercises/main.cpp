#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    vector< vector <string> > database; //holds records in database
    ifstream fp; //open database.txt file
    fp.open("database.txt");
    string eachLine;
    while(getline(fp, eachLine)) { //while able to read from database.txt
        istringstream iss(eachLine); //create stringstream object for line
        string token;
        vector<string> temp;
        while(getline(iss, token, '|')) { //now use getline to split using |
            temp.push_back(token); //push each each value into temp string vector
        }
        database.push_back(temp); //now push this temp vector into database vector of vector
    }
    fp.close(); //close file
    if(database.size() == 0) { //if size of database is zero, display error and exit
        cout << "The database database.txt is empty. Exit!" << endl;
        exit(0);
    }
    cout << "Displaying content of database" << endl; //display content of database
    for(int i = 0; i < database.size(); i++) {
        for(int j = 0; j < database[i].size(); j++) {
            cout << database[i][j];
            (j != database[i].size()-1) ? cout<< "|" : cout << endl; //if last value in record, print endline, else |
        }
    }
    cout << endl;
    ifstream templ; //open template file
    templ.open("template.txt");
    stringstream strStream; //create a stringstream object
    strStream << templ.rdbuf(); //read entire file
    string myTemplate = strStream.str(); //convert it to string and store it
    templ.close(); //close file
    cout << "Displaying content of template" << endl; //display content of template
    cout << myTemplate << endl;
    for(int i = 0; i < database.size(); i++) { //for each record in database
        cout << "Junk letter for Record " << i << endl;
        string temp = myTemplate; //create a copy of original template
        for(int j = 0; j < database[i].size(); j++) { //for each value in record
            string tofind = "|" + to_string(j+1) + "|"; //create string to find (example, "|1|" , "|2|" and so on till 7)
            size_t pos = temp.find(tofind); //find first occurance
            while(pos != string::npos) { //if this occurance is not at end of string
                temp.replace(pos, tofind.size(), database[i][j]); //use replace to replace that part of string with value
                pos = temp.find(tofind, pos + tofind.size()); //find next occurance
            }
        }
        cout << temp << endl; //print modified template
    }
    return 0;
}