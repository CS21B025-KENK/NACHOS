/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid, pid2;
    int i,j;
    PrintString("In Exec start\n");
    pid = Exec("add");
    while(1) {
	    for(i=0;i<10000;i++) 
		    for(j=0;j<100;j++);
	    PrintString("In Exec\n");
    }
    PrintString("In Exec End\n");
}
