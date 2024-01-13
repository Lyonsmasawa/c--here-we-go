#include <iostream> // This line includes the iostream header, which provides functions for input and output operations

int main() { // The main function is the entry point of the program

    // '\n' (Newline Character):
    //     Pros:
    //             Efficiency: Appending '\n' is often more efficient because it doesn't trigger an immediate buffer flush. The actual flushing might be deferred until certain conditions are met (e.g., buffer full or program exit).
    //             Control: Gives you more control over when to flush the buffer.
    //     Cons:
    //             Immediate Visibility: Doesn't guarantee immediate visibility of the output. The flushing might be delayed.
    // std::endl (End Line Manipulator):
    //     Pros:
    //             Immediate Flushing: Explicitly flushes the buffer, ensuring immediate visibility of the output.
    //             Convenience: Combines newline character addition and buffer flushing in a single statement.
    //     Cons:
    //             Efficiency Overhead: The explicit flushing can introduce some overhead, making it less efficient than using '\n' in situations where immediate visibility is not crucial.
    // Choosing Between Them:
    //             Efficiency vs. Immediacy: Use '\n' when efficiency and deferred flushing are more critical. Use std::endl when you want to ensure immediate visibility of the output at the expense of a potential efficiency hit.
    //             Specific Scenarios: Consider the specific requirements of each part of your code. For example, in real-time or interactive applications, you might prioritize std::endl for immediate feedback.
    //     In most cases, both approaches are valid, and the choice depends on the specific needs and performance considerations of your application. It's common to use a mix of '\n' and std::endl based on the context in your code.
    
    std::cout << "Chapaii init" << std::endl; // This line outputs the string "Chapaii init" to the standard output (usually the console)
    std::cout << "Chapaii init" << '\n'; 

    return 0; // This line indicates that the program has executed successfully and returns 0 to the operating system
}
