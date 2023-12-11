// Next Permutation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;


void nextPermutation2(vector<int>&);

void printV(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";

    }
    cout << endl;
}
void printV2(vector<int>& nums) {
    
    int end = nums.size() - 1;
    int breakp = -1;
    int i= end;

    for (i = 0; i < end; i++) {
        if (nums[i] < nums[i+1]) {
            breakp = i;
        }       
    }
    if (breakp == -1) {
        reverse(nums.begin(), nums.end());
    }
    else {
        i = end;
        while (nums[i]<=nums[breakp]&&i>breakp)
            i--;
        
        swap(nums[i], nums[breakp]);
        printV(nums);
        reverse(nums.begin()+breakp+1, nums.end());
    }


}



int main()
{

    vector<int> V = {1, 2, 3};
 //   Solution S;
  //  swap(V[0], V[1]);
    printV(V);
//    reverse(V.begin(), V.end());
    printV2(V);

     printV(V);

    std::cout << "Hello World!\n";
}