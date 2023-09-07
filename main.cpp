//task_A
/*#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Course{
    int code;
    int grade;
};

int main(void)
{
    vector<Course>course;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        Course tmp;
        cin >> tmp.code;
        tmp.grade = -1;
        course.push_back(tmp);
    }
    for(int i = 0; i < m; i++){
        int code_tmp, grade_tmp;
        cin >> code_tmp >> grade_tmp;
        for(int j = 0; j < n; j++){
            if(course[j].code == code_tmp){
                course[j].grade = grade_tmp;
            }
        }
    }
    int ab = 0, fail = 0;
    for(int j = 0; j < n; j++){
            //cout << course[j].grade << endl;
        if(course[j].grade == -1)
            {ab++;
            //continue;
            }
        if(course[j].grade < 60)
            {fail++;}
    }
    cout << ab << endl << fail;
    return 0;
}*/
//task_B
/*#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Student{
    string name;
    int index;///
    int grade_avg;
    int grade_cla;
    char cadre;
    char western;
    int numberOfPaper;
    int sum;
};
bool cmp(Student x1, Student x2)
{
    if(x1.sum == x2.sum){
        return x1.index < x2.index;
    }
    return x1.sum > x2.sum;
}

int main(void)
{
    int n;
    cin >> n;
    Student* student = new Student[n];
    for(int i = 0; i < n; i++){
        cin >> student[i].name;
        cin >> student[i].grade_avg;
        cin >> student[i].grade_cla;
        cin >> student[i].cadre;
        cin >> student[i].western;
        cin >> student[i].numberOfPaper;
        student[i].sum = 0;
        student[i].index = i+1;
    }
    int sumOfAllStudent = 0;
    for(int i = 0; i < n; i++){
        if(student[i].grade_avg > 80 && student[i].numberOfPaper > 0) student[i].sum +=8000;
        if(student[i].grade_avg > 85 && student[i].grade_cla > 80) student[i].sum +=4000;
        if(student[i].grade_avg > 90) student[i].sum +=2000;
        if(student[i].grade_avg > 85 && student[i].western == 'Y') student[i].sum +=1000;
        if(student[i].grade_cla > 80 && student[i].cadre == 'Y') student[i].sum +=850;
        sumOfAllStudent += student[i].sum;
    }
    sort(student, student + n, cmp);///
    cout << student[0].name << endl << student[0].sum << endl << sumOfAllStudent;
    return 0;
}*/

//task_C
/*#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Student{
    string name;
    int Chinese;
    int Math;
    int English;
    int index;
    int Sum;
};

bool cmp(Student x1, Student x2)
{
    if(x1.Sum == x2.Sum){
        return x1.index < x2.index;
    }
    return x1.Sum > x2.Sum;
}

int main(void)
{
    int n;
    cin >> n;
    Student* stu = new Student[n];
    for(int i = 0; i < n; i++){
        cin >> stu[i].name;
        cin >> stu[i].Chinese;
        cin >> stu[i].Math;
        cin >> stu[i].English;
        stu[i].Sum = stu[i].Chinese + stu[i].Math + stu[i].English;
        stu[i].index = i + 1;
    }
    sort(stu, stu + n, cmp);
    cout << stu[0].name << " " << stu[0].Chinese << " "
        << stu[0].Math << " " << stu[0].English;
    return 0;
}*/

//task_D
/*#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Vulunteer{
    int code;
    int grade;
};

bool cmp(Vulunteer x1, Vulunteer x2)
{
    if(x1.grade == x2.grade)return x1.code < x2.code;
    return x1.grade > x2.grade;
}

int main(void)
{
    int n, m;
    cin >> n >>m;
    Vulunteer* vul = new Vulunteer[n];
    for(int i = 0; i < n; i++){
        cin >> vul[i].code >> vul[i].grade;
    }
    sort(vul, vul + n, cmp);
    int _rank = m * 1.5;
    int count =0;
    int _grade = 0;
    for(int i = 0; i < n; i++){
        if(i == _rank - 1){
            _grade = vul[i].grade;
        }
    }

    for(int i = 0; i < n; i++){
        if(vul[i].grade >= _grade){
            count++;
        }
    }

    cout << _grade << " " << count << endl;
    for(int i = 0; i < n; i++){
        if(vul[i].grade >= _grade){
            //count ++;
            cout << vul[i].code << " " << vul[i].grade << endl;
        }
    }
    return 0;
}*/

