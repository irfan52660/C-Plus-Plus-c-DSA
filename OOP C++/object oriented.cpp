/*
 access modifier ====> public , private , protected;

 public : can access from another class
 private : only use current class
 protected:

*/
#include<iostream>
using namespace std;

class Hero{
//properties
public: // access modifier
    int health =18;
    char level='c';
private:
    int love;
public:
    void setLove(int h){
    love=h;
    }
    void getLove(){
      cout<<"Love is:"<<love<<endl;
    }

};

int main(){
//object create

Hero irfan;
irfan.health =100;
irfan.level='p';
cout<<"Health is :"<<irfan.health<<endl;
cout<<"Level is  :"<<irfan.level<<endl;
irfan.setLove(20);
irfan.getLove();



}
