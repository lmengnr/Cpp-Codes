#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,3> arr1 = {1, 2, 3};
    cout << "Array elements are: " << arr1[0] << " " << arr1[1] << " " << arr1[2] << endl;
    cout << "\n" << endl;
    //cout << "Array is: " << arr1 << endl;
    //Above line doesn't work, have to print arrays elementwise 

    
    // Using a range based for loop
    std::array<int, 4> arr = {1, 2, 3, 4};
    cout << "size of arr is: " << arr.size() << endl;
    for (int i : arr) 
    {
        cout << i << endl;
    };

    cout << "Printing a 2D Array \n" << endl;
    int arr2[2][3] = { {1, 2, 3}, {4, 5, 6} };

    for (int i = 0; i<2; ++i)
    {
        for (int n = 0; n < 3; ++n)
        {
            cout << arr2[i][n] << " " ;
        }
        cout << "" << endl;
    };


    return 0;

}