#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void insertion_sort(vector<int> &vec){
/*
Consider vec[0] as head (sorted) element , 
compare rest of the next element with head 
if current is greater than head . then make current as head.
else if current is less than head , then swap the current and head . new head will be head = head - 1  then keep swaping towards left until head > current .
if read extreme end then head = 0 - 1 then exit then break the loop . and make head = head + 1 = current   
*/
int N = vec.size();

for(int i = 1 ; i < N ; i++){

    int head = i - 1;
    int current = vec[i];

    while( (head >= 0) && (vec[head]>current))
    {
        vec[head + 1] = vec[head]; // this location where we are copying the  new head is relative address as we grow towards left.
        head = head - 1;
    }

    vec[head + 1] = current;
}

}
void bubble_sort(vector<int> &vec)
{
bool check = 1;
int large = INT_MIN;
    for(auto k : vec){
if(k>large){large = k;}
else{
    check = 0;
break;
}
    }

    if(check == 1){
        cout<<"already sorted"<<endl;
        return;}

    /*In each iteration compare everything from begenning till end , and max will reach at  end of the array , fix the MAX .
    in the next iteration run the inner array one less than previous.
    in N * N time complexity we will get the sorted array , chaning the inner most if cond will the ascending <--> dscending**/

int N = vec.size();
for(int i = 0 ; i < N-1 ; i++)
{


    for(int j = 0 ; j < N-1-i ; j++)
    {
        if(vec[j]<vec[j+1])
        {
            int temp = vec[j+1];
            vec[j+1]=vec[j];
            vec[j]= temp;

        }
    }

}
}


auto print = [](vector<int> &vec){cout<< "[ ";for(auto i:vec){cout<<i<<" ";}cout<<" ]"<<endl;};

int main(){

vector<int> vec {1,5,7,0,0,-9,45};
vector<int> vec1 {1,2,3,4,5,6,45};
print(vec);
insertion_sort(vec);
print(vec);
print(vec1);
bubble_sort(vec1);
print(vec1);

    return 1;
}