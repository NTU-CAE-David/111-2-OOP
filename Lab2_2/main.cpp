//
//  main.cpp
//  Lab2_2
//
//  Created by 陳啟瑋 on 2023/3/2.
//

#include <iostream>

void swap(int* num1, int* num2) {
     // Please fill this blank
    int temp = 0;
    
    temp = *num2;
    *num2 = *num1;
    *num1 = temp;
    
    
}
int main() {
    int a = 5;
    int b = 10;
    
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    
    swap(&a, &b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    
    return 0;
}
