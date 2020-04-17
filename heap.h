//
//  heap.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 27/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef heap_h
#define heap_h

void heap() {
    
    vector<int> arr;
    for (int i=0; i<10; i++) {
        arr.push_back(rand()%7);
    }

    // making a new heap from a collection
    make_heap(arr.begin(), arr.end());

    // adding new element to the heap
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    arr.push_back(11);
    push_heap(arr.begin(), arr.end());

    //pop_heap(arr.begin(), arr.end());
    cout<<endl;
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
}

#endif /* heap_h */
