#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;




//    create vector,declare
    //   vector<int>v;
    //   vector<int>v1(5,1);
    // //   size and capacity
    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;
    // // update value
    // v[1]=5;
    // cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;

    // delete value from vector
    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(75);
    // vnew.push_back(46);
    // vnew.push_back(96);
    // vnew.push_back(38);
    // vnew.pop_back();
    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
    
    // vnew.erase(vnew.begin()+1);
    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
    // for(int i=0;i<vnew.size();i++)
    // cout<<vnew[i]<<" ";

    // vnew.insert(vnew.begin()+1,50);
    // cout<<endl;
    

    // vnew[1]=37;
    // for(int i=0;i<vnew.size();i++)
    // cout<<vnew[i]<<" ";

    // vnew.clear();
    // cout<<endl;
    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew: "<<vnew.capacity()<<endl;

//     vector<int>arr;
//     arr.push_back(2);
//     arr.push_back(15);
//     arr.push_back(48);

//     cout<<arr[0]<<endl;
//     cout<<arr.front()<<endl;
//     cout<<arr[arr.size()-1]<<endl;
//     cout<<arr.back()<<endl;
   
//    vector<int>a;
//    a=arr;
//    cout<<a.size();  
//    cout<<endl;

//    for(auto it = arr.begin();it!=arr.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     for(auto i:arr)
//     cout<<i<<" ";

    // vector<int>ans;
    // ans.push_back(5);
    // ans.push_back(96);
    // ans.push_back(597);
    // ans.push_back(98);

    // sort(ans.begin(),ans.end());
    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<" ";
    // cout<<endl;

    // // sort(ans.rbegin(),ans.rend());
    // // for(int i=0;i<ans.size();i++)
    // // cout<<ans[i]<<" ";
    // // cout<<endl;

    // // search in binary search
    // cout<<binary_search(ans.begin(),ans.end(),597)<<endl;

    // cout<<find(ans.begin(),ans.end(),597)-ans.begin()<<endl;



// bool divide(vector<int>arr)
// {
//    int prefix=0,total_sum=0,n=arr.size();
  
//    for(int i=0;i<n;i++)
//    total_sum+=arr[i];

//    for(int i=0;i<n;i++)
//    {
//     prefix+=arr[i];
//     if(total_sum=2*prefix)
//     return 1;
//    }
//    return 0;

// }

// int main()
// {
//     int n;
//     cout<<"enter the size of array :";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"enter the array elements :";
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     cout<<divide(v);

// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;

// int maxdifference(const vector<int> &v) {
//     int n = v.size();
//     int maxDiff = INT_MIN;

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             maxDiff = std::max(maxDiff, v[j] - v[i]); // std::max explicitly
//         }
//     }
//     return maxDiff;
// }

// int main() {
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;

//     vector<int> v(n);
//     cout << "Enter the array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     int result = maxdifference(v);
//     cout << "Maximum difference: " << result << endl;

//     return 0;
// }


//  int main()
//  {
//     int n,m;
//     cout<<"enter the no of rows and columns: ";
//     cin>>n>>m;
//     vector<vector<int> >matrix(n,vector<int>(m,1));

//     for(int i=0;i<n;i++)
//     for(int j=0;j<m;j++)
//     cin>>matrix[i][j];

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         cout<<matrix[i][j]<<" "; 
//         cout<<endl;
//     }

//  }

// void wave(int arr[][4], int row,int col)
// {
//     for(int j=0;j<col;j++)
//     {
//         if(j%2==0)
//         {
//             for(int i=0;i<row;i++)
//             {
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else
//         {
//             for(int i=row-1;i>=0;i--)
//             {
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
// }
 
// int main()
// {
//     int arr1[3][4]={1 ,7, 3, 4, 5, 6, 7, 8, 9, 1, 2, 4};
//     int arr2[3][4]={2,3,4,5,6,7,8,9,1,2,3,4};
//     int ans[3][4];

//     wave(arr1 ,3,4);

// }



// // Function to rotate matrix 90 degrees clockwise once
// void rotate90(vector<vector<int>>& mat) 
// {
//     int n = mat.size();
//     int m = mat[0].size();

//     // Create a new matrix of m x n for rotated result
//     vector<vector<int>> temp(m, vector<int>(n));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             temp[j][n - i - 1] = mat[i][j];
//         }
//     }

//     mat = temp; // assign back to mat
// }

// // Rotate k times
// void rotateKTimes(vector<vector<int>>& mat, int k) {
//     k = k % 4; // every 4 rotations gives original
//     for (int i = 0; i < k; i++) {
//         rotate90(mat);
//     }
// }

// // Utility function to print matrix
// void printMatrix(const vector<vector<int>>& mat) {
//     for (auto row : mat) {
//         for (auto val : row)
//             cout << val << " ";
//         cout << endl;
//     }
// }

// int main() {
//     vector<vector<int>> matrix = 
//     {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int k;
//     cout << "Enter k rotations: ";
//     cin >> k;

//     rotateKTimes(matrix, k);

//     cout << "Matrix after " << k << " rotations:\n";
//     printMatrix(matrix);

//     return 0;
// }


// int main()
// {
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     for(int i=1;i<n;i=i+2)
//     {
//         cout<< i <<" ";
        
//     }
//     cout<<endl;
// }

// int main()
// {
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     for(int i=1;i<n;i++)
//     {
//         if(i%4==0)
//         {
//             cout<< i <<" ";
//         }
//     }
// }    















