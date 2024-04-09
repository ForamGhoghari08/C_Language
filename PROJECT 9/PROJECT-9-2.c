#include <stdio.h>

    struct Student 
{
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main() 
{
    struct Student students[5];
    int i ;
    
    for (i = 0; i < 5; ++i) 
	
	{
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf("%s", students[i].name);  

        printf("Chemistry Marks: ");
        scanf("%f", &students[i].chem_marks);

        printf("Mathematics Marks: ");
        scanf("%f", &students[i].maths_marks);

        printf("Physics Marks: ");
        scanf("%f", &students[i].phy_marks);

        printf("\n");
    }


    for (i = 0; i < 5; ++i) {
        printf("\nMark sheet for student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %.2f\n", students[i].chem_marks);
        printf("Mathematics Marks: %.2f\n", students[i].maths_marks);
        printf("Physics Marks: %.2f\n", students[i].phy_marks);

        float total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (total_marks / 300) * 100;

        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}

