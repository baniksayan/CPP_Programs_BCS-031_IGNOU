#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Define the course information for the 2nd semester
    struct Course
    {
        string code;
        bool passed;
        int credits;
        int max_marks;
        int obtained_marks;
    };
    vector<Course> courses;

    int num_courses;
    cout << "Enter the number of courses in the 2nd semester: ";
    cin >> num_courses;

    for (int i = 0; i < num_courses; ++i)
    {
        Course course;
        cout << "Enter details for course #" << i + 1 << endl;
        cout << "Course Code: ";
        cin >> course.code;
        cout << "Passed (1 for yes, 0 for no): ";
        cin >> course.passed;
        cout << "Credits: ";
        cin >> course.credits;
        cout << "Maximum Marks: ";
        cin >> course.max_marks;
        cout << "Obtained Marks: ";
        cin >> course.obtained_marks;
        courses.push_back(course);
    }

    int total_credits = 0;
    int total_grade_points = 0;

    // Calculate SGPA
    for (const Course &course : courses)
    {
        if (course.passed)
        {
            int grade_points = (course.obtained_marks * 10) / course.max_marks;
            int course_grade_points = grade_points * course.credits;
            total_credits += course.credits;
            total_grade_points += course_grade_points;
        }
    }

    // Check for division by zero to avoid errors
    if (total_credits == 0)
    {
        cout << "No passed courses to calculate SGPA." << endl;
    }
    else
    {
        double sgpa = static_cast<double>(total_grade_points) / total_credits;
        cout << "SGPA for 2nd semester: " << sgpa << endl;
    }

    return 0;
}
