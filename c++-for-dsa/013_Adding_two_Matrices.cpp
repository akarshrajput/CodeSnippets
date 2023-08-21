#include <iostream>
using namespace std;
// Addition of two 2D Arrays
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    cout<<"Enter Matrices 1 elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter Matrices 2 elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<"Addition of two Matrices is: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}

// // 3D-Array
// int main()
// {
//     int arr[3][3][3]={{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}},{{13,14,15},{16,17,18}}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             for(int k=0;k<3;k++){
//                 cout<<arr[i][j][k]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
// }

// // 4D-Array
// int main()
// {
//     int arr[2][2][2][2]={{{{1,2},{3,4}},{{5,6},{7,8}}},{{{9,10},{11,12}},{{13,14},{15,16}}}};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<2;k++){
//                 for(int l=0;l<2;l++){
//                     cout<<arr[i][j][k][l]<<" ";
//                 }
//                 cout<<endl;
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
// }

// // Addition of two 3D Arrays
// int main()
// {
//     int arr1[2][2][2];
//     int arr2[2][2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<2;k++){
//                 cin>>arr1[i][j][k];
//             }
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<2;k++){
//                 cin>>arr2[i][j][k];
//             }
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<2;k++){
//                 arr1[i][j][k]=arr1[i][j][k]+arr2[i][j][k];
//             }
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<2;k++){
//                 cout<<arr1[i][j][k]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
// }

// Transpose of 2D Array
// int main()
// {
//     int arr1[3][3];
//     int arr2[3][3];
//     cout<<"Enter Matrices 1 elements: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr1[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             arr1[i][j]=arr1[j][i];
//         }
//     }
//     cout<<"Addition of two Matrices is: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr1[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
