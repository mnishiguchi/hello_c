// who2.c
// * opens and reads the UTMP file, then shows results.
// * based on sample code in the book Understanding UNIX/LINUX Programming
#include <stdio.h>
#include <stdlib.h>
#include <utmp.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>

#define SHOWHOST /* inculde remote machine on output */

void show_time(long);
void show_info(struct utmp *);

int main()
{
  struct utmp current_record;
  // The open system call creates a connecton between a process and a file. The
  // connection is called a file descriptor.
  int utmp_fd;

  utmp_fd = open(UTMP_FILE, O_RDONLY);

  if (-1 == utmp_fd)
  {
    perror(UTMP_FILE);
    exit(1);
  }

  while (sizeof(current_record) == read(utmp_fd, &current_record, sizeof(current_record)))
  {
    show_info(&current_record);
  }

  close(utmp_fd);

  return 0;
}

// displays contents of the utmp struct in human readable form
void show_info(struct utmp *record_p)
{
  if (record_p->ut_type != USER_PROCESS)
  {
    return;
  }

  printf("%-8.8s", record_p->ut_name);
  printf(" ");
  printf("%-8.8s", record_p->ut_line);
  printf(" ");
  show_time(record_p->ut_time);
  printf(" ");
#ifdef SHOWHOST
  if (record_p->ut_host[0] != '\0')
  {
    printf(" (%s)", record_p->ut_host);
  }
#endif
  printf("\n");
}

void show_time(long time_s)
{
  // address of a time string
  char *formatted_time_p;

  // ctime builds a human readable string
  formatted_time_p = ctime(&time_s);

  // pick 12 chars from position 4
  printf("%12.12s", formatted_time_p + 4);
}
