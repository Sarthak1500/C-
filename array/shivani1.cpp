// #include <bits/stdc++.h>

// using namespace std;

// int firstOccurrence(int arr[], int n, int key)
// {
//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             // e = mid - 1;
//         }
//         else if (key > arr[mid]) // right me jao
//         {
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) // left me jao
//         {
//             e = mid - 1;
//         }
//         int mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     int even[5] = {1, 2, 3, 3, 5};
//     cout << "First occurrence of 3 is = " << firstOccurrence(even, 5, 3) << endl;
//     return 0;
// }


 #include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;  // Initial calculation of mid
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;  // Move to the left to find the first occurrence
        }
        else if (key > arr[mid])  // Move right
        {
            s = mid + 1;
        }
        else if (key < arr[mid])  // Move left
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;  // Update mid instead of redeclaring
    }
    return ans;
}

int main()
{
    int even[5] = {1, 2, 3, 3, 5};
    cout << "First occurrence of 3 is = " << firstOccurrence(even, 5, 3) << endl;
    return 0;
}
