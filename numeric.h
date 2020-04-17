//
//  numeric.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 29/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef numeric_h
#define numeric_h

void numeric_() {
    
    vector<int> arr;
    for (int i=0; i<10; i++) {
        arr.push_back(rand()%7);
    }
    cout<<endl<<"Initial array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    //tells how many times 6 occurs in collection
    cout<<count(arr.begin(), arr.end(), 6)<<endl;
    
    //sum of elements(all or upto n) in a collection
    int sum=0;
    sum = accumulate(arr.begin(),arr.end(), sum);
    cout<<sum<<endl;
    
    //inner product of elements
    int innerProduct=0;
    innerProduct = inner_product(arr.begin(), arr.end(), arr.begin(), innerProduct);
    cout<<innerProduct<<endl;
    
    //adjacent difference
    int adjDifference[9];
    adjacent_difference(arr.begin(), arr.end(), adjDifference);
    
    for (int i=0; i<9; i++) {
        cout<<adjDifference[i]<<"\t";
    }
    cout<<endl;
        
}

#endif /* numeric_h */
