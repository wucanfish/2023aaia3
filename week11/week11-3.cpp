//week11-3cpp
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string,int> m;//Hash Map
    m["���|��"]=12750300;//����r��k��int
    m["������"]=12750794;

    cout <<"���|�����Ǹ��O:"<<m["���|��"]<<endl;
    cout <<"�����ڪ��Ǹ��O:"<<m["������"]<<endl;
}
