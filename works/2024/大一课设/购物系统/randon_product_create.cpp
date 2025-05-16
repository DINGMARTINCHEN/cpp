#include<bits/stdc++.h>
using namespace std;


string random_product1[114]={"鸡蛋","牛奶","苹果","面包","香蕉","蔬菜","橙子","猪肉","面粉","鱼肉","花生油","酱油","食醋","盐","糖","面条","大米","豆腐","鸡肉","红薯","土豆","胡萝卜","西红柿","洋葱","葱","姜","大蒜","花菜","西兰花","茄子","青椒","黄瓜","豆角","莲藕","香菇","蘑菇","银耳","黑木耳","鱼丸","肉丸","鸡精","鸡精","花椒粉","八角","桂皮","香叶","茴香","肉桂","酱料","调味酱","酸奶","奶酪","奶油","黄油","巧克力","糖果","饼干","薯片","果冻","苹果","蜂蜜","茶叶","咖啡","红茶","绿茶","花茶","果汁","矿泉水","碳酸饮料","茶饮料","功能饮料","方便面","香蕉","橙子","西瓜","葡萄","草莓","八宝粥","粥包","肉松","腊肠","火腿","熟食","蔬菜沙","拉水果沙拉","芒果","菠萝","柚子","柠檬","梨","肉类","熟食","食零食","花生","坚果","腰果","开心果","杏仁","核桃","红枣","葡萄干","酱菜","豆腐乳","豆酱","豆腐干","豆腐皮","桃","子李子","杏子","枣","丝粉","粥","钙片","米饭"};
string random_product2[53]={"跑步机","踏步机","鞍马","铅球","棒球棍","乒乓球拍","乒乓球","羽毛球","羽毛球拍","网球","网球拍","保龄球","冰球","冰球服","班迪球","台球杆","垒球","手球","排球","橄榄球","篮球","篮球鞋","足球","足球鞋","高尔夫球","高尔夫球杆","匹克球","匹克球拍","壁球","壁球拍","标枪","实心球","起跑器","发令枪","握力器","臂力器","滑雪镜","护腕护膝","防护眼镜","骑行镜","篮球眼镜","运动手套","运动帽","仰卧起坐器","杠铃","弓箭","跳板","功率自行车","拉力器","划船器","小蹦床","毽子","健步机"};
string random_product3[51]={"毛衣","衬衣","半袖","羽绒服","西服","马夹","T恤","背心","短裤","裤衩","内裤","胸罩","长裤","西裤","背带裤","牛仔裤","长袍","大衣","风衣","雨衣","披风","一步裙","圆台裙","裙裤","冲锋衣","马面裙","POLO衫","速干衣","衬衫","罩衫","开襟衫","露脐上衣","抹胸","挂脖背心","吊带","无袖衫","圆高领","喇叭裤","低腰裤","热裤","紧身裤","阔腿裤","铅笔裤","七分裤","工装裤","筒裙","斜裙","喇叭裙","百褶裙","节裙","迷你裙"};
string random_product4[50]={"笔袋","笔盒","铅笔","自动铅笔","水彩笔","白板笔","圆珠笔","中性笔","油画棒","油画棒","蜡笔","钢笔","书包","橡皮擦","削笔机","笔削","液体胶水","固体胶","尺类","圆规","美工刀","剪刀","书套","修正带","文件夹","本册","文件袋","画板","笔芯","有孔文件夹","无孔文件夹","板夹","档案盒","切纸刀","台历架","活页本","便利贴","便签纸","会议记录本","软笔","墨水笔芯","炭笔","POP笔","复写纸","财务计算器","电池","读卡器","传真机","打印机","绘图纸"};
string random_product5[50]={"家用冰箱","冷饮机","空调","电扇","换气扇","冷热风器","空气去湿器","加湿器","洗衣机","干衣机","电熨斗","吸尘器","地板打蜡机","扫地机器人","电灶","微波炉","电磁灶","电烤箱","电饭锅","洗碟机","电热水器","食物加工机","电热毯","电热被","水热毯","电热服","空间加热器","电动剃须刀","电吹风","超声波洗面器","电动按摩器","整发器","微型投影仪","电视机","收音机","录音机","录像机","摄像机","组合音响","台式电脑","笔记本电脑","平板电脑","抽油烟机","擦窗机","熨压机","电推剪","绞肉机","搅拌器","烟火报警器","电铃"};
//网上搜的随机生成网站https://namegentool.com/zh-hans#google_vignett

//string random_product[999]={"鸡蛋","牛奶","苹果","面包","香蕉","蔬菜","橙子","猪肉","面粉","鱼肉","花生油","酱油","食醋","盐","糖","面条","大米","豆腐","鸡肉","红薯","土豆","胡萝卜","西红柿","洋葱","葱","姜","大蒜","花菜","西兰花","茄子","青椒","黄瓜","豆角","莲藕","香菇","蘑菇","银耳","黑木耳","鱼丸","肉丸","鸡精","鸡精","花椒粉","八角","桂皮","香叶","茴香","肉桂","酱料","调味酱","酸奶","奶酪","奶油","黄油","巧克力","糖果","饼干","薯片","果冻","苹果","蜂蜜","茶叶","咖啡","红茶","绿茶","花茶","果汁","矿泉水","碳酸饮料","茶饮料","功能饮料","方便面","香蕉","橙子","西瓜","葡萄","草莓","八宝粥","粥包","肉松","腊肠","火腿","熟食","蔬菜沙","拉水果沙拉","芒果","菠萝","柚子","柠檬","梨","肉类","熟食","食零食","花生","坚果","腰果","开心果","杏仁","核桃","红枣","葡萄干","酱菜","豆腐乳","豆酱","豆腐干","豆腐皮","桃","子李子","杏子","枣","丝粉","粥","钙片","米饭"};
//网上搜的随机生成网站https://namegentool.com/zh-hans#google_vignette
int product_size[5]={114,53,51,50,50};//便于后续添加商品（更改代码）
struct product_infor
{
    int num;//编号
    string name;
    int stock;//库存
    int price;//单价
};





int rand_int(int Num)//随机数生成
{
	vector<int> temp;
	for (int i = 0; i < Num; i++)
	{
		temp.push_back(i + 1);
	}
	random_shuffle(temp.begin(), temp.end());
	return temp[6];//随手6
}

void initi_product_house()//建立商品库
{
    for(int i=0;i<product_size[0];i++)///1
    {struct product_infor product[999];
        ofstream outfile("product_food_data.txt", ios::app);//追加写入文件          存入记得加入分隔" "
        product[i].num=i+1;//-------------------------------注意
        outfile << product[i].num << "  ";
        product[i].name=random_product1[i];
        outfile << product[i].name << "  ";
        product[i].price=rand_int(20);
        outfile << product[i].price << "  ";
        product[i].stock=rand_int(100);
        outfile << product[i].stock << "  ";
    }
    for(int i=0;i<product_size[1];i++)///2
    {struct product_infor product[999];
        ofstream outfile("product_sport_data.txt", ios::app);//追加写入文件          存入记得加入分隔" "
        product[i].num=i+1;//-------------------------------注意
        outfile << product[i].num << "  ";
        product[i].name=random_product2[i];
        outfile << product[i].name << "  ";
        product[i].price=rand_int(20);
        outfile << product[i].price << "  ";
        product[i].stock=rand_int(100);
        outfile << product[i].stock << "  ";
    }
    for(int i=0;i<product_size[2];i++)///3
    {struct product_infor product[999];
        ofstream outfile("product_cloth_data.txt", ios::app);//追加写入文件          存入记得加入分隔" "
        product[i].num=i+1;//-------------------------------注意
        outfile << product[i].num << "  ";
        product[i].name=random_product3[i];
        outfile << product[i].name << "  ";
        product[i].price=rand_int(1000);
        outfile << product[i].price << "  ";
        product[i].stock=rand_int(100);
        outfile << product[i].stock << "  ";
    }
    for(int i=0;i<product_size[3];i++)///4
    {struct product_infor product[999];
        ofstream outfile("product_pens_data.txt", ios::app);//追加写入文件          存入记得加入分隔" "
        product[i].num=i+1;//-------------------------------注意
        outfile << product[i].num << "  ";
        product[i].name=random_product4[i];
        outfile << product[i].name << "  ";
        product[i].price=rand_int(20);
        outfile << product[i].price << "  ";
        product[i].stock=rand_int(100);
        outfile << product[i].stock << "  ";
    }
    for(int i=0;i<product_size[4];i++)///5
    {struct product_infor product[999];
        ofstream outfile("product_machine_data.txt", ios::app);//追加写入文件          存入记得加入分隔" "
        product[i].num=i+1;//-------------------------------注意
        outfile << product[i].num << "  ";
        product[i].name=random_product5[i];
        outfile << product[i].name << "  ";
        product[i].price=rand_int(2000);
        outfile << product[i].price << "  ";
        product[i].stock=rand_int(100);
        outfile << product[i].stock << "  ";
    }
}

int main()
{
    ofstream outfile("product_food_data.txt", ios::out);//在此程序中用于清空原来的“product_data.txt”文件
    ofstream aoutfile("product_sport_data.txt", ios::out);
    ofstream aaoutfile("product_cloth_data.txt", ios::out);
    ofstream aaaoutfile("product_pens_data.txt", ios::out);
    ofstream aaaaaoutfile("product_machine_data.txt", ios::out);
    initi_product_house();//初始化商品仓库
}