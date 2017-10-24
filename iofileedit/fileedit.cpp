/*
 * fileedit.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: User
 */

/*The goal of this quiz is to practice writing and reading files.
**Read the contents of input.txt and then write to it.
**
**We are using input.txt as our file. This is not an ideal
**situation, because when we write to it, we cannot
**see the changes. We can manually write in input.txt and
**we can also use the program to write to the file.
**Then we can read what we wrote using our program.
**
**Your assignment for this quiz**
**Change the contents of the file called input.txt
**Change the ifstream and ofstream to fstream

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file

    ofstream myfile1 ("input.txt",ios::app);
    if(myfile1.is_open())
    {
        myfile1<<"\n I am adding a line. \n";
        myfile1<<"\n I am adding a line. \n";
        myfile1.close();
    }
    else cout<<"cant open";

    ifstream myfileo ("input.txt");
    if(myfile1.is_open())
    {
        while(getline(myfileo,line))
        {
            cout<<line; "\n";
        }
        myfileo.close();
    }
    else cout<<"count read";


    return 0;
}


