//
//  main.cpp
//  Lab2_5
//
//  Created by 陳啟瑋 on 2023/3/2.
//

#include <iostream>
#include <vector>

using namespace std;
void bubbleSort(vector<int> &o);

int main() {
    
    int input = 0;
    vector<int> nums;
//    int i = 0, j = 0, temp = 0;
    
    cout << "Enter the elements: ";
    while(cin >> input){
        nums.push_back(input);
    }
    
    
    bubbleSort(nums);
    
    // bubbleSort
//    for(i = 0; i < nums.size(); i++){
//        for(j = 0; j < nums.size()-1; j++){
//            if(nums[j] >  nums[j+1]){
//                temp =  nums[j];
//                nums[j] =  nums[j+1];
//                nums[j+1] = temp;
//            }
//        }
//    }
    
    // print
    for(int s:nums){
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}

void bubbleSort(vector<int> &o){

    int i, j, temp;

    for(i = 0; i < o.size(); i++){
        for(j = 0; j < o.size() - 1; j++){
            if(o[j] > o[j+1]){
                temp = o[j];
                o[j] = o[j+1];
                o[j+1] = temp;
            }
        }
    }
}

