//
//  movers.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 05/04/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef movers_h
#define movers_h

void movers() {
    
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
    
    //copy (duplicates)
    copy(arr.begin(), arr.end(), arr2.begin());
    
    //move (cut+paste)
    move(arr.begin(), arr.end(), arr2.begin());
    
    //copy backwards (copy might fail in some cases (think logically), the use this)
    copy_backward(arr.begin(), arr.end(), arr2.begin());
    
    //move backwards
    move_backward(arr.begin(), arr.end(), arr2.begin());
    
    /*
    Other functions:
     
     remove_copy();
     unique_copy();
     everse_copy();
     rotate_copy();
     replace_copy();
     partition_copy();
     partial_sort_copy();
     
     find_if();
     find_if_not();
     count_if();
     remove_if();
     remove_copy_if();
     replace_if();
     replace_copy_if();
     copy_if();
     
    */
    
    
    
    for (int i=0; i<arr2.size(); i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}


#endif /* movers_h */
