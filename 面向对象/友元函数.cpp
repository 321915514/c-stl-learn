#include<iostream>
using namespace std;

class Building{
	friend class GoodGay;
	public:
		string sittingRoom;
		Building(); 
	private:
		string bedRoom; 
};
Building::Building(){
	sittingRoom="¿ÍÌü";
	bedRoom="ÎÔÊÒ"; 
}

class GoodGay{
	public:
		GoodGay();
		void visit();
		Building *building; 
}; 
GoodGay::GoodGay(){
	building=new Building;
} 
void GoodGay::visit(){
	cout<<building->sittingRoom<<endl;
	cout<<building->bedRoom<<endl;
}


int main(){
	GoodGay gay;
	gay.visit();
}
