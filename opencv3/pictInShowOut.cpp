//--------------------[头文件、命名空间包含部分]-------------------------
//		描述：包含程序所使用的头文件和命名空间
//-----------------------------------------------------------------------
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main()
{
	//-------------图像载入和显示-----------------------------------
	//		以下三行代码用于完成图像的载入和显示
	//--------------------------------------------------------------
	Mat girl = imread("girl.jpg");
	namedWindow("动漫图");
	imshow("动漫图", girl);
	//-------------初级图像混合-------------------------------------
	//	描述：初级图像混合
	//--------------------------------------------------------------
	//载入图片
	Mat image = imread("dota.jpg", 199);
	Mat logo = imread("dota_logo.jpg");
	//载入后先显示
	namedWindow("原图");
	imshow("原图", image);

	namedWindow("logo图");
	imshow("logo图", logo);
	
	//定义一个Mat类型，用于存放图像的ROI
	Mat imageROI;
	//方法一
	imageROI = image(Rect(800,350,logo.cols,logo.rows));
	//方法二
	//imageROI = image(Range(350, 350+logo.rows), Range(800,800+logo.cols));
	
	//将logo加到原图上
	addWeighted(imageROI,0.5,logo,0.3,0.,imageROI);

	//显示结果
	namedWindow("原图+logo图");
	imshow("原图+logo图", image);

	//--------------------图像输出-----------------------
	//	描述：将一个Mat图像输出到图像文件
	//---------------------------------------------------
	//输出一张jpg图片到工程目录下
	imwrite("由imwrite生成的图片.jpg",image);
	waitKey();
	return 0;

}
