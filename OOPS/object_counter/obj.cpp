#include "obj.hpp"
#include <iostream>
using namespace std;

obj::obj(string n,uint8_t a)
 {
     this->name = n;
     this->age = a;
     obj_count ++;
     std::cout<<"obj no."<<obj_count<<" created "<<endl;
 }
 
 obj::~obj()
 {
     
     std::cout<<"obj no."<<obj_count<<" destroyed "<<endl;
     obj_count --;
 }