#include <iostream>
#include <string>
using namespace std;

class Khoa {
public:
    string maKhoa;   // Mã khoa (ví dụ: CNTT, KHTN, ...)
    string tenKhoa;  // Tên khoa (ví dụ: Khoa Công Nghệ Thông Tin)

    // Constructor mặc định: khi tạo đối tượng, mã khoa và tên khoa sẽ là chuỗi rỗng
    Khoa() {
        maKhoa = "";  // Để trống mã khoa
        tenKhoa = "";  // Để trống tên khoa
    }

    // Hàm nhập thông tin khoa
    void nhapKhoa() {
        cout << "Nhập mã khoa (ví dụ: CNTT): ";
        cin >> maKhoa;   // Nhập mã khoa từ người dùng

        // Dùng cin.ignore để bỏ qua ký tự xuống dòng còn sót lại
        cin.ignore();  

        cout << "Nhập tên khoa (ví dụ: Khoa Công Nghệ Thông Tin): ";
        getline(cin, tenKhoa);  // Nhập tên khoa từ người dùng
    }

    // Hàm in thông tin khoa
    void inKhoa() {
        cout << "Mã khoa: " << maKhoa << endl;
        cout << "Tên khoa: " << tenKhoa << endl;
    }

    // Hàm cập nhật tên khoa
    void capNhatTenKhoa(string tenMoi) {
        tenKhoa = tenMoi;  // Đổi tên khoa thành tên mới
    }
};

int main() {
    // Tạo đối tượng của class Khoa
    Khoa khoa;

    // Nhập thông tin khoa từ người dùng
    khoa.nhapKhoa();

    // In thông tin khoa sau khi nhập
    cout << "\nThông tin khoa sau khi nhập:" << endl;
    khoa.inKhoa();

    // Cập nhật tên khoa
    string tenMoi;
    cout << "\nNhập tên khoa mới: ";
    getline(cin, tenMoi);
    khoa.capNhatTenKhoa(tenMoi);

    // In lại thông tin khoa sau khi cập nhật
    cout << "\nThông tin khoa sau khi cập nhật:" << endl;
    khoa.inKhoa();

    return 0;
}
