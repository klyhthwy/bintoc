#include <iostream>
using namespace std;

#define MAX_NUM_ARGS 3
#define MIN_NUM_ARGS 2


/**
 *  Display tool usage.
 */
void display_usage(void);


/**
 *  ********* main ***********
 */
int main(int argc, char **argv)
{    
    switch( argc )
    {
        case 2:
            
            break;
        case 3:
            if( argv[1][0] != '-' )
                display_usage();
            break;
        default:
            break;
    }
    
    return 0;
}


/*
 *  Display tool usage.
 */
void display_usage(void)
{
    cout << "  ** Incorrect Usage **\n";
}