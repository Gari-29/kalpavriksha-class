#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void* task(void * arg){
  sleep(1);
  printf("sleep done for id=%d\n", *(int*)arg);

  return NULL;
}

/* Complete below code. */
int main()
{
  pthread_t t1, t2;
  int id_1=1;
  int id_2=2;
  scanf("%d %d", &id_1, &id_2);
  pthread_create(&t1, NULL, task, &id_1);
  pthread_create(&t2, NULL, task, &id_2);
  pthread_join(t1,NULL);
  pthread_join(t2,NULL);
  printf("Main thread completed!\n");

}

