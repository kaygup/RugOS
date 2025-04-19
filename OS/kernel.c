#include "include/kb.h"
#include "include/screen.h"
int kmain()
{   
    clearScreen();
    print("Rug OS 1.1\nrugshell 1.1");
    while (1)
    {
        print("\nRUGOS> ");

        string ch = readStr();
        if(strEql(ch, "version"))
        {
            print("\nRugOS 1.1\n");
        }
        else if(strEql(ch, "clear")) 
        {
            clearScreen();
        }
        else 
        {
            print(ch);
            print(" is not a command!\n");
        }
    }
}
