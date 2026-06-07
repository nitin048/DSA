// Arrays in DSA

#include <iostream>
using namespace std;

int main() {
    int mark[] = {22, 33, 55, 66, 77, 88, 99, 100};

    cout << mark[0] << endl;
    cout << mark[1] << endl;
    cout << mark[2] << endl;
    cout << mark[3] << endl;
    cout << mark[4] << endl;
    cout << mark[5] << endl;
    cout << "--------------------------" << endl;
    // int sz = sizeof(mark) / sizeof(int);
    int size;
    cout << "ENTER A SIZE OF AN ARRAY : " << endl;
    cin >> size;
    int hello[size];
    cout << "Enter a number " << size << " times : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> hello[i];
    }
    for (int i = 0; i < size; i++) {
        cout << "This is coming from hello array : " << hello[i] << endl;
    }
    return 0;
}

/*
🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓🍕🚀🎉💡🧠📚🍎🔍🎬🎨🧮🎯🎪💡🎓

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE DYNAMIC SIZE ARRAY? (What is Dynamic Size Array?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Ek Array ek aisi linear data structure hai jisme hum ek hi type ke multiple values (jaise numbers, characters) ko ek line se contiguous memory locations mein store karte hain.
Dynamic Size Array ka matlab hai ki hum array ka size pehle se fix nahi karte, balki user se runtime par poochte hain ki use kitne size ka box (array) chahiye!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - TOY BOX (Dabba):
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Imagine karo tumhare paas ek toy box hai 📦 jiske andar chhote-chhote compartments (sections) bane hain.
- Agar tum box lene dukaan par jaate ho, to shopkeeper poochta hai: "Beta, kitne toys rakhne hain?" (ENTER A SIZE)
- Agar tumne bola `5`, to shopkeeper tumko exactly 5 compartments wala box bana kar deta hai! 
- Phir tum ek-ek karke apne toys un compartments mein rakhte ho.
- Agar size `5` hai, to 5 hi toys rakh paoge, na kam na jyada! 🧸🚗✈️🧩🎨

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT EXPLANATION - ARRAY INDEXING & VLAs
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Array mein indexing hamesha `0` se start hoti hai.
Agar array ka size `N` hai, to indices honge: `0, 1, 2, ..., N-1`.

Mathematical Notation:
Let Array = hello, Size = N
Memory representation:
┌──────────┬──────────┬──────────┬───┬────────────┐
│ hello[0] │ hello[1] │ hello[2] │...│ hello[N-1] │
└──────────┴──────────┴──────────┴───┴────────────┘

Note: 'int hello[size]' ko C++ mein 'Variable-Length Array (VLA)' kehte hain. 
Standard C++ isko fully support nahi karta, par GCC compiler iski permission deta hai extension ke roop mein.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
int size;                                     // 1. Ek integer variable banaya 'size' storage ke liye.
cout << "ENTER A SIZE OF AN ARRAY : " << endl;// 2. Screen par message display kiya size maangne ke liye.
cin >> size;                                  // 3. User se input liya aur use 'size' mein save kiya.
int hello[size];                              // 4. 'size' ke barabar capacity wala integer array banaya.
cout << "Enter a number " << size << " times : " << endl; // 5. User ko values enter karne ke liye bola.

for (int i = 0; i < size; i++) {              // 6. Loop chalaya takki index i = 0 se lekar size-1 tak chale.
    cin >> hello[i];                          // 7. Har ek input number ko array ke index 'i' par store kiya.
}

for (int i = 0; i < size; i++) {              // 8. Dubara loop chalaya array se values nikalne ke liye.
    cout << "This is coming from hello array : " << hello[i] << endl; // 9. Console par store ki hui value print ki.
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - CHALO CHALAKE DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Maan lo user ne Enter kiya: size = 3

Loop 1 (Input Loop):
- i = 0: cin >> hello[0] (User inputs: 10) -> hello array: [10, ?, ?]
- i = 1: cin >> hello[1] (User inputs: 20) -> hello array: [10, 20, ?]
- i = 2: cin >> hello[2] (User inputs: 30) -> hello array: [10, 20, 30]
- i = 3: Loop ends because 3 < 3 is False.

Loop 2 (Output Loop):
- i = 0: Prints "This is coming from hello array : 10"
- i = 1: Prints "This is coming from hello array : 20"
- i = 2: Prints "This is coming from hello array : 30"
- i = 3: Loop ends.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - STEP BY STEP (Pura Program Kaise Chalta Hai)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
┌───────────────────────────────────────────────┐
│              Program Starts (main)            │
└──────────────────────┬────────────────────────┘
                       ▼
┌───────────────────────────────────────────────┐
│ User enters Size: e.g., 4                     │
└──────────────────────┬────────────────────────┘
                       ▼
┌───────────────────────────────────────────────┐
│ hello[4] gets allocated in memory             │
└──────────────────────┬────────────────────────┘
                       ▼
┌───────────────────────────────────────────────┐
│ Input loop runs 4 times (i = 0, 1, 2, 3)      │
│ Inserts numbers to hello[0], ..., hello[3]    │
└──────────────────────┬────────────────────────┘
                       ▼
┌───────────────────────────────────────────────┐
│ Output loop runs 4 times                      │
│ Prints values from hello[0] to hello[3]       │
└──────────────────────┬────────────────────────┘
                       ▼
┌───────────────────────────────────────────────┐
│               Program Ends                    │
└───────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Memory Call Stack (Stack Allocation):
Size entered = 3 (Array 'hello' created on Stack)

Stack Memory:
┌─────────────────────────────┐
│ hello[2] = 30               │ (Address: 0x7ffd...08)
├─────────────────────────────┤
│ hello[1] = 20               │ (Address: 0x7ffd...04)
├─────────────────────────────┤
│ hello[0] = 10               │ (Address: 0x7ffd...00)
├─────────────────────────────┤
│ size = 3                    │ (Address: 0x7ffd...9c)
└─────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Example 2:
- Size = 1
- Input: 99
- Output: "This is coming from hello array : 99"
- Analogy: Ek single candy box jisme sirf 1 candy rakhi hai. 🍬

Example 3:
- Size = 5
- Input: 1, 2, 3, 4, 5
- Output: Prints 1, 2, 3, 4, 5 respectively.
- Analogy: 5 days medicine box 💊.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
✅ Arrays 0-indexed hote hain, matlab pehla element index 0 par store hota hai.
✅ Array ka last element index (Size - 1) par hota hai.
✅ Static arrays ka size compile-time par constant hona chahiye.
✅ Dynamic sizing ke liye standard C++ mein vectors recommend kiye jaate hain.
❌ Array size ke bahar index read/write karne par garbage data ya crash ho sakta hai!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎪 FUN ANALOGY - BACHON KI BHASHA MEIN (In Kid's Language)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Chunnu ko apne 4 dosto ke liye samosa mangwana hai! 🥟
Chunnu pehle dukan wale ko phone karke bolta hai: "Bhaiya, 4 samosa pack kar do!" (cin >> size)
Dukan wala ek dabba lata hai jisme exactly 4 samosa rakhne ki jagah hai (hello[size]).
Dukan wala us dabbe mein ek-ek karke 4 samose bharta hai (cin >> hello[i]).
Phir Chunnu ghar aakar sabhi dosto ko ek-ek karke samosa deta hai (cout << hello[i]). Simple!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
💡 PRACTICE CHALLENGES - KHUD SE TRY KARO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
1. Ek program banao jo user se size le, input le, aur un saare numbers ka Sum (total) print kare.
   *Hint: Ek variable sum = 0 rakho aur loop mein sum += hello[i] karo.*
2. Array ke saare numbers ko reverse order (piche se aage) print karne ka try karo.
   *Hint: for loop ko (size-1) se start karke >= 0 tak chalao.*
3. Array mein sabse bada (maximum) number dhoodhne ka code likho.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎓 SUMMARY - EK LINE MEIN SAMJHO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Array matlab ek line se lage hue compartments, jisme hum size fix karke data dalte hain aur read karte hain!
Code pattern: size input -> array declaration -> loop input -> loop output.
Happy Learning! Keep Coding! 🚀✨
*/

