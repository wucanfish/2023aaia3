//week12-1.cpp
#include <iostream>
#include <vector>
#include <unordered_map>
// setting -compiler 勾C++11
using namespace std;
int main(){
    vector<int> a;
    unordered_map<int,int> m;//如果用預設C++98會不行

    m[999]=13;//Hash Map 雜湊表可以快速找到對應的某個職
    m[137]=7;
    cout <<"m[999] value is "<<m[999]<<endl;
    cout <<"m[137] value is "<<m[137]<<endl;
    return 0;
}
