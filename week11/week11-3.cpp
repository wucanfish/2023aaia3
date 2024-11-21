//week11-3cpp
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string,int> m;//Hash Map
    m["蔡育綸"]=12750300;//左邊字串右邊int
    m["章偉臣"]=12750794;

    cout <<"蔡育綸的學號是:"<<m["蔡育綸"]<<endl;
    cout <<"章偉臣的學號是:"<<m["章偉臣"]<<endl;
}
