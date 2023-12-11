#include"Sach.h"
#include"BanDoc.h"
#include"date.cpp"
class BangQLMuonSach
{
	private:
		Sach s;
		BanDoc bd;
		date ngayMuon;
		date ngayTra;
	public:
		
		void NhapMuonSach(Sach a, BanDoc b);
		
		void muonSach();
		
		void NhapNgayMuon();
		
		void NhapNgayTra();
		
		void hienThiThongTinMuonSach();
		
};
