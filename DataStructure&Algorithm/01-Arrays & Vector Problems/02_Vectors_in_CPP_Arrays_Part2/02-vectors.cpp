// Vectors in C++

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Initializing vector
    vector<int> vec; // Empty vector of integers
    
    cout << "Initial size of vector: " << vec.size() << endl;
    cout << "Initial capacity of vector: " << vec.capacity() << endl;

    // 2. Adding elements dynamically
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "\nAfter push_back(10, 20, 30):" << endl;
    cout << "Size of vector: " << vec.size() << endl;
    cout << "Capacity of vector: " << vec.capacity() << endl;

    // 3. Dynamic input from user
    int size;
    cout << "\nENTER THE SIZE OF THE DYNAMIC VECTOR : ";
    cin >> size;

    vector<int> user_vec;
    cout << "Enter " << size << " numbers to add to the vector: " << endl;
    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        user_vec.push_back(num);
        cout << "Added " << num << " | Current Size: " << user_vec.size() 
             << " | Current Capacity: " << user_vec.capacity() << endl;
    }

    // 4. Accessing elements
    cout << "\nPrinting elements from user_vec: " << endl;
    for (int i = 0; i < user_vec.size(); i++) {
        cout << "Element at index " << i << " : " << user_vec[i] 
             << " (Using user_vec.at(" << i << "): " << user_vec.at(i) << ")" << endl;
    }

    // 5. Deleting the last element
    if (!user_vec.empty()) {
        cout << "\nPerforming pop_back() to remove last element..." << endl;
        user_vec.pop_back();
        cout << "New Size: " << user_vec.size() << " | New Capacity: " << user_vec.capacity() << endl;
    }

    return 0;
}

/*
🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE VECTOR IN C++? (What is Vector in C++?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Vector C++ Standard Template Library (STL) ka ek dynamic array container hai.
Normal arrays ka size fix hota hai (jaise int arr[5]), par vectors ka size flexible hota hai! 
Jab hum vector mein elements daalte hain, to ye automatic scale hokar bada ho jata hai!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - MAGIC ELASTIC BAG 🎒:
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Maan lo tumhare paas ek elastic bag hai:
- Shuru mein iska size 0 hai.
- Jaise hi tum ek item rakhte ho, bag thoda bada ho jata hai.
- Aur items daalne par bag khud-ba-khud double capacity ka box bana leta hai taaki aage ke items fit ho sakein!
- Tumhe iska size manually define karne ki tension nahi leni padti.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT EXPLANATION - SIZE VS CAPACITY & MEMORY DOUBLING
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Vectors ko samajhne ke liye do words ko samajhna zaroori hai:
1. `Size`: Abhi vector ke andar actual kitne elements present hain.
2. `Capacity`: Vector memory mein kitne elements store karne ki capability (space) rakhta hai.

⚠️ IMP CONCEPT - CAPACITY DOUBLING SCHEME:
Jab vector full ho jata hai aur hum naya element add karte hain, to compiler background mein:
1. Ek naya array double capacity ka allocate karta hai stack/heap par.
2. Purane array ke items ko naye array mein copy karta hai.
3. Purane array ki memory free kar deta hai.

Capacity badhne ka progression standard GCC compiler par aisa hota hai:
`0 ➔ 1 ➔ 2 ➔ 4 ➔ 8 ➔ 16 ➔ 32 ➔ 64 ...`

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
vector<int> user_vec;                       // 1. Ek empty vector banaya integer type ka.
user_vec.push_back(num);                    // 2. Vector ke end mein 'num' insert kiya aur dynamic resizing trigger hui.
user_vec.size();                            // 3. Vector mein filhal kitne elements hain unka count return karta hai.
user_vec.capacity();                        // 4. Vector kitna bada array background memory mein acquire kiye hue hai wo batata hai.
user_vec.pop_back();                        // 5. Last element ko vector se remove/delete karta hai (Size kam ho jati hai, capacity same rehti hai).
user_vec.at(i) or user_vec[i];              // 6. Index 'i' par rakha element extract karta hai. (.at() boundary check bhi karta hai!).

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - CAPACITY TRACING
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Let's see vector growth when inserting: 10, 20, 30, 40, 50

| Element Added | Size | Capacity | Background Action |
|---------------|------|----------|-------------------|
|     (Empty)   |   0  |     0    | No memory allocated yet |
|        10     |   1  |     1    | Capacity doubles to 1 |
|        20     |   2  |     2    | Capacity doubles to 2 |
|        30     |   3  |     4    | Capacity doubles to 4 (Copied [10, 20] -> new memory) |
|        40     |   4  |     4    | Fits in remaining space |
|        50     |   5  |     8    | Capacity doubles to 8 (Copied [10, 20, 30, 40] -> new memory) |

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
✅ Insertion Time Complexity: O(1) Amortized (Mostly O(1) time lagta hai, par resizing ke samay O(N) lagta hai).
✅ Access Time Complexity: O(1) (Direct index se direct access fast hai).
✅ Iteration normal loops aur range-based loops dono se ho sakti hai.
❌ Vector ko function mein pass karte waqt hamesha pass-by-reference (`&vec`) ka use karein, nahi to pura vector copy ho jayega jo time aur memory consume karega!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
💡 PRACTICE CHALLENGES - KHUD SE TRY KARO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
1. Find Element: Ek program likho jo vector ke andar ek input number ko linear search kare.
2. Reverse Vector: Vector ke elements ko swap/reverse karne ka program likho.
3. Pass Vector to Function: Ek function banao jo vector ka sum calculate kare (use pass-by-reference: `int sum(vector<int> &v)`).

Happy Learning! Keep Coding! 🚀✨
*/
