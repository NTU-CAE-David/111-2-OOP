//
//  main.cpp
//  Lab2_4
//
//  Created by 陳啟瑋 on 2023/3/2.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int input = 0;
    vector<int> nums;
    
    cout << "Enter the elements: ";
    while(cin >> input){
        nums.push_back(input);
    }
    
//    nums.pop_back();
    
    // 找到最大值
    int max_num = *max_element(nums.begin(), nums.end());
    cout << "Maximum element: " << max_num << endl;
    
    // 找到最小值
    int min_num = *min_element(nums.begin(), nums.end());
    cout << "Minimum element: " << min_num << endl;
    
    return 0;
}
