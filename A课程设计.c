#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void menu()
{
	printf("o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o\n");
	printf("|                                       |\n");
	printf("|     ����1��2��3ѡ����Ϸ or����0�˳�   |\n");
	printf("|                                       |\n");
	printf("o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o\n");
	printf("|                                       |\n");
	printf("|             *1������С��Ϸ            |\n");
	printf("|             *2������С��Ϸ            |\n");
	printf("|             *3������С��Ϸ            |\n");
	printf("|                                       |\n");
	printf("o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o\n");
	printf("��������Ҫѡ��Ľ��̣�\n"); 

 }  
void first()//��һ����Ϸ 
{
	char gamer;//��ҳ�ȭ
	int computer;//���Գ�ȭ
	int result;//�������
	
	//Ϊ�˱�����һ����Ϸ���˳����򣬿��Խ��������ѭ����
	while(1){
		printf("����һ����ȭ��С��Ϸ����������Ҫ����ȭͷ:\n");
		printf("A:����\nB:ʯͷ\nC:��\nD:������\n");
		scanf("%c%*c",&gamer);
		switch(gamer){
			case 65: //A
			case 97: //a
			   gamer=4;
			   break;
			case 66: //B
			case 98: //b
			   gamer=7;
			   break;
			case 67: //C
			case 99: //c
			   gamer=10;
			   break;
			case 68: //D
			case 100: //d
			   return 0;
			   
			default:
			   printf("���ѡ��Ϊ%cѡ������˳�...\n",gamer);
			   getchar();
			   system("cls");//����
			   return 0;
			   break;          
		}
		
		srand((unsigned)time(NULL)); //���������
		computer=rand()%3; //�����������ȡ�࣬�õ����Գ�ȭ
		result=(int)gamer+computer; //gamer Ϊ char���ͣ���ѧ����ʱҪǿ��ת������
		printf("���Գ���");
		switch(computer)
		{
			case 0:printf("����\n");break;//4  1
			case 1:printf("ʯͷ\n");break;//7 2
			case 2:printf("��\n");break;//10 3
		}
		printf("�����");
		switch(gamer)
		{
			case 4:printf("����\n");break;
			case 7:printf("ʯͷ\n");break;
			case 10:printf("��\n");break; 
		}
		if(result==6||result==7||result==11)
printf("��Ӯ�ˣ�");
      else if(result==5||result==9||result==10)
printf("����Ӯ�ˣ�");
      else printf("ƽ��");
	  system("pause>nul&&cls"); //��ͣ������ 
   }
 } 
void second() //�ڶ�����Ϸ 
{
	int i=3;
    int s=0; 
    int a=0;
	for(i=3;i>0;i--)
{
	printf("                              ������׼������ע����\n"); 
	printf("                       ��ϷҪ��ʼ��!\n"); 
	printf("����ʱ");
	Sleep(1000);
	printf("       %d",i);
	system("cls");
}
printf("            ####################\n");
printf("            |���������ʱ��۲�|\n");
printf("            ####################\n");
	Sleep(1000);
printf("                      ---------\n");
printf("                      |201$%&4|\n");
printf("                      ---------\n");
Sleep(3000);
	system("cls");
printf("                           *********************************************\n");
printf("                           *********************************************\n");
printf("                                          ��������������֣�"); 
scanf("%d",&s);
if(s==2014)
{
	printf("                     ��ʼ�µ���ս���Ѷ�������ѽ��\n");
	Sleep(1000); 
	system("cls") ;
printf("                            ####################\n");
printf("                            |���������ʱ��۲�|\n");
printf("                            ####################\n");
    Sleep(1000);
    printf("                    -----------\n");
    printf("                    |*q-g1*6%^|\n");
     printf("                   -----------\n");
     Sleep(5000);
     system("cls");
     printf("�������ַ����е����֣�"); 
     scanf("%d",&s);
     if(s==16){
     	
		printf("�������ˣ����˼��Σ���һ����Ϸ��û��ô���ˣ�\n"); 
     	Sleep(1000);
     	system("cls");
     	printf("|------------------------------|\n");
		printf("|������������ʱ����䣬��ϧ��|\n"); 
		printf("|------------------------------|\n");
		Sleep(1000);
		printf("$%%a^g*f^$g");
		Sleep(3000);
		system("cls");
		printf("�Ų��ţ���ʣ���룬�춯�ԣ�\n");
		Sleep(1000); 
		printf("$%%a^g*f^$g");
		Sleep(4000);
		system("cls");
		printf("                           *********************************************\n");
        printf("                           *********************************************\n");
        printf("                                          �����������м���Ӣ�ģ�");  
        scanf("%d",&s);
        } 
        else 
{
	 
       	printf("                -- ----------------------------------------------------------------------\n");
		printf("                -------------------------------------------------------------------------\n");
        printf("                            �𰸴���Ҫ��Ҫ������ͨ����أ����滹��Ŷ\n");
        printf("                            ��������������������or������0�˳���");
        scanf("%d",&a);
        system("cls");
        if(a==0) menu();
        if(a!=0) second(); 
}
		    if(s==4){ 
		printf("                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;
		printf("                                      ��ϲ����\n");
		printf("                      �������������ּ��ɽ��뵽���һ��or����0�˳���ս��\n");
		printf("                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;
		Sleep(1000);
		system("cls");
		printf("                      �������ǣ�д����������û�ˣ���������"); 
		 
		
		 } 
		 else 
{
	 
       	printf("                -- ----------------------------------------------------------------------\n");
		printf("                -------------------------------------------------------------------------\n");
        printf("                            �𰸴���Ҫ��Ҫ������ͨ����أ����滹��Ŷ\n");
        printf("                            ��������������������or������0�˳���");
         scanf("%d",&a);
          system("cls");
        if(a==0) menu();
        if(a!=0) second(); 
     
}

}else 
{
	 
       	printf("                -- ----------------------------------------------------------------------\n");
		printf("                -------------------------------------------------------------------------\n");
        printf("                            �𰸴���Ҫ��Ҫ������ͨ����أ����滹��Ŷ\n");
        printf("                            ��������������������or������0�˳���");
         scanf("%d",&a);
          system("cls");
        if(a==0) menu();
        if(a!=0) second(); 
}
}
void third()
{
	int x=0,y=0;
	printf("                  *************************************************\n");
	printf("                  *************************************************\n");
	printf("                                 ��ͼ������(��һ��)\n"); 
	printf("                         0000000000000000000000000000000\n");
	printf("                         0000000000000000000000000000000\n");
	printf("                         00000000ooo000000000000oo000000\n");
	printf("                         00000oo00oo0000000000oo00000000\n");
	printf("                         00000oo00oo0000000000oo00000000\n");
	printf("                         0000oo000oo000000000oooo0000000\n");
	printf("                         00oooooooooooo00000oo000o000000\n");
	printf("                         000000000oo0000000oo00000oo0000\n");
	printf("                         000000000oo000000oo0000000oo000\n");
	printf("                         000000000oo00000oo0000000ooo000\n");
	printf("                         000000000oo000000ooooooooo00000\n");
	printf("                         0000000000000000000000000000000\n");
	printf("                         ������ͼ�����Ǽ���\n");
	printf("                         ��Ϊ��");
	scanf("%d",&x);
	while(x!=46)
	{
		printf("��ô�򵥶��ܴ����ٸ���һ�λ��ᣡ��ϸһ�������ǣ�");
		scanf("%d",&x);
	}
		if(x==46){
	printf("                ��ȷ���ⶼ�ܿ��������������̶ֳȵ�����С�����Ѳ�����ѽ��\n ");
	printf( "                                ��   ����or�˳���   ��\n");
	printf("                    ���������һ�ؿ�����������һ�����֣�����������������0\n");
	printf("                    ����ѡ��Ϊ��"); 
    scanf("%d",&y);
	}
	if(y==0){
		system("cls");
	menu();
	}
	else if(y!=0){
		system("cls");
	printf("                  *************************************************\n");
	printf("                  *************************************************\n");
	printf("                                 ��ͼ������(�ڶ���)\n"); 
	printf("                                 00000000000000000\n");
	printf("                                 00000000000000000\n");	
	printf("                                 0000ooooooooo0000\n");
	printf("                                 000000000oo000000\n");
	printf("                                 000000000oo000000\n");
	printf("                                 0000000oo00000000\n");
	printf("                                 000000oo000000000\n");
	printf("                                 00000oo0000000000\n");
	printf("                                 00000000000000000\n");
	printf("                         --------��--��--��--��--��--------\n");
	printf("                                 00000000000000000\n");
	printf("                                 00000ooooooo00000\n");
	printf("                                 000000o00000o0000\n");
	printf("                                 00000o00000o00000\n");
	printf("                                 00000ooooooo00000\n");
	printf("                                 00000o00000o00000\n");
	printf("                                 00000o00000o00000\n");
	printf("                                 00000ooooooo00000\n");
	printf("                                 00000000000000000\n");
	printf("������������֮�ͣ�");
	scanf("%d",&y);
	while(y!=15)
	{
		printf(" �ٳ�򣬱��Ǽӷ������Ŷ������һ�Σ�");
			scanf("%d",&y);
	}
	}
	else if(y==15)
{
		printf("                  ��������йؿ�\n");
Sleep(1000);
system("cls");
menu();
}
	

}

  void test()
 {
 		menu();
 		int input=0;
 	do
 	{
 		
 		scanf("%d",&input); 
 		system("cls"); 
 		switch(input)
 		{
		    
 			case 1:first();
		    printf("\n");
 			break;
 			case 2: second();
	        printf("\n");
 			break;
 			case 3: third();
			printf("\n");
 			break;
 			case 0:
 				break;
 			default:
 			printf("ѡ�����������ѡ��\n");
			 test();
      	}
	 }while(input); 
 }
 int main()
 {
 
 	test();
 	return 0;
 }
