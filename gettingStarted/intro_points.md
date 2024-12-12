## A Brief History
C++, originally named ‘C with Class,’ was created by computer scientist Bjarne Stroustrup at Bell Telephone Laboratories. Bjarne created C++ to fulfill his goals of creating a more flexible version of the C programming language, incorporating features he found useful in languages utilizing object orientated programming paradigms, such as Simula.

## What is C++ used for?
C++ is a general-purpose programming language that has made its mark across almost every industry. It is often the first choice when building software infrastructure and applications, as by nature, C++ can manipulate hardware directly and can be optimized to efficiently utilize system resources when there is limited hardware space available.
<br>
<br>
C++ is popularly used in game development, powering industry giants such as World of Warcraft, as well as game engines, which, like Unreal Engine, create complex 3D environments. It is also frequently used to code items in the IoT, otherwise known as the ‘Internet of Things.’ The IoT refers to everyday devices that connect to the internet, such as household appliances and medical equipment. As previously mentioned, C++ is able to efficiently use limited computing resources, making it ideal for commonplace devices. To expand on C++ and the internet, the language is used in the backend of web browsers such as Google Chrome and Mozilla Firefox, relatively speeding up the data retrieval process. This is just the surface of C++ applications; it also contributes to database management systems, VR applications, and financial modeling. The impact of C++ is inescapable in this world (and beyond, if you consider NASA’s use of C++ in building autonomous driving systems for Mars Rovers).

## How to Install C++ on Your Device

In order to compile your code, you need to have a complier. In simple terms, the compiler generates instructions for your machine. Compilers are machine/architecture specific. My MacBook, for example uses ARM. Macs come with clang preinstalled, so I did not have to download a compiler. Check to make sure you have the correct compiler for your machine, and download said compiler through your terminal if necessary. An IDE isn’t required, but most people use them to code more efficiently. I chose to use VS Code. 
<br>
<br>
I followed a tutorial by YouTube user eEmmFinity to figure out how to run C++ in VS Code on my MacBook. The video is cited in this section’s bibliography if you want to check it out! I’ve listed some key notes from his video below: After downloading VS Code, I downloaded the Code Runner & C/C++ extensions. I then went to settings > extensions, and checked yes for “Code-runner: Run In Terminal” and “Code-Runner: Save File Before Run”. Opting in for these settings is up to your preference. I then opened File > New Text File, and clicked the C++ language option when prompted. If you followed along, you are now ready to start coding!

## Common FAQs

### How do you write comments in C++?

The format is as follows:
<br>
` // single line comment `

```
/*
Multi-line comment
*/
```
You will see example comments in the helloWorld file!

### Does C++ come with a recommended programming environment? What is it? If not, how did you pick the one that you'll be using?

C++ does not ‘come with’ a recommended coding environment, but VS Code is widely considered the best and easiest to use. It is also free and open-source to boot! I chose this IDE for those reasons and also because I had used it previously and was thus comfortable. If you prefer a different compatible IDE, please feel free to use it!

### How do you run programs in C++?

It depends on if you are working in the terminal or an IDE. I am using VS Code, which acts as a pre-processor for the source code.
<br>
<br>
When you hit run on VS Code post debugging, the C++ source code is translated into machine language code by the compiler, clang in my case, and stored on the machine’s disk with the proper file extension. A software tool known as a linker then comes into play, taking the object code from the compiler and creating an executable file. The executable file is loaded to the disk from memory, and the CPU then executes the program.
<br>
<br>
Amazingly, this is all in the background with VS Code! To you, running the code is as simple as clicking the ‘play’ button. The specific format you need in your source code for your code to successfully run is displayed in the helloWorld file in this folder.
