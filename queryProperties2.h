//
//  queryProperties2.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 29/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef queryProperties2_h
#define queryProperties2_h

void queryProperties2() {
    
    vector<int> arr;
    vector<int> vec;
    for (int i=0; i<10; i++) {
        int num = rand()%7;
        arr.push_back(num);
        vec.push_back(num);
    }

    cout<<endl<<"Initial array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    
    cout<<endl;
    
    // all these function are done on two collections and return bool
    
    random_shuffle(arr.begin(), arr.end());
    
    //same element && same size && SAME ORDER
    cout<<equal(arr.begin(), arr.end(), vec.begin());
    
    //same elements in any order
    cout<<is_permutation(arr.begin(), arr.end(), vec.begin());
    
    //whether range of arr is greater than range of vec
    cout<<lexicographical_compare(arr.begin(), arr.end(), vec.begin(), vec.end());
    
    //returns set of iterator where two collections start to differ
    mismatch(arr.begin(), arr.end(), vec.begin());
    
}


#endif /* queryProperties2_h */
