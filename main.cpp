#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cstring>
#include<stdio.h>
#include<unistd.h>
using namespace std;

int main() {
    string name;

    system("clear");

    cout << "What would you like to name your repo?" << endl;
    cin >> name;
    
    //Create command string
    string command = "cd /Users/andrew/Desktop/Projects/ && mkdir " + name + " && cd " + name +" && git init && gh repo create";

    //Getting length for char array
    int n = command.length();
 
    // declaring character array
    char char_array[n + 1];
 
    // copying the contents of the command string to char array
    strcpy(char_array, command.c_str());

    /* TESTING
    for (int i = 0; i < n; i++)
        cout << char_array[i];
    */

    // Run Command
    system(char_array);
}

//push to git
//2nd option

//Enter path to repo
//enter /Users/andrew/Desktop/Projects/[name]

//Enter name of repo on gh
//name: [name]

//Enter desc of repo on gh
//description: (enter)

//Choose public repo
//Visibility: 1st option

//Choose remote or local
//remote: 1st option

//Choose name of origin
//origin name: main
