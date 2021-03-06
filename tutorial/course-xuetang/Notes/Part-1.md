## C++程序设计基础

#### 计算机
* 计算机包括硬件和软件，指令系统是硬件和软件的界面

#### 计算机语言发展
* 机器语言，由二进制指令构成的指令集合
* 汇编语言，在机器预压基础上引入助记符
* 高级语言，使用类似人类语言的特征

#### 程序设计方法
* 面向过程的程序设计方法
* 面向对象的程序设计方法
* 泛型程序设计方法

#### 程序开发过程
* 算法设计
* 源程序编辑
* 编译，转为计算机可识别的二进制语言
* 连接
* 运行调试
#### 信息在计算机中的表示
* 数值在计算机中使用二进制表示
* 非数值（逻辑逻辑数据、字符数据）用二进制编码表示

#### 计算机系统
![计算机系统](./img/img1.png)
* 计算机由输入设备、输出设备、外存储器、内存储器、CPU构成
* 计算机硬件能够识别的二进制指令集为指令系统

#### 计算机语言和程序设计
* 计算机语言
    * 机器语言-计算机硬件可以识别的二进制指令集合
    * 汇编语言-引入助记符
    * 高级语言-符号人类语言特征，抽象层次更高，屏蔽了计算机底层细节
* 程序设计方法
    * 面向过程的程序设计方法-安装既定过程解决问题，无法支持大型复杂软件的设计
    * 面向对象的程序设计方法-独立的个体看作对象，对象间可以通信，更符合人类思维

#### 面向对象的基本概念
* 对象-独立个体
* 类-抽象出同一类对象共同的属性、行为，形成类
* 类与对象的关系-类型和实例
* 封装-对外有一个边界，隐蔽对象内部实现细节，只保留有限的接口，更加安全
* 继承-软件复用，改造、扩展已有类
* 多态-接口的多种不同实现方式，父类引用指向之类对象。

#### 程序开发过程
* 高级语言源程序
* 翻译成计算机能够识别的机器语言
* 连接程序库中高级语言预先编译的二进制模块
* 翻译程序
    * 汇编程序，汇编语言翻译成目标程序
    * 编译程序，一次翻译
    * 解释程序，边翻译边执行
    * java半编译半解释，源程序-中间二进制-目标程序

#### 计算机中的信息与存储单位
* 计算机基本功能
    * 算数运算
    * 逻辑运算
* 计算机中的信息
    * 控制信息
    * 数据信息
        * 数值信息
            * 定点数
            * 浮点数
        * 非数值信息
            * 逻辑数据
            * 字符数据
* 信息存储的单位
    * 位（bit），一位二进制位
    * 字节（byte），8位二进制数
    * 1K
    * 1M
    * 1G

* 数据的编码表示
    * 原码-使用一位符号位
        * 存在两个0
        * 运算过程中符号位需要单独处理
    * 补码
        * 唯一表示0
        * 符号为可参加运算
        * 减法可转换为加法
    