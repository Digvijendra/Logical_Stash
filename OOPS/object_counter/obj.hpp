 #include <cstdlib>
 #include<string>
 #include <cstdint>
 #include <iostream>
 using namespace std;
 
 class obj
 {
 
 private:
     /* dat*/
     std::string name;
     uint8_t age;


 public:
 static size_t obj_count;
     obj(string n,uint8_t a);
     size_t get_count();
     ~obj();
 };
 
 
 