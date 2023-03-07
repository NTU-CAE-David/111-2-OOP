//
//  main.cpp
//  Lab2_3
//
//  Created by 陳啟瑋 on 2023/3/2.
//

#include <iostream>

using namespace std;

struct Rectangle{
    int length = 0;
    int width = 0;
};

int main() {
    
    Rectangle rect;
    
    cout << "Enter the length:";
    cin >> rect.length;
    
    cout << "Enter the width:";
    cin >> rect.width;
    
    cout << "Area: " << rect.length * rect.width << endl;
    cout << "Perimeter: " << 2*(rect.length + rect.width) << endl;
    return 0;
}
