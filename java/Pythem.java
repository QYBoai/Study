	/*
	 * 本程序是用于花样计算勾股数的
	 * 关于勾股数，不懂请自行百度
	 * 
	 * 注：程序中的计算公式由高主任提供
	 * 
	 * 缺点：不能计算小数(浮点数)
	 */

import java.util.Scanner;	//导入java.util包中的Scanner类	注：Scanner译为"扫描仪"

public class Pythem {
	public static void main(String[] args) {
		System.out.println("勾股数计算");
		Scanner input=new Scanner(System.in);	//创建一个名为input的对象
		
		while (true){	//while死循环用于多次进行运算
			System.out.println();
			System.out.print("请输入直角三角形中的直角边a：");	//提示用户输入信息
			int a=input.nextInt();	//接收短直角边数值
			int b = 0, c = 0;	//定义长直角边以及斜边
			
			if (a < 3){	//判断短直角边a是否符合要求
				System.out.println("数据错误：直角边a过小");
				continue;	//直接进行下一次循环
			}	else if (a % 2 == 0){	//判断短直角边是奇数还是偶数
				int n = a / 2;	//当时为方便思考，增设此变量以便于计算
				b = (n * n) - 1;
				c = (n * n) + 1;
				System.out.println("***直角边a为："+a);
				System.out.println("***直角边b为："+b);
				System.out.println("***斜边c为："+c);
			}	else if (a % 2 == 1){
				int m = (a - 1) / 2;	//用途同变量n
				b = (m * 2)*(m + 1);
				c = b + 1;
				System.out.println("***直角边a为："+a);
				System.out.println("***直角边b为："+b);
				System.out.println("***斜边c为："+c);
			}
		}
	}
}
