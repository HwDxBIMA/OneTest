#include <iostream>
using namespace std;

int main(){
	//program login sederhana dengan if else
	string username,password;
	cout << "	Program Login Sederhana		"<<endl;
	cout << "Masukan Username : ";cin >>username;
	cout << "Masukan Password : ";cin >>password;
	
	if(username=="admin"&&password=="admin123")
	cout << "anda berhasil login...";
	else 
	cout << "login gagal, username dan password salah";
	return 0;
}
