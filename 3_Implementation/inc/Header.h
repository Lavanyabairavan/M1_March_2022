#ifndef HEADER_H
#define HEADER_H

#ifdef __C
{
#endif
    
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>

int main();


struct user {

    char phone[50];
	char ac[50];
	char password[50];
	float balance;
    };


#ifdef __C
}
#endif

#endif /* HEADER_H */
