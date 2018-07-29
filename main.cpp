#include <iostream>
#include"page.h"
#include"schema.h"
#include"table.h"

using namespace std;

char** command(string input);
char** createSolve(string remain);
char** loadSolve(string remain);
char** insertSolve(string remain);
char** updateSolve(string remain);
char** deleteSolve(string remain);
char** RQSolve(string remain);
char** closeSolve(string remain);
int main()
{
    while(1)
    {

        string input;
        cout << "please input: ";

        cin >> input;

        //cout << input.compare("CREATE TABLE Taxi (id CHAR(10),x INT,y INT);") << endl;

        string head = input.substr(0,input.find(' '));
        string remain = input.substr(input.find(' ')+1,input.length());

        if(!head.compare("CREATE"))
        {
            string second = remain.substr(0,remain.find(' ')); //TABLE
            remain = remain.substr(remain.find(' ')+1,remain.length());

            Schema s;
            s.create(remain);

            // create a table using s

        }
        else if(!head.compare("LOAD"))
        {
            cout << "IS LOAD" << endl;
        }
        else if(!head.compare("INSERT"))
        {
            //log
            cout << "IS INSERT" << endl;
        }
        else if(!head.compare("UPDATE"))
        {
            //log
            cout << "IS UPDATE" << endl;
        }
        else if(!head.compare("DELETE"))
        {
            //log
            cout << "IS DELETE" << endl;
        }
        else if(!head.compare("RangeQuery"))
        {
            cout << "IS RangeQuery" <<endl;
        }
        else if(!head.compare("CLOSE"))
        {
            cout << "IS CLOSE" << endl;
        }
        else
        {
            cout << "Invalid command" <<endl;
        }
   }
}