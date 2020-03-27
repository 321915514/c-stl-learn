#include<iostream>

using namespace std;
class Building;
class GoodGay{
	public:
		GoodGay();
		Building *building;
		void visit();
};
class Building{
	friend void GoodGay::visit();
	public:
		Building();
		string sitRoom;
	private:
		string bedRoom;
	
}; 
Building::Building(){
	sitRoom="¿ÍÌü";
	bedRoom="ÎÔÊÒ"; 
}
GoodGay::GoodGay(){
	building=new Building;
} 
void GoodGay::visit(){
	cout<<building->sitRoom<<endl;
	cout<<building->bedRoom<<endl; 
}
int main(){
	GoodGay gay;
	gay.visit();
} 
