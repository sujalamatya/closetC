#include<stdio.h>
#include<string.h>
struct bill
{
	char brand[10],name[20];
	int price;
}bi[55];
void info();
void type();
void mbrand(int);
void fbrand(int);
void ubrand(int);
void billing(struct bill bi[]);
int main()
{
	printf("\n\n\n\n\n\t\t\t///***********************************************************///\n");
    printf("\t\t\t\t     Welcome to the S3 clothing Collection\n"); 
    printf("\t\t\t\t\t     Paknajol,Kathmandu\n");
    printf("\t\t\t///***********************************************************///\n");
    printf("\n\n\npress any key to continue...");
    getch();
    system("cls");
   	info();	
}
void info()
{
	char name[20],size,gen;
	int num;
	printf("\n\nPlease enter the following details:\n");
   	printf("Name:");
   	gets(name);
   	printf("contact number:");			
   	scanf("%d",&num);
   	fflush(stdin);
   	printf("Size(S/M/L):");
   	scanf("%c",&size);
   	type();
}
void type()
{
	int choice,male,female,uni;
	system("cls");
	printf("\n\nwhich clothing are you looking for?\n");
	printf("1.Male chothing\n2.Female clothing\n3.Unisex colthing:");
	scanf("%d",&choice);
	printf("\n\n");
	switch(choice)
	{
		case 1:
			printf("The Male clothing brands:\n1.Nike\n2.Levi's:");
			scanf("%d",&male);
			mbrand(male);
			break;
		case 2:
			printf("The Female clothing brands brands:\n1.YSL\n2.Prada:");
			scanf("%d",&female);
			fbrand(female);
			break;
		case 3:
			printf("The Unisex clothing brands:\n1.Adidas\n2.GUCCI:");
			scanf("%d",&uni);
			ubrand(uni);
			break;
		default:
			printf("***INVALID INPUT***");
	}
}
void mbrand(int male)			//male
{
	int a,b,flag,f,g,h,i,j,k;
	char c,e;
	system("cls");
	if(male==1)
	{
		flag:
		printf("\n\n**Nike**\n");
		printf("1.Casual wear\n2.Sports wear\n3.Pants:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("\n**Casual wear options are:\n1.Black T-shirt\n2.Statement Flees Hoddie\n3.Sleeveless top:");
				scanf("%d",&b);
				fflush(stdin);
				switch(b)
				{
					case 1:
						system("cls");
						printf("\n\nBlack T-shirt\n");						
						printf("price:Rs.2000\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**\n\n");
							strcpy(bi[0].brand,"Nike");
							strcpy(bi[0].name,"Black T-shirt");
							bi[0].price=2000;
																	
							printf("Do you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nStatement Flees Hoddie\n");						//5500
						printf("price:Rs.5000\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**\n\n");
							strcpy(bi[1].brand,"Nike");
							strcpy(bi[1].name,"Statement Flees Hoddie");
							bi[1].price=5000;
							printf("Do you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						
						else
						{
							goto flag;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nSleeveless top\n");						//3000
						printf("price:Rs.3000\nAdd to cart(y/n)?");
						scanf("%c",&c);						
						if(c=='y')
						{
							printf("**Added to cart**");
							strcpy(bi[2].brand,"Nike");
							strcpy(bi[2].name,"Sleeveless Top");
							bi[2].price=3000;
							printf("Do you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						
						
						else
						{
							goto flag;
						}
						break;
					
					default:
						printf("**INVALID INPUT**");							
				}
			case 2:
				printf("\n**Sports wear options are:\n1.Basketball Jersey\n2.Tank top\n3.Short-sleeve T-shirt:\n");				
				scanf("%d",&f);
				fflush(stdin);
				switch(f)
				{
					case 1:
						system("cls");
						printf("\n\nBasketball Jersey\n");					//2000
						printf("price:Rs.2000\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**\n\n");
							strcpy(bi[3].brand,"Nike");
							strcpy(bi[3].name,"Basketball Jersey");
							bi[3].price=2000;
							printf("Do you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nTank top\n");							//4000
						printf("price:Rs.4000\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**");
							strcpy(bi[4].brand,"Nike");
							strcpy(bi[4].name,"Tank top");
							bi[4].price=4000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nShort-sleeve T-shirt\n");					//2000
						printf("price:Rs.2000\nAdd to cart(y/n)?");
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**");
							strcpy(bi[5].brand,"Nike");
							strcpy(bi[5].name,"Short-sleeve T-shirt");
							bi[5].price=2000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag;
						}
						break;
					
					default:
						printf("**INVALID INPUT**");
				}
			case 3:
				printf("\n**pants options are:\n1.Joggers\n2.Trousers\n3.1/2 Length running Tights:\n");
				scanf("%d",&g);
				fflush(stdin);
				switch(g)
				{
					case 1:
						system("cls");
						printf("\n\nJoggers\n");					//5000
						printf("price:Rs.5000\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**\n\n");
							strcpy(bi[6].brand,"Nike");
							strcpy(bi[6].name,"Joggers");
							bi[6].price=5000;
							printf("Do you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nTrousers\n");							//4000
						printf("price:Rs.4000\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**");
							strcpy(bi[7].brand,"Nike");
							strcpy(bi[7].name,"Trousers");
							bi[7].price=4000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag;
						}
						break;
					case 3:
						system("cls");
						printf("\n\n1/2 Length running Tights\n");					//3000
						printf("price:Rs.3000\nAdd to cart(y/n)?");
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**");
							strcpy(bi[8].brand,"Nike");
							strcpy(bi[8].name,"1/2 Length Running thights");
							bi[8].price=3000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag;
						}
						break;
					
					default:
						printf("\n**INVALID INPUT**");
				}	
			
			default:
				printf("\n**INVALID INPUT**");
		}
	}
	else if(male==2)
	{
		flag2:
		printf("\n\n**Levi's**\n");
		printf("1.Jeans\n2.Sweaters & SweatShirts\n3.Shorts:");
		scanf("%d",&h);
		switch(h)
		{
			case 1:
				printf("\n**Jeans options are:\n1.Skinny\n2.boot-cut\n3.Taper:");
				scanf("%d",&i);
				fflush(stdin);
				switch(i)
				{
					case 1:
						system("cls");
						printf("\n\nSkinny\n");					//2200
						printf("price:Rs.2200\nAdd to cart(y/n)?");
						scanf("%c",&c);
						fflush(stdin);		
						if(c=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[9].brand,"Levi's");
							strcpy(bi[9].name,"Skinny Jeans");
							bi[9].price=2200;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nBoot-cut\n");
						printf("price:Rs.3000\nAdd to cart(y/n)?");    			//3000
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");		
							strcpy(bi[10].brand,"Levi's");
							strcpy(bi[10].name,"Boot-cut Jeans");
							bi[10].price=3000;				
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nTaper\n");
						printf("price:Rs.2000\nAdd to cart(y/n)?");    			//2000
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[11].brand,"Levi's");
							strcpy(bi[11].name,"Taper Jeans");
							bi[11].price=2000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");			
				}
				break;
			case 2:
				system("cls");
				printf("\n**Sweaters & SweatShirts options are:\n1.Graphic Jumper\n2.neck sweatShirt\n3.Loose sweat Shirt:");
				scanf("%d",&j);
				fflush(stdin);
				switch(j)
				{
					case 1:
						system("cls");
						printf("\n\nGraphic Jumper\n");
						printf("price:Rs.1200\nAdd to cart(y/n)?");    			//1200
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[12].brand,"Levi's");
							strcpy(bi[12].name,"Graphic jumper");
							bi[12].price=1200;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nNeck SweatShirt\n");
						printf("price:Rs.2000\nAdd to cart(y/n)?");    			//2000
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[13].brand,"Levi's");
							strcpy(bi[13].name,"Neck Sweatshirt");
							bi[13].price=2000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nLoose sweat Shirt\n");
						printf("price:Rs.1500\nAdd to cart(y/n)?");    			//1500
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");
								
							strcpy(bi[14].brand,"Levi's");
							strcpy(bi[14].name,"Loose Sweatshirt");
							bi[14].price=1500;							
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");
				}				
				break;
			case 3:
				system("cls");
				printf("\n**Shorts options are:\n1.Indigo Solid shorts\n2.Regular shorts\n3.Tapered Shorts:");
				scanf("%d",&k);
				fflush(stdin);
				switch(k)
				{
					case 1:
						system("cls");
						printf("\n\nIndigo Solid shorts\n");
						printf("price:Rs.1900\nAdd to cart(y/n)?");    			//1900
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[15].brand,"Levi's");
							strcpy(bi[15].name,"Indigo Solid shorts");
							bi[15].price=1900;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nRegular shorts\n");
						printf("price:Rs.1200\nAdd to cart(y/n)?");    			//1200
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[16].brand,"Levi's");
							strcpy(bi[16].name,"Regular shorts");
							bi[16].price=1200;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nTapered Shorts\n");
						printf("price:Rs.1200\nAdd to cart(y/n)?");    			//1200
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[17].brand,"Levi's");
							strcpy(bi[17].name,"Tapered Shorts");
							bi[17].price=1200;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag2;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");
				}
				break;
			default:
				printf("\n**INVALID INPUT**");
					
		}
	}
	else
	{
		printf("\n**INVALID INPUT**");
	}
}

void fbrand(int female)
{
	int flag1,aa,ab,ae;
	char ac,ad;
	system("cls");
	if(female==1)
	{
		flag1:
		printf("\n\n**YSL**\n");
		printf("1.Dresses\n2.Pants\n3.Jackets:");
		scanf("%d",&aa);
		fflush(stdin);
		switch(aa)
		{
			case 1:
				system("cls");
				printf("\n**Dress options are:\n1.Printed cotton Dress\n2.Ribbed-nit dress\n3.Floral candy dress:");
				scanf("%d",&ab);
				fflush(stdin);
				switch(ab)
				{
					case 1:
						system("cls");
						printf("\n\nPrinted cotton Dress\n");
						printf("price:Rs.2500\nAdd to cart(y/n)?");    			//2500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[18].brand,"YSL");
							strcpy(bi[18].name,"Printed cotton Dress");
							bi[18].price=2500;							
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nRibbed-nit dress\n");
						printf("price:Rs.3000\nAdd to cart(y/n)?");    			//3000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[19].brand,"YSL");
							strcpy(bi[19].name,"Ribbed-nit Dress");
							bi[19].price=3000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nFloral candy dress\n");	
						printf("price:Rs.2500\nAdd to cart(y/n)?");    			//2500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[20].brand,"YSL");
							strcpy(bi[20].name,"Floral candy dress");
							bi[20].price=2500;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");
				}
				break;
			case 2:
				system("cls");
				printf("\n**Pants options are:\n1.Leggings\n2.Leather Pants\n3.Casual Pants:");
				scanf("%d",&ab);
				fflush(stdin);
				switch(ab)
				{
					case 1:
						system("cls");
						printf("\n\nLeggings\n");
						printf("price:Rs.1000\nAdd to cart(y/n)?");    			//1000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[21].brand,"YSL");
							strcpy(bi[21].name,"Leggings");
							bi[21].price=1000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nLeather Pants\n");
						printf("price:Rs.2000\nAdd to cart(y/n)?");    			//2000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[22].brand,"YSL");
							strcpy(bi[22].name,"Leather Pants");
							bi[22].price=2000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nCasual Pants\n");	
						printf("price:Rs.2000\nAdd to cart(y/n)?");    			//2000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[23].brand,"YSL");
							strcpy(bi[23].name,"Casual dress");
							bi[23].price=2000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");
				}
				break;
			case 3:
				system("cls");
				printf("\n**Jacket options are:\n1.Down jacket\n2.Blazer\n3.Puffer coat:");
				scanf("%d",&ab);
				fflush(stdin);
				switch(ab)
				{
					case 1:
						system("cls");
						printf("\n\nDown jacket\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[24].brand,"YSL");
							strcpy(bi[24].name,"Down Jacket");
							bi[24].price=5000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nBlazer\n");
						printf("price:Rs.6000\nAdd to cart(y/n)?");    			//6000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[25].brand,"YSL");
							strcpy(bi[25].name,"Blazer");
							bi[25].price=6000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nPuffer coat\n");	
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[26].brand,"YSL");
							strcpy(bi[26].name,"Puffer coat");
							bi[26].price=5000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
							else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");
				}
				break;	
			default:
				printf("\n**INVALID INPUT**");
		}	
	}
	else if(female==2)
	{
		flag3:
		printf("\n\n**Prada**\n");
		printf("1.Coats\n2.Jackets\n3.Skirts:");
		scanf("%d",&ae);
		fflush(stdin);
		switch(ae)
		{
			case 1:
				system("cls");
				printf("\n**Coat options are:\n1.Trench Coat\n2.Wool Coat\n3.Scarf Jacket:");
				scanf("%d",&ab);
				fflush(stdin);
				switch(ab)
				{
					case 1:
						system("cls");
						printf("\n\nTrench Coat\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[27].brand,"Prada");
							strcpy(bi[27].name,"Trench coat");
							bi[27].price=5000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag3;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nWool Coat\n");
						printf("price:Rs.6000\nAdd to cart(y/n)?");    			//6000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[28].brand,"Prada");
							strcpy(bi[28].name,"Wool Coat");
							bi[28].price=6000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nScarf Jacket\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[29].brand,"Prada");
							strcpy(bi[29].name,"Scarf Jacket");
							bi[29].price=5000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag3;
						}
						break;
					default:
						printf("\n**INVALID INPUT");
				}
			case 2:
				system("cls");
				printf("\n**Jackets options are:\n1.Cotton suit Jacket\n2.Wool Blazer\n3.Silk Jacket:");
				scanf("%d",&ab);
				fflush(stdin);
				switch(ab)
				{
					case 1:
						system("cls");
						printf("\n\nCotton suit Jacket\n");
						printf("price:Rs.4000\nAdd to cart(y/n)?");    			//4000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[30].brand,"Prada");
							strcpy(bi[30].name,"Cotton Suit Jacket");
							bi[30].price=4000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag3;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nWool Blazer\n");
						printf("price:Rs.3000\nAdd to cart(y/n)?");    			//3000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[31].brand,"Prada");
							strcpy(bi[31].name,"Wool Blazer");
							bi[31].price=3000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nSilk Jacket\n");
						printf("price:Rs.3500\nAdd to cart(y/n)?");    			//3500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[32].brand,"Prada");
							strcpy(bi[32].name,"Silk Jacket");
							bi[32].price=3500;							
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag3;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");	
				}
			case 3:
				system("cls");
				printf("\n**Skirts options are:\n1.Laced mini skirt\n2.Maxi skirt\n3.Jersey mini skirt:");
				scanf("%d",&ab);
				fflush(stdin);
				switch(ab)
				{
					case 1:
						system("cls");
						printf("\n\nLaced mini skirt\n");
						printf("price:Rs.500\nAdd to cart(y/n)?");    			//500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[33].brand,"Prada");
							strcpy(bi[33].name,"Laced mini skirt");
							bi[33].price=500;							
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag3;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nMaxi skirt\n");
						printf("price:Rs.1000nAdd to cart(y/n)?");    			//1000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[34].brand,"Prada");
							strcpy(bi[34].name,"Cotton Suit Jacket");
							bi[34].price=1000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
						}
						else
						{
							goto flag3;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nJersey mini skirt\n");
						printf("price:Rs.500\nAdd to cart(y/n)?");    			//500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[35].brand,"Prada");
							strcpy(bi[35].name,"Jersey mini skirt");
							bi[35].price=500;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
							
						}
						else
						{
							goto flag3;
						}
						break;
					default:
						printf("\n**INVliD INPUT**");
				}
			default:
				printf("\n**INVALID INPUT**");
		}	
	}
	else
	{
		printf("\n**INVALID INPUT**");
	}
}

void ubrand(int uni)
{

	int ba,bb;
	char bc,bd;
	system("cls");
	if(uni==1)
	{
		flag4:
		printf("\n\n**Adidas**\n");
		printf("1.T-shirts\n2.Hoddies\n3.Tracksuits:");
		scanf("%d",&ba);
		fflush(stdin);
		switch(ba)
		{
			case 1:
					system("cls");
					printf("\n**T-shirts options are:\n1.Sport Tee\n2.3-strips Tee\n3.Tank Top:");
					scanf("%d",&bb);
					fflush(stdin);
					switch(bb)
					{
						case 1:
							system("cls");
							printf("\n\nSport Tee\n");
							printf("price:Rs.500\nAdd to cart(y/n)?");    			//500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");
								strcpy(bi[36].brand,"Adidas");
								strcpy(bi[36].name,"Sport Tee");
								bi[36].price=500;							
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
								else
							{
								billing(bi);
							}
							return 0;
							}
							else
							{
								goto flag4;
							}
							break;
						case 2:
							system("cls");
							printf("\n\n3-strips Tee\n");
							printf("price:Rs.500\nAdd to cart(y/n)?");    			//500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");	
								strcpy(bi[37].brand,"Adidas");
								strcpy(bi[37].name,"3-strips Tee");
								bi[37].price=500;					
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
								else
								{
									billing(bi);
								}
								return 0;
							}
							else
							{
								goto flag4;
							}
							break;
						case 3:
							system("cls");
							printf("\n\nTank Top\n");
							printf("price:Rs.500\nAdd to cart(y/n)?");    			//500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");	
								strcpy(bi[38].brand,"Adidas");
								strcpy(bi[38].name,"Tank top");
								bi[38].price=500;					
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
								else
								{
									billing(bi);
								}
								return 0;
							}
							else
							{
								goto flag4;
							}
							break;
						default:
							printf("\n**INVALID INPUT**");
					}
				
			case 2:
				system("cls");
					printf("\n**Hoddie options are:\n1.ESSENTIAls Hoddie\n2.Graphic Hoddie\n3.Cherry sweatshirt:");
					scanf("%d",&bb);
					fflush(stdin);
					switch(bb)
					{
						case 1:
							system("cls");
							printf("\n\nESSENTIAls Hoddie\n");
							printf("price:Rs.1000\nAdd to cart(y/n)?");    			//1000
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");
								strcpy(bi[39].brand,"Adidas");
								strcpy(bi[39].name,"ESSENTIALS Hoddie");
								bi[39].price=1000;						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
								else
								{
									billing(bi);
								}
								return 0;
							}
							else
							{
								goto flag4;
							}
							break;
						case 2:
							system("cls");
							printf("\n\nGraphic Hoddie\n");
							printf("price:Rs.1500\nAdd to cart(y/n)?");    			//1500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");
								strcpy(bi[40].brand,"Adidas");
								strcpy(bi[40].name,"Graphic Hoddie");
								bi[40].price=1500;						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
								else
								{
									billing(bi);
								}
								return 0;
							}
							else
							{
								goto flag4;
							}
							break;	
						case 3:
							system("cls");
							printf("\n\nCherry sweatshirt\n");
							printf("price:Rs.1500\nAdd to cart(y/n)?");    			//1500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");
								strcpy(bi[41].brand,"Adidas");
								strcpy(bi[41].name,"Cherry Sweatshirt");
								bi[41].price=1500;						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
								else
								{
									billing(bi);
								}
								return 0;
							}
							else
							{
								goto flag4;
							}
							break;
						default:
							printf("\n**INVALID INPUT**");
					}
			case 3:
				system("cls");
				printf("\n**Tracksuits options are:\n1.Tiro Track Pants\n2.3-strips Track Jacket\n3.Joggers:");
				scanf("%d",&bb);
				fflush(stdin);
				switch(bb)
				{
					case 1:
						system("cls");
						printf("\n\nTiro Track Pants\n");
						printf("price:Rs.700\nAdd to cart(y/n)?");    			//700
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[42].brand,"Adidas");
							strcpy(bi[42].name,"Tiro Track Pants");
							bi[42].price=700;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag4;
						}
						break;
					case 2:
						system("cls");
						printf("\n\n3-strips Track Jacket\n");
						printf("price:Rs.500w\nAdd to cart(y/n)?");    			//500
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[43].brand,"Adidas");
							strcpy(bi[43].name,"3-Strips Track Jacket");
							bi[43].price=500;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag4;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nJoggers\n");
						printf("price:Rs.500\nAdd to cart(y/n)?");    			//500
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[44].brand,"Adidas");
							strcpy(bi[44].name,"Joggers");
							bi[44].price=500;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag4;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");
				}
			default:
				printf("\n**INVALID INPUT**");
		}
	}
	else if(uni==2)
	{
		flag5:
		printf("\n\n**GUCCI**\n");
		printf("1.Shirts\n2.Sweaters\n3.Outers:");
		scanf("%d",&ba);
		fflush(stdin);
		switch(ba)
		{
			case 1:
				system("cls");
				printf("\n**Shirts options are:\n1.Demion Shirt\n2.Printed shirt\n3.GUCCI tiger shirt:");
				scanf("%d",&bb);
				fflush(stdin);
				switch(bb)
				{
					case 1:
						system("cls");
						printf("\n\nDemion Shirt\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[45].brand,"GICCI");
							strcpy(bi[45].name,"Demion Shirt");
							bi[45].price=5000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nPrinted shirt\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[46].brand,"GICCI");
							strcpy(bi[46].name,"Printed Shirt");
							bi[46].price=5000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nGUCCI tiger shirt\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[47].brand,"GICCI");
							strcpy(bi[47].name,"GUCCI tiger shirt");
							bi[47].price=5000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");
				}
			case 2:
				system("cls");
				printf("\n**Sweaters options are:\n1.Cotton Flower shirt\n2.Knit sweater\n3.Cotton V-neck Sweater:");
				scanf("%d",&bb);
				fflush(stdin);
				switch(bb)
				{
					case 1:
						system("cls");
						printf("\n\nCotton Flower shirt\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[48].brand,"GICCI");
							strcpy(bi[48].name,"Cotton Flower shirt");
							bi[48].price=5000;							
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nKnit sweater\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[49].brand,"GICCI");
							strcpy(bi[49].name,"Knit Sweater");
							bi[49].price=5000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nCotton V-neck Sweater\n");
						printf("price:Rs.5000\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[50].brand,"GICCI");
							strcpy(bi[50].name,"Cotton V-neck Sweater");
							bi[50].price=5000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");					
				}
			case 3:
				system("cls");
				printf("Outers options are:\n1.Nylon Vest\n2.Nylon Jacket\n3.GUCCI tiger jumper:");
				scanf("%d",&bb);
				fflush(stdin);
				switch(bb)
				{
					case 1:
						system("cls");
						printf("\n\nNylon Vest\n");
						printf("price:Rs.4000\nAdd to cart(y/n)?");    			//4000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");
							strcpy(bi[51].brand,"GICCI");
							strcpy(bi[51].name,"Nylon Vest");
							bi[51].price=4000;						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nNylon Jacket\n");
						printf("price:Rs.4000\nAdd to cart(y/n)?");    			//4000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[52].brand,"GICCI");
							strcpy(bi[52].name,"Nylon Jacket");
							bi[52].price=4000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nGUCCI tiger jumper\n");
						printf("price:Rs.6000\nAdd to cart(y/n)?");    			//6000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");	
							strcpy(bi[53].brand,"GICCI");
							strcpy(bi[53].name,"GUCCI tiger jumper");
							bi[53].price=6000;					
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
							else
								{
									billing(bi);
								}
								return 0;
						}
						else
						{
							goto flag5;
						}
						break;
					default:
						printf("\n**INVALID INPUT**");
				}
			default:
				printf("\n**INVALID INPUT**");
		}
	}
	else 
	{
		printf("\n**INVALID INPUT**");
	}
}

void billing(struct bill bi[])
{
	int i,sum=0;
	system("cls");
	printf("\n\n\t\t   ******BILL*****\n");
	printf("\tBrand:\tName:\t\t   price:\n");
	for(i=0;i<55;i++)
	{
		if(bi[i].price!=0)
		{
			printf("\t%s\t%s\t %d\n",bi[i].brand,bi[i].name,bi[i].price);
			sum=sum+bi[i].price;
		}		
	}
	printf("\t\tTotal:%d",sum);
	printf("\n\t\tThank you for visiting\n*****************************************");
}
