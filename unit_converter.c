#include<stdio.h>

void convert_mass();
void convert_length();
void convert_time();

int main() 
{
    int choice;

    do {
        printf("ENTER YOUR CHOICE.\n");
        printf(" 1 : MASS.\n");
        printf(" 2 : LENGTH.\n");
        printf(" 3 : TIME.\n");
        printf(" 4 : EXIT.\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            convert_mass();
            break;

        case 2:
            convert_length();
            break;
        case 3:
            convert_time();
            break;
        case 4:
            printf("Good Bye.\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    } 
    while(choice != 4);

    return 0;
}

void convert_mass() {
    float miligram, gram, kilogram, pound, ton;
    int choice;
    printf("ENTER YOUR CHOICE.\n");
    printf(" 1 : Miligram.\n");
    printf(" 2 : Gram.\n");
    printf(" 3 : Kilogram.\n");
    printf(" 4 : Pound.\n");
    printf(" 5 : Ton.\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter A Number: ");
        scanf("%f", &miligram);
        printf("\n %.0f Miligram is : %f Gram.\n", miligram, (miligram * 0.001));
        break;
    case 2:
        printf("Enter A Number: ");
        scanf("%f", &gram);
        printf("\n %.0f Gram is : %.3f Gram.\n", gram, (gram * 1));
        break;
    case 3:
        printf("Enter A Number: ");
        scanf("%f", &kilogram);
        printf("\n %.0f Kilogram is : %.3f Gram.\n", kilogram, (kilogram * 1000));
        break;
    case 4:
        printf("Enter A Number: ");
        scanf("%f", &pound);
        printf("\n %.0f Pound is : %.3f Gram.\n", pound, (pound * 453.59237));
        break;
    case 5:
        printf("Enter A Number: ");
        scanf("%f", &ton);
        printf("\n %.0f Metric Ton is : %.3f Gram.\n", ton, (ton * 1000000));
        break;
    
    default:
        printf("Invalid choice! Please try again.\n");
        break;
    }
}

void convert_length() {
    float milimetre, meter, kilomitre, centimeter, inch;
    int choice;
    printf("ENTER YOUR CHOICE.\n");
    printf(" 1 : Milimetre.\n");
    printf(" 2 : Centimeter.\n");
    printf(" 3 : Inch.\n");
    printf(" 4 : Meter.\n");
    printf(" 5 : Kilometer.\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter A Number: ");
        scanf("%f", &milimetre);
        printf("\n %.0f milimeter is : %.3f centimeter.\n", milimetre, (milimetre * 0.1));
        break;
    case 2:
        printf("Enter A Number: ");
        scanf("%f", &centimeter);
        printf("\n %.0f centimeter is : %.3f centimeter.\n", centimeter, (centimeter * 1));
        break;
    case 3:
        printf("Enter A Number: ");
        scanf("%f", &inch);
        printf("\n %.0f inch is : %.3f centimeter.\n", inch, (inch * 2.54));
        break;
    case 4:
        printf("Enter A Number: ");
        scanf("%f", &meter);
        printf("\n %.0f meter is : %.3f centimeter.\n", meter, (meter * 100));
        break;
    case 5:
        printf("Enter A Number: ");
        scanf("%f", &kilomitre);
        printf("\n %.0f kilometer is : %.3f centimeter.\n", kilomitre, (kilomitre * 100000));
        break;
    
    default:
        printf("Invalid choice! Please try again.\n");
        break;
    }
}

void convert_time() {
    float minute, hour, day, week, month, year;
    int choice;
    printf("ENTER YOUR CHOICE.\n");
    printf(" 1 : Minute.\n");
    printf(" 2 : Hour.\n");
    printf(" 3 : Day.\n");
    printf(" 4 : Week.\n");
    printf(" 5 : Month.\n");
    printf(" 6 : Year.\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter A Number: ");
        scanf("%f", &minute);
        printf("\n %.0f Minute is : %.0f Second.\n", minute, (minute * 60));
        break;
    case 2:
        printf("Enter A Number: ");
        scanf("%f", &hour);
        printf("\n %.0f Hour is : %.0f Minute.\n", hour, (hour * 60));
        break;
    case 3:
        printf("Enter A Number: ");
        scanf("%f", &day);
        printf("\n %.0f Day is : %.0f Minute.\n", day, (day * 1440));
        break;
    case 4:
        printf("Enter A Number: ");
        scanf("%f", &week);
        printf("\n %.0f Week is : %.0f Minute.\n", week, (week * 10080));
        break;
    case 5:
        printf("Enter A Number: ");
        scanf("%f", &month);
        printf("\n %.0f Month is : %.0f Minute.\n", month, (month * 43800));
        break;
    case 6:
        printf("Enter A Number: ");
        scanf("%f", &year);
        printf("\n %.0f Year is : %.0f Minute.\n", year, (year * 525960));
        break;
    default:
        printf("Invalid choice! Please try again.\n");
        break;
    }
}