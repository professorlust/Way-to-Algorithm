<script type="text/javascript" async src="//cdn.bootcss.com/mathjax/2.7.0/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>
<script type="text/javascript" async src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.1/MathJax.js?config=TeX-MML-AM_CHTML"></script>


--------
[Upper Folder - 上一级目录](../)


--------

<div>
<h1 align="center">Recursion</h1>
<h1 align="center">递归</h1>
<br>
问题： <br>
&emsp;&emsp;序列\(s\)有\(n\)个成员\([x_1,x_2, \cdots ,x_n]\)，每个成员可以选取\([1,2, \cdots ,m]\)这\(m\)种值。例如当\(n = 5\)，\(m = 3\)时，序列\(s\)有如下排列组合： <br>
\[ [1,1,1,1,1], [1,1,1,1,2], [1,1,1,1,3], [1,1,1,2,1] \cdots \] <br>
&emsp;&emsp;求\(s\)的所有排列组合。（与本节的&lt;BruteForce&gt;问题一样） <br>
<br>
解法： <br>
&emsp;&emsp;&lt;BruteForce&gt;存在一个问题，外围for循环的数量是固定的，无法改变。因此我们用递归方程来解决这个问题。 <br>
&emsp;&emsp;第1轮操作中，将序列\(s\)初始化为长度为1的数组\(s = [x_1]\)。对于唯一的元素\(x_1\)它有\(m\)种选择： <br>
\[
[1_1] \\
[2_1] \\
\cdots \\
[m_1] \\
\]
&emsp;&emsp;第2轮操作中，将序列\(s\)的长度加1，得到数组\(s = [x_1,x_2]\)，元素\(x_2\)的选择可以看作在第1轮的每个选择的基础上继续选择。对于\([1_1]\)可以得到\(m\)种选择： <br>
\[
[1_1,1_2] \\
[1_1,2_1] \\
\cdots \\
[1_1,m_1] \\
\]
&emsp;&emsp;因此第2轮操作后共有\(m^2\)种选择。这样重复\(n\)次操作，可以得到\(m^n\)个结果。 <br>
&emsp;&emsp;实际编写代码中，在递归方程中传入一个参数\(prev \epsilon [0,n)\)，\(prev\)从0开始，序列\(s\)中的成员\(x_{prev}\)可以取值\(i \epsilon [1,m]\)，然后\(prev = prev+1\)，继续考虑序列\(s\)中的下一个成员\(x_{prev+1}\)。这样直到当\(n\)个成员都选择了一个值时，即产生序列\(s\)的一种排列组合。通过递归可以退回上一个函数栈，从而让每个成员\(x_{prev}\)都可以重新选择。 <br>
&emsp;&emsp;对于成员数量为\(n\)，每个成员有\(m\)种值的序列\(s\)，遍历所有排列组合的时间复杂度\(O(n^m)\)。 <br>
</div>


--------
--------