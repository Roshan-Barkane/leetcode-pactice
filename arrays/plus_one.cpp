/* 66. Plus One
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].

Constraints:
1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.*/
//-----------------------------------------------

#include <iostream>
using namespace std;
int main()
{ /*
     short int i = digits.size() - 1;
         if (i >= 0) {
             while (i != -1) {
                 digits[i] += 1;
                 if (i == 0 && digits[i] == 10) {
                     digits[i] = 0;
                     digits.insert(digits.begin(), 1);
                 }
                 else if (digits[i] == 10) digits[i] = 0;
                 else break;
                 i--;
             }
         }
         return digits;
         */
    // its my algo but not work leetcode compiler.
    int nums[] = {1, 9, 7, 9, 9, 1, 9, 9, 9, 9};

    // find the element of arrays
    int lastelement = sizeof(nums) / sizeof(int);
    cout << lastelement << endl;
    if (nums[--lastelement] != 9)
    {
        int temp = nums[lastelement] + 1;
        nums[lastelement] = temp;
    }
    else
    {

        int i = lastelement;
        do
        {
            if (nums[i] == 9)
            {
                nums[i] = 0;
                if (nums[i - 1] != 9)
                {
                    break;
                }
            }
            else if (nums[i] != 9)
            {
                int temp = nums[i] + 1;
                nums[i] = temp;
            }
            i--;
        } while (i > 0);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << nums[i];
    }
}
