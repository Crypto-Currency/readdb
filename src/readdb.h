#ifndef READDB_H
#define READDB_H


#include <sys/types.h>          /* UNIX types      POSIX */
#include <stdio.h>              /* I/O lib         ISOC  */
#include <stdlib.h>             /* Standard Lib    ISOC  */
#include <string.h>             /* Strings         ISOC  */
#include <db.h>                 /* dbm header      ????  */
//#include <iostream>
#include <string>
#include <sstream>

void zeroDBT(DBT *dbt);
void closeDB(DB *dbp);
void grokData(char* key,char* value);
void HexDump(char* pBuffer, int size);
void hdump(char* key,char* value);
std::string HexString(char *pBuffer, int size);
std::string toHex(unsigned int n);

















#endif
