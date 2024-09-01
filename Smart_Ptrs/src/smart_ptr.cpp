#include<memory>
class Assigner
{
public:
    int variable_1 = 5, variable_2 = 10;

    Assigner() = default;

    Assigner(int param_1,int param_2):variable_1(param_1),variable_2(param_2){};

    ~Assigner() = default;
};

int main(){
    Assigner* ptr = new Assigner(1,2);
    std::unique_ptr<Assigner> ptr_1 = std::make_unique<Assigner>(2,3);
    return 0;
}