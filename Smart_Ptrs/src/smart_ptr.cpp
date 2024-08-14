#include<memory>
class A
{
public:
    int x = 5, y = 10;
    A(int a,int b):x(a),y(b){};
};

int main(){
    A* ptr = new A(1,2);
    {
        std::unique_ptr<A> ptr_1(new A(2,3));
    }
    return 0;
}