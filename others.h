//
//  others.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 06/04/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef others_h
#define others_h

int l(){
    
    int n = 2;
    return n*n;
}

void others() {
    
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
    
    //transform - applies function to elements of the collection
    transform(arr.begin(), arr.end(), arr.begin(), [](int x)
    {
        return x%2;
          
    });
    
    //transform with 2 input
    
    
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

#endif /* others_h */
