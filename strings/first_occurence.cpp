#include<iostream>
using namespace std;

int strStr(string haystack, string needle)
{
    return haystack.find(needle);
}

int main() {
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << strStr(haystack,needle);
}