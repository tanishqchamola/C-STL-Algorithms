//
//  searchValue.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 29/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef searchValue_h
#define searchValue_h

void searchValue() {
    
    vector<int> arr;
    for (int i=0; i<10; i++) {
        arr.push_back(rand()%7);
    }
    cout<<endl<<"Initial array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    //FOR NON-SORTED COLLECTION
    
    //return iterator pointing to position of first occurrence or end (if element not found)
    auto pos = find(arr.begin(), arr.end(), 6);
    cout<<pos - arr.begin()<<endl;
    
    
    //find first occurence of any pair of adjacent value
    pos = adjacent_find(arr.begin(), arr.end());
    cout<<pos - arr.begin()<<endl;
    
    //FOR SORTED COLLECTION
    sort(arr.begin(), arr.end());
    
    //binary search - tells if a value is present or not (doesn't tell the position)
    cout<<binary_search(arr.begin(), arr.end(), 1)<<endl;
    
    //return a subrange (can contain 0,1 or more elements)
    equal_range(arr.begin(), arr.end(), 6);
    
    
    
        
}

#endif /* searchValue_h */
