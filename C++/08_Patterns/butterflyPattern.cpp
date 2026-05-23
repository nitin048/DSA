#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "----------------" << endl;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// ============================================
// 🦋 BUTTERFLY PATTERN - COMPLETE GUIDE 🦋
// ============================================
//
// 🎯 WHAT THIS CREATES:
//
// Example (n=4):
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
//
// It looks like a butterfly! 🦋
//
// ============================================
// 🏗️ THE BIG PICTURE
// ============================================
//
// The butterfly has TWO parts:
//
// 1️⃣ UPPER HALF (expanding wings) ⬆️
//    Wings start small, get bigger
//    Space in middle gets smaller
//
// 2️⃣ LOWER HALF (shrinking wings) ⬇️
//    Wings start big, get smaller
//    Space in middle gets bigger
//    Mirrors the upper half
//
// ============================================
// 📊 ROW-BY-ROW BREAKDOWN (n=4)
// ============================================
//
// 🔼 UPPER HALF (4 rows):
//
// Row 1 (i=1): 1 star + 6 spaces + 1 star
//              "*      *"
//
// Row 2 (i=2): 2 stars + 4 spaces + 2 stars
//              "**    **"
//
// Row 3 (i=3): 3 stars + 2 spaces + 3 stars
//              "***  ***"
//
// Row 4 (i=4): 4 stars + 0 spaces + 4 stars
//              "********"  ← Wings touch!
//
// 🔽 LOWER HALF (4 rows):
//
// Row 1 (i=4): 4 stars + 0 spaces + 4 stars
//              "********"  ← Wings touch!
//
// Row 2 (i=3): 3 stars + 2 spaces + 3 stars
//              "***  ***"
//
// Row 3 (i=2): 2 stars + 4 spaces + 2 stars
//              "**    **"
//
// Row 4 (i=1): 1 star + 6 spaces + 1 star
//              "*      *"
//
// ============================================
// 🔍 HOW THE LOOPS WORK
// ============================================
//
// 🔼 UPPER HALF LOOPS:
//
// Outer Loop:
//    for (int i = 1; i <= n; i++)
//
//    Controls rows (1 to n)
//    i = number of stars on each side
//
// Loop 1 - Left Stars:
//    for (int j = 1; j <= i; j++)
//
//    Purpose: Print left wing 🦋
//    Number of stars = i
//
//    Row 1: 1 star
//    Row 2: 2 stars
//    Row 3: 3 stars
//    Row 4: 4 stars
//
// Loop 2 - Middle Spaces:
//    for (int j = 1; j <= 2 * (n - i); j++)
//
//    Purpose: Space between wings
//    Formula: 2 * (n - i)
//
//    Row 1: 2*(4-1) = 6 spaces
//    Row 2: 2*(4-2) = 4 spaces
//    Row 3: 2*(4-3) = 2 spaces
//    Row 4: 2*(4-4) = 0 spaces
//
// Loop 3 - Right Stars:
//    for (int j = 1; j <= i; j++)
//
//    Purpose: Print right wing 🦋
//    Number of stars = i (same as left)
//
//    Row 1: 1 star
//    Row 2: 2 stars
//    Row 3: 3 stars
//    Row 4: 4 stars
//
// 🔽 LOWER HALF LOOPS:
//
// Outer Loop:
//    for (int i = n; i >= 1; i--)
//
//    Controls rows (n down to 1)
//    i = number of stars on each side
//
// Loop 1 - Left Stars:
//    for (int j = 1; j <= i; j++)
//
//    Purpose: Print left wing 🦋
//    Number of stars = i
//
//    Row 1: 4 stars
//    Row 2: 3 stars
//    Row 3: 2 stars
//    Row 4: 1 star
//
// Loop 2 - Middle Spaces:
//    for (int j = 1; j <= 2 * (n - i); j++)
//
//    Purpose: Space between wings
//    Formula: 2 * (n - i)
//
//    Row 1: 2*(4-4) = 0 spaces
//    Row 2: 2*(4-3) = 2 spaces
//    Row 3: 2*(4-2) = 4 spaces
//    Row 4: 2*(4-1) = 6 spaces
//
// Loop 3 - Right Stars:
//    for (int j = 1; j <= i; j++)
//
//    Purpose: Print right wing 🦋
//    Number of stars = i (same as left)
//
//    Row 1: 4 stars
//    Row 2: 3 stars
//    Row 3: 2 stars
//    Row 4: 1 star
//
// ============================================
// 🧮 THE MAGIC FORMULAS
// ============================================
//
// 🔼 UPPER HALF (i = 1 to n):
//
//    Left Stars = i
//    Middle Spaces = 2 * (n - i)
//    Right Stars = i
//
//    Pattern: Stars increase, spaces decrease
//
// 🔽 LOWER HALF (i = n to 1):
//
//    Left Stars = i
//    Middle Spaces = 2 * (n - i)
//    Right Stars = i
//
//    Pattern: Stars decrease, spaces increase
//
// Total width = i + 2*(n-i) + i = 2*n
//
// ============================================
// 🎨 VISUAL BREAKDOWN
// ============================================
//
// Think of it as butterfly wings:
//
// Upper:  [*      *]  ← Small wings, big gap
//         [**    **]  ← Wings growing
//         [***  ***]  ← Wings bigger
//         [********]  ← Wings touch!
//
// Lower:  [********]  ← Wings touch!
//         [***  ***]  ← Wings shrinking
//         [**    **]  ← Wings smaller
//         [*      *]  ← Small wings, big gap
//
// The butterfly is symmetric! 🦋
//
// ============================================
// 💡 WHY IT LOOKS LIKE A BUTTERFLY
// ============================================
//
// 1️⃣ SYMMETRY:
//    Left and right wings are identical 🪞
//    Top and bottom mirror each other ⚖️
//
// 2️⃣ EXPANDING THEN SHRINKING:
//    Wings grow → Touch in middle → Shrink
//    Creates the butterfly shape! 🦋
//
// 3️⃣ SPACE IN MIDDLE:
//    Gap between wings (body of butterfly)
//    Gets smaller then bigger
//    Like a real butterfly! 🦋
//
// ============================================
// 🎯 REAL-WORLD ANALOGY
// ============================================
//
// Imagine a butterfly opening and closing wings! 🦋
//
// Opening (Upper):
//    Wings start small
//    Slowly open wider
//    Finally fully open (touch in middle)
//
// Closing (Lower):
//    Wings fully open
//    Slowly close
//    Back to small wings
//
// The stars = butterfly wings 🦋
// The spaces = butterfly body
//
// ============================================
// 🔢 PATTERN IN NUMBERS
// ============================================
//
// For n=4:
//
// Upper half rows: 4 (i = 1 to 4)
// Lower half rows: 4 (i = 4 to 1)
// Total rows: 8 (2*n)
//
// Width: Always 2*n = 8 characters
//
// Stars per row: 2*i (i on each side)
// Spaces per row: 2*(n-i)
//
// Middle rows: Wings touch (no space)
//
// ============================================
// 🎓 KEY TAKEAWAYS
// ============================================
//
// 1️⃣ TWO HALVES:
//    Upper expands (i = 1 to n)
//    Lower shrinks (i = n to 1)
//
// 2️⃣ THREE PARTS PER ROW:
//    Left stars (left wing)
//    Middle spaces (body)
//    Right stars (right wing)
//
// 3️⃣ SYMMETRY:
//    Left = Right (always same stars)
//    Top = Bottom (mirror image)
//
// 4️⃣ FORMULA:
//    Stars on each side = i
//    Spaces in middle = 2 * (n - i)
//    Total width = 2 * n
//
// ============================================
// 🚀 TRY IT YOURSELF
// ============================================
//
// Try with n=3:
// *    *
// **  **
// ******
// ******
// **  **
// *    *
//
// Try with n=5:
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
//
// Notice:
// ✨ Always symmetric
// ✨ Wings grow then shrink
// ✨ Looks like a butterfly!
//
// ============================================
// 🎉 CONGRATULATIONS!
// ============================================
//
// You now understand:
// ✅ How butterfly pattern works
// ✅ Upper and lower halves
// ✅ The math behind it
// ✅ Why it looks like a butterfly
//
// Keep practicing patterns! 💪🦋✨
//
// ============================================

// ============================================
// 🦋 HINGLISH MEIN SAMJHAO (हिंग्लिश में समझाओ) 🦋
// ============================================
//
// 🎯 YE PATTERN KYA BANATA HAI:
//
// Example (n=4):
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
//
// Ek titli (butterfly) 🦋 ki tarah dikhta hai!
//
// ============================================
// 🏗️ BASIC SAMAJH (बेसिक समझ)
// ============================================
//
// Butterfly ke DO hisse hain:
//
// 1️⃣ UPAR WALA HISSA (ऊपर वाला हिस्सा) ⬆️
//    Pankh (wings) chhote start hote hain
//    Phir bade hote jate hain
//    Beech ki jagah kam hoti jati hai
//
// 2️⃣ NEECHE WALA HISSA (नीचे वाला हिस्सा) ⬇️
//    Pankh bade start hote hain
//    Phir chhote hote jate hain
//    Beech ki jagah badh jati hai
//    Upar wale ka mirror hai
//
// ============================================
// 📊 HAR ROW KA BREAKDOWN (n=4)
// ============================================
//
// 🔼 UPAR WALA HISSA (4 rows):
//
// Row 1 (i=1): 1 star + 6 spaces + 1 star
//              "*      *"
//              (Chhote pankh, bada gap)
//
// Row 2 (i=2): 2 stars + 4 spaces + 2 stars
//              "**    **"
//              (Pankh bade ho rahe hain)
//
// Row 3 (i=3): 3 stars + 2 spaces + 3 stars
//              "***  ***"
//              (Pankh aur bade)
//
// Row 4 (i=4): 4 stars + 0 spaces + 4 stars
//              "********"
//              (Pankh mil gaye! Beech mein koi gap nahi) ← Touch!
//
// 🔽 NEECHE WALA HISSA (4 rows):
//
// Row 1 (i=4): 4 stars + 0 spaces + 4 stars
//              "********"
//              (Pankh mile hue)
//
// Row 2 (i=3): 3 stars + 2 spaces + 3 stars
//              "***  ***"
//              (Pankh chhote ho rahe hain)
//
// Row 3 (i=2): 2 stars + 4 spaces + 2 stars
//              "**    **"
//              (Pankh aur chhote)
//
// Row 4 (i=1): 1 star + 6 spaces + 1 star
//              "*      *"
//              (Chhote pankh, bada gap)
//
// ============================================
// 🔍 LOOPS KAISE KAAM KARTE HAIN
// ============================================
//
// 🔼 UPAR WALE HISSE KE LOOPS:
//
// Outer Loop:
//    for (int i = 1; i <= n; i++)
//
//    Rows control karta hai (1 se n tak)
//    i = har taraf kitne stars
//
// Loop 1 - Left Stars (बाएं के stars):
//    for (int j = 1; j <= i; j++)
//
//    Kaam: Left pankh print karna 🦋
//    Stars ki sankhya = i
//
//    Row 1: 1 star
//    Row 2: 2 stars
//    Row 3: 3 stars
//    Row 4: 4 stars
//
// Loop 2 - Beech ke Spaces:
//    for (int j = 1; j <= 2 * (n - i); j++)
//
//    Kaam: Pankhon ke beech ki jagah
//    Formula: 2 * (n - i)
//
//    Row 1: 2*(4-1) = 6 spaces (sabse zyada)
//    Row 2: 2*(4-2) = 4 spaces
//    Row 3: 2*(4-3) = 2 spaces
//    Row 4: 2*(4-4) = 0 spaces (koi nahi)
//
// Loop 3 - Right Stars (दाएं के stars):
//    for (int j = 1; j <= i; j++)
//
//    Kaam: Right pankh print karna 🦋
//    Stars ki sankhya = i (left jaisa hi)
//
//    Row 1: 1 star
//    Row 2: 2 stars
//    Row 3: 3 stars
//    Row 4: 4 stars
//
// 🔽 NEECHE WALE HISSE KE LOOPS:
//
// Outer Loop:
//    for (int i = n; i >= 1; i--)
//
//    Rows control karta hai (n se 1 tak)
//    i = har taraf kitne stars
//
// Loop 1 - Left Stars:
//    for (int j = 1; j <= i; j++)
//
//    Kaam: Left pankh print karna 🦋
//    Stars ki sankhya = i
//
//    Row 1: 4 stars (sabse zyada)
//    Row 2: 3 stars
//    Row 3: 2 stars
//    Row 4: 1 star (sabse kam)
//
// Loop 2 - Beech ke Spaces:
//    for (int j = 1; j <= 2 * (n - i); j++)
//
//    Kaam: Pankhon ke beech ki jagah
//    Formula: 2 * (n - i)
//
//    Row 1: 2*(4-4) = 0 spaces (koi nahi)
//    Row 2: 2*(4-3) = 2 spaces
//    Row 3: 2*(4-2) = 4 spaces
//    Row 4: 2*(4-1) = 6 spaces (sabse zyada)
//
// Loop 3 - Right Stars:
//    for (int j = 1; j <= i; j++)
//
//    Kaam: Right pankh print karna 🦋
//    Stars ki sankhya = i (left jaisa hi)
//
//    Row 1: 4 stars
//    Row 2: 3 stars
//    Row 3: 2 stars
//    Row 4: 1 star
//
// ============================================
// 🧮 MAGIC FORMULAS (जादुई फॉर्मूले)
// ============================================
//
// 🔼 UPAR WALA HISSA (i = 1 se n tak):
//
//    Left Stars = i
//    Beech ke Spaces = 2 * (n - i)
//    Right Stars = i
//
//    Pattern: Stars badhte hain, spaces kam hote hain
//
// 🔽 NEECHE WALA HISSA (i = n se 1 tak):
//
//    Left Stars = i
//    Beech ke Spaces = 2 * (n - i)
//    Right Stars = i
//
//    Pattern: Stars kam hote hain, spaces badhte hain
//
// Total width = i + 2*(n-i) + i = 2*n
//
// ============================================
// 🎯 ASLI DUNIYA KI MISAAL (Real World Example)
// ============================================
//
// Socho ek titli (butterfly) 🦋 apne pankh khol rahi hai!
//
// Pankh Kholna (Upper):
//    Pankh chhote start hote hain
//    Dheere dheere khulte hain
//    Poore khul jate hain (beech mein mil jate hain)
//
// Pankh Band Karna (Lower):
//    Pankh poore khule hain
//    Dheere dheere band hote hain
//    Wapas chhote ho jate hain
//
// Stars = titli ke pankh 🦋
// Spaces = titli ka shareer (body)
//
// ============================================
// 💡 TITLI KYUN DIKHTI HAI
// ============================================
//
// 1️⃣ SYMMETRY (सममिति):
//    Left aur right pankh same 🪞
//    Upar aur neeche mirror image ⚖️
//
// 2️⃣ PEHLE BADA PHIR CHHOTA:
//    Pankh badhte hain → Beech mein milte hain → Phir chhote hote hain
//    Isse titli ka shape banta hai! 🦋
//
// 3️⃣ BEECH MEIN JAGAH:
//    Pankhon ke beech gap (titli ka body)
//    Pehle kam hota hai phir badh jata hai
//    Asli titli jaisa! 🦋
//
// ============================================
// 🔢 NUMBERS MEIN PATTERN
// ============================================
//
// n=4 ke liye:
//
// Upar wale rows: 4 (i = 1 se 4 tak)
// Neeche wale rows: 4 (i = 4 se 1 tak)
// Total rows: 8 (2*n)
//
// Width: Hamesha 2*n = 8 characters
//
// Har row mein stars: 2*i (har taraf i)
// Har row mein spaces: 2*(n-i)
//
// Beech wali rows: Pankh mil jate hain (koi space nahi)
//
// ============================================
// 🎓 YAAD RAKHNE WALI BAATEIN (Key Points)
// ============================================
//
// 1️⃣ DO HISSE:
//    Upar bada hota hai (i = 1 se n)
//    Neeche chhota hota hai (i = n se 1)
//
// 2️⃣ HAR ROW KE TEEN PARTS:
//    Left stars (left pankh)
//    Beech ke spaces (body)
//    Right stars (right pankh)
//
// 3️⃣ SYMMETRY:
//    Left = Right (hamesha same stars)
//    Upar = Neeche (mirror image)
//
// 4️⃣ FORMULA:
//    Har taraf stars = i
//    Beech ke spaces = 2 * (n - i)
//    Total width = 2 * n
//
// ============================================
// 🚀 KHUD TRY KARO (Try Yourself)
// ============================================
//
// n=3 ke saath try karo:
// *    *
// **  **
// ******
// ******
// **  **
// *    *
//
// n=5 ke saath try karo:
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
//
// Dhyaan do:
// ✨ Hamesha symmetric (dono taraf same)
// ✨ Pankh pehle badhte hain phir chhote hote hain
// ✨ Titli jaisa dikhta hai!
//
// ============================================
// 🎉 BADHAI HO! (Congratulations!)
// ============================================
//
// Ab tumhe samajh aa gaya:
// ✅ Butterfly pattern kaise kaam karta hai
// ✅ Upar aur neeche ke hisse
// ✅ Saara math samajh aa gaya
// ✅ Titli kyun dikhti hai
//
// Patterns practice karte raho! 💪🦋✨
//
// Agar koi doubt hai toh poochho! 🙋‍♂️
// Happy Coding! 🚀
//
// ============================================
