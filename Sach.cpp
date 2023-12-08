class Sach
{
	private:
		string maSach;
		string TenSach;
		string NXB;
		long long Gia;
		int NamXB; 
	public:	
		string getMaSach() 
		{ 
			return maSach; 
		}
	    void setMaSach(string newMaSach) 
		{
	        this->maSach = newMaSach;
	    }
	    ////
	    string getTenSach() 
		{ 
			return TenSach; 
		}
		void setTenSach(string newTenSach) 
		{
	        this->TenSach = newTenSach;
	    }
	    ////
	    string getNXB()  
		{ 
			return NXB; 
		}
		void setNXB(string newNXB) 
		{
	        this->NXB = newNXB;
	    }
	    long long getGia()  
		{ 
			return Gia; 
		}
		void setGia( long long newGia) 
		{
	        if (newGia >= 0) 
			{
	            this->Gia = newGia;
	        } 
			else 
			{
	            cout << "Gia khong hop le.\n";
	        }
	    }
	    int getNamXB()  
		{ 
			return NamXB; 
		}
		void setNamXB(const int newNamXB) 
		{
	        if (newNamXB > 0) 
			{
	            this->NamXB = newNamXB;
	        } 
			else 
			{
	            cout << "Nam khong hop le.\n";
	        }
	    }
		void nhapSach()
		{
			cout<<"Ma Sach : ";
		    cin>>maSach;
		    cin.ignore();
		    cout<<"Ten Sach: ";
			getline(cin,TenSach);
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
