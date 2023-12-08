class BangQLMuonSach 
{
private:
    BanDoc banDoc;
    vector<Sach*> sachMuon;

public:
    BangQLMuonSach(BanDoc bd) 
	{
		banDoc = bd;
	}
	
    void muonSach(Sach* sach) 
	{
        if (sachMuon.size() < 5) 
		{
            if (count(sachMuon.begin(), sachMuon.end(), sach) < 3) 
			{
                sachMuon.push_back(sach);
                cout << "Muon sach thanh cong.\n";
            } 
			else 
			{
                cout << "Ban da muon toi da 3 cuon sach cua loai nay.\n";
            }
        } 
		else 
		{
            cout << "Ban da muon toi da 5 cuon sach.\n";
        }
    }

    void hienThiThongTinMuonSach()
	{
        cout << "Thong tin muon sach cua ban doc:\n";
        banDoc.hienThiThongTinBanDoc();
        cout << "Danh sach sach muon:\n";
        for(int i=0;i<this->sachMuon.size();i++)
        {
        	sachMuon[i]->hienThiThongTinSach();
		}
    }
};


