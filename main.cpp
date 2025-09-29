#include<bits/stdc++.h>
#include<string>
using namespace std;
class bx{
public:
void enter(string a)
{
cout<<a<<"已被放入冰箱"<<'\n';

}
void open(){
cout<<"冰箱已打开"<<'\n';

}
void close(){
cout<<"冰箱已关闭"<<'\n';

}
};


class ele{
public:
string name="大象";



};



int main(){
	ele ele;
	bx bx;
	bx.open();

bx.enter(ele.name);
	bx.close(); 
//cout<<"ok";


}
