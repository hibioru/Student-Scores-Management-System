#include <iostream>
using namespace std;


#pragma region 全局变量区域
///
///全局变量区域
///

int stu_num = 0;//学生人数
const int course_num = 1;//课程的门数（受结构体定义限制，请使用指针修改此参数）

//定义结构体类型“学生成绩”
struct student_scores {
	int stu_id;
	string stu_name;
	int stu_score[course_num];
};

#pragma endregion


#pragma region 全局函数区域
///
///全局函数区域
///



#pragma endregion


#pragma region 基础功能
///
///基础功能
///



#pragma endregion


#pragma region 排序功能
///
///排序功能
///



#pragma endregion


#pragma region 查询功能
///
///查询功能
///



#pragma endregion


#pragma region 统计功能
///
///统计功能
///



#pragma endregion

#pragma region 主程序
///
///主程序
///

int main()
{
	
	//输入学生人数
	cout << "Input student number(n<30):" << endl;
	cin >> stu_num;

	//程序主面板显示
	while (1)
	{
		cout << "Management for Students' scores" << endl //学生成绩管理 - 主菜单
			<< "1.Input record" << endl //（1）录入每个学生的学号、姓名和各科考试成绩
			<< "2.Caculate total and average score of every course" << endl //（2）计算每门课程的总分和平均分
			<< "3.Caculate total and average score of every student" << endl //（3）计算每个学生的总分和平均分
			<< "4.Sort in descending order by score" << endl //（4）按每个学生的总分由高到低排出名次表
			<< "5.Sort in ascending order by score" << endl //（5）按每个学生的总分由低到高排出名次表
			<< "6.Sort in ascending order by number" << endl //（6）按学号由小到大排出成绩表
			<< "7.Sort in dictionary order by name" << endl //（7）按姓名的字典顺序排出成绩表
			<< "8.Search by number" << endl //（8）按学号查询学生排名及其考试成绩
			<< "9.Search by name" << endl //（9）按姓名查询学生排名及其考试成绩
			<< "10.Statistic analysis" << endl //（10）按优秀（90~100）、良好（80~89）、中等（70~79）、及格（60~69）、不及格（0~59）5个类别，对每门课程分别统计每个类别的人数以及所占的百分比
			<< "11.List record" << endl //（11）输出每个学生的学号、姓名、各科考试成绩，以及每门课程的总分和平均分
			<< "0.Exit" << endl; //退出程序
		int menu = 0; //菜单选项
		cin >> menu;
		switch (menu)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		case 8:

			break;
		case 9:

			break;
		case 10:

			break;
		case 11:

			break;
		case 0:
			return 0;
		default:
			cout << "选项输入错误，请重新选择！" << endl;
		}
	}
	
	return 0;
}

#pragma endregion