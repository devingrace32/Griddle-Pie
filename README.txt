Devin Arrants

For gridpi(10) the result for pi is 3.52
For gridpi(100) the result for pi is 3.1812
For gridpi(1000) the result for pi is 3.14554
For gridpi(10000) the result for pi is 3.14199

Due to the nested for loops and the dependency of both loops 
on npoints the complexity is O(n^2)
For gridpi(10) the runtime is 0.002 seconds.
For gridpi(100) the runtime is 0.005 seconds. 
For gridpi(1000) the runtime is 0.114 seconds. 
For gridpi(10000) the runtime is 4.313 seconds.

The time measurements are roughly accurate. This is due to variablility in runtime 
when with the same npoints argument. Runtime depends on much more than the time 
complexity. It also depends on the OS, space complexities, and even my syntax.

Using constexpr:

For gridpi(10) the result for pi is 3.52 with a runtime of 0.005 seconds.
For gridpi(100) the result for pi is 3.1812 with a runtime of 0.008 seconds. 
For gridpi(1000) the result for pi is 3.14554 with a runtime of 0.008 seconds.
The values of pi remain the same as the previous values of pi, when it was evaluated at runtime. 
The runtimes however remain relatively constant accross the magitudes of 10 used in the input.
Most noticable for gridpi(1000) the compile time was drastically increased, but the runtime 
was significantly decreased. This is because whn using constexpr the function gets evaluated
at compile time and not runtime. 

