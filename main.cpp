#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    ifstream ip("BRAND_DRUGS.csv");

  if(!ip.is_open()) std::cout << "ERROR OPENING FILE" << '\n';

  string NAME="NAME";
  string CATEGORY="CATEGORY";
  string FORM="FORM";
  string ID="ID";
  string DUMB="DUMB";
  string PACKING="PACKING";
  string TRADEPRICE="TRADEPRICE";
  string RETIALPRICE="RETIALPRICE";
  string MG="MG";
  string DID="DID";
  string BID="BID";

   string nameinput;
   string dayinput;
   string monthinput;
   string yearinput;
   string choice;

    cout<<"Press 1 to search Name(Medicine)\n";
//    cout<<"Press 2 to search Day\n";
//    cout<<"Press 3 to search Month\n";
//    cout<<"Press 4 to search Year\n";

    cin>> choice;
   // cout <<choice;

    if (choice == "1"){
     cout<<"Enter Medicine Name\n";
    cin>> nameinput;

  while(ip.good()){
    getline(ip,NAME,',');
    getline(ip,CATEGORY,',');
    getline(ip,FORM,',');
    getline(ip,ID,',');
    getline(ip,DUMB,',');
    getline(ip,PACKING,',');
    getline(ip,TRADEPRICE,',');
    getline(ip,RETIALPRICE,',');
    getline(ip,MG, ',');
    getline(ip,DID,',');
    getline(ip,BID,'\n');

    if (nameinput == NAME)
        {
            std::cout<<NAME <<" "<<CATEGORY<< " " <<FORM<<" "<<ID<<" " <<DUMB<<" "<<PACKING<<" "<<TRADEPRICE<< " " << RETIALPRICE<< '\n';
        }
  }

  ip.close();
}


//if (choice == "2"){
//    cout<<"Enter Day\n";
//    cin>> dayinput;
//
//  while(ip.good()){
//    getline(ip,timestamp,',');
//    getline(ip,city,',');
//    getline(ip,temperature,',');
//    getline(ip,light,',');
//    getline(ip,airquality_raw,',');
//    getline(ip,sound,',');
//    getline(ip,humidity,',');
//    getline(ip,dust,',');
//    getline(ip,year, ',');
//    getline(ip,month,',');
//    getline(ip,day,'\n');
//
//    if (dayinput == day)
//        {
//            std::cout<<timestamp <<" "<<city<< " " <<temperature<<" "<<light<<" " <<airquality_raw<<" "<<sound<<" "<<humidity<< " " << dust<< '\n';
//        }
//  }
//
//  ip.close();
//}
//
//
//
//if (choice == "3"){
//
//     cout<<"Enter Month\n";
//    cin>> monthinput;
//
//  while(ip.good()){
//    getline(ip,timestamp,',');
//    getline(ip,city,',');
//    getline(ip,temperature,',');
//    getline(ip,light,',');
//    getline(ip,airquality_raw,',');
//    getline(ip,sound,',');
//    getline(ip,humidity,',');
//    getline(ip,dust,',');
//    getline(ip,year, ',');
//    getline(ip,month,',');
//    getline(ip,day,'\n');
//
//    if (monthinput == month)
//        {
//            std::cout<<timestamp <<" "<<city<< " " <<temperature<<" "<<light<<" " <<airquality_raw<<" "<<sound<<" "<<humidity<< " " << dust<< '\n';
//        }
//  }
//
//  ip.close();
//}
//
//
//if (choice == "4"){
//    cout<<"Enter Year\n";
//    cin>> yearinput;
//
//  while(ip.good()){
//    getline(ip,timestamp,',');
//    getline(ip,city,',');
//    getline(ip,temperature,',');
//    getline(ip,light,',');
//    getline(ip,airquality_raw,',');
//    getline(ip,sound,',');
//    getline(ip,humidity,',');
//    getline(ip,dust,',');
//    getline(ip,year, ',');
//    getline(ip,month,',');
//    getline(ip,day,'\n');
//
//    if (yearinput == year)
//        {
//            std::cout<<timestamp <<" "<<city<< " " <<temperature<<" "<<light<<" " <<airquality_raw<<" "<<sound<<" "<<humidity<< " " << dust<< '\n';
//        }
//  }
//
//  ip.close();
//}




}
