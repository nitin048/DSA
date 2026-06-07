// Kadane's Algorithm in C++

#include <iostream>
#include <climits>
using namespace std;

// Function to find the maximum subarray sum using Kadane's Algorithm
int maxSubarraySum(int arr[], int size) {
    int max_so_far = INT_MIN; // Stores the maximum sum found so far
    int curr_sum = 0;         // Stores the sum of the current subarray

    for (int i = 0; i < size; i++) {
        curr_sum += arr[i]; // Add current element to current sum
        
        // Update max_so_far if curr_sum is greater
        if (curr_sum > max_so_far) {
            max_so_far = curr_sum;
        }

        // If curr_sum becomes negative, discard it and reset to 0
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }
    return max_so_far;
}

int main() {
    int size;
    cout << "ENTER THE SIZE OF THE ARRAY : ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int arr[size];
    cout << "Enter " << size << " elements (both positive & negative) : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxSum = maxSubarraySum(arr, size);
    cout << "------------------------------------------" << endl;
    cout << "Maximum Contiguous Subarray Sum is : " << maxSum << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}

/*
🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE KADANE'S ALGORITHM? (What is Kadane's Algorithm?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Kadane's Algorithm ek aisi optimization technique hai jo humein kisi array mein se "Maximum Subarray Sum" (sabse bada contiguous sum) nikalne mein madad karti hai.
Iska sabse bada fayda ye hai ki ye sirf ek single pass (O(N) time complexity) mein problem solve kar deta hai, jabki brute force method O(N^2) ya O(N^3) time leta hai!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - PROFIT / LOSS TRACKER (Dukh aur Sukh):
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Imagine karo tum roz business karte ho aur daily profit ya loss record karte ho: `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`
- Tumhe ek continuous time period (subarray) dhoodhna hai jisme sabse zyada profit hua ho.
- Agar business mein loss itna bada ho jaye ki tumhara overall capital negative chala jaye (curr_sum < 0), to samajhdari isi mein hai ki purane dukh ko bhool jao, debt ko wahi chhoro, aur agle din se naye sire se (reset to 0) shuru karo! 💸📈
- Jab bhi naya profit aaye, use apne lifetime record (`max_so_far`) se compare karo. Agar wo naya record hai, to use update kar lo!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT EXPLANATION - TWO VARIABLE TRACKING
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Hum isme 2 main variables maintain karte hain:
1. `curr_sum`: Abhi tak jis sub-array par chal rahe hain, uska total sum.
2. `max_so_far`: Abhi tak ka mila sabse bada sum (humara final answer).

Mathematical Formulation:
Local Maximum at index i:
  curr_sum[i] = max(arr[i], curr_sum[i-1] + arr[i])
  max_so_far = max(max_so_far, curr_sum[i])

Visual Representation:
Array: [ -2,  1, -3,  4, -1,  2,  1, -5,  4 ]
        ▲
      curr_sum adds elements. If curr_sum < 0, it drops it and resets to 0.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
int max_so_far = INT_MIN; // 1. INT_MIN se start kiya taaki agar saare numbers negative hon, to bhi sahi max answer mile.
int curr_sum = 0;         // 2. Apne current subarray sum ko tracking ke liye 0 set kiya.

for (int i = 0; i < size; i++) {
    curr_sum += arr[i];   // 3. Har element ko 'curr_sum' mein add kiya.
    
    if (curr_sum > max_so_far) {
        max_so_far = curr_sum; // 4. Agar naya sum pehle wale max se bada hai, to use update karo!
    }

    if (curr_sum < 0) {
        curr_sum = 0;     // 5. Agar sum negative ho gaya, to pichli history discard karo aur 0 se start karo.
    }
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - CHALO TRACE KARTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Array: [-2, 1, -3, 4, -1, 2, 1, -5, 4], Size = 9

| i | Element (arr[i]) | curr_sum (before reset) | max_so_far | Action taken |
|---|------------------|-------------------------|------------|--------------|
| 0 |       -2         |           -2            |    -2      | curr_sum < 0 -> resets to 0 |
| 1 |        1         |            1            |     1      | Updated max_so_far to 1 |
| 2 |       -3         |           -2            |     1      | curr_sum < 0 -> resets to 0 |
| 3 |        4         |            4            |     4      | Updated max_so_far to 4 |
| 4 |       -1         |            3            |     4      | No change |
| 5 |        2         |            5            |     5      | Updated max_so_far to 5 |
| 6 |        1         |            6            |     6      | Updated max_so_far to 6 (Ans Subarray: [4, -1, 2, 1]) |
| 7 |       -5         |            1            |     6      | No change |
| 8 |        4         |            5            |     6      | No change |

Final Max Sum = 6

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
✅ Time Complexity: O(N) — Kyuki hum sirf ek baar loop chalate hain array ke upar.
✅ Space Complexity: O(1) — Koi extra space use nahi ho rahi hai.
✅ Agar array mein saare numbers negative hon (e.g. [-3, -2, -5]):
   - `max_so_far` ko `INT_MIN` se initialise karne ki wajah se, ye maximum negative number (e.g. -2) dhoond lege.
   - Us case mein check `curr_sum < 0` hone par resetting logic loop ke ant mein hota hai, isliye correct answer update ho jata hai pehle.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎪 FUN ANALOGY - MONOPOLY GAME (Doston ke beech khel)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Raju aur Baburao monopoly khel rahe hain. Raju ko har step par kuch paise milte hain ya dene padte hain.
Raju chahta hai ki wo aisa streak dhoondhe jahan uski pocket full ho jaye.
- Pehle step pe loss hua (-2), Raju bola: "Arrey yaar, game naye sire se shuru karte hain!" (curr_sum = 0)
- Agle step pe 1 Rs mila, Raju bola: "Haan, abhi tak ka max 1 Rs hai!" (max_so_far = 1)
- Phir -3 mila, overall -2 ho gaya. Raju ne fir game reset kiya.
- Phir 4 mila, tab se uski kismat chamki aur use sequential steps par acche paise mile jab tak ki overall sum 6 ho gaya! Yehi hai Kadane's Algorithm!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
💡 PRACTICE CHALLENGES - KHUD SE TRY KARO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
1. Print the Subarray: Aisa code likho jo sirf max sum nahi, balki wo kaunsa range (start aur end index) hai, wo bhi print kare!
   *Hint: Start aur end index track karne ke liye variables maintain karo jab bhi max_so_far update ho.*
2. Kadane's for Circular Array: Agar array circular ho, to max subarray sum kaise nikaloge? (LeetCode 918)
3. Minimum Subarray Sum: Kadane's algorithm ka logic change karke minimum subarray sum dhoondho.

Happy Learning! Keep Coding! 🚀✨
*/
