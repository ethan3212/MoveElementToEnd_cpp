#include <iostream>
#include <vector>
using namespace std;

// O(n) time (we will only ever check each element once despite having a nested 'while' loop | O(1) space
vector<int> moveElementToEnd(vector<int> &array, int &toMove) {
    int left = 0;// O(1) space
    int right = array.size() - 1;// O(1) space
    while(left < right) {// O(n) time
        while((left < right) && (array[right] == toMove)) {// O(n) time
            right--;// O(1) time | O(1) space
        }
        if(array[left] == toMove) {// O(1) time
            swap(array[left], array[right]);// O(1) time | O(1) space
        }
        left++;// O(1) time | O(1) space
    }
    return array;
}

int main() {
    vector<int> input = {2, 1, 2, 2, 2, 3, 4, 2};
    int toMove = 2;
    for(int element : input) {
        cout<< element << " ";
    }
    cout << endl;
    vector<int> result = moveElementToEnd(input, toMove);
    for(int element : result) {
        cout<< element << " ";
    }
    return 0;
}
