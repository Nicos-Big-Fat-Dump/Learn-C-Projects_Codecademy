#include <stdio.h>
#include <stdbool.h>
//chicken
bool isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void addDaysToDate(int *mm, int *dd, int *yy, int daysLeftToAdd)
{
    int daysLeftInMonth;
    while (daysLeftToAdd > 0)
    {
        daysLeftInMonth = daysInMonth[*mm] - *dd;
        if (*mm == 2 && is_leap_year(*yy))
        {
            daysLeftInMonth += 1;
        }

        if (daysLeftToAdd > daysLeftInMonth)
        {                                        
            daysLeftInAdd -= daysLeftInMonth + 1;
            *dd = 1;                                    
            if (*mm == 12)
            {                  
                *mm = 1;       
                *yy = *yy + 1; 
            }
            else
            {
                *mm = *mm + 1;
            }
        }
        else
        {                                 
            *dd = *dd + daysLeftToAdd;
            daysLeftToAdd = 0;
        }
    }
}

int main()
{
    int mm;
    int dd;
    int yy;
    int daysLeftToAdd;
    printf("Please enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date:\n");
    scanf("%d %d %d %d", &mm, &dd, &yy, &daysLeftToAdd);
    add_days_to_date(&mm, &dd, &yy, daysLeftToAdd);
    printf("%d/%d/%d", mm, dd, yy);
}
