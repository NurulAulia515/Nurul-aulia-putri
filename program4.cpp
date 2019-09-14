#include <iostream>
using namespace std;

class siswa{
	public:
		int noInduk;
		void showInduk() {
			cout<<"No Induk = "<<noInduk<<endl;
		}
};

int main (){
	siswa budi{1}; // object budi
	budi.showInduk(); //Member acces operator
	budi.showInduk();

	siswa &refbudi = budi;//pointer reference refbudi
	refbudi.noInduk=2; // Member acces operator
	budi.showInduk();
	
	siswa *pBudi = &budi; //pointer Dereference pBudi
	pBudi->noInduk = 3;//Arrow Operator
	budi.showInduk();
	return 0;
}
