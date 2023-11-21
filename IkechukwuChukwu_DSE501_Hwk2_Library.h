#define MAX_RECORDS 20

struct Instructor {
    char name[50];
    char last_name[50];
    int age;
    char gender[2];
    char street_name[50];
    int street_number;
    char city[50];
    char country[50];
};


// The compare function is used to sort the array of instructors based on their age using the qsort() function.
int compare_data(const void *a, const void *b) {
    return ((struct Instructor *)a)->age - ((struct Instructor *)b)->age;
}


// // This function reads the data from the file `DSE501_Hwk2_Instructors.txt` and stores it in an array of `struct Instructor`.
void read_data(char *filename, struct Instructor *instructors, int *count) {
    FILE *file;
    char buffer[255];

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return;
    }

    while (fgets(buffer, 255, file)) {
        sscanf(buffer, "%[^,],%[^,],%d,%[^,],%[^,],%d,%[^,],%[^\n]", instructors[*count].name, instructors[*count].last_name, &instructors[*count].age, instructors[*count].gender, instructors[*count].street_name, &instructors[*count].street_number, instructors[*count].city, instructors[*count].country);
        (*count)++;
    }

    fclose(file);
}


// This function sorts the array based on the age of the instructors using the `qsort()` function.
void sort_data(struct Instructor *instructors, int count) {
    qsort(instructors, count, sizeof(struct Instructor), compare_data);
}

void print_data(struct Instructor *instructors, int count) {
    for (int i = 0; i < count; i++) {
        printf("Name: %s\n", instructors[i].name);
        printf("Last-name: %s\n", instructors[i].last_name);
        printf("Age: %d\n", instructors[i].age);
        printf("Gender: %s\n", instructors[i].gender);
        printf("Street Name: %s\n", instructors[i].street_name);
        printf("Street Number: %d\n", instructors[i].street_number);
        printf("City: %s\n", instructors[i].city);
        printf("Country: %s\n", instructors[i].country);
        printf("\n");
    }
}
