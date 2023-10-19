#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"
#include "kernel/fcntl.h"
#include "kernel/pstat.h"



int
main(int argc, char **argv)
{


   
    settickets(2);
    struct pstat ps;

    

   for(;;){
        getpinfo(&ps);

        printf("\n ");

        printf("zticks: %d \n ",ps.ticks[0]);
        
        printf("ztickets: %d \n", ps.tickets[0]);

        
        printf("Aticks: %d \n ",ps.ticks[1]);
        
        printf("Atickets: %d \n", ps.tickets[1]);
   
        printf("Bticks: %d \n ",ps.ticks[2]);
        
        printf("Btickets: %d \n", ps.tickets[2]);

        printf("Cticks: %d \n ",ps.ticks[3]);
        
        printf("Ctickets: %d \n", ps.tickets[3]);

        printf("Dticks: %d \n ",ps.ticks[4]);
        
        printf("Dtickets: %d \n", ps.tickets[4]);

        printf("Eticks: %d \n ",ps.ticks[5]);
        
        printf("Etickets: %d \n", ps.tickets[5]);

        printf("Fticks: %d \n ",ps.ticks[5]);
        
        printf("Ftickets: %d \n", ps.tickets[5]);

        printf("Gticks: %d \n ",ps.ticks[5]);
        
        printf("Gtickets: %d \n", ps.tickets[5]);


        printf("\n ");
    

   }
    
    exit(0);
    
}





