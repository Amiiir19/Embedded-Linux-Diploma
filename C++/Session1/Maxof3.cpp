#include<iostream>

int main(){
    int x=0,y=0,z=0,max=0;

    std::cin>>x>>y>>z;
    if (x>y){
        if(x>z){
            max=x;
        }
        else{
            max=z;
        }
    }
    else{
        if(y>z){
            max=y;
        }
        else{
            max=z;
        }
    }
    std::cout<<"Max number is "<<max<<std::endl;

}