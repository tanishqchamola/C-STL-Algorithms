//
//  queryProperties.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 29/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef queryProperties_h
#define queryProperties_h

bool isEven(int n) {
    return (n%2==0);
}

void queryProperties() {
    
    vector<int> arr;
    for (int i=0; i<10; i++) {
        arr.push_back(rand()%7);
    }

    cout<<endl<<"Initial array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    
    cout<<endl;
    
    // all these function return bool
    
    //whether all elements in collection satisfy the predicate
    cout<<all_of(arr.begin(), arr.end(), isEven);
    
    //whether any element in collection satisfy the predicate
    cout<<any_of(arr.begin(), arr.end(), isEven);
    
    //whether none element in collection satisfy the predicate
    cout<<none_of(arr.begin(), arr.end(), isEven);
    
}

#endif /* queryProperties_h */
