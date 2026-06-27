// Map: A map is an STL container that store element in the form of key-value pair.
// Each key ois unique,Data is stored in sorted order of keys and Implement using Red-Black Tree (BST).

// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string> student;
//     student[1]="Vaibhav";
//     student[2]="Harsh";
//     student[3]="Ram";
//     for(auto s:student){
//         cout<<s.first<<" "<<s.second<<endl;
//     }
//     return 0;
// }
// Output:->
// 1 Vaibhav
// 2 Harsh
// 3 Ram
// .............................................

// Unordered map : An unordered map store key-value pair random.
// Key sre unique, Implemented using hash table and faster than map.
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> student;
    student[1]="Rahul";
 student[2]="Aman";
 student[3]="Vaibhav";

    for(auto s:student){
        cout<<s.first<<" "<<s.second<<endl;
    }
    return 0;
}
// Output->
// 3 Vaibhav
// 2 Aman
// 1 Rahul
