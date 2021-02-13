#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <regex> 
using namespace std;


int main() {
    int n,q;
    vector<string> markup;

    cin >> n;
    cin >> q;
    cin.ignore();
    
    //Get markup
    for(int i = 0; i <n/2; i++)
    {
        string local;
        getline(cin, local);
        markup.push_back(local);
    } 
    
    //Skip endtags
    for(int i = 0; i <n/2; i++)
    {
        string end_tag;
        getline(cin, end_tag);
    } 
    
    // cout <<"Query"<< endl;
    
    vector<string> query;
    //Get queries
    for(int i = 0; i <q; i++)
    {
        string local;
        getline(cin, local);
        query.push_back(local);
        //cout << query[i]<<endl;
    } 
    
    //Run Query
    for(int i = 0; i <query.size(); i++)
    {
        int size_t;
        regex r("~\\w*d*"); 
        smatch m; 
        size_t = count(query[i].begin(), query[i].end(), '.');
        //cout<< size_t<<endl;
        
        regex_search(query[i], m, r);
        for (auto x : m) 
            cout << x <<endl; 
        
    } 
    return 0;
}
