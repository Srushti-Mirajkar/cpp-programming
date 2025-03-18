#include<iostream>
#include<list>
using namespace std;
class Youtubechanel{
 public: string name;
  	int subscribers;
  
  public: Youtubechanel(string nm,int sub){
	name=nm;
	subscribers=sub;
   
        }
//public: void displayInfo(){
    // cout<<name<<endl;
    // cout<<subscribers<<endl;
//}
};
class MyCollection{
 public: list<Youtubechanel>mylist;
  public: void operator+=(Youtubechanel& chanel){
  mylist.push_back(chanel);
}

};
ostream& operator<<(ostream& COUT,Youtubechanel& ytc)
{
 	COUT<<ytc.name;
 	COUT<<ytc.subscribers;
 	return COUT;
}
ostream& operator<<(ostream& COUT,MyCollection& mc)
{
   for(Youtubechanel ytc:mc.mylist)
{  
   COUT<<ytc;
}
return COUT;
}
int main()
{
  Youtubechanel Yt1("DKTE",5);
  Youtubechanel Yt2("RAVINA",1000);
  //Yt1.displayInfo();
  //Yt2.displayInfo();
  MyCollection mc1;
  mc1+=Yt1;
  mc1+=Yt2;
 cout<<mc1;
  return 0;
}