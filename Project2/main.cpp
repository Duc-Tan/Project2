#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<array>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

enum gioi_tinh_t {
	NAM,
	NU
};

class thongtincanhan {
private:
	string ten;
	int tuoi;
	gioi_tinh_t gioitinh;
public:
	void set_ten(string _ten) {
		ten = _ten;
	}
	string get_ten() {
		return ten;
	}
	void set_tuoi(int _tuoi) {
		tuoi = _tuoi;
	}
	int get_tuoi() {
		return tuoi;
	}
	void set_gioitinh(gioi_tinh_t _gioitinh) {
		gioitinh = _gioitinh;
	}
	string get_gioitinh() {
		return gioitinh == NAM ? "Nam" : "Nu";
	}
};

class hocsinh : public thongtincanhan
{
private:
	float diem_toan;
	float diem_van;
public:
	hocsinh(string ten, int tuoi, gioi_tinh_t gioi_tinh, float dtoan, float dvan) {
		set_ten(ten);
		set_tuoi(tuoi);
		set_gioitinh(gioi_tinh);
		diem_toan = dtoan;
		diem_van = dvan;
	}
	void set_diem_toan(float dtoan) {
		diem_toan = dtoan;
	}
	float get_diem_toan() {
		return diem_toan;
	}
	void set_diem_van(float dvan) {
		diem_van = dvan;
	}
	float get_diem_van() {
		return diem_van;
	}
	float get_dtb() {
		return (diem_toan + diem_van) / 2;
	}
};

template<typename T>
void sap_xep(vector<T>& a, function<bool(T,T)> so_sanh) {
	for (int i = 0; i < a.size() - 1; i++) {
		for (int j = i + 1; j < a.size(); j++) {
			if (so_sanh(a[i], a[j])) {
				auto temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}



ostream& operator<<(ostream& os, hocsinh hs) {
	os << "Ten: " << hs.get_ten() << endl;
	os << "Tuoi: " << hs.get_tuoi() << endl;
	os << "Gioi Tinh: " << hs.get_gioitinh() << endl;
	os << "Diem Toan: " << hs.get_diem_toan() << endl;
	os << "Diem Van: " << hs.get_diem_van() << endl;
	os << "Diem Trung Binh: " << hs.get_dtb() << endl;
	return os;
}

int main(void) {
	vector<hocsinh> A = {
		{"Nguyen Van A", 20, NAM, 8.5, 9 },
		{"Nguyen Van B", 20, NAM, 8, 9.75 },
		{"Nguyen Thi C", 20, NU, 6, 7.5 },
		{"Nguyen Thi D", 20, NU, 9, 8 },
	};
	sap_xep<hocsinh>(A, [](hocsinh x, hocsinh y){
		return x.get_dtb() < y.get_dtb();
		});
	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << endl;
	}

	return 0;
}