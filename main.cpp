#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cstring>
#include<stdio.h>
#include<unistd.h>
using namespace std;

int main(int argc, char *argv[]) {
    string name = argv[1];
    // Clear Terminal Window
    system("clear");

    // Change Directory to Desktop/Projects
    system("cd /Users/andrew/Desktop/Projects/ && mkdir test && cd test && ls");
}

//Steps to creating a repo

//Change to root - Done
//cd ~

//Change to Desktop Projects folder - Done
//cd Desktop/Projects

//Make new directory - Done
//mkdir [name]

//Move to directory - Done
//cd [name]

//Initialize git init - Done
//git init

//Create repo using gh cli
//gh repo create

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
