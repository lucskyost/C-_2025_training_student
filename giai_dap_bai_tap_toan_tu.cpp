// Online C++ compiler to run C++ program online
// BÀI TẬP ÔN TẬP – TOÁN TỬ C++

// ==============================
// BÀI 1 – CHIA CÓ PHẦN THẬP PHÂN
// ==============================
// Yêu cầu:
// - Nhập 2 số nguyên a và b.
// - In ra:
//   + Kết quả chia nguyên
//   + Kết quả chia có phần thập phân (lấy 2 chữ số thập phân)

// Test case:
// 1) Input: a = 10, b = 3
//   Output:
//   - Chia nguyên: 3
//   - Chia thập phân: 3.33

// 2) Input: a = 7, b = 2
//   Output:
//   - Chia nguyên: 3
//   - Chia thập phân: 3.50

#include <iostream>
#include <iomanip> // dùng fixed, setprecision
using namespace std;

int main() {
    int a, b;
    // cout << "Nhap a, b: ";
    cin >> a >> b;

    // Chia nguyên
    cout<< a / b << endl;

    // Chia thập phân (ép kiểu sang double)
    cout << fixed << setprecision(2) << (double)a / b << endl;

    return 0;
}

// ==============================
// BÀI 2 – SO SÁNH 2 SỐ
// ==============================
// Yêu cầu:
// - Nhập 2 số nguyên x và y.
// - In ra kết quả của các phép so sánh: >, <, >=, <=, ==, !=

// Test case:
// 1) Input: x = 10, y = 5
//   Output:
//   x > y : true
//   x < y : false
//   x >= y: true
//   x <= y: false
//   x == y: false
//   x != y: true

// 2) Input: x = 7, y = 7
//   Output:
//   x > y : false
//   x < y : false
//   x >= y: true
//   x <= y: true
//   x == y: true
//   x != y: false

// #include <iostream>
// using namespace std;

int main() {
    int x, y;
    cout << "Nhap x, y: ";
    cin >> x >> y;

    cout << "x > y  : " << (x > y) << endl;
    cout << "x < y  : " << (x < y) << endl;
    cout << "x >= y : " << (x >= y) << endl;
    cout << "x <= y : " << (x <= y) << endl;
    cout << "x == y : " << (x == y) << endl;
    cout << "x != y : " << (x != y) << endl;

    return 0;
}



// ==============================
// BÀI 3 – KIỂM TRA SỐ CHẴN LẺ (TOÁN TỬ 3 NGÔI)
// ==============================
// Yêu cầu:
// - Nhập một số nguyên n.
// - Dùng toán tử điều kiện (?:) để in ra "Chan" nếu số là chẵn, "Le" nếu số là lẻ.
// Gợi ý:
// - Hãy nghĩ đến cách dùng phép chia lấy dư (%) để kiểm tra số chẵn hay lẻ.

// Test case:
// 1) Input: n = 4
//   Output: Chan

// 2) Input: n = 7
//   Output: Le


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << (n % 2 == 0 ? "Chan" : "Le") << endl;

    return 0;
}





