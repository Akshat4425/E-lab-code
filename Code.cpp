#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int month,numofdays;
    float roomrent,renttopay;
    cin>>month>>roomrent>>numofdays;
    if(month==4){roomrent+=roomrent*0.2;
    }
    else if(month==5){roomrent+=roomrent*0.2;
    }
    else{ roomrent=roomrent;
    }
    renttopay= numofdays*roomrent;
    cout<<fixed<<setprecision(2)<<"Rs."<<renttopay;
	return 0;
}
