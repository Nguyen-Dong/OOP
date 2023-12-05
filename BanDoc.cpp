class BanDoc
{
	private:
		string maBD;
		string HoTen;
		string DiaChi;
		string LoaiBD;	
	public:
		void nhapBanDoc()
		{
			cout<<"Ma ban doc : ";
			fflush(stdin);
		    getline(cin,this->maBD);
		    cout<<"Ho Ten : ";
			getline(cin,this->HoTen);
		    cout<<"Dia chi : ";
			getline(cin,this->DiaChi);
			cout<<"Loai ban doc : ";
			getline(cin,this->LoaiBD);
		    
		}
		void hienThiThongTinBanDoc()
		{
		    cout<<"Ma Ban Doc: "<<maBD<<", "<<"Ho Ten: "<<HoTen<<", "<<"Dia Chi: "<<DiaChi<<", "<<"Loai Ban Doc: "<<LoaiBD<<".\n";
		}	
};
