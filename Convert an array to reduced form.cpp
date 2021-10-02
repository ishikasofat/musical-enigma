// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the reduced form
// of the given array arr[]
void convert(int arr[], int n)
{
	// Stores the sorted form of the
	// the given array arr[]
	int brr[n];

	for (int i = 0; i < n; i++)
		brr[i] = arr[i];

	// Sort the array brr[]
	sort(brr, brr + n);

	// Traverse the given array arr[]
	for (int i = 0; i < n; i++) {

		int l = 0, r = n - 1, mid;

		// Perform the Binary Search
		while (l <= r) {

			// Calculate the value of
			// mid
			mid = (l + r) / 2;

			if (brr[mid] == arr[i]) {

				// Print the current
				// index and break
				cout << mid << ' ';
				break;
			}

			// Update the value of l
			else if (brr[mid] < arr[i]) {
				l = mid + 1;
			}

			// Update the value of r
			else {
				r = mid - 1;
			}
		}
	}
}

// Driver Code
int main()
{
	int arr[] = { 10, 20, 15, 12, 11, 50 };
	int N = sizeof(arr) / sizeof(arr[0]);
	convert(arr, N);

	return 0;
}
