typedef struct checkin{
        char longname[25];
        unsigned int randomnum;
        char *favfood;
        struct checkin *next;
}checkin_t;

void read (checkin_t **,char **);
void list( checkin_t **,char **, char *, char *,int ,char *);
void output(checkin_t **, char **);
~                                  
