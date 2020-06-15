  
  
在二叉树的理论推导以及一些高频类型题中，我们经常需要计算二叉树的总结点数，某一层的结点数以及已知结点数反推树的高度，本文围绕这几个高频知识点，归纳总结以下公式。
  
（1）非空二叉树叶子结点数 = 度为2的结点数 + 1 即，<img src="https://latex.codecogs.com/gif.latex?N_0%20=%20N_2%20+%201"/>
  
（2）非空二叉树上第K层至多有<img src="https://latex.codecogs.com/gif.latex?2^{k-1}"/> 个结点（<img src="https://latex.codecogs.com/gif.latex?K%20&#x5C;ge%201"/>）
  
（3）高度为H的二叉树至多有<img src="https://latex.codecogs.com/gif.latex?2^H%20-%201"/> 个结点（<img src="https://latex.codecogs.com/gif.latex?H%20&#x5C;ge%201"/>）
  
（4）具有N个（<img src="https://latex.codecogs.com/gif.latex?N%20&gt;%200"/>）结点的完全二叉树的高度为 <img src="https://latex.codecogs.com/gif.latex?&#x5C;lceil%20log_2{(N+1)}%20&#x5C;rceil"/> 或 <img src="https://latex.codecogs.com/gif.latex?&#x5C;lfloor%20log_2{N}%20&#x5C;rfloor%20+%201"/>
  
（5）对完全二叉树按从上到下、从左到右的顺序依次编号1,2，...，N，则有以下关系：
  
① 当 <img src="https://latex.codecogs.com/gif.latex?i%20&gt;%201"/> 时，结点 <img src="https://latex.codecogs.com/gif.latex?i"/> 的双亲结点编号为 <img src="https://latex.codecogs.com/gif.latex?&#x5C;lfloor%20i&#x2F;2%20&#x5C;rfloor"/> ，即当 <img src="https://latex.codecogs.com/gif.latex?i"/> 为偶数时，其双亲结点的编号为 <img src="https://latex.codecogs.com/gif.latex?i&#x2F;2"/> ，它是双亲结点的左孩子；当 <img src="https://latex.codecogs.com/gif.latex?i"/> 为奇数时，其双亲结点的编号为 <img src="https://latex.codecogs.com/gif.latex?(i-1)&#x2F;2"/> ，它是双亲结点的右孩子。
  
② 当 <img src="https://latex.codecogs.com/gif.latex?2i%20&#x5C;le%20N"/> 时，结点i的左孩子编号为 <img src="https://latex.codecogs.com/gif.latex?2i"/> ，否则无左孩子。
  
③ 当 <img src="https://latex.codecogs.com/gif.latex?2i+1%20&#x5C;le%20N"/> 时，结点i的右孩子编号为 <img src="https://latex.codecogs.com/gif.latex?2i+1"/> ，否则无右孩子。
  
④ 结点 <img src="https://latex.codecogs.com/gif.latex?i"/> 所在层次（深度）为 <img src="https://latex.codecogs.com/gif.latex?&#x5C;lfloor%20log_2{i}%20&#x5C;rfloor%20+1"/> 。（设根结点为第1层）
  
##  经典例题
  
**408考研-2011-4** 若一棵完全二叉树有768个结点，则二叉树中叶结点的个数是_____。
A.257    B.258    C.384    D.385
  
###  解法1
  
  
根据完全二叉树的性质，最后一个分支结点的序号为 <img src="https://latex.codecogs.com/gif.latex?&#x5C;lfloor%20n&#x2F;2%20&#x5C;rfloor%20=%20&#x5C;lfloor%20768&#x2F;2%20&#x5C;rfloor%20=%20384"/> ，故叶子结点的个数为 ￥ 768 - 384 = 384 <img src="https://latex.codecogs.com/gif.latex?###%20%20解法2由二叉树的性质"/> N = N_0 + N_1 + N_2 <img src="https://latex.codecogs.com/gif.latex?和"/> N_0 = N_2 + 1 <img src="https://latex.codecogs.com/gif.latex?可知，"/> N = 2N_0 - 1 + N_1， 2N_0 - 1 + N_1 = 768 <img src="https://latex.codecogs.com/gif.latex?，显然，"/> N_1 = 1 <img src="https://latex.codecogs.com/gif.latex?，"/> 2N_0 = 768 <img src="https://latex.codecogs.com/gif.latex?，则"/> N_0 = 384 <img src="https://latex.codecogs.com/gif.latex?###%20%20解法3完全二叉树的叶子结点只可能出现在最下两层，由题可计算完全二叉树的高度为10。第10层的叶子结点数为"/> 768 - (2^9-1) = 257 <img src="https://latex.codecogs.com/gif.latex?；第10层的叶子结点在第9层公有"/> \lceil 257/2 \rceil = 129 <img src="https://latex.codecogs.com/gif.latex?个父节点，第9层的叶子结点数为"/> (2^9 - 1) - 129 = 127 <img src="https://latex.codecogs.com/gif.latex?，则叶子结点总数为"/> 257 + 127 = 384 $
  