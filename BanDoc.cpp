class BanDoc
{
	private:
		string maBD;
		string HoTen;
		string DiaChi;
		string LoaiBD;	
	public:
		string getMaBD() 
		{ 
			return maBD; 
		}
		void setMaBD(string newMaBD) 
		{
	        this->maBD = newMaBD;
	    }
	    ////
	    string getHoTen() 
		{ 
			return HoTen; 
		}
		void setHoTen(string newHoTen) 
		{
	        this->HoTen = newHoTen;
	    }
	    ////
	    string getDiaChi() 
		{ 
			return DiaChi; 
		}
		void setDiaChi(string newDiaChi) 
		{
	        this->DiaChi = newDiaChi;
	    }
	    ////
	    string getLoaiBD()
		{ 
			return LoaiBD; 
		}
		void setLoaiBD(string newLoaiBD) 
		{
	        this->LoaiBD = newLoaiBD;
		}
		////
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
