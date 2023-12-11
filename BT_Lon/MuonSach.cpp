class BangQLMuonSach
{
	private:
		Sach s;
		BanDoc bd;
		date ngayMuon;
		date ngayTra;
	public:
		
		void NhapMuonSach(Sach a, BanDoc b)
		{
			s = a;
			bd = b;
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



