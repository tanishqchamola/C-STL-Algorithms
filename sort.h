//
//  sort.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 27/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef sort_h
#define sort_h

void sort() {
    
    vector<int> arr;
    for (int i=0; i<10; i++) {
        arr.push_back(rand()%7);
    }
    cout<<endl<<"Initial array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    
    /*
    //sorting complete collection
    sort(arr.begin(),arr.end());
    */
    
    /*
    //sorting a part of collection
    partial_sort(arr.begin(), arr.begin()+5, arr.end());
    */
    
    /*
    //nth element sort
    nth_element(arr.begin(), arr.begin()+2, arr.end());
    */
    
    cout<<endl<<"Sorted array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    
}

#endif /* sort_h */
