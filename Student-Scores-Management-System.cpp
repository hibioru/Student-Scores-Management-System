#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


#pragma region 全局变量区域
///
///全局变量区域
///

int stu_num = 0;//学生实际人数
int course_num = 0;//课程实际门数

//定义结构体类型“学生成绩”
struct student_scores {
	int stu_id = 0;//学生学号
	string stu_name;//学生姓名
	int stu_score[6] = {0};//各门课程的成绩（课程最大不超过6门）
	int stu_sum = 0;//学生的总分
	float stu_average = 0;//学生的平均分
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

//菜单1 - 录入每个学生的学号、姓名和各科考试成绩
void student_scores_input(student_scores stu[], int n)
{
	cout << "Input course number(m<=6):" << endl;
	cin >> course_num;
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].stu_id >> stu[i].stu_name;
		for (int j = 0; j < course_num; j++)
		{
			cin >>  stu[i].stu_score[j];
		}
	}
}

//菜单2 - 计算每门课程的总分和平均分
void course_scores_sum_and_average(student_scores stu[], int n)
{

}

//菜单3 - 计算每个学生的总分和平均分
void student_scores_sum_and_average(student_scores stu[], int n)
{
	//计算部分
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < course_num; j++)
		{
			stu[i].stu_sum = stu[i].stu_sum + stu[i].stu_score[j];
		}
		stu[i].stu_average = stu[i].stu_sum / course_num;
	}
	//输出部分
	for (int i = 0; i < n; i++)
	{
		cout << stu[i].stu_name << ":  sum=" << stu[i].stu_sum << ",  aver=" << stu[i].stu_average << endl;
	}
}

//菜单11 - 输出每个学生的学号、姓名、各科考试成绩，以及每门课程的总分和平均分
void score_output(student_scores stu[], int n)
{

}

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
	student_scores stu[30];//学生人数不超过30人

	#if 1
	//if 0 时该代码片段处于注释状态，if 1 时该代码片段会执行
	//用于程序初始化时自动注入样例数据，不必执行“菜单选项1”，从而可以直接调试其他菜单选项的模块
	//调试其他模块时，请把对应模块函数引用的stu（外部!）改为stu2
	stu_num = 6;
	course_num = 3;
	student_scores stu2[6] =
	{
		{11003001,"lisi",87,82,89},
		{11003005,"heli",98,92,90},
		{11003003,"ludi",75,78,80},
		{11003002,"dumo",48,50,67},
		{11003004,"zuma",65,69,72},
		{11003006,"suyu",100,95,94}
	};
	#endif

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
			<< "0.Exit" << endl //退出程序
			<< "Please Input your choice:" << endl;
		int menu = 0; //菜单选项
		cin >> menu;
		switch (menu)
		{
		case 1:
			student_scores_input(stu, stu_num);
			break;
		case 2:
			course_scores_sum_and_average(stu, stu_num);
			break;
		case 3:
			student_scores_sum_and_average(stu, stu_num);
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:
			
			break;
		case 7:
			//翁聪聪
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