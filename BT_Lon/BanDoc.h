class BanDoc
{
	private:
		static int nextmaBD; 
		int maBD;
		string HoTen;
		string DiaChi;
		string LoaiBD;	
	public:
		//
		BanDoc();
		//
		void nhapBanDoc();
		//
		void hienThiThongTinBanDoc();
		////
		int getMaBD() 
		{ 
			return maBD; 
		}
		void setMaBD(int newMaBD) 
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
};
