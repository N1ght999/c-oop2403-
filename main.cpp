#include<bits/stdc++.h>
#include<string>
using namespace std;
class bx{
public:
void enter(string a)
{
cout<<a<<"�ѱ��������"<<'\n';

}
void open(){
cout<<"�����Ѵ�"<<'\n';

}
void close(){
cout<<"�����ѹر�"<<'\n';

}
};


class ele{
public:
string name="����";



};



int main(){
	ele ele;
	bx bx;
	bx.open();

bx.enter(ele.name);
	bx.close(); 
//cout<<"ok";


}
