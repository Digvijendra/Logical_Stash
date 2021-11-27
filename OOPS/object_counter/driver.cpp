#include "obj.hpp"
#include <vector>
#include <iostream>
using namespace std;
size_t obj::obj_count = 0;
int main (){
vector<obj> vec_obj ;
obj o1 {"DK",25};
obj o2 {"shivu",25};
obj o3 {"1DK",25};
obj o4 {"shivuu",25};
obj o5 {"shivuu",25};
/*vec_obj.push_back(o1);
vec_obj.push_back(o2);
vec_obj.push_back(o3);
vec_obj.push_back(o4);//*/

std::cout<<"total obj created :"<<obj::obj_count<<endl;
}