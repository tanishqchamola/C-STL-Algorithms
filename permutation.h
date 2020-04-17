//
//  permutation.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 27/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef permutation_h
#define permutation_h

void permutation() {
    
    vector<int> arr;
    for (int i=0; i<10; i++) {
        arr.push_back(rand()%7);
    }
    cout<<endl<<"Initial array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    /*
    //rotating a collection (n -> number of times rotated)
    int n=2;
    rotate(arr.begin(), arr.begin()+n, arr.end());
    */
    
    /*
    //shuffle a collection
    random_shuffle(arr.begin(), arr.end());
    */
    
    /*
    //reverse a collection
    reverse(arr.begin(), arr.end());
    */
    
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
        
}

#endif /* permutation_h */
