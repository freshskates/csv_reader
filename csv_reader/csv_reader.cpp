#include <iostream>
using namespace std;
#include <fstream>
#include <string>



void uh(string name, string id,string date, string ip, int count) {


    cout << "User " << count + 1 << ": " << name << endl;
    cout << "Unique ID:  " << id << endl;
    cout << "Date: " << date << endl;
    cout << "ip: " << ip << endl << endl;
}




int main()
{
    int count = 0;
    struct db {

        string ip, id, name; 

    };

    ifstream fin;
    string input;
    cin >> input;
    cin.ignore(1000, 10);
    input += ".csv";

    fin.open(input.c_str());
    if (!(fin.good())) throw "I/O error";
    
    string name, id, date, ip; 
    while (fin.good()) {

        fin >> name;
        fin.ignore(1000, 59);

        fin >> id;
        fin.ignore(1000, 59);
        fin >> date;
        fin.ignore(1000, 59);
        fin >> ip; 
        fin.ignore(1000, 59);


        uh(name, id, date, ip, count);


        count++;
    }

    fin.close();






}

