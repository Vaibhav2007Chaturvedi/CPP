//SUBSTRING: substr()  ,, Extracts Substring

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="programming";
    string sub=s.substr(3,5); //gramm
    //string sub=s.substr(3,3); //gra

    cout<<sub<<endl;
    return 0;

}