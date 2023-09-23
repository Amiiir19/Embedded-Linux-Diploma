#include<iostream>
int main(){
    std::cout<<"Enter the required table"<<std::endl;
    int x=0;
    std::cin>>x;
    for(int i=0; i <= 10 ; i++){
        std::cout<<x<<" * "<<i<<" = "<<x*i<<std::endl;
    }
}