/* BINARY SEARCH ON VECTOR
1-Create a static vector 
2-Sort it 
2-set low and high intervals with begin index and size of vector.
3-Calcuate mid by low + (high-low)/2
4-Pass mid to comparator function , and return appropriate code 
5-Based on code returned from step 5 , either its a direct match with searched item or we need to set high and low 
  acording to comparision result.


*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec {0,-4,-88,-5,99,45,42,78,3,45,32,11,112,264,563,112,112,1,223,11,22,11}; //Main vector

auto lamda = [](vector<int> vec){for(auto i:vec){ cout<<i<<" "; }cout<<endl;}; // Lamda for printing

#define NUM 99 // Item to be searched

/*Comparision function*/

int check_num(int guess){
//    cout<<guess<<" "<<"check_num"<<endl;
    if(vec.at(guess) == NUM){
        return 0;
    }
    else if(vec.at(guess) < NUM){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){
lamda(vec); 

sort(vec.begin(),vec.end());

    int low = 0;
    int high = vec.size();
    int mid;
    while(low<=high){ //important condition
        
        mid  = low + (high-low)/2;
       // cout<<"High : "<<high<<"low : "<<low<<"Mid : "<<mid<<endl; // 
        if(check_num(mid) == 0){cout<<"Found the number a location ["<<mid<<" val : "<<vec[mid]<<"]"<<endl;break;}
        else if(check_num(mid) == -1){high = mid-1;}
        else{low = mid + 1;}
    }



    return 1;
}