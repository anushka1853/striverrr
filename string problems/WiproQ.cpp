#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

int main()
{

    // cout << "A" << endl;
    // // cout << A << endl;
    // cout << char(65) << endl;
    // char ch = 'A';
    // cout << ch << endl;
    // cout << int(ch) << endl;

    vector<char> input1 = {'A', 'B', 'C'};
    vector<char> input2 = {'B', 'C', 'D', 'E'};

    // finding common characters
    // create a hashmap and store frequency of all characters of both arrays in it
    // the frequency of unique chacaters is exactly 1, for others i.e. for common characters
    // it is more than 1 bcs they are common or 0 if theyre absent from both arrays

    unordered_map<char, int> mpp;

    vector<char> ans;

    for (size_t i = 0; i < input1.size(); i++)
    {
        char ch = input1[i];
        mpp[ch]++;
    }

    for (size_t i = 0; i < input2.size(); i++)
    {
        char ch = input2[i];
        mpp[ch]++;
    }

    for (auto p : mpp)
    {

        if (p.second == 1)
        {

            // unique character
            ans.push_back(p.first);
        }
    }

    int sum = 0;

    for (size_t i = 0; i < ans.size(); i++)
    {
        char ch = ans[i];
        sum += int(ch);
    }

    cout << "sum: " << sum << endl;

    string s = to_string(sum);

    if (s.size() == 1)
    {
        cout << "finally: " << s << endl;
    }

    else
    {

        int finalSum = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            char ch= s[i];
            finalSum += int(ch-'0');
        }

        cout << "Now finally: " << finalSum << endl;
    }
}