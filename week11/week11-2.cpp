//week12-1.cpp
#include <iostream>
#include <vector>
#include <unordered_map>
// setting -compiler ��C++11
using namespace std;
int main(){
    vector<int> a;
    unordered_map<int,int> m;//�p�G�ιw�]C++98�|����

    m[999]=13;//Hash Map �����i�H�ֳt���������Y��¾
    m[137]=7;
    cout <<"m[999] value is "<<m[999]<<endl;
    cout <<"m[137] value is "<<m[137]<<endl;
    return 0;
}
