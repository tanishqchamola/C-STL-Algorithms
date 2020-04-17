//
//  modifiers.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 06/04/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef modifiers_h
#define modifiers_h

int f(){
    
    int n = 2;
    return n*n;
}

//these are used to change values inside the collections
void modifiers() {
    
    vector<int> arr;
    vector<int> arr2;
    for (int i=0; i<10; i++) {
        arr.push_back(rand()%7);
    }
    cout<<endl<<"Initial array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    //fill (puts a value every where in the colection)
    fill(arr.begin(), arr.end(), 101);
    
    //generate
    generate(arr.begin(), arr.end(), f);
    
    //takes the inital value and increments until filled
    iota(arr.begin(), arr.end(), 42);
    
    //replace every num1 with num2
    replace(arr.begin(), arr.end(), 42, 43);
    
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}


#endif /* modifiers_h */
