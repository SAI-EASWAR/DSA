#include<iostream>
using namespace std;

class animals{
    public:
    void walk(){
        cout<<"what he fuck dude;";
    }
    
};
class dog : private animals
{
    public:
    void w(){
        cout<<"i am racist";
        walk();
    }
};
class s: public dog{
    public:
    void a()
    {
        cout<<"i doing fucking good";
    }
};
int main()
{
    s a;
    a.walk();
    return 0;
}