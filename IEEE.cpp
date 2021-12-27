#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class IEEE
{	
		private:
			char uyeAdi[10][30];
			char uyeGorev[10][30];
		public:
			IEEE()
			{
			};
			IEEE(string adi, int sira)
			{
				setUyeAdi(adi,sira);
				
			};
			
			IEEE(int sira, string gorev)
			{
				setUyeGorev(gorev,sira);
				
			};
			
			void setUyeAdi(string adi,int sira)
			{
				int j;
				for(j=0;j<adi.length();j++)
				{
					uyeAdi[sira][j]=adi[j];
				}
				
			}
			void setUyeGorev(string gorev,int sira)
			{	
				int j;
				for(j=0;j<gorev.length();j++)
				{
					uyeGorev[sira][j]=gorev[j];
				}
				
			}
			string getUyeAdi(int sira)
			{
				return uyeAdi[sira];
			}
			string getUyeGorev(int i)
			{
				
				return uyeGorev[i];
			}
		
	
	
	
	
};
int main()
{
	
	IEEE first("Etem",1);
	cout<<"IEEE ogrenci sistemine hosgeldiniz!"<<endl;
	int check;
	int idNum;
	string name1, name2;
	cout<<" Lutfen yapmak istediginiz islemi giriniz\n";
	cout<<" Uye numaranizla adinizi girmek istiyorsaniz 1'e \n Uye numaranizla gorev girmek istiyorsaniz 2'ye basiniz \n Uye numaranizla adinizi ve gorevinizi girmek istiyorsaniz 3'e \n Daha onceden giris yaptiysaniz ve bilgilerinizi ogrenmek istiyorsaniz 4'e basiniz:  ";
	cin>>check;
	
	if(check==1)
	{	
		cout<<"Lutfen 1'den 10'a kadar olan uye numaranizi giriniz:  ";
		cin>>idNum;
		cout<<"\nLutfen ilk ismizini giriniz:";
		cin>>name1;
		first.setUyeAdi(name1,idNum);
		
		cout<<idNum<<" NUMARALI UYEMIZ, "<<name1<<" HOSGELDINIZ. "<<endl;
	}
	else if(check==2)
	{
		cout<<"Lutfen 1'den 10'a kadar olan uye numaranizi giriniz:  ";
		cin>>idNum;
		cout<<"\nLutfen kulupteki gorevinizi giriniz:  ";
		cin>>name1;
		first.setUyeGorev(name1,idNum);
		cout<<idNum<<" NUMARALI UYEMIZ, GOREVINIZ: "<<name1<<endl;
	}
	else if(check==3)
	{
		
		cout<<"Lutfen 1'den 10'a kadar olan uye numaranizi giriniz:  ";
		cin>>idNum;
		cout<<"\nLutfen ilk ismizini giriniz:";
		cin>>name1;
		first.setUyeAdi(name1,idNum);
		cout<<"\nLutfen kulupteki gorevinizi giriniz:  ";
		cin>>name2;
		first.setUyeGorev(name2,idNum);
		cout<<idNum<<" NUMARALI UYEMIZ, "<<name1<<" GOREVINIZ: "<<name2<<endl;
	}
	else if(check==4)
	{	
			cout<<"Lutfen 1'den 10'a kadar olan uye numaranizi giriniz:  ";
			cin>>idNum;
			cout<<idNum<<" NUMARALI UYEMIZ, "<<first.getUyeAdi(idNum)<<" HOSGELDINIZ. "<<endl;
			
	}
	else
		cout<<"Yanlis bir tuslama yaptiniz! Programi yeniden baslatin ve dikkatlice tuslama yapiniz."<<endl;
	
	
	
	
	
	
	return 0;
}
