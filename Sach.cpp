class Sach
{
	private:
		string maSach;
		string TenSach;
		string NXB;
		long long Gia;
		int NamXB; 
	public:	
		void nhapSach()
		{
			cout<<"Ma Sach : ";
			fflush(stdin);
		    getline(cin,this->maSach);
		    cout<<"Ten Sach: ";
			getline(cin,this->TenSach);
		    cout<<"Ten nha xuat ban : ";
			getline(cin,this->NXB);
			cout<<"Gia Ban : ";
			cin>>this->Gia;
		    cout<<"Nam XB : ";
			cin>>this->NamXB;	
		}
		void hienThiThongTinSach()
		{
		    cout<<"Ma Sach: "<< maSach<<", "<<"Ten sach: "<< TenSach<<", "<<"Nha xuat ban: "<< NXB<<", "<<"Gia Ban: "<< Gia<<", "<<"Nam XB: "<< NamXB<<".\n";
		}		
};
