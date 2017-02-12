#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
   int lottoArr[6];
   int i, j, tmp = 0;
   srand(time(NULL));
   for(i = 0; i < 6; i++) {
      lottoArr[i] = (rand() % 45) + 1;
   }

   //중복 된 수 체크 : 만약 중복된 수라면 난수 재생성
   for(i = 0; i < 6; i++) {
      for(j = i + 1; j < 6; j++) {
         if(lottoArr[i] == lottoArr[j]) {
            lottoArr[j] = (rand() % 45) + 1;
         }
       }

   }
      //반환된 수의 오름차순 정렬
      for(i = 0; i < 6; i++) {
         for(j = i + 1; j < 6; j++) {
            if(lottoArr[i] > lottoArr[j]) {
               tmp = lottoArr[i];
               lottoArr[i] = lottoArr[j];
               lottoArr[j] = tmp;
            }
         }
      }

   printf("당첨 될 로또의 번호는 아래와 같습니다 : \n");
   printf("[%d] [%d] [%d] [%d] [%d] [%d]\n", lottoArr[0], lottoArr[1], lottoArr[2], lottoArr[3], lottoArr[4], lottoArr[5]);
}

