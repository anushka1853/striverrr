#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <bits.h>
using namespace std;

int main(){

    string s = "a3b1f2";

    map <char, int> mp;

    for (size_t i = 0; i < s.size(); i++)
    {

       char ch = s[i];

       if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch<='z')){


            cout << ch << " "; 

            int times = s[i+1]-'0';

            mp[ch] = times;

            cout << endl ;


     
       }

        //if( isalpha(ch)){

        //cout  << ch << " ";
        //}

    }

    int freq;

    for (auto it: mp)
    {
        char ch = it.first;
        freq = it.second;

        for (size_t i = 0; i < freq; i++)
        {
            cout << ch;
        }
        
    }   

}
