/*Platform-Specific Headers*/
#ifdef LINUX
#include "linuxHandling.h"
#else
#include "windowsHandling.h"
#endif

#include "selectServer.h"

int main(int argc, char *argv[])
{
    /*Printing out usage*/
    if (argc == 1)
    {
        printUsage();
    }

    if (argc == 2)
    {
        argv++;
        switch (*argv[0])
        {
            case 'T':
            printf("Running network tests . . . \n");
            break;

            case 'P':
            printf("Please specify port \n");
            break;

            case 'I':
            printf("Please specify IP Address \n");
            break;

            default:
            printf("Invalid ARGS . . .\n");
            printUsage();
            exit(0);
        }

    }

}
void printUsage()
{
    printf("SelectServer Usage:\n");
    printf("Hello World!\n");
  }
