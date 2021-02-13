#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

std::string remove_ws( const std::string& str )
{
    std::string str_no_ws ;
    for( char c : str ) if( !std::isspace(c) ) str_no_ws += c ;
    return str_no_ws ;
}

int main() {
    
    string header;
    getline(cin,header);

    //remove whitespace from the first line
    header=remove_ws(header);

    string s_arrays;
    s_arrays=header[0];
    string s_queries;
    s_queries=header[1];

    string::size_type sz;   // alias of size_t
    
    //string to int
    int n_arrays=stoi(s_arrays,&sz);
    int n_queries=stoi(s_queries,&sz);

    //arrays part
    vector<string> arrays(n_arrays);
    string line;
    for (int i=0; i<n_arrays; i++)
    {
        arrays.push_back((cin,line));
        //arrays[line];
    }
   
    cout << int(arrays.size());

    // arrays=remove_ws(arrays);

    // cout << arrays[n_arrays];


    //queries part
    return 0;
}