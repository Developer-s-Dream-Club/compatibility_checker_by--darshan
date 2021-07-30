#include<iostream>
#include<string>
#include<cctype>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name="", partner="";
    cout<<"Enter Your Name: ";
    getline(cin, name);
    cout<<"Enter Your Partner Name: ";
    getline(cin, partner);
    string str = name + partner;
    int total = count(str.begin(), str.end(), 'l') + count(str.begin(), str.end(), 'o') + count(str.begin(), str.end(), 'v') + count(str.begin(), str.end(), 'e');
    if(total>9 || total<1)
        cout<<"Your score is "<<total<<", you go together like coke and mentos.";
    else if(total>=4 && total<=5)
        cout<<"Your score is "<<total<<", you are alright together";
    else
        cout<<"Your score is "<<total;
}