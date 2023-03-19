#include<stdio.h>
#include<string.h>
void info();
void type();
void mbrand(int);
void fbrand(int);
void ubrand(int);
int main()
{
	
	printf("\n\n\n\n\n\t\t\t///***********************************************************///\n");
    printf("\t\t\t\t\t Welcome to the susisu closet\n"); 
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
   	printf("contact number:");			//file ma save ?????
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
						printf("\n\nBlack T-shirt\n");						//2000
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**\n\n");
							printf("Do you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nStatement Flees Hoddie\n");						//5500
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**\n\n");
						}
						printf("Do you wish to buy anything more(y/n)?");
						scanf("%c",&e);
						if(e=='y')
							{
								system("cls");
								type();
							}
						
						else
						{
							goto flag;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nSleeveless top\n");						//3000
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);						
						if(c=='y')
						{
							printf("**Added to cart**");
						}
						printf("Do you wish to buy anything more(y/n)?");
						scanf("%c",&e);
						if(e=='y')
							{
								system("cls");
								type();
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
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**\n\n");
							printf("Do you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nTank top\n");							//4000
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nShort-sleeve T-shirt\n");					//2000
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**\n\n");
							printf("Do you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nTrousers\n");							//4000
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);	
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag;
						}
						break;
					case 3:
						system("cls");
						printf("\n\n1/2 Length running Tights\n");					//3000
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");
						scanf("%c",&c);
						fflush(stdin);		
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag2;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nBoot-cut\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//3000
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag2;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nTaper\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//2000
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//1200
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag2;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nneck sweatShirt\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//2000
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag2;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nLoose sweat Shirt\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//1500
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//1900
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag2;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nRegular shorts\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//1200
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag2;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nTapered Shorts\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//1200
						scanf("%c",&c);
						fflush(stdin);					
						if(c=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&e);
							if(e=='y')
								{
									system("cls");
									type();
								}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//2500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag1;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nRibbed-nit dress\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//3000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nFloral candy dress\n");	
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//2500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//1000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag1;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nLeather Pants\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//2000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nCasual Pants\n");	
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//2000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag1;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nBlazer\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//6000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nPuffer coat\n");	
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
							{
								system("cls");
								type();
							}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag3;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nWool Coat\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//6000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nScarf Jacket\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//4000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag3;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nWool Blazer\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//3000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag1;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nSilk Jacket\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//3500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag3;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nMaxi skirt\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//1000
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
						}
						else
						{
							goto flag3;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nJersey mini skirt\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//500
						scanf("%c",&ac);
						fflush(stdin);					
						if(ac=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&ad);
							if(ad=='y')
								{
									system("cls");
									type();
								}
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
							printf("price:RsXXX\nAdd to cart(y/n)?");    			//500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
							}
							else
							{
								goto flag4;
							}
							break;
						case 2:
							system("cls");
							printf("\n\n3-strips Tee\n");
							printf("price:RsXXX\nAdd to cart(y/n)?");    			//500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
							}
							else
							{
								goto flag4;
							}
							break;
						case 3:
							system("cls");
							printf("\n\nTank Top\n");
							printf("price:RsXXX\nAdd to cart(y/n)?");    			//500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
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
							printf("price:RsXXX\nAdd to cart(y/n)?");    			//1000
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
							}
							else
							{
								goto flag4;
							}
							break;
						case 2:
							system("cls");
							printf("\n\nGraphic Hoddie\n");
							printf("price:RsXXX\nAdd to cart(y/n)?");    			//1500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
							}
							else
							{
								goto flag4;
							}
							break;	
						case 3:
							system("cls");
							printf("\n\nCherry sweatshirt\n");
							printf("price:RsXXX\nAdd to cart(y/n)?");    			//1500
							scanf("%c",&bc);
							fflush(stdin);					
							if(bc=='y')
							{
								printf("\n**Added to cart**");						
								printf("\n\nDo you wish to buy anything more(y/n)?");
								scanf("%c",&bd);
								if(bd=='y')
								{
									system("cls");
									type();
								}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//700
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag4;
						}
						break;
					case 2:
						system("cls");
						printf("\n\n3-strips Track Jacket\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//500
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag4;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nJoggers\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//500
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag5;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nPrinted shirt\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag5;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nGUCCI tiger shirt\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag5;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nKnit sweat\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag5;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nCotton V-neck Sweater\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//5000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
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
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//4000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag5;
						}
						break;
					case 2:
						system("cls");
						printf("\n\nNylon Jacket\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//4000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
						}
						else
						{
							goto flag5;
						}
						break;
					case 3:
						system("cls");
						printf("\n\nGUCCI tiger jumper\n");
						printf("price:RsXXX\nAdd to cart(y/n)?");    			//6000
						scanf("%c",&bc);
						fflush(stdin);					
						if(bc=='y')
						{
							printf("\n**Added to cart**");						
							printf("\n\nDo you wish to buy anything more(y/n)?");
							scanf("%c",&bd);
							if(bd=='y')
							{
								system("cls");
								type();
							}
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
}
