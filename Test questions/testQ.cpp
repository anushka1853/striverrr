#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <map>
#include <stack>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){

    // string s = "x4z2o5";

    // string s = "a1b1c";

    // string s = "m10n0p5";

    string s = "3x4y5z";

    // first letter then its freq

    vector<char> letters;
    vector<int> frequnecies;

    int num = 0;

    int l = 0, d = 1;

    // l for letters
    // d for digits

    if (isalpha(s[l]) == false)
    {

        l = 1;
        d = 2;
    }

    while (l < s.size() - 1 && d < s.size())
    {

        num = 0;

        if (isalpha(s[l]))
        {
            letters.push_back(s[l]);
        }

        if (isdigit(s[d]))
        {

            while (isdigit(s[d]) == true)
            {

                num = num * 10 + s[d] - '0';
                d++;
            }
        }

        if (num == 0)
        {
            letters.pop_back();
        }

        else
        {

            frequnecies.push_back(num);
        }

        d++;

        l = d - 1;
    }

    if (isalpha(s[l]) == false || isdigit(s[d]) == false){
            while( isdigit(s[d])==false ){
                d++;
            }
    }

    l = d-1;

    for (auto ele : letters)
    {

        cout << ele << " ";
    }

    cout << endl
         << endl;

    for (auto ele : frequnecies)
    {

        cout << ele << " ";
    }

    int i = 0, j = 0;

    cout << endl
         << endl;

    while (i < letters.size() && j < frequnecies.size())
    {
        char alphabet = letters[i];
        int freq = frequnecies[j];

        for (size_t i = 0; i < freq; i++)
        {
            cout << alphabet;
        }
        i++;
        j++;
    }
}
