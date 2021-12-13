#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int a, b, c;
	string d;
	
	/*a= pilih
	b= kita
	c= musuh
	d= ulangi*/
	
	cout<<"1. lempar\n 2. keluar\n pilih: ";
	cin>>a;
	
	do{
		if(a==1){
	b = (rand() %6)+1;
	c = (rand() %6)+1;
		//merandom dari 0 sampai 5 makanya ditambah 1 karena tidak ada mata dadu 0 jadi 0 terssebut ditambah 1, agar ketika random munculnya 0 otomatis akan di+1
	
	cout<<"kita : "<<b<<endl;
	cout<<"musuh: "<<c<<endl;
	if(b<c){
		cout<<"LOSE!!!"<<endl;
	}else if(b>c){
		cout<<"WINNER!!!"<<endl;
	}else {
		cout<<"BALANCE"<<endl;
	}
	}else if(a==2){
		cout<<"KAMU KELUAR PERMAINAN"<<endl;
	}else{
		cout<<"TIDAK TERDETEKSI"<<endl;
	}
	cout<<"mau lempar lagi? gas/tidak"; cin>>d;
	}while(d=="gas");
	cout<<"KAMU BERHENTI BERMAIN"<<endl;
}
