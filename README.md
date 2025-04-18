# C语言作业仓库

📚 这个仓库用于存放每周的C语言编程作业，题目来源自[pintia.cn](https://pintia.cn)。

## 使用说明

1. 选择题是我自己写的，仅供参考
2. cn代表第n周的作业，比如c4就是第四周
3. 直接点文件夹，进去看代码
4. 提交时记得删除注释


## 催更/讨论
1. 注册账户后点击右上角的star/issue
2. ps：以上功能需注册账号


# **引言**
最近在给人解答问题的过程中，发现一些很严重的问题。背后的原因，可以说是教育这个笼统的话题，毕竟编程教育在中国的普及太少太少了。除了浙江将其纳入高考范围，大部分人对编程的接触就在计算机会考的那几个选择、填空题。而在大学，对许多专业来说C语言又是一门“水课”，学习效果就更差了。当然，当编程变成了高考题，所面对的困境又似乎和当前的大学一样了：不知道为什么学，怎么学，在学什么。所以我斗胆写下这么一篇小文章，来谈谈编程学习中的“术”与“道”。
# **代码之“道”：拒绝死记硬背**
`	`我遇见了很多人，他们学习c语言的方式，不仅是效率低的，甚至是可怕的。他们会死记硬背某些语句。比如在题目一看见“输入”，就先打个scanf(“%d”,&var)；。然后继续看题目，发现有“输出”，又赶紧打个printf(“%d”,var);。这不能说是没用的，因为从应考的角度来说，确实能过。但是我更希望看完这篇文章后，读者能以一种崭新的视角看待代码，理解每一行的含义。

`	`接下来我会谈谈我的一些看法，如果只想知道怎么通过考试，请跳转到下一节。

`	`以我自己的视角来看，现在许多大学里的c语言课程，几乎都是枯燥乏味，毫无益处的。与学校层次无关，其他985、211的同学跟我聊天的时候，我发现甚至山东某985 学校C语言考试还是用手写代码的方式。回想一下我的第一节C语言课程，大几百个人坐在一个大教室里，老师打开他的祖传PPT。从老生常谈的C语言的应用、历史开始讲起，然后开始讲数据类型、hello world。然后本周下一次课开始写算法题，一写一个半小时。既不讲判题系统怎么用，也不讲怎么调试代码。总之自从第一周之后我就再也没去上过课了。

`	`我的编程语言入门是Python，因为他简单，有趣。在跟着教程做出第一个简单的比大小小游戏的时候，看着屏幕上闪烁的终端，我感受到代码所带来的无限可能。这就像《我的世界》一样，上限只取决于想象力。Python写各种小工具的优越性是无可替代的，比如我还写了一个自动十字分解的程序（当时在初中，有大量的这种题）。再后来我学习了爬虫，做了一个能自动获取每天的人民日报网站热门文章的小程序，以及淘宝的比价小程序。到这里算是脱离了初级阶段，开始利用文档和CSDN，当然，那个时代AI远不像这么发达，不然我或许能做出更有意思的东西。

`	`说这些的主要目的，是为了告诉各位，c语言不是在课上老师劈头盖脸砸过来，在不知所云的时候就开始被迫写算法题的无趣的字符。而是有着无限创造力的工具。就像滚雪球一样，学的越多，学得越快，能做的东西也越有用，成就感也越强。那么在唠叨完这些，接下来讲一些可能会用得上的东西吧
# **代码之“术”：为啥这也能报错**
`	`首先我们要明白，代码是人写的，但计算机执行的时候不会知道我们是怎么想的。它的特点是死板而精准，所以哪怕有一点点的错误，也会导致整个程序疯狂报错，以至出现报错比代码行数多（甚至多几倍）这种情况。比如常见的分号忘记打，符号用中文，花括号后半部分忘记打。这些属于语法错误，初学者大部分都是在这方面踩坑，加上判题系统不会告诉你哪里错了，只是一味地显示得分。但实际上这类问题是最好解决的，毕竟能通过简单的修改就能解决，总比要反复翻看整个程序去调试的逻辑错误好。

`	`大多数程序员写的第一段代码都是“hello world”，这是一个源远流长的传统了，感兴趣的同学可以自行搜索了解。所以让我们从c语言的hello world开始讲起

**#include <stdio.h>**
**int main()**
**{**
    **printf("hello world");**
    **return 0;**
**}**

这是C语言中的hello world，会调出cmd窗口，输出hello world。现在，让我们一行一行的来解释这些代码是什么意思。

首先，开头的 **#include <stdio.h>**：include的英文原意是包括、包含。所以在这意思是导入一个名叫stdio.h的文件。那么为什么要导入这个文件呢，首先，.h是这个文件的后缀名，h是head的缩写，意思是头文件。头文件，顾名思义，是要在最开始就要运行。那么这个文件包括了什么，是从哪来的呢，为什么所有程序都要写呢？stdio 是standard input and output的缩写，即标准输入输出库。这个库里包括了printf,scanf这些最最基础的函数，所以绝大部分程序都要引入这个。而这个文件实际上是在下载编译器的时候就自带了，包括stdlib.h，math.h，也是同理。

第二行 **int main()**：这个int涉及到函数的定义，我们稍后再说。Main，顾名思义，主要的，就是主程序运行的地方。大家可能觉得，是不是多此一举，现在好像都是在这个函数里写代码。实则不然，在main（）前面通常会有一些自己定义的函数、类（其他概念，暂时不用知道）。Main函数就是告诉电脑这里是我要运行的，前面的如果有你可以等用到了再去找。

第三行 **printf("Hello World)** 这一句是核心。首先，print的英文原意是打印，在这就是输出到电脑屏幕上的意思，那这个f是什么呢。实际上是format 格式.n的缩写。意思是能控制输出的格式，而%d，%.2f这些就叫格式控制符。在printf里，既可以直接输出双引号，也可以在双引号里放%d，然后逗号，后面放要输入的数值。比如 **printf(“today is %f”,4.13)。** 同样的，scanf就是scan 扫描 .n的缩写，f是format缩写。至于为什么scanf要加一个&，是具体的语法问题，在此按下不表。

还有一个问题，这两个括号和分号是干什么的呢。这涉及到函数的概念。函数可以理解为一个黑匣子。Printf是函数名字，括号里面是参数。填入参数，然后就会按照函数的定义执行。有很多官方给的函数，也可以自己定义。假设有一个sqrt()函数，作用是对输入的数开根号，那么printf(sqrt(4))就会输出2。注意到，函数是可以嵌套的。

我们在写代码的时候，通常会用空格和tab来保持代码的可读性。但是难免会有差错，难道这时候编译器就啥了，报错吗？并不会，这就是分号和花括号的作用。注意到int main（）后面的花括号，这个意思就是花括号内的所有内容都会运行，而不同的行的分别是靠分号而不是回车。比如上面的代码可以改写成下面这样。虽然可以运行，但是可读性就大大下降了。

**#include <stdio.h>**
**int main(){printf(“hello world”);return 0;}**

最后一行return 0的作用也涉及到定义函数的问题，有兴趣可以自己搜索。这里只做入门科普。后续可能会更新相关内容（谁知道呢，可能都没人看）。

至此我们已经了解了各个语句的作用，接下来可以学习一些进阶的东西了。

# **关于判题系统**

这个系统其实是给算法竞赛用的，它的特点就是死板，超级死板。输入和输出必须严格按照它给的格式来，包括空格和各种符号。这里我以第五周的作业举例子。输入是什么意思呢，就是系统会生成一大堆数据，输入你的代码，然后你的代码给出结果，它再跟标准答案给出的进行对比，然后按点给分，比如cauc的系统是十分，对应十个测试点，每个测试点里可能有几百组数据。所以不要妄想面向结果编程：直接printf所有可能的数。（好吧其实不是不行，一般会有几组送分的测试点）。

**#include <stdio.h>**

**#include <stdbool.h>**

**int main() {**

`    `**int n;**

`    `**bool flag = 1;**

`    `**printf("input x:");**

`    `**scanf("%d",&n);**

`    `**if (n % 2 == 0) flag = 0;**

`    `**if (flag) printf("%d是奇数", n);**

`    `**else printf("%d是偶数\n",n);**

`    `**return 0;**

**}**


接下来讲解一下代码。这里其实我偷懒了，if后面的花括号省略了，在只有一行的情况下可以这么干，但是还是不要学习的好。讲这个主要是为了讲if的机制。首先可以看到我定义了一个bool变量flag，bool变量只有两个值，True和False。其中数字0是false，其他所有字符都是True。也就是说**bool flag=1** 和**bool flag=True** 和**bool flag = 2**其实是等价的。可能有人会觉得多此一举，但是有时候这种用法有奇效。这里因为我懒得打字所以用数字了，定义flag初始是True。

If的括号里面是一个表达式，而表达式的值就是一个bool变量。表达式这个定义就很广泛，比如 1>0;2>1;3<5;0 != 0这些都是表达式，对应的bool值分别是True,True,True, False。!=是不等于的意思。

所以在这里，看程序逻辑就变成了。Scanf输入一个数，如果对2取余是0（==是等于的意思，=是赋值），flag就赋值为0，也就是false。最后判断，如果flag是True，就输出是奇数，否则输出偶数。

像这样，学的越多，就越可以通过不同的方式来解决问题。和数学类似，学习了数学分析后，很多高中问题都有新的简单的解决方式（大概）。

到这主要内容就差不多了，下面我加了一些进阶内容，有兴趣的同学可以看看。

# **与其他语言的对比：为什么c这么麻烦？**
`	`学c的过程中，我们肯定会听到另一个和它密切相关的语言：c++，也称cpp，即c plus plus。是在c语言的基础上发展而来，所以所有合法的c程序都是合法的cpp程序。反过来却不一定。虽然语法可以部分兼容，但是本质上却完全不是一个东西。笼统的来说，cpp更“高级”，c语言“低级”，Python也属于“高级”。这里的区别可以理解成，高级语言写的代码更简单，但是计算机处理的就更慢，反过来，低级语言写起来很麻烦，但是处理很快。所以目前大部分的系统都是以cpp为主，因为有些硬件的性能比较孱弱，支撑不起Python的开销。

`	`有个经典笑话，就是外行和内行理解的底层程序员完全不是一个概念。所谓的底层程序员是指研究底层语言的科学家，比如汇编，甚至更低级的语言。那都是大佬中的大佬，类似于物理中的粒子物理学家，是学科的基石。

`	`下面是cpp和Python写hello world的对比

**Hello.cpp**

`	`**#include <iostream>**

`	`**using namespace std;**

`	`**int main()**

`	`**{**

`		`**cout<<”Hello World”;**

`	`**}**

`	`其中iosteam的io和c语言一样，只不过变成了输入输出流。而printf变成了cout，是c out的意思。此外还有一些更方便更简洁的新特性，在此不提。那么就有同学要问了，Python怎么写呢？

**Hello.py**

`	`**print(“Hello World”)**

`	`就一行，没有分号，没有花括号没有复杂的要记的东西。那么定义变量呢？

**Hello.py**

`	`**Var=”Hello World”**

`	`**Print(Var + “!”)**

`	`这一段会输出Hello World！，没有复杂的定义，也不用考虑格式，这是Python的魅力。当然，极致的简洁带来的是性能开销和难以维护，不同的小版本之间函数可能用法完全相反，总之不同语言各有优点，见仁见智。但是我还是建议初学者学习Python，先养成编程思维，然后再去抠语法细节。

`	`那，又有同学要问了，为什么我不先用Python写，然后再交给ai转换成c语言呢。这个问题很好，可以说抓住了本质，即先宏观再微观，语法什么的交给ai头疼。但是我只能说，对付平常作业题没问题，如果是稍微大一点的项目，你可以试试（）。
