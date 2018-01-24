//使用轨迹条控制两幅图的Alpha混合
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
#define WINDOW_NAME "线性混合示例"

//-----------------全局变量声明--------------------------
//	描述：全局变量声明
//-------------------------------------------------------
const int g_nMaxAlphaValue = 100;	//为窗口标题定义的宏
int g_nAlphaValueSlider;	//滑动条对应的变量
double g_dAlphaValue;
double g_dBetaValue;

//--------------on_Trackbar()函数------------------------
//	描述：响应滑动条的回调函数
//-------------------------------------------------------
void on_Trackbar(int, void*)
{
	//求出当前alpha值相对于最大值的比例
	g_dAlphaValue = (double) g_nAlphaValueSlider/g_nMaxAlphaValue;
	//则beta值为1减去alpha值
	g_dBetaValue = (1.0 - g_AlphaValue);

	//根据alpha和beta值进行线性混合
	addWeighted(g_srcImage1, g_dAlphaValue, g_srcImage2, g_dBetaValue,
				0.0, g_dstImage);

	//显示效果图
	imshow(WINDOW_NAME,g_dstImage);
}

//---------------------main()函数------------------------------
//	描述：控制台应用程序的入口函数，我们的程序从这里开始执行
int main()
{
	//加载图像(尺寸必须相同)
	g_
}
