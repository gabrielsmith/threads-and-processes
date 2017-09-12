#include <stdio.h>
#include <pthread.h>

void*
routine(void* id);

int
main(int argc, char** argv)
{
  pthread_t thread_a;
  pthread_t thread_b;
  
  int id_a = 0;
  int id_b = 1;

  pthread_create(&thread_a, NULL, routine, &id_a);
  pthread_create(&thread_b, NULL, routine, &id_b);

  pthread_join(thread_a, NULL);
  pthread_join(thread_b, NULL);

  return 0;
}

void*
routine(void* id)
{
  printf("Thread of id %d created\n", *(int*)id);
  return NULL;
}
