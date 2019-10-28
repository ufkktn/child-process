#include <stdio.h>
 
int main()
{
    int numara = 0;
    int pid,status;
 
    printf("Lütfen bir numara giriniz\n");
    scanf("%d", &numara);
 
       if(numara < 0)
    {
      printf("Lütfen pozitif bir sayý girin, 0'dan büyük \n");
      scanf("%d", &numara);
    }
 
    pid = fork();
 
    if(pid < 0)
    {
      printf(" Alt Ýþlem oluþturulamadý \n");
      exit(-1);
    }
 
    else if(pid == 0)
    {
         do
        {
        if(numara%2 != 0)
        {
          numara = (numara*3)+1;
        }
         
        else if(numara%2 == 0)
        {
          (numara = (numara/2));
        }
 
        printf("%d \n",(numara));
        }while(numara != 1);
    }
 
    else
    {
 
     printf("pid %d \n",pid);
     printf("child processin bitmesini bekle \n");
     wait(&status);
    }     
     
     
return 0;   
}
