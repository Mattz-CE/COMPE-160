# **COMPE 160**

## Introduction:

\> Assignment 07:

     "Consider the following electrical network
     Define a two-dimensional matrix A of dimension M х N, where M = 6 represents the
     number of nets (edges) in the network and N = 4 represents the number of nodes (circles).
     Let Ai,j represent the element of A in row i and column j. Initialize A such that Ai,j = -1 if
     edge i departs (arrow outward) from node j, and 1 if edge i arrives (arrow inward) at node
     j. First, print out matrix A in a nice tabular form.
     Next, define vector b of dimension M where the second element of b is 12, which
     represents a voltage source of 12V on edge 2. Define vector u of dimension N where uj
     is the voltage at node j. Let u1 = 1, u2 = -1, and u3 = 0. Since u4 is grounded, u4 = 0.
     Calculate and print the voltage drops e
     To compute e, you need to implement code that multiplies matrix A by vector u. The
     product Au will be a vector of dimension M where the i
     th entry of Au will be the dot product
     of row i of A with u.
     After printing the voltage drops e, use Ohm’s Law to compute edge currents w,
     where C is a diagonal matrix of dimension M х M with all elements 0 except for diagonal
     elements Cii= 1 for i = 2 to 6 and C11= 0.1. C is a matrix that represents edge conductance
     (the reciprocal of resistance). Print out the edge currents. 
     Finally, compute the current sources f,
     AT represents the transpose of A, where
     In other words, the rows of A form the columns of AT and the columns of A form the rows
     of AT. Print out the current sources.
     Generate a screen capture of your Eclipse IDE workspace and terminal showing the
     execution of your program with an input sequence and the number of patterns detected.
     Please name your Eclipse IDE project Lastname_REDID_Lab_07.
     Note that your executable will be found in the directory within your project
     directory and will be named Lastname_REDID_Lab_07.exe. Create a ZIP file of your
     project folder (i.e. your Lastname_REDID_Lab_0y folder) and submit the ZIP file
     through Blackboard."

## Math Part

$e[6]=b[6]-A[6][4]u[4]$

$w[6]=C[6][6]e[6]$

$A^T=A[4][6] = [A]_{ji} = (A[6][4])^{-1}$

$f[i]=A[i]^Tw$



-------

### Written in:

- C (programming language):

> ### **C (programming language):**
> C is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, while a static type system prevents unintended operations. By design, C provides constructs that map efficiently to typical machine instructions and has found lasting use in applications previously coded in assembly language. Such applications include. - Excerpt from wikipedia.org



### Some md helps:

* Text attributes _italic_, **bold**, `monospace`.
* ~~strikethrough~~
* Lists: site #3
1. Rest
2. Quarter Notes
3. An [example](http://example.com).

     <div style="text-align:center"><img src="Resources/s.jpg" /></div>

# Math Corner
Mathematicaly equations are only available in VSCode with extensions.

Function insert methods: \$ Function here \$

$f(x) = 2x\pi$

$f(x)=4(x!)=\Sigma$