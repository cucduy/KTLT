#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

#include <iomanip> 

int main()
{
    int test;
    cin >> test;
    switch (test)
    {
    case 1:
    {
        Vehicle v1("Audi", 10000);
        cout << v1 << endl;
        break;
    }
    case 2:
    {
        Vehicle v2;
        cin >> v2;
        cout << v2 << endl;
        cout << "Retail Price: " << fixed << setprecision(2) << v2.retailPrice() << endl;
        break;
    }
    case 3:
    {
        Car c1("Ford", 15000, "Mustang", false);
        cout << c1 << endl;
        break;
    }
    case 4:
    {
        Car c2;
        cin >> c2;
        cout << c2 << endl;
        cout << "Retail Price: " << fixed << setprecision(2) << c2.retailPrice() << endl;
        break;
    }
    case 5:
    {
        Truck t1("Ford", 12000, 1.5, true);
        cout << t1 << endl;
        break;
    }
    case 6:
    {
        Truck t2;
        cin >> t2;
        cout << t2 << endl;
        cout << "Retail Price: " << fixed << setprecision(2) << t2.retailPrice() << endl;
        break;
    }
    case 7:
    {
        Vehicle v7;
        v7.setVIN("1H2YV59PODY984661");
        cout << "VIN: " << v7.getVIN() << endl;

        Car c7("Chevy", 11000, "Camaro", true);
        c7.setVIN("2H2XA59BWDY987665");
        cout << c7 << endl;
        cout << "VIN: " << c7.getVIN() << endl;

        Truck t7("Dodge", 14000, 20, false);
        t7.setVIN("2H2XA59DODY289615");
        cout << t7 << endl;
        cout << "VIN: " << t7.getVIN() << endl;
        break;
    }
    case 8:
    {
        Vehicle v8;
        v8.setEngineNumber("32RTYC450439");
        cout << "Engine Number: " << v8.getEngineNumber() << endl;

        Car c8;
        c8.setEngineNumber("15HFDC750338");
        cout << "Engine Number: " << c8.getEngineNumber() << endl;

        Truck t8;
        t8.setEngineNumber("28KGNC451526");
        cout << "Engine Number: " << t8.getEngineNumber() << endl;
        break;
    }
    }

    return 0;
}