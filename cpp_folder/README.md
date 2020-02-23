# C++ Scratchpad

This will be a wasteland for C++ sample code as I go through reading material.

Compiler notes
```
pi@RaspPi4:~/Coding/CPP_folder $ g++ CPPversion.cpp -o cpp_version_test
pi@RaspPi4:~/Coding/CPP_folder $ ./cpp_version_test 
C++14
pi@RaspPi4:~/Coding/CPP_folder $ 
pi@RaspPi4:~/Coding/CPP_folder $ g++ -std=c++17 CPPversion.cpp -o cpp_version_test
pi@RaspPi4:~/Coding/CPP_folder $ ./cpp_version_test 
C++17
pi@RaspPi4:~/Coding/CPP_folder $ g++ -std=c++2a CPPversion.cpp -o cpp_version_test
pi@RaspPi4:~/Coding/CPP_folder $ ./cpp_version_test 
pre-standard C++
pi@RaspPi4:~/Coding/CPP_folder $ 
```
Study material:

Reading list
- Programming Principles and Practice Using C++ 2nd Edition (will refer to as PPPC++)
- A Tour of C++ 2nd Edition 
- Sams Teach yourself C++ 8th edition

Website
- learncpp.com

Thoughts on reading material
- PPPC++ - reviews so far are mixed. I was really enjoying it. First four chapters were great, then at the end of chapter 4 on the topics of vectors, I ran into an issue with the sort() function. The program won't compile as written. I figured this is probably a rather important topic. My confidence in this source a little rattled. Will try another source to see if I can fill in the gaps. The errata really doesnt touch on this. Closest thing I've seen to a resolution was found in a google search and it was to change sort(temps) to sort(temps.begin(), temps.end()). Compiling then moved beyond that initial problem then that openned a whole other can of worms. Needless to say I'm still learning so I'm sure there's a fix.

- A Tour of C++ 2nd Edition - Assumes reader already familiar. Not really ready for this book.

- Sam Teach yourself C++ - pretty easy read, was bouncing between this and PPPC++ will bounce back to it now.
