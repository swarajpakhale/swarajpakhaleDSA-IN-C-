#include<iostream>
using namespace std;

// ascending order

    // int arr[100];
    // int n;
    // cout<<"enter the size of array :";
    // cin>>n;
    // cout<<"enter the array elemnents :";
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n-1;i++)
    // {
    //    int index=i;

    //    for( int j=i+1;j<n;j++)
    //    {
    //        if(arr[j]<arr[index])
    //         index=j;   
    //    }

    //    swap(arr[i],arr[index]);
    // }  

    //    for(int i=0;i<n;i++)
    //    {
    //     cout<<arr[i]<<" ";
    //    }

//decending order 

  //  int arr[6]={10,6,8,3,5,1};

  //  for(int i=0;i<5;i++)
  //  {
  //     int index=i;

  //     for(int j=i-1;j<6;j--)
  //     {
  //       if(arr[j]<arr[index])
  //          index=j;
  //     }

  //     swap(arr[i],arr[index]);
  //   }

  //     for(int i=0;i<6;i++)
  //     {
  //       cout<<arr[i]<<" ";
  //     }

//program for bubble sort in increasing order
// and decreasing order

  // int n,arr[1000];
  // cout<<"enter the size of array :";
  // cin>>n;
  // cout<<"enter the elements in a array :";
  // for(int i=0;i<n;i++)
  // {
  //   cin>>arr[i];
  // }
  // for(int i=n-2;i>=0;i--)
  // {
  //   bool swapped=0;
  //   for(int j=0;j<=i;j++)
  //   {
  //     if(arr[j]<arr[j+1])
  //     {
  //       swapped=1;
  //       swap(arr[j],arr[j+1]);
        
  //     }
  //   }
    
  //   if(swapped==0)
  //    break;  
  // }
  //   for(int i=0;i<n;i++)
  //   {
  //     cout<<arr[i]<<" ";
  //   }
    

  //program for inserting the array with two situations includiong first one i.e checking increasing decreasing and without break:

    // int arr[1000];
    // int n;
    // cout<<"enter the size of array :" ;
    // cin>>n;
    // cout<<"enter the array elements :" ;
    // for(int i=0;i<n;i++)
    // {
    //   cin>>arr[i];
    // }
    // for(int i=1;i<n;i++)
    // {
    //   for(int j=n-1;j>0;j--)
    //   {
    //     if(arr[j]<arr[j-1])
    //     {
    //     swap(arr[j],arr[j-1]);
    //     }
    //   }
    // }
    // for(int i=0;i<n;i++)
    // {
    //   cout<<arr[i]<<" ";
    // }
    // cout<<endl;

  
//    int binarysearch(int arr[],int n,int key)
//    {
//     int start=0,end= n-1,mid;

//     while(start<=end)
//     {
//       mid=(start+end-start)/2;

//       if(arr[mid]==key)
//       return mid;

//       else if(arr[mid]<key)
//       start=mid+1;

//       else
//       end=mid-1;
//     }
//     return -1;
  
//    }
  
//   int main()
//   {
//   int arr[1000];
//   int n;
//   cout<<"enter the  number of elements :";
//   cin>>n;
//   cout<<"enter the array elements :";
//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }

//   int key;
//   cout<<"enter the key :";
//   cin>>key;

//   cout<<binarysearch(arr,n,key)<<endl;
//   return 0;
// }




// int firstOccurrence(int arr[], int n, int target)
//  {
//     int start = 0, end = n - 1, mid;
//     int first = -1;
//     while (start <= end)
//      {
//         mid = (start + end) / 2;
//         if (arr[mid] == target)
//         {
//             first = mid;
//             end = mid - 1; // look on left side
//         }
//         else if (arr[mid] < target)
//             start = mid + 1;
//         else
//             end = mid - 1;
//       }
//     return first;
// }

// int lastOccurrence(int arr[], int n, int target) 
// {
//     int start = 0, end = n - 1, mid;
//     int last = -1;
//     while (start <= end)
//     {
//         mid = (start + end) / 2;
//         if (arr[mid] == target)
//         {
//             last = mid;
//             start = mid + 1; // look on right side
//         }
//         else if (arr[mid] < target)
//             start = mid + 1;
//         else
//             end = mid - 1;
//     }
//     return last;
// }

// int main() {
//     int arr[1000];
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     cout << "Enter the array elements (sorted): ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int target;
//     cout << "Enter the target: ";
//     cin >> target;

//     int first = firstOccurrence(arr, n, target);
//     int last = lastOccurrence(arr, n, target);

//     if (first == -1)
//         cout << "Element not found" << endl;
//     else
//         cout << "First occurrence: " << first << ", Last occurrence: " << last << endl;

//     return 0;
// }


// int searchinsert(int arr[],int n,int target)
// {
//     int start=0,end=n-1,mid;
//     while(start<=end)
//     {
//       mid=start+(end-start)/2;
//       if(arr[mid]==target)
//       {
//         return mid;
//         start=mid+1;
//       }
//       else if(arr[mid]<target)
//       start=mid+1;
//       else
//       end=mid-1;
      

//     }
//     return mid;

    
// }




// int main()
// {

//   int arr[1000];
//   int n;
//   cout<<"enter the no of elements: ";
//   cin>>n;
//   cout<<"enter the array elements: ";
//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }

//   int target;
//   cout<<"enter the target: " ;
//   cin>>target;

//   int pos =  searchinsert(arr, n ,target);
//   cout<<"insert value at position : "<< pos <<endl;
//   return 0;


// int squareRoot(int x)
//  {
//     if (x == 0 || x == 1)
//         return x;

//     int start = 1, end = x, ans = 0;

//     while (start <= end) 
//     {
//         int mid = start + (end - start) / 2;

//         if (mid <= x / mid) {   // avoid overflow by using division
//             ans = mid;          // mid is a possible answer
//             start = mid + 1;    // move right to find bigger root
//         } else 
//         {
//             end = mid - 1;      // move left
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Square root (floor): " << squareRoot(n) << endl;
//     return 0;
// }



// int peakindexinmountainarray(int arr[],int n)
// {
//     int start=0,end=n-1,mid;
    
//     while(start<=end)
//     {
//       mid=end+(start-end)/2;
//       if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
//       {
//         return mid;
//       }
//       else if(arr[mid]>arr[mid-1])
//       {
//         start=mid+1;
//       }
//       else
//       end=mid-1;

//     }  
//     return start;  
// }

// int main()
// {
//   int arr[1000];
//   int n;
//   cout<<"enter the number of elements: ";
//   cin>>n;
//   cout<<"enter the array elements: ";
//   for(int i=1;i<n;i++)
//   {
//     cin>>arr[i];
//   }
 

//   int peakindex = peakindexinmountainarray(arr,n);
//   cout<<" peak element is "<<arr[peakindex]<<" at index " <<peakindex <<endl;
//   return 0;
  
// }

// int findMinInRotatedArray(int arr[], int n)
//  {
//     int start = 0, end = n - 1;

//     while (start < end) {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] > arr[end]) {
            
//             start = mid + 1;
//         } else {
            
//             end = mid;
//         }
//     }
//     return arr[start];  
// }

// int main() 
// {
//     int arr[] = {4, 5, 6, 7, 8, 1, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int minimum = findMinInRotatedArray(arr, n);
//     cout << "Minimum element in the rotated array is: " << minimum << endl;

//     return 0;
// }


// int searchInRotatedArray(int arr[], int n, int target) {
//     int start = 0, end = n - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == target) {
//             return mid; // found target
//         }

//         // Check if the left half is sorted
//         if (arr[start] <= arr[mid]) {
//             if (target >= arr[start] && target < arr[mid]) {
//                 end = mid - 1; // search left
//             } else {
//                 start = mid + 1; // search right
//             }
//         }
//         // Otherwise, right half must be sorted
//         else {
//             if (target > arr[mid] && target <= arr[end]) {
//                 start = mid + 1; // search right
//             } else {
//                 end = mid - 1; // search left
//             }
//         }
//     }

//     return -1; // target not found
// }

// int main() {
//     int arr[] = {4, 5, 6, 7, 0, 1, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 0;

//     int index = searchInRotatedArray(arr, n, target);
//     if (index != -1) {
//         cout << "Element " << target << " found at index " << index << endl;
//     } else {
//         cout << "Element " << target << " not found in array" << endl;
//     }

//     return 0;
// }












































    
