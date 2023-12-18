// Next Permutation
// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
//
//For example, for arr = [1, 2, 3], the following are all the permutations of 
//arr : [1, 2, 3] , [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1].
//
// the next permutation of arr = [2,3,1] is [3,1,2]

#include <iostream>
#include <vector>

using namespace std;

void nextPermutation(vector<int>&);

void printV(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}
void nextPermutation(vector<int>& nums) {

    int end = nums.size() - 1;
    int breakp = -1;
    int i = end;

    for (i = 0; i < end; i++) {
        if (nums[i] < nums[i + 1]) {
            breakp = i;
        }
    }
    if (breakp == -1) {
        reverse(nums.begin(), nums.end());
    }
    else {
        i = end;
        while (nums[i] <= nums[breakp] && i > breakp)
            i--;
        swap(nums[i], nums[breakp]);
   //     printV(nums);
        reverse(nums.begin() + breakp + 1, nums.end());
    }
}

int main()
{
    vector<int> V = { 1, 2, 3 };
    printV(V);
    
    nextPermutation(V);

    printV(V);
    std::cout << "End\n";
}