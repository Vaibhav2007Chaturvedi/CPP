// Insertion in map:
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m.insert({1,"Vaibhav"});
//     m.insert({2,"Rahul"});
//     m.insert({3,"Ram"});
//     for(auto p:m){
//         cout<<p.first<<"->"<<p.second<<endl;
//     }
//     return 0;
// }

// .......................
// Update Element:
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m[1]="Rahul";
//     m[1]="Vaibhav";
//     for(auto p:m){
//         cout<<p.first<<"->"<<p.second<<endl;
//     }
//     return 0;
// }

// ....................
// Find Element:
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m[1]="Rahul";
//     m[2]="Vaibhav";
//     m[3]="Ram";
//     if(m.find(2)!=m.end()){
//         cout<<"Key is Found";
//     }
//     else{
//         cout<<"Key is not found";
//     }
//     return 0;
// }

// ...............
// Count Function:
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m[1]="Rahul";
//     m[2]="Vaibhav";
//     m[3]="Ram";
//     cout<<m.count(2)<<endl;
//     cout<<m.count(5)<<endl;
// return 0;
// }

// ............
// Delete Function
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m[1]="Rahul";
//     m[2]="Vaibhav";
//     m[3]="Ram";
//     m.erase(2);
//     for(auto p:m){
//         cout<<p.first<<"->"<<p.second<<endl;
//     }
//     return 0;
// }

// ............
