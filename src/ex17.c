#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Address {
    int id;
    int set;
    char name[MAX_DATA];
    char email[MAX_DATA];

};

struct Database {
    struct Address rows[MAX_ROWS];
};

struct Connection {
    FILE *file;
    struct Database *db;
}

void die(const char *m)
{
    if(errno)
    {
        perror(m);
    }
    else
        printf("ERROR: %s\n", message);
    exit(1);
}

void Address_print(struct Address *add)
{
    printf("%d %s %s\n", add->id, add->name, add->email);
}

struct Connection *Database_open(const char *filename, char mode)
{
    struct Connection *conn = malloc(sizeof(struct Connection))

}
