/*
    Time Complexity: O(N). 
    Space Complexity: O(1).

    Where N is the size of the array "arr".
*/

int sumOfMaxMin(int arr[], int n) {

    int maximum, minimum;

    maximum = minimum = arr[0];

    for (int i = 1; i < n; i++) {

        // If arr[i] > maximum, then make maximum = arr[i].
        if (arr[i] > maximum) {
            maximum = arr[i];
        }

        // Else If arr[i] < minimum, then make minimum = arr[i].
        else if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    return maximum + minimum;
}
