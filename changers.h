//
//  changers.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 06/04/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef changers_h
#define changers_h

//chnage the structure
void changers() {
    
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
    
    //remove (pulls the numbers to be removed at the end of collection)
    //return in iterator pointing to removed element
    remove(arr.begin(), arr.end(), 42);
    
    // to acutally delete those elements, use this
    arr.erase(remove(arr.begin(), arr.end(), 42), arr.end());
    
    //unique - removes(as remove() does) adjacent duplicates in the collection
    unique(arr.begin(), arr.end());
    
    // to acutally keep the unique elements, use this
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

#endif /* changers_h */
