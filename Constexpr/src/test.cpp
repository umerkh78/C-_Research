#include<iostream>
#include<array>
constexpr std::array<char,420> draw(){
    size_t iter = 0;
    std::array<char,420> op = {};
    for (size_t i = 0; i < 10; i++)
    {
        for(size_t k=10; k>i; k--){
        op[iter++] = ' ';
        }
        op[iter++] ='*';
        for (size_t j = 0; j < i+i; j++)
        {
            op[iter++] =' ';
        }
        if (i!=0 && i!=10)
        {
            op[iter++] ='*';
        }
        op[iter++] ='\n';
    }
    for (size_t i = 0; i < 9; i++)
    {
        for(size_t k=0; k<i+2; k++){
            op[iter++] =' ';
        }
        op[iter++] ='*';
        for (size_t j = 16; j > i+i; j--)
        {
            op[iter++] =' ';
        }
        if (i!=8)
        {
            op[iter++] ='*';
        }
        op[iter++] ='\n';
    }
    return op;
}
int main(){
    constexpr auto x = draw();
        for (const char c:x)
        {
            std::cout<<c;
        }
    return 0;
}