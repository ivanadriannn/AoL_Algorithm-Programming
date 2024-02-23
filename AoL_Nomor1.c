#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int index1 = 0;
int index2 = 0;
    
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

void checkin_loc1(int index, int maximumFreq, int minimumFreq){
	int frequency[3950];
	int i, j, search;
	
	for(i = 0; i < index; i++){
		frequency[i] = 0;
        for(j = 0; j < index; j++){
            if(strcmp(data[i].location1, data[j].location1) == 0){
            	frequency[i] += 1;
            }
        }
    }
    
    for(i = 0; i < index; i++){
	    if(frequency[i] >= maximumFreq){
	        maximumFreq = frequency[i];
	        index2 = i;
       	}
	    else if(frequency[i] <= minimumFreq){
	        minimumFreq = frequency[i];
	        index1 = i;
	    }
	}	
	
	for(i = 0; i < index; i++){
	    search = 1;
	    j = 0;
	    
	    while(j < i){
	    	if(strcmp(data[i].location1, data[j].location1) == 0){
	            search = 0;
	            break;
	        }
	        j++;
		}
	
	    if(search == 1){
	        printf("%s : %d\n", data[i].location1, frequency[i]);	
		}
    }
	printf("Maximum value: %s with frequency: %d\n", data[index2].location1, maximumFreq);
    printf("Minimum value: %s with frequency: %d\n", data[index1].location1, minimumFreq);
}

void checkin_loc2(int index, int maximumFreq, int minimumFreq){
	int frequency[3950];
	int i, j, search;
	
	for(i = 0; i < index; i++){
		frequency[i] = 0;
        for(j = 0; j < index; j++){
            if(strcmp(data[i].location2, data[j].location2) == 0){
            	frequency[i] += 1;
            }
        }
    }
    
    for(i = 0; i < index; i++){
	    if(frequency[i] >= maximumFreq){
	        maximumFreq = frequency[i];
	        index2 = i;
       	}
	    else if(frequency[i] <= minimumFreq){
	        minimumFreq = frequency[i];
	        index1 = i;
	    }
	}	
	
	for(i = 0; i < index; i++){
	    search = 1;
	    j = 0;
	    
	    while(j < i){
	    	if(strcmp(data[i].location2, data[j].location2) == 0){
	            search = 0;
	            break;
	        }
	        j++;
		}
	
	    if(search == 1){
	        printf("%s : %d\n", data[i].location2, frequency[i]);	
		}
    }
	printf("Maximum value: %s with frequency: %d\n", data[index2].location2, maximumFreq);
    printf("Minimum value: %s with frequency: %d\n", data[index1].location2, minimumFreq);
}

void checkin_price(int index){
	int i;
	long long int minimumValue = data[0].price;
	long long int maximumValue = data[0].price;
	long long int total = data[0].price;
	float average;

    for(i = 0; i < index; i++){
	    if(maximumValue < data[i].price){
	    	maximumValue = data[i].price;
		}
		else if(minimumValue > data[i].price){
			minimumValue = data[i].price;
		}
		total = total + data[i].price;
    }
    
    average = total/index;
	printf("Maximum value: %lld\n", maximumValue);
    printf("Minimum value: %lld\n", minimumValue);
    printf("Average: %.2f\n", average);
}

void checkin_rooms(int index, int maximumFreq, int minimumFreq){
	int frequency[3950];
	int i, j, search;
	
	for(i = 0; i < index; i++){
		frequency[i] = 0;
        for(j = 0; j < index; j++){
            if(data[i].rooms == data[j].rooms){
            	frequency[i] += 1;
            }
        }
    }
    
    for(i = 0; i < index; i++){
	    if(frequency[i] >= maximumFreq){
	        maximumFreq = frequency[i];
	        index2 = i;
       	}
	    else if(frequency[i] <= minimumFreq){
	        minimumFreq = frequency[i];
	        index1 = i;
	    }
	}
	
	for(i = 0; i < index; i++){
	    search = 1;
	    j = 0;
	
	    while(j < i){
	    	if(data[i].rooms == data[j].rooms){
	            search = 0;
	            break;
	        }
	        j++;
		}
	
	    if(search == 1){
	        printf("%d : %d\n", data[i].rooms, frequency[i]);	
		}
    }
	printf("Maximum value: %d with frequency: %d\n", data[index2].rooms, maximumFreq);
    printf("Minimum value: %d with frequency: %d\n", data[index1].rooms, minimumFreq);
}

void checkin_bathrooms(int index, int maximumFreq, int minimumFreq){
	int frequency[3950];
	int i, j, search;
	
	for(i = 0; i < index; i++){
		frequency[i] = 0;
        for(j = 0; j < index; j++){
            if(data[i].bathrooms == data[j].bathrooms){
            	frequency[i] += 1;
            }
        }
    }
    
    for(i = 0; i < index; i++){
	    if(frequency[i] >= maximumFreq){
	        maximumFreq = frequency[i];
	        index2 = i;
       	}
	    else if(frequency[i] <= minimumFreq){
	        minimumFreq = frequency[i];
	        index1 = i;
	    }
	}
	
	for(i = 0; i < index; i++){ 
	    search = 1;
	    j = 0;
	    
	    while(j < i){
	    	if(data[i].bathrooms == data[j].bathrooms){
	            search = 0;
	            break;
	        }
	        j++;
		}
	
	    if(search == 1){
	        printf("%d : %d\n", data[i].bathrooms, frequency[i]);	
		}
    }
	printf("Maximum value: %d with frequency: %d\n", data[index2].bathrooms, maximumFreq);
    printf("Minimum value: %d with frequency: %d\n", data[index1].bathrooms, minimumFreq);
}

void checkin_carparks(int index, int maximumFreq, int minimumFreq){
	int frequency[3950];
	int i, j, search;
	
	for(i = 0; i < index; i++){
		frequency[i] = 0;
        for(j = 0; j < index; j++){
            if (data[i].carParks == data[j].carParks){
            	frequency[i] += 1;
            }
        }
    }
    
    for(i = 0; i < index; i++){
	    if(frequency[i] >= maximumFreq){
	        maximumFreq = frequency[i];
	        index2 = i;
       	}
	    else if(frequency[i] <= minimumFreq){
	        minimumFreq = frequency[i];
	        index1 = i;
	    }
	}
	
	for(i = 0; i < index; i++){
	    search = 1;
	    j = 0;
	    
	    while(j < i){
	    	if(data[i].carParks == data[j].carParks){
	            search = 0;
	            break;
	        }
	        j++;
		}
	
	    if(search == 1){
	        printf("%d : %d\n", data[i].carParks, frequency[i]);	
		}
    }
	printf("Maximum value: %d with frequency: %d\n", data[index2].carParks, maximumFreq);
    printf("Minimum value: %d with frequency: %d\n", data[index1].carParks, minimumFreq);
}

void checkin_type(int index, int maximumFreq, int minimumFreq){
	int frequency[3950];
	int i, j, search;
	
	for(i = 0; i < index; i++){
		frequency[i] = 0;
        for(j = 0; j < index; j++){
            if (strcmp(data[i].type, data[j].type) == 0){
            	frequency[i] += 1;
            }
        }
    }
    
    for(i = 0; i < index; i++){
	    if(frequency[i] >= maximumFreq){
	        maximumFreq = frequency[i];
	        index2 = i;
       	}
	    else if(frequency[i] <= minimumFreq){
	        minimumFreq = frequency[i];
	        index1 = i;
	    }
	}
	
	for(i = 0; i < index; i++){
	    search = 1;
	    j = 0;
	    
	    while(j < i){
	    	if(strcmp(data[i].type, data[j].type) == 0){
	            search = 0;
	            break;
	        }
	        j++;
		}
	
	    if(search == 1){
	        printf("%s : %d\n", data[i].type, frequency[i]);	
		}
    }
	printf("Maximum value: %s with frequency: %d\n", data[index2].type, maximumFreq);
    printf("Minimum value: %s with frequency: %d\n", data[index1].type, minimumFreq);
}

void checkin_area(int index){
	int i;
	long long int minimumValue = data[0].area;
	long long int maximumValue = data[0].area;
	long long int total = data[0].area;
	float average;

    for(i = 0; i < index; i++){
	    if(maximumValue < data[i].area){
	    	maximumValue = data[i].area;
		}
		else if(minimumValue > data[i].area){
			minimumValue = data[i].area;
		}
		total = total + data[i].area;
    }
    
    average = total/index;
	printf("Maximum value: %lld\n", maximumValue);
    printf("Minimum value: %lld\n", minimumValue);
    printf("Average: %.2f\n", average);
}

void checkin_furnish(int index, int maximumFreq, int minimumFreq){
	int frequency[3950];
	int i, j, search;
	
	for(i = 0; i < index; i++){
		frequency[i] = 0;
        for(j = 0; j < index; j++){
            if (strcmp(data[i].furnish, data[j].furnish) == 0){
            	frequency[i] += 1;
            }
        }
    }
    
    for(i = 0; i < index; i++){
	    if(frequency[i] >= maximumFreq){
	        maximumFreq = frequency[i];
	        index2 = i;
       	}
	    else if(frequency[i] <= minimumFreq){
	        minimumFreq = frequency[i];
	        index1 = i;
	    }
	}
	
	for(i = 0; i < index; i++){ 
	    search = 1;
	    j = 0;
	    
	    while(j < i){
	    	if(strcmp(data[i].furnish, data[j].furnish) == 0){
	            search = 0;
	            break;
	        }
	        j++;
		}
	
	    if(search == 1){
	        printf("%s : %d\n", data[i].furnish, frequency[i]);	
		}
    }
	printf("Maximum value: %s with frequency: %d\n", data[index2].furnish, maximumFreq);
    printf("Minimum value: %s with frequency: %d\n", data[index1].furnish, minimumFreq);
}

void displayData(){
	int index = 0;
	printf("%-20s| %-15s| %s\t| %s\t| %s\t| %s\t| %s\t\t| %s\t| %s\n", "Location 1", "Location2", "Price", "Rooms", "Bathrooms", "CarParks", "Type", "Area", "Furnish");
	printf("------------------------------------------------------------------------------------------------------------------------------\n");
	while(index < 3939){
		printf("%-20s| %-15s| %lld\t| %d\t| %d\t\t| %d\t\t| %s\t| %d\t| %s\n", data[index].location1, data[index].location2, data[index].price, data[index].rooms, data[index].bathrooms, data[index].carParks, data[index].type, data[index].area, data[index].furnish);
		index++;
	}
}

int main(){
	char ignoreHeader[255];
	int index = 0;
	int choose;
	char choose2[255];
	char response[5];
	
	FILE *csv = fopen("file.csv", "r");
	fscanf(csv, "%[^\n]\n", ignoreHeader);
	
	while(!feof(csv)){
		fscanf(csv, "%[^,], %[^,], %lld, %d, %d, %d, %[^,], %d, %[^\n]\n", data[index].location1, data[index].location2, &data[index].price, &data[index].rooms, &data[index].bathrooms, &data[index].carParks, data[index].type, &data[index].area, data[index].furnish);
		index++;
	}
		
	do{
		puts("============SOAL 1=============");
		puts("IVAN ADRIAN - 2602076323 - LB01");
		puts("===============================\n");
		puts("Choose The Options (1/2/3/4)");
		puts("1. Display All the Data from The FILE");
		puts("2. Describe the Data");
		puts("3. Clear Screen");
		puts("4. Exit Program");
		printf(">>");
		
		scanf("%d", &choose);
		getchar();
		
		switch(choose){
			case 1:
				displayData();
				break;
			case 2:
				puts("Type The Name of Column to Describe");
				puts("1. Location 1 \t (input: loc1)");
				puts("2. Location 2 \t (input: loc2)");
				puts("3. Price \t (input: price)");
				puts("4. Rooms \t (input: rooms)");
				puts("5. Bathrooms \t (input: bathrooms)");
				puts("6. CarParks \t (input: carparks)");
				puts("7. Type \t (input: type)");
				puts("8. Area \t (input: area)");
				puts("9. Furnish \t (input: furnish)");
				printf(">>");
			
				scanf("%s", choose2);
				getchar();
				
				if(strcmp(choose2, "loc1") == 0){
					checkin_loc1(index, 0, 10000);
				}
				else if(strcmp(choose2, "loc2") == 0){
					checkin_loc2(index, 0, 10000);
				}
				else if(strcmp(choose2, "price") == 0){
					checkin_price(index);
				}
				else if(strcmp(choose2, "rooms") == 0){
					checkin_rooms(index, 0, 10000);
				}
				else if(strcmp(choose2, "bathrooms") == 0){
					checkin_bathrooms(index, 0, 10000);
				}
				else if(strcmp(choose2, "carparks") == 0){
					checkin_carparks(index, 0, 10000);
				}
				else if(strcmp(choose2, "type") == 0){
					checkin_type(index, 0, 10000);
				}
				else if(strcmp(choose2, "area") == 0){
					checkin_area(index);
				}
				else if(strcmp(choose2, "furnish") == 0){
					checkin_furnish(index, 0, 10000);
				}
				break;
			case 3:
				system("cls");
				main();
				break;
			case 4: 
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
