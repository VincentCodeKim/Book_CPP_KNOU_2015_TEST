#include  <iostream>
#include  "UDCounterM.h"
using  namespace  std;

int  main()
{
    UDCounterM  cnt(9);

    for (int i=0 ; i < 20 ; i++) {
        cnt.countUp();
        cout << cnt.getValue() << "  " ;
    }
    cout << endl << endl;

    for (int i=0 ; i < 20 ; i++) {
        cnt.countDown();
        cout << cnt.getValue() << "  " ;
    }
    cout << endl;
    return 0;
}
