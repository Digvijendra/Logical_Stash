#include <iostream>
#include <string>
#include <vector>

using namespace std;

class chech
{
private:
    string const technology{"Adaptive autosar"};
    string const skill{"C++"};
    const vector<string> career_opportunities={"Architect(9+ Years)","Techn","developer(3-6years)"};
    public:
    template<int grab,typename T>
    void get_hired(T t) {
       // grab = 0;
        auto fix_me = [](decltype(t) t){return t;};
        cout << "Please send resume CV @"<<fix_me(t)<<endl;}
            
    chech(/* args */);
    ~chech();
};

chech::chech(/* args */)
{
}

chech::~chech()
{
}

int main(int argc, char *argv[]){
chech applicant;
constexpr int i =0;
const string email {"EBIN_carrers_adaptive@elecktrobit.com"};
applicant.get_hired<i>(email);
return 0;

}