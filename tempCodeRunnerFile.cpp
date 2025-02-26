#include<iostream>
using namespace std;

class all
{
    public:
    int a;
    int b;
    
    void get_data(){
        cout<<"enter a and b"<<endl;
        cin>>a>>b;
    }
    void put_data(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
class bll:public all
{
    public:   
    int add;
    void calculate_add(){
        add = a + b;
    }
    void show_data(){
        cout<<"add="<<add<<endl;
    }
};
int main()
{
    bll obj;
    obj.get_data();
    obj.calculate_add();
    obj.show_data();
    obj.put_data();
    obj.show_data();
    return 0;
}