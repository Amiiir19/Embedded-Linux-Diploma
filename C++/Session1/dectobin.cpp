#include <bitset>
#include<iostream>

int main(){

    std::cout<<"Please Enter the decimal number";
    int x=0;
    std::cin>>x;
    std::bitset<8> decimalbitset(x);
    std::cout<<"The binary Representation of that number is "<<decimalbitset<<std::endl;
    std::cout<<"Please Enter the binary number";
    std::string z;
    std::cin>>z;
    
    int m=stoi(z,0,2);
    std::cout<<"The decimal Representation of that number is "<<m<<std::endl;
    
}