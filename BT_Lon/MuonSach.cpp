#include"Sach.cpp"
#include"BanDoc.cpp"
class BangQLMuonSach
{
	private:
		Sach s;
		BanDoc bd;
		date ngayMuon;
		date ngayTra;
	public:
		void setSach(Sach newSach)
		{
			s= newSach;
		}
		void NhapMuonSach(Sach a, BanDoc b)
		{
			s = a;
			bd = b;
		}
		
		void GoiBangSach()
		{
//			s.hienThiThongTinSach();
			cout << setw(20) << left << s.getMaSach() << setw(20) << left << s.getTenSach() << setw(20) << left << s.getNXB();
			cout << setw(20) << left << s.getGia() << setw(20) << left << s.getNamXB()<<"\n";
		}
			
		void NhapNgayMuon()
		{
		    cout<<"Nhap ngay thang nam muon sach(dd/mm/yyyy): ";
		    ngayMuon.Nhap();
		}
			
		void NhapNgayTra()
		{
			cout<<"Nhap ngay thang nam tra sach(dd/mm/yyyy): ";
			ngayTra.Nhap();
		}
		
		void hienThiThongTinMuonSach()
		{
		    cout << setw(20) << left << bd.getMaBD() << setw(20) << left << bd.getHoTen();
		    cout << setw(20) << left << s.getMaSach() << setw(20) << left << s.getTenSach();
		    cout << setw(20) << left << ngayMuon.GetNgay() << "/" << ngayMuon.GetThang() << "/" << ngayMuon.GetNam();
		    cout << setw(20) << left << ngayTra.GetNgay() << "/" << ngayTra.GetThang() << "/" << ngayTra.GetNam();
		}
};



