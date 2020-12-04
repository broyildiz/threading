/* 
 * Operating Systems <2INCO> Practical Assignment
 * Threaded Application
 *
 * STUDENT_NAME_1 (STUDENT_NR_1)
 * STUDENT_NAME_2 (STUDENT_NR_2)
 *
 * Grading:
 * Students who hand in clean code that fully satisfies the minimum requirements will get an 8. 
 * Extra steps can lead to higher marks because we want students to take the initiative. 
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>          // for perror()
#include <pthread.h>

#include "uint128.h"
#include "flip.h"
#include "math.h"

int main (int argc, char * argv[])
{
    // TODO: start threads to flip the pieces and output the results
    // (see thread_test() and thread_mutex_test() how to use threads and mutexes,
    //  see bit_test() how to manipulate bits in a large integer)

	int size = (NROF_PIECES/128) + 1;
	printf("size = %d\n", size); 

	int a = atoi(argv[1]);

	while (a) {
    if (a & 1)
        printf("1");
    else
        printf("0");

    a >>= 1;
	}
	printf("\n");

    return 0;
}

