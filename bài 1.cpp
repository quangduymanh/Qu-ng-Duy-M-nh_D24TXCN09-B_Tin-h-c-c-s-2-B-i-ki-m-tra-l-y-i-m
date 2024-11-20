#include <iostream>
#include <sstream>
#include <cctype>
#include <vector>
using namespace std;

// Ham chuan hoa ho tên
string chuanHoaHoTen(const string& hoTen) {
    istringstream iss(hoTen);
    string word, result;

    // Xu ly truong hop trong ho ten
    while (iss >> word) {
        // Chuyen chu cai dau tien thanh hoa, cac chu cai con lai thanh thuong
        if (!word.empty()) {
            word[0] = toupper(word[0]);
            for (size_t i = 1; i < word.size(); ++i) {
                word[i] = tolower(word[i]);
            }
        }

        // Them tu da chuan hoa vao ket qua
        if (result.empty()) {
            result = word;  // Tranh them dau cach thua truoc tu dau tien
        } else {
            result += " " + word;
        }
    }
    return result;
}

int main() {
    int t;  // So bo test
    cin >> t;
    cin.ignore();  // Bo qua ky tu newline sau khi doc so luong test

    // Xu ly tung bo test
    while (t--) {
        string hoTen;
        getline(cin, hoTen);  // Ðoc ho tên (bao gom co khoang trang giua cac tu)
        cout << chuanHoaHoTen(hoTen) << endl;  // In ket qua da chuan hoa
    }

    return 0;
}
