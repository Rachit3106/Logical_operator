<h1>Experiment: Logical Operators in C++</h1>

<h2>Aim</h2>
<p>
To understand and implement <strong>logical operators</strong> in C++ and analyze how they work in decision-making statements.
</p>

<h2>Apparatus</h2>
<ul>
  <li>Computer or Laptop</li>
  <li>C++ Compiler (g++ or any standard C++ compiler)</li>
  <li>Text Editor or IDE (VS Code, Code::Blocks, etc.)</li>
</ul>

<h2>Theory</h2>
<p>
Logical operators are used to combine multiple conditions and return either <strong>true (1)</strong> or <strong>false (0)</strong> 
based on the result of the conditions. They are mostly used in <code>if</code>, <code>else if</code>, <code>while</code>, and other control flow statements. 
C++ supports three basic logical operators: <strong>AND (&&)</strong>, <strong>OR (||)</strong>, and <strong>NOT (!)</strong>.
</p>

<h3>1. Logical AND (&&)</h3>
<p>
The logical AND operator returns <strong>true</strong> if <strong>both conditions</strong> are true, otherwise returns <strong>false</strong>.
It is commonly used when multiple conditions must be satisfied simultaneously.
</p>
<p><strong>Truth Table:</strong></p>
<table border="1" cellpadding="5" cellspacing="0">
  <tr>
    <th>Condition A</th>
    <th>Condition B</th>
    <th>A && B</th>
  </tr>
  <tr><td>true (1)</td><td>true (1)</td><td>true (1)</td></tr>
  <tr><td>true (1)</td><td>false (0)</td><td>false (0)</td></tr>
  <tr><td>false (0)</td><td>true (1)</td><td>false (0)</td></tr>
  <tr><td>false (0)</td><td>false (0)</td><td>false (0)</td></tr>
</table>

<h3>2. Logical OR (||)</h3>
<p>
The logical OR operator returns <strong>true</strong> if <strong>at least one condition</strong> is true. 
It is used when you need any one of the conditions to be satisfied.
</p>
<p><strong>Truth Table:</strong></p>
<table border="1" cellpadding="5" cellspacing="0">
  <tr>
    <th>Condition A</th>
    <th>Condition B</th>
    <th>A || B</th>
  </tr>
  <tr><td>true (1)</td><td>true (1)</td><td>true (1)</td></tr>
  <tr><td>true (1)</td><td>false (0)</td><td>true (1)</td></tr>
  <tr><td>false (0)</td><td>true (1)</td><td>true (1)</td></tr>
  <tr><td>false (0)</td><td>false (0)</td><td>false (0)</td></tr>
</table>

<h3>3. Logical NOT (!)</h3>
<p>
The logical NOT operator reverses the logical state of a condition.  
If a condition is true, <strong>!condition</strong> becomes false, and if the condition is false, <strong>!condition</strong> becomes true.
</p>
<p><strong>Truth Table:</strong></p>
<table border="1" cellpadding="5" cellspacing="0">
  <tr>
    <th>Condition A</th>
    <th>!A</th>
  </tr>
  <tr><td>true (1)</td><td>false (0)</td></tr>
  <tr><td>false (0)</td><td>true (1)</td></tr>
</table>

<h3>Importance of Logical Operators</h3>
<ul>
  <li>They help in combining multiple relational conditions in decision-making.</li>
  <li>They make programs efficient by reducing nested <code>if</code> statements.</li>
  <li>They are essential for loops, conditional statements, and validating user input.</li>
</ul>

<h2>Conclusion</h2>
<p>
This experiment helped understand the working of logical operators in C++.  
The <strong>AND (&&)</strong> operator ensures that all conditions must be true,  
the <strong>OR (||)</strong> operator allows any one of the conditions to be true,  
and the <strong>NOT (!)</strong> operator reverses the condition.  
Logical operators are fundamental in control flow and are used extensively in decision-making,  
validations, and looping structures in programming.
</p>
