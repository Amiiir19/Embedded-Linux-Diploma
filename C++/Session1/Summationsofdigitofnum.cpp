#include <iostream>
#include <string>

int main(){
    std::cout<<"Enter the Integar"<<std::endl;
    int x=0;
    int sum=0;
    std::cin>>x;

    std::string num;
    //using to_string fun
    num=std::to_string(x);
/*
    range based for loop
    for(var : collection of data){
          body             }
    
*/
    for (char z : num){
        int n= z - '0'; // convert char to integar
        sum+=n;         // add the digit to the sum
    } 

    std::cout<<"Sum of digits of number "<<x<<" is "<<sum<<std::endl;

}