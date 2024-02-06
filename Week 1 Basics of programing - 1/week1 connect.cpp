// typecasting 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a=10;
    char b='d';
    int sum =a+b;// d= ascii=97
    cout<<sum;//107
    float f=2.1+sum;
    cout<<f;//107+2.1=109.1
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
float f=2.7;
int n=157;
int diff=n-f;
cout<<diff;//154
return 0;
}


// ################ Note
// char = int + char = int + ascii(char)
// int = char - char = ascii(char) - ascii(char)=int(char)


// An interpreter and a compiler are both tools used in the process of translating and executing programming code, but they operate in different ways.

// **Interpreter:**

// 1. **Execution:** Interpreters directly execute the source code line by line. It reads each line of code, translates it into machine code (or an intermediate code), and executes it immediately.

// 2. **Debugging:** Interpreters are often preferred during the development phase because they can provide immediate feedback. If an error occurs, the interpreter halts execution and reports the error at the point where it occurred.

// 3. **Portability:** Programs run by an interpreter are generally less dependent on the underlying system. As long as the interpreter is available for a specific platform, the code can be executed without modification.

// 4. **Speed:** Generally, interpreted code tends to run slower than compiled code because each line is translated and executed on-the-fly.

// 5. **Examples:** Python, JavaScript, and Ruby are languages commonly associated with interpreters.

// **Compiler:**

// 1. **Execution:** Compilers, on the other hand, translate the entire source code into machine code or an intermediate code before execution. The resulting executable file is then run independently of the source code.

// 2. **Debugging:** Debugging in a compiled language often involves a separate step. Developers need to identify and fix errors before the compilation process. Debugging information can be more challenging to access compared to interpreters.

// 3. **Portability:** Compiled programs are often specific to the architecture for which they are compiled. If you want to run a compiled program on a different platform, you typically need to recompile it for that platform.

// 4. **Speed:** Compiled code tends to run faster than interpreted code because it has already been translated into machine code before execution.

// 5. **Examples:** C, C++, and Java (to some extent, as it uses both compilation and interpretation through the Java Virtual Machine) are languages often associated with compilers.

// In summary, the choice between an interpreter and a compiler depends on factors such as development speed, ease of debugging, and performance requirements. Many modern languages, like Java, use a combination of both through Just-In-Time (JIT) compilation, where code is initially interpreted and then compiled for improved performance during execution.