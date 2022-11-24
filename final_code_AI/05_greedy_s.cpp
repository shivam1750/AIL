//selection sort
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"The number of elements in array are: "<<endl;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (i = 0; i < n-1; i++){
        for ( j = i+1; j< n; j++){
            if (arr[j]<arr[i])
            {
                int swap=arr[j];
                arr[j]=arr[i];
                arr[i]=swap;
            }  
        }
    }
    for (i = 0; i < n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}


// #include<iostream>
// using namespace std;
// #include<iomanip>
// int main(){
//     int x;
//     cout<<"enter the total number of elements : ";
//     cin>>x;
//     int arr[x];
//     cout<<endl;
//     for (int i = 0; i < x; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < x-1; i++)
//     {
//        for (int j = i+1; j < x; j++)
//        {
//             if (arr[j]<arr[i])
//             {
//                 int swap = arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=swap;
//             }
            
//        }
       
//     }
//     cout<<"-------------------------------------";
//     cout<<"the sorted array will be : "<<endl;
//     for (int i = 0; i < x; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0 ;
// }