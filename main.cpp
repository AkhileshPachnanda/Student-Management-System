#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
int main()
{
    char data[15];
    int n = 0, option = 0, count_n = 0;
    string empty = "00";
    string proctor = "";
    ifstream f("Example.txt");
    string line;
 
    for (int i = 0; std::getline(f, line); ++i) {
        count_n++;
    }
