//
//  main.cpp
//  more better computer
//
//  Created by 顾淼 on 2022/9/13.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    
    cout <<"input first number: "<<endl;
    cin>>a;
    cout <<"enter operator: "<<endl;
    cin>>op;
    cout <<"input second number; "<<endl;
    cin>>b;
    int result;
    if(op =='+'){
        result = a + b;
    }else if (op =='-'){
        result = a - b;
    }else if (op =='*'){
        result = a * b;
    }else if (op =='/'){
        result = a / b;
    }else {
        cout << "invalid operator"<<endl;
    }
    cout<< result<<endl;
    
    
    return 0;
}
