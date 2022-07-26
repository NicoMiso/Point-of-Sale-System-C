//NIcolas Daniel F. Yucor
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h> 
#include <conio.h>

struct zero11{
	char name[25];
	int code;
	float price;
}zero11;
struct zero22{
	char name[25];
	int code;
	float price;
}zero22;
struct zero33{
	char name[25];
	int code;
	float price;
}zero33;
struct zero44{
	char name[25];
	int code;
	float price;
}zero44;
struct zero55{
	char name[25];
	int code;
	float price;
}zero55;
struct zero66{
	char name[25];
	int code;
	float price;
}zero66;
struct zero77{
	char name[25];
	int code;
	float price;
}zero77;
struct zero88{
	char name[25];
	int code;
	float price;
}zero88;
struct zero99{
	char name[25];
	int code;
	float price;
}zero99;
struct one00{
	char name[25];
	int code;
	float price;
}one00;
struct one11{
	char name[25];
	int code;
	float price;
}one11;
struct one22{
	char name[25];
	int code;
	float price;
}one22;
struct one33{
	char name[25];
	int code;
	float price;
}one33;
struct one44{
	char name[25];
	int code;
	float price;
}one44;
struct one55{
	char name[25];
	int code;
	float price;
}one55;
struct one66{
	char name[25];
	int code;
	float price;
}one66;
struct one77{
	char name[25];
	int code;
	float price;
}one77;
struct one88{
	char name[25];
	int code;
	float price;
}one88;
struct one99{
	char name[25];
	int code;
	float price;
}one99;
struct two00{
	
	char name[25];
	int code;
	float price;
}two00;

void receipt(void);
void wb(char x[20]);
void menu();
void structs();
void takeorder();
	float php, total, price, codes,  totalr, totalrd;
	int x, r, q, dy, d;
	char ao;
	int i=0;
	int order[20][3],orders=0;
void money(float x);
	
int main(){
    char password[20];
    char username[20];
	printf("\n************************************************************************************************************************");
    printf("\t				~~~~ WELCOME TO BLOCKBUSTER BURGERS! ~~~~");
	printf("\n************************************************************************************************************************");
    printf("\n\nUSERNAME: ");
    scanf("%s",username);
  
    printf("PASSWORD: ");
    do
    {
        password[i]=getch();
        printf("*");
        i++;
    }
    while(password[i-1]!='\r');
    password[i-1]='\0';
     
    if(( strcmp ( username,"12175340" ) == 0 && strcmp ( password,"animo753" ) == 0 ) || ( strcmp ( username,"12116010" ) == 0 && strcmp ( password,"animo160" ) == 0 ) || ( strcmp ( username,"12139970" ) == 0 && strcmp ( password,"animo399" ) == 0 ))
    {
	wb(username);
    menu();
    takeorder();
    }
    else
    {  
    puts("\nWRONG USERNAME OR PASSWORD!\n");   
    return 0;
    }
}
void wb(char x[20]){
	    printf("\n************************************************************************************************************************");
    printf("\t\a					 ~~~~ Welcome Back %s! ~~~~",x);
    printf("\t				  					 ~~~~ NOW SHOWING! ~~~~");
	printf("\n************************************************************************************************************************");
}
void menu(){
    printf("\n\nv^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^				v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^");
    printf("\n\t    ADMIT ONE OR MORE!							        SIDE CUTS!");
    printf("\nv^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^				v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^");
    printf("\n011	ShawShanks Redemption		Php195.00			111	Full Metal Fries	  Php60.00");
    printf("\n022	The God-Burger			Php170.00			122	Bicycle Drinks		  Php50.00");
    printf("\n033 	The Sandwiched Night		Php205.00			133	American Potatoes X	  Php80.00");
    printf("\n044 	The God-Burger II		Php175.00			144	Dial W for Water  	  Php20.00");
    printf("\n055 	The Schindler's Burger		Php190.00			155	Green Salads 		  Php80.00	");
    printf("\n\nv^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^				v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^");
    printf("\n\t    BEST PICKS!							          	EXTRAS!");
    printf("\nv^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^				v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^");
    printf("\n066	The LOTB: Return of The Patty	Php195.00			166	Extra Patty	  	  Php30.00");
    printf("\n077	Big Kahuna Burger		Php170.00			177	Extra Cheese		  Php20.00");
    printf("\n088	The Bacon, The Lettuce,						188	Extra Bacon	  	  Php25.00"); 
	printf("\n	And The Tomato			Php205.00");
    printf("\n099 	The LOTB: The Fellowship 					199	Extra Chili  	  	  Php25.00");
	printf("\n	of The Cheese			Php175.00");		
    printf("\n100 	Fight Grub			Php190.00			200	Extra Greens 		  Php20.00	");
    
}
void structs(){
	strcpy(zero11.name, "ShawShanks Redemption");
	zero11.code = 11;
	zero11.price = 195.00;
	
	strcpy(zero22.name, "The God-Burger");
	zero22.code = 22;
	zero22.price = 170.00;
	
	strcpy(zero33.name, "The Sandwiched Night");
	zero33.code = 33;
	zero33.price = 205.00;
	
	strcpy(zero44.name, "The God-Burger II");
	zero44.code = 44;
	zero44.price = 175.00;
	
	strcpy(zero55.name, "The Schindler's Burger");
	zero55.code = 55;
	zero55.price = 190.00;
	
	strcpy(zero66.name, "The Lord of the Buns: The Return of The Patty");
	zero66.code = 66;
	zero66.price = 200.00;
	
	strcpy(zero77.name, "Big Kahuna Burger");
	zero77.code = 77;
	zero77.price = 195.00;
	
	strcpy(zero88.name, "The Bacon, The Lettuce, and The Tomatoes");
	zero88.code = 88;
	zero88.price = 170.00;
	
	strcpy(zero99.name, "The Lord of The Buns: The Fellowship of The Cheese");
	zero99.code = 99;
	zero99.price = 200.00;
	
	strcpy(one00.name, "Fight Grub");
	one00.code = 100;
	one00.price = 200.00;
	
	strcpy(one11.name, "Full Metal Fries");
	one11.code = 111;
	one11.price = 60.00;
	
	strcpy(one22.name, "Bicycle Drinks");
	one22.code = 122;
	one22.price = 50.00;
	
	strcpy(one33.name, "American Potatoes X");
	one33.code = 133;
	one33.price = 80.00;
	
	strcpy(one44.name, "Dial W for Water");
	one44.code = 144;
	one44.price = 20.00;
	
	strcpy(one55.name, "Green Salads");
	one55.code = 155;
	one55.price = 80.00;
	
	strcpy(one66.name, "Extra Patty");
	one66.code = 166;
	one66.price = 30.00;
	
	strcpy(one77.name, "Extra Cheese");
	one77.code = 177;
	one77.price = 20.00;
	
	strcpy(one88.name, "Extra Bacon");
	one88.code = 188;
	one88.price = 25.00;
	
	strcpy(one99.name, "Extra Chili");
	one99.code = 199;
	one99.price = 25.00;
	
	strcpy(two00.name, "Extra Greens");
	two00.code = 200;
	two00.price = 20.00;
}
void takeorder(){
	structs();
	Order:
	do{	
	printf("\n\nEnter Order: ");
	scanf("%d", &x);
	switch(x){
		case 11: printf("\nYou ordered: %s",zero11.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero11.price;
            order[orders][0]=11;
            order[orders][1]=q;
            order[orders][2]=q*zero11.price;
            orders++;
        break;
		case 22: printf("\nYou ordered: %s",zero22.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero22.price;
            order[orders][0]=22;
            order[orders][1]=q;
            order[orders][2]=q*zero33.price;
            orders++;
        break;
		case 33: printf("\nYou ordered: %s",zero33.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero33.price;
            order[orders][0]=33;
            order[orders][1]=q;
            order[orders][2]=q*zero33.price;
            orders++;
        break;
		case 44: printf("\nYou ordered: %s",zero44.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero44.price;
            order[orders][0]=44;
            order[orders][1]=q;
            order[orders][2]=q*zero44.price;
            orders++;
        break;
		case 55: printf("\nYou ordered: %s",zero55.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero55.price;
            order[orders][0]=55;
            order[orders][1]=q;
            order[orders][2]=q*zero55.price;
            orders++;
        break;
		case 66: printf("\nYou ordered: %s",zero66.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero66.price;
            order[orders][0]=66;
            order[orders][1]=q;
            order[orders][2]=q*zero66.price;
            orders++;
        break;
		case 77: printf("\nYou ordered: %s",zero77.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero77.price;
            order[orders][0]=77;
            order[orders][1]=q;
            order[orders][2]=q*zero77.price;
            orders++;
        break;
		case 88: printf("\nYou ordered: %s",zero88.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero88.price;
            order[orders][0]=88;
            order[orders][1]=q;
            order[orders][2]=q*zero88.price;
            orders++;
        break;
		case 99: printf("\nYou ordered: %s",zero99.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = zero99.price;
            order[orders][0]=99;
            order[orders][1]=q;
            order[orders][2]=q*zero99.price;
            orders++;
        break;
		case 100: printf("\nYou ordered: %s",one00.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one00.price;
            order[orders][0]=100;
            order[orders][1]=q;
            order[orders][2]=q*one00.price;
            orders++;
        break;
		case 111: printf("\nYou ordered: %s",one11.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one11.price;
            order[orders][0]=111;
            order[orders][1]=q;
            order[orders][2]=q*one11.price;
            orders++;
        break;
		case 122: printf("\nYou ordered: %s",one22.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one22.price;
            order[orders][0]=122;
            order[orders][1]=q;
            order[orders][2]=q*one22.price;
            orders++;
        break;
		case 133: printf("\nYou ordered: %s",one33.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one33.price;
            order[orders][0]=133;
            order[orders][1]=q;
            order[orders][2]=q*one33.price;
            orders++;
        break;
		case 144: printf("\nYou ordered: %s",one44.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one44.price;
            order[orders][0]=144;
            order[orders][1]=q;
            order[orders][2]=q*one44.price;
            orders++;
        break;
		case 155: printf("\nYou ordered: %s",one55.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one55.price;
            order[orders][0]=155;
            order[orders][1]=q;
            order[orders][2]=q*one55.price;
            orders++;
        break;
		case 166: printf("\nYou ordered: %s",one66.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one66.price;
            order[orders][0]=166;
            order[orders][1]=q;
            order[orders][2]=q*one66.price;
            orders++;
        break;
		case 177: printf("\nYou ordered: %s",one77.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one77.price;
            order[orders][0]=177;
            order[orders][1]=q;
            order[orders][2]=q*one77.price;
            orders++;
        break;
		case 188: printf("\nYou ordered: %s",one88.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one88.price;
            order[orders][0]=188;
            order[orders][1]=q;
            order[orders][2]=q*one88.price;
            orders++;
        break;
		case 199: printf("\nYou ordered: %s",one99.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = one99.price;
            order[orders][0]=199;
            order[orders][1]=q;
            order[orders][2]=q*one00.price;
            orders++;
        break;
		case 200: printf("\nYou ordered: %s",two00.name);
            printf ("\nQuantity: ");
            scanf ("%d", &q);
            php = two00.price;
            order[orders][0]=200;
            order[orders][1]=q;
            order[orders][2]=q*two00.price;
            orders++;
        break;
		default: printf("The code you entered is not available. \nPlease Try Again");\
		goto Order;
	}
	price = php * q;
	printf("\nSubtotal: %.2f",price);
	total = price + total;
	printf("\n\nTOTAL: %.2f", total);
	printf("\n\nAddiontal Order? Y/N: ");
	
	scanf("%s",&ao);
	}
	while(ao == 'Y' || ao == 'y');
	
	printf("[1] Receipt [2] Menu [3] Exit/Cancel: ");
	scanf("%d",&r);
	if(r == 1){
		receipt();
	}
	else if(r == 2){
		menu();
		printf("\n[1] Receipt [2] Exit/Cancel: ");
		scanf("%d",&r);
		if(r == 1){
		receipt();
		}
		else if(r == 2){
		printf("Thank you! Come again.");
		exit(0);	
		}
	}
	else if(r == 3){
		printf("Thank you! Come again.");
		exit(0);
	}
}

void receipt(void){
	printf("\n************************************************************************************************************************");
    printf("\t				~~~~ WELCOME TO BLOCKBUSTER BURGERS! ~~~~");
	printf("\n************************************************************************************************************************");
    printf("\n   	Order Code\t    Quantity\tPrice\n");
    for(int i=0;i<orders;i++)
        printf("\n   	%d\t\t    %d\t	Php%d.00",order[i][0],order[i][1],order[i][2]);
        printf("\nTOTAL: 					Php%.2f",total);
    	printf("\n\nAre there any applicable discounts? \n[1] Yes [2] No: ");
    	scanf("%d",&d);
    if(d == 1){
    	
    	printf("\n[1] Senior [2] Others [3] Cancel: ");
    	scanf("%d",&dy);
    	
    	if(dy == 1){
    		totalrd = total * 0.2;
    		totalr = total - totalrd;
    		printf("\nDISCOUNTED: 			Php-%.2f",totalrd);
			printf("\n 20 Percent - SENIOR");
    		printf("\n\nTOTAL: 				Php%.2f",totalr);
    		money(totalr);
		}
		else if(dy == 2){
			totalrd = total * 0.3;
			totalr = total - totalrd;
			printf("\nDISCOUNTED: 			Php-%.2f",totalrd);
			printf("\n 30 Percent - OTHERS");
			printf("\n\nTOTAL: 				Php%.2f",totalr);
			money(totalr);
		}
		else if(dy == 3){
			printf("\n\nTOTAL: 				Php%.2f",total);
			money(total);
		}
	}
	else{
		    printf("\nTOTAL: 				Php%.2f",total);
		    money(total);
	}
}

void money(float x){
	float change;
	float insf;
	float p;
	again:
	printf("\n\nInput Cash: ");
	scanf("%f",&p);
	if(x > p){
		change = p - x;
		insf = change * -1;
		printf("Insufficient Funds!\nPlease add Php%.2f more", insf);
		goto again;
		}
		else{
			change = p - x;
			printf("Your change is Php%.2f! Thank you and see you again soon!", change);
		}
	}
	
	