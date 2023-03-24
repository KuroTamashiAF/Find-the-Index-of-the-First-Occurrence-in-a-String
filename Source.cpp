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
            if (haystack.substr(i, needle.size()) == needle)
            {
                return i;
            }
           
        }
        return -1;
    }

};




int main()
{
    string input = "mississippi";
    string aim = "ppi";
    cout << Solution::strStr(input, aim);

    return 0;
}
