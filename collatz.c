#include <stdio.h>
�
int main()
{
����int numara = 0;
����int pid,status;
�
����printf("L�tfen bir numara giriniz\n");
����scanf("%d", &numara);
�
�������if(numara < 0)
����{
������printf("L�tfen pozitif bir say� girin, 0'dan b�y�k \n");
������scanf("%d", &numara);
����}
�
����pid = fork();
�
����if(pid < 0)
����{
������printf(" Alt ��lem olu�turulamad� \n");
������exit(-1);
����}
�
����else if(pid == 0)
����{
���������do
��������{
��������if(numara%2 != 0)
��������{
����������numara = (numara*3)+1;
��������}
���������
��������else if(numara%2 == 0)
��������{
����������(numara = (numara/2));
��������}
�
��������printf("%d \n",(numara));
��������}while(numara != 1);
����}
�
����else
����{
�
�����printf("pid %d \n",pid);
���� printf("child processin bitmesini bekle \n");
�����wait(&status);
��� }���� 
�����
�����
return 0;�� 
}
