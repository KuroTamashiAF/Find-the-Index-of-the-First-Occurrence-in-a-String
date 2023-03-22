#include<iostream>
using namespace std;

//class Solution {
//public:
//    static int strStr(string haystack, string needle) {
//        return haystack.find(needle);
//    }
//};
class Solution {
public:
    static int strStr(string haystack, string needle) {
        int pointer = 0;

        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[pointer])
            {
                for (int i = 0; i < haystack.size(); i++)
                {

                }
            }
        }
    }
};




int main()
{
    string input = "sadbutsad";
    string aim = "but";
    cout << Solution::strStr(input, aim);

    return 0;
}
