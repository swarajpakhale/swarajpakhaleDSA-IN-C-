#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    cin >> arr[i];

    int ans[2] = {0, 0}; // ans[0] = repeating, ans[1] = missing

    // First loop: encode counts
    for (int i = 0; i < n; i++)
        arr[arr[i] % n] += n;

    // Second loop: find repeating and missing
    for (int i = 0; i < n; i++) 
    {
        int count = arr[i] / n;
        if (count == 2)          // repeating
            ans[0] = i + 1;
        else if (count == 0)     // missing
            ans[1] = i + 1;
    }

    cout << "Repeating: " << ans[0] << "\n";
    cout << "Missing: " << ans[1] << "\n";

    return 0;
}
