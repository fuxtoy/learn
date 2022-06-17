//主動區的分析方法：

//IB=(VBB-VBE)/RB

//IC=β∗IB

//IE=(1+β)∗IB

//VCE=VCC- (IC* RC)

//飽和區的分析方法：

//VCE=0.2

//IC=(VCC-VCE)/RC

//IB=(VBB-VBE)/RB

//IE=IC+IB
// input : 
//第一行有一個數，若為1則屬於主動區、0則屬於飽和區。                      1
//第二行包含6個數值，分別為VBB,VCC,VBE,RB,RC,β，每個數之間用空格隔開。    5.7 10 0.7 200 1 200
//output : 
//輸出IC,IB,IE,VCE的值，每個值之間用空格隔開  5.00 0.02 5.02 5.00

#include <iostream>
#include<iomanip>
using namespace std;
class active_region{
 protected:
  double VBB,VCC,VBE,RB,RC,Beta;
 public:
  virtual void DC_analysis();
};

class saturation_region: public active_region{
 public:
  void DC_analysis();
};

void active_region::DC_analysis(){
 double IB,IC,IE,VCE;
 cin >> VBB >> VCC >> VBE >> RB >> RC >> Beta;
 IB=(VBB-VBE)/RB;
 IC=Beta*IB;
 IE= (1+Beta)*IB;
 VCE=VCC-IC*RC;
 cout << fixed << setprecision(2) << IC<< ' ' << IB <<  ' ' << IE << ' ' << VCE << endl;
};

void saturation_region::DC_analysis(){
 double IB,IC,IE,VCE;
 cin >> VBB >> VCC >> VBE >> RB >> RC >> Beta;
 VCE=0.2;
 IC=(VCC-VCE)/RC;
 IB=(VBB-VBE)/RB;
 IE= IC+IB;
 cout << fixed << setprecision(2) << IC<< ' ' << IB <<  ' ' << IE << ' ' << VCE << endl;
};

int main(){
 bool region;
 cin >> region;
 active_region *ptr = (region == true ? new active_region : new saturation_region);
 ptr -> DC_analysis();
}
