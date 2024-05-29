#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<windows.h>
int main(){
	int i,n,op;
	int code[20];
	int qty[15];
	int dis[15];
	int arr[15];
	char name[20][30];
	float price[15];
	float dism[15];
	double total[15];
	double pay[15];
	do{
		//ARRAY LOOP A
		system("cls");
		system("Color B");
		printf("|||\t\3\t 1. Input    Produce\n");
		printf("|||\t\3\t 2. Output   Produce\n");
		printf("|||\t\3\t 3. Search   Produce\n");
		printf("|||\t\3\t 4. Update   Produce\n");
		printf("|||\t\3\t 5. Delete   Produce\n");
		printf("|||\t\3\t 7. Add size Produce\n");
		printf("|||\t\3\t 8. Sort(>)  Produce\n");
		printf("|||\t\3\t 9. Sort(<)  Produce\n");
		printf("|||\t\3\t 0. Exit     Produce\n");
		printf("Please Choose option Product\n");scanf("%d",&op);
		switch(op){
			case 1:{
				printf("=================== Input Information Of Product =====================\n");
				printf("Input Number Of Product : ");scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("------------------------ Product %d --------------------------\n",i+1);
					printf("Input Code  Of Prodcut : ");scanf("%d",&code[i]);fflush(stdin);
					printf("Input Name  Of Prodcut : ");gets(name[i]);
					printf("Input Qty   Of Prodcut : ");scanf("%d",&qty[i]);
					printf("Input Price Of Prodcut : ");scanf("%f",&price[i]);
					total[i]=qty[i]*price[i];
					printf("Total is               : %.2lf\n",total[i]);
					if(total[i]>=1&&total[i]<=10){
						dis[i]=10;
						pay[i]=total[i]-(total[i]*dis[i])/100;
					}
					else if(total[i]>10&&total[i]<=20){
						dis[i]=20;
						pay[i]=total[i]-(total[i]*dis[i])/100;
					}
					else if(total[i]>20&&total[i]<=30){
						dis[i]=30;
						pay[i]=total[i]-(total[i]*dis[i])/100;
					}
					else if(total[i]>30&&total[i]<=40){
						dis[i]=40;
						pay[i]=total[i]-(total[i]*dis[i])/100;
					}
					else if(total[i]>40&&total[i]<=50){
						dis[i]=50;
						pay[i]=total[i]-(total[i]*dis[i])/100;
					}
					else if(total[i]>50&&total[i]<=60){
						dis[i]=60;
						pay[i]=total[i]-(total[i]*dis[i])/100;
					}
					else if(total[i]>60){
						dis[i]=70;
						pay[i]=total[i]-(total[i]*dis[i])/100;
					}
					dism[i]=(total[i]*dis[i])/100;
					printf("Discount(%%) is      : %d\n",dis[i]);
					printf("Discount($)  is      : %.2f\n",dism[i]);
					printf("Payment      is      : %.2lf\n",pay[i]);
				}
				printf("Input Completed.............!!!\3\n");
				break;
			}
			case 2:{
				printf("=================== Output Information Of Product =====================\n");
				printf("%-14s %-14s %-13s %-15s %-15s %-21s %-21s %-17s\n","Code","Name","Qty","Price","Total","Discount(%)","Discount($)","Payment");
				for(i=0;i<n;i++){
					printf("%-14d %-14s %-13d %-15.2f %-15.2lf %-21d %-21.2f %-17.2lf\n",code[i],name[i],qty[i],price[i],total[i],dis[i],dism[i],pay[i]);
					Sleep(400);
				}
				printf("Output Completed.............!!!\3\n");
			break;	
			}
			case 3:{
				int search,b=0;
				printf("=================== Output Information Of Product =====================\n");
				printf("Enter code for search  =");scanf("%d",&search);
				printf("%-14s %-14s %-13s %-15s %-15s %-21s %-21s %-17s\n","Code","Name","Qty","Price","Total","Discount(%)","Discount($)","Payment");
				for(i=0;i<n;i++){
					if(search==code[i]){
						printf("%-14s %-14s %-13s %-15s %-15s %-21s %-21s %-17s\n","Code","Name","Qty","Price","Total","Discount(%)","Discount($)","Payment");
						b=1;
				}
			}
			if(b==0){
				printf("seacch not comlpleted................!!!\3\n");
			}
			for(i=0;i<n;i++){
				if(search==code[i]){
					printf("%-14d %-14s %-13d %-15.2f %-15.2lf %-21d %-21.2f %-17.2lf\n",code[i],name[i],qty[i],price[i],total[i],dis[i],dism[i],pay[i]);
					b=1;
				}
			}
			if(b==0){
				printf("search not completed........................!!!\3\n");
			}
			else{
				printf("search completed........................!!!\3\n");
			}
			break;	
			}
			case 4:{
				int Update,b=0;
					printf("=================== Input Information Of Product =====================\n");
					printf("Enter code for Update: ");scanf("%d",&Update);
					for(i=0;i<n;i++){
						if(Update==code[i]){
							printf("------------------------ Product %d --------------------------\n",i+1);
							printf("Input Code  Of Prodcut : ");scanf("%d",&code[i]);fflush(stdin);
							printf("Input Name  Of Prodcut : ");gets(name[i]);
							printf("Input Qty   Of Prodcut : ");scanf("%d",&qty[i]);
							printf("Input Price Of Prodcut : ");scanf("%f",&price[i]);
							total[i]=qty[i]*price[i];
							printf("Total is               : %.2lf\n",total[i]);
							if(total[i]>=1&&total[i]<=10){
								dis[i]=10;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>10&&total[i]<=20){
								dis[i]=20;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>20&&total[i]<=30){
								dis[i]=30;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>30&&total[i]<=40){
								dis[i]=40;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>40&&total[i]<=50){
								dis[i]=50;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>50&&total[i]<=60){
								dis[i]=60;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>60){
								dis[i]=70;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							dism[i]=(total[i]*dis[i])/100;
							printf("Discount(%%) is      : %d\n",dis[i]);
							printf("Discount($)  is      : %.2f\n",dism[i]);
							printf("Payment      is      : %.2lf\n",pay[i]);
						}
					}
					if(b==0){
						printf("Update not completed...............!!!\3\n");
					}
					else{
						printf("Update completed.................!!!\3\n");
					}
				}break;
				case 5:{
					float amount=0;
					int Delete;
					printf("=================== Delete Information Of Product =====================\n");
					printf("Input Index for delete  =  ");scanf("%d",&Delete);
					if(Delete>=n){
						printf("Delete Not Completed..........!!!\n");
					}
					else{
						for(i=Delete;i<n;i++){
							code[i]=code[i+1];
							strcpy(name[i],name[i+1]);
							qty[i]=qty[i+1];
							price[i]=price[i+1];
							dis[i]=dis[i+1];
							dism[i]=dism[i+1];
						}
						n--;
						printf("Delete Completed..........!!!\n");
					}
					printf("***********************After Delete***********************\n;");
					printf("%-14s %-14s %-13s %-15s %-15s %-21s %-21s %-17s\n","Code","Name","Qty","Price","Total","Discount(%)","Discount($)","Payment");
					for(i=0;i<n;i++){
						printf("%-14d %-14s %-13d %-15.2f %-15.2lf %-21d %-21.2f %-17.2lf\n",code[i],name[i],qty[i],price[i],total[i],dis[i],dism[i],pay[i]);
					Sleep(500);
					amount=amount+pay[i];
					}
					printf("Amount = %120.2f$\n",amount);
				}break;
				case 6:{
					int Insert;float amount=0;
					printf("=================== DInsert Information Of Product =====================\n");
					printf("Input Index ofr Insert  =  ");scanf("%d",&Insert);
					if(Insert>n){
						printf("Insert not Completed.........!!!\n");
					}
					else{
						for(i<n-1;i>Insert;i--){
						 	code[i+1]=code[i];
							strcpy(name[i+1],name[i]);
							qty[i+1]=qty[i];
							price[i+1]=price[i];
							dis[i+1]=dis[i];
							dism[i+1]=dism[i];	
						}
						printf("------------------------ Product %d --------------------------\n",i+1);
						printf("Input Code  Of Prodcut : ");scanf("%d",&code[i]);fflush(stdin);
						printf("Input Name  Of Prodcut : ");gets(name[i]);
						printf("Input Qty   Of Prodcut : ");scanf("%d",&qty[i]);
						printf("Input Price Of Prodcut : ");scanf("%f",&price[i]);
						total[i]=qty[i]*price[i];
						printf("Total is               : %.2lf\n",total[i]);
						if(total[i]>=1&&total[i]<=10){
							dis[i]=10;
							pay[i]=total[i]-(total[i]*dis[i])/100;
						}
						else if(total[i]>10&&total[i]<=20){
							dis[i]=20;
							pay[i]=total[i]-(total[i]*dis[i])/100;
						}
						else if(total[i]>20&&total[i]<=30){
							dis[i]=30;
							pay[i]=total[i]-(total[i]*dis[i])/100;
						}
						else if(total[i]>30&&total[i]<=40){
							dis[i]=40;
							pay[i]=total[i]-(total[i]*dis[i])/100;
						}
						else if(total[i]>40&&total[i]<=50){
							dis[i]=50;
							pay[i]=total[i]-(total[i]*dis[i])/100;
						}
						else if(total[i]>50&&total[i]<=60){
							dis[i]=60;
							pay[i]=total[i]-(total[i]*dis[i])/100;
						}
						else if(total[i]>60){
							dis[i]=70;
							pay[i]=total[i]-(total[i]*dis[i])/100;
						}
						dism[i]=(total[i]*dis[i])/100;
						printf("Discount(%%) is      : %d\n",dis[i]);
						printf("Discount($)  is      : %.2f\n",dism[i]);
						printf("Payment      is      : %.2lf\n",pay[i]);
						n++;
						printf("Insert Completed.............!!!\3\n");
						}
						printf("*********************************After Delete*********************************\n;");
						printf("%-14s %-14s %-13s %-15s %-15s %-21s %-21s %-17s\n","Code","Name","Qty","Price","Total","Discount(%)","Discount($)","Payment");
						for(i=0;i<n;i++){
						printf("%-14d %-14s %-13d %-15.2f %-15.2lf %-21d %-21.2f %-17.2lf\n",code[i],name[i],qty[i],price[i],total[i],dis[i],dism[i],pay[i]);
						Sleep(500);
						amount=amount+pay[i];
					}
						printf("Amount  =  %120.2f$]\n",amount);
				}break;
				case 7:{
					int add;float amount=0;
					printf("=================== Add Size Information of Product =====================\n");
					printf("Input size that you want to add = ");scanf("%d",&add);
						for(i=0;i<n;i++){
							printf("------------------------ Product %d --------------------------\n",i+1);
							printf("Input Code  Of Prodcut : ");scanf("%d",&code[i]);fflush(stdin);
							printf("Input Name  Of Prodcut : ");gets(name[i]);
							printf("Input Qty   Of Prodcut : ");scanf("%d",&qty[i]);
							printf("Input Price Of Prodcut : ");scanf("%f",&price[i]);
							total[i]=qty[i]*price[i];
							printf("Total is               : %.2lf\n",total[i]);
							if(total[i]>=1&&total[i]<=10){
								dis[i]=10;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>10&&total[i]<=20){
								dis[i]=20;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>20&&total[i]<=30){
								dis[i]=30;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>30&&total[i]<=40){
								dis[i]=40;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>40&&total[i]<=50){
								dis[i]=50;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>50&&total[i]<=60){
								dis[i]=60;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							else if(total[i]>60){
								dis[i]=70;
								pay[i]=total[i]-(total[i]*dis[i])/100;
							}
							dism[i]=(total[i]*dis[i])/100;
							printf("Discount(%%) is      : %d\n",dis[i]);
							printf("Discount($)  is      : %.2f\n",dism[i]);
							printf("Payment      is      : %.2lf\n",pay[i]);
					}
					n=n+add;
					printf("Add size Completed...........!!!3");
					printf("*********************************After Add size*********************************\n;");
					printf("%-14s %-14s %-13s %-15s %-15s %-21s %-21s %-17s\n","Code","Name","Qty","Price","Total","Discount(%)","Discount($)","Payment");
					for(i=0;i<n;i++){
						printf("%-14d %-14s %-13d %-15.2f %-15.2lf %-21d %-21.2f %-17.2lf\n",code[i],name[i],qty[i],price[i],total[i],dis[i],dism[i],pay[i]);
						Sleep(500);
						amount=amount+pay[i];
					}
					printf("Amount = %120.2f$\n",amount);
				}break;
				case 8:{
					int co,j,qt,di;char na[30];float amount=0;
					float pr,dm;
					double to,pa;
					printf("=================== Sort Information Of Product =====================\n");
					for(i=0;i<n;i++){
						for(j=i+1;j<n;j++){
							if(pay[i]>pay[j]){
								co=code[i];
								code[i]=code[j];
								code[j]=co;
								
								strcpy(na,name[i]);
								strcpy(name[i],name[j]);
								strcpy(name[j],na);
								
								qt=qty[i];
								qty[i]=qty[j];
								qty[j]=qt;
								
								pr=price[i];
								price[i]=price[j];
								price[j]=pr;
								
								di=dis[i];
								dis[i]=dis[j];
								dis[j]=di;
								
								dm=dism[i];
								dism[i]=dism[j];
								dism[j]=dm;
								
								to=total[i];
								total[i]=total[j];
								total[j]=to;
								
								pa=pay[i];
								pay[i]=pay[j];
								pay[j]=pa;
							}
						}
					}
				printf("Sort(>) Completed.............!!!\3\n");
				printf("*********************************After Add size*********************************\n;");
					printf("%-14s %-14s %-13s %-15s %-15s %-21s %-21s %-17s\n","Code","Name","Qty","Price","Total","Discount(%)","Discount($)","Payment");
					for(i=0;i<n;i++){
						printf("%-14d %-14s %-13d %-15.2f %-15.2lf %-21d %-21.2f %-17.2lf\n",code[i],name[i],qty[i],price[i],total[i],dis[i],dism[i],pay[i]);
						Sleep(500);
						amount=amount+pay[i];
					}
					printf("Amount = %120.2f$\n",amount);
				}break;
				case 9:{
					int co,j,qt,di;char na[30];float amount=0;
					float pr,dm;
					double to,pa;
					printf("=================== Sort Information Of Product =====================\n");
					for(i=0;i<n;i++){
						for(j=i+1;j<n;j++){
							if(pay[i]<pay[j]){
								co=code[i];
								code[i]=code[j];
								code[j]=co;
								
								strcpy(na,name[i]);
								strcpy(name[i],name[j]);
								strcpy(name[j],na);
								
								qt=qty[i];
								qty[i]=qty[j];
								qty[j]=qt;
								
								pr=price[i];
								price[i]=price[j];
								price[j]=pr;
								
								di=dis[i];
								dis[i]=dis[j];
								dis[j]=di;
								
								dm=dism[i];
								dism[i]=dism[j];
								dism[j]=dm;
								
								to=total[i];
								total[i]=total[j];
								total[j]=to;
								
								pa=pay[i];
								pay[i]=pay[j];
								pay[j]=pa;
							}
						}
					}
				printf("Sort(<) Completed.............!!!\3\n");
				printf("*********************************After Add size*********************************\n;");
					printf("%-14s %-14s %-13s %-15s %-15s %-21s %-21s %-17s\n","Code","Name","Qty","Price","Total","Discount(%)","Discount($)","Payment");
					for(i=0;i<n;i++){
						printf("%-14d %-14s %-13d %-15.2f %-15.2lf %-21d %-21.2f %-17.2lf\n",code[i],name[i],qty[i],price[i],total[i],dis[i],dism[i],pay[i]);
						Sleep(500);
						amount=amount+pay[i];
					}
					printf("Amount = %120.2f$\n",amount);
				}break;
				case 0:{
				printf("I love you\3\3\3\3\3\3\n");
				exit(0);	
			}break;	
		}getch();
	}while(2);
	return 0;
}