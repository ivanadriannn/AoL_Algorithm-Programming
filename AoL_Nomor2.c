#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct housingData{
	char location1[3950];
	char location2[3950];
	long long int price;
	int rooms;
	int bathrooms;
	int carParks;
	char type[3950];
	int area;
	char furnish[3950];
}data[3950];

int searchin_loc1(char str[], int dataAmount){
	int i = 0;
	int search = 0;
	
	while(i < dataAmount){
		if(strstr(data[i].location1, str)){
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);
			search += 1;
		}
		i++;
	}
	
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}
	
	return 0;		
}

int searchin_loc2(char str[], int dataAmount){
	int i = 0;
	int search = 0;
	
	while(i < dataAmount){
		if(strstr(data[i].location2, str)){
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);
			search += 1;
		}
		i++;
	}
	
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}
	
	return 0;		
}

int searchin_price(char str[], int dataAmount){
	int i = 0;
	int convert; 
	int search = 0;
	
	while(i < dataAmount){
		convert = atoi(str);
		if(data[i].price == convert){ 
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);
			search += 1;
		}
		i++;
	}
		
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}	
	
	return 0;	
}

int searchin_rooms(char str[], int dataAmount){
	int i = 0;
	int convert; 
	int search = 0;
	
	while(i < dataAmount){
		convert = atoi(str);
		if(data[i].rooms == convert){ 
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);
			search += 1;
		}
		i++;
	}
		
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}	
	
	return 0;	
}

int searchin_bathrooms(char str[], int dataAmount){
	int i = 0;
	int convert; 
	int search = 0;
	
	while(i < dataAmount){
		convert = atoi(str);
		if(data[i].bathrooms == convert){ 
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);	
			search += 1;
		}
		i++;
	}
		
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}	
	
	return 0;	
}

int searchin_carparks(char str[], int dataAmount){
	int i = 0;
	int convert; 
	int search = 0;
	
	while(i < dataAmount){
		convert = atoi(str);
		if(data[i].carParks == convert){ 
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);
			search += 1;
		}
		i++;
	}
		
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}	
	
	return 0;	
}

int searchin_type(char str[], int dataAmount){
	int i = 0;
	int search = 0;
	
	while(i < dataAmount){
		if(strstr(data[i].type, str)){
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);
			search += 1;
		}
		i++;
	}
	
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}
	
	return 0;		
}

int searchin_area(char str[], int dataAmount){
	int i = 0;
	int convert; 
	int search = 0;
	
	while(i < dataAmount){
		convert = atoi(str);
		if(data[i].area == convert){ 
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);	
			search += 1;
		}
		i++;
	}
		
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}	
	
	return 0;	
}

int searchin_furnish(char str[], int dataAmount){
	int i = 0;
	int search = 0;
	
	while(i < dataAmount){
		if(strstr(data[i].furnish, str)){
			printf("%-20s| %-15s| %lld\t| %d\t| %d\t| %d\t| %s\t| %d\t| %s\n", data[i].location1, data[i].location2, data[i].price, data[i].rooms, data[i].bathrooms, data[i].carParks, data[i].type, data[i].area, data[i].furnish);
			search += 1;
		}
		i++;
	}
	
	if(search == 0){
		puts("Data searched doesn't exist in the record!");
		return -1;
	}
	
	return 0;		
}

int main(){
	char ignoreHeader[255];
	int index = 0;
	int choose;
	char inputString[255];
	char response[5];
	
	FILE *csv = fopen("file.csv", "r");
	fscanf(csv, "%[^\n]\n", ignoreHeader);
	
	while(!feof(csv)){
		fscanf(csv, "%[^,], %[^,], %lld, %d, %d, %d, %[^,], %d, %[^\n]\n", data[index].location1, data[index].location2, &data[index].price, &data[index].rooms, &data[index].bathrooms, &data[index].carParks, data[index].type, &data[index].area, data[index].furnish);
		index++;
	}
	do{
		puts("============SOAL 2=============");
		puts("IVAN ADRIAN - 2602076323 - LB01");
		puts("===============================\n");
		puts("Choose The Options: (1/2/3)");
		puts("1. Search Data");
		puts("2. Clear Screen");
		puts("3. Exit");
		
		scanf("%d", &choose);
		getchar();
		
		switch(choose){
			case 1:
				puts("Input With The Following Format: DataX in ColumnName");
				scanf("%[^\n]", inputString);
				getchar();
				
				char to[10] = " ";
				char *parseString = strtok(inputString, to);
				char *subString = parseString;
				char *searchColumn = parseString;
				
				while(parseString != NULL){
					searchColumn = parseString;
					parseString = strtok(NULL, to);
				}
			
				if(strcmp(searchColumn, "loc1") == 0) {
					searchin_loc1(subString, index);
				}
				else if(strcmp(searchColumn, "loc2") == 0){
					searchin_loc2(subString, index);
				}
				else if(strcmp(searchColumn, "price") == 0){
					searchin_price(subString, index);
				}
				else if(strcmp(searchColumn, "rooms") == 0){
					searchin_rooms(subString, index);
				}
				else if(strcmp(searchColumn, "bathrooms") == 0){
					searchin_bathrooms(subString, index);
				}
				else if(strcmp(searchColumn, "carparks") == 0){
					searchin_carparks(subString, index);
				}
				else if(strcmp(searchColumn, "type") == 0){
					searchin_type(subString, index);
				}
				else if(strcmp(searchColumn, "area") == 0){
					searchin_area(subString, index);
				}
				else if(strcmp(searchColumn, "furnish") == 0){
					searchin_furnish(subString, index);
				}
				break;
			case 2:
				system("cls");
				main();
				break;
			case 3: 
				puts("Exit Program...");	
				exit(0);
				break;
		}
		puts("the number is unrecognized!");
		puts("Type'YES' if you want to choose the options again!");
		puts("Type'NO' if you want to exit!");
				
		scanf("%s", &response);
		getchar();
		
	}while(strcmp(response,"YES") == 0);
	
	puts("Exit Program...");	
	
	fclose(csv);
    
    return 0;
}
