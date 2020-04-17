//
//  partition.h
//  C++ STL Algorithms
//
//  Created by Tanishq Chamola on 29/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#ifndef partition_h
#define partition_h

void partition_() {
    
    vector<int> arr;
    for (int i=0; i<10; i++) {
        arr.push_back(rand()%7);
    }

    cout<<endl<<"Initial array:\n";
    for (int i=0; i<10; i++) {
        cout<<arr[i]<<"\t";
    }
    
    cout<<endl;
    
    //partitioning the array based on a condition
    partition(arr.begin(),arr.end(),[](int x)
    {
        return x%2==0;
          
    });
    
    /*
    Other functions:
     
    is_partitioned();
    stable_partition();
    partition_point();
    */
}

#endif /* partition_h */
