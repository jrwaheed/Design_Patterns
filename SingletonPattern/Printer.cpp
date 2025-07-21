

#include <iostream>

using namespace std;

// FOR A SINGLETON, THE CONSTRUCTOR HAS TO BE PRIVATE. ONLY BY ACCESSING THE
// CLASS GETINSTANCE() METHOD CAN AN INSTANCE OF THE CLASS BE CREATED.
// ONLY WITH THIS METHOD, CAN THE SOLE INSTANCE BE RETURNED.
class Printer
{
private:
    static Printer *instancePrinterPtr;
    Printer() {};

public:
    static Printer *getInstance()
    {
        if (instancePrinterPtr == nullptr)
        {
            instancePrinterPtr = new Printer();
        }
        return instancePrinterPtr;
    }

    void confirmPrinterIsRunning()
    {
        cout << "Printer is active. Why are you killing trees?" << endl;
    }
};

//  INITIIALIZE THE INSTANCE EAGERLY. THE INSTANCE WILL BE CREATED WHEN THE
//  CLASS IS LOADED.
Printer *Printer::instancePrinterPtr = nullptr;
