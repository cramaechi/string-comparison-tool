# String Comparison Tool
A program that tests two strings for equality regardless of case, punctuation, and whitespace characters.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/string-comparison-tool.git
   ```
    or [download as ZIP](https://github.com/cramaechi/string-comparison-tool/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd string-comparison-tool
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./string_comparison
```

Sample Output:
```
Enter two sentences, each on their own line.                                                                          
                                                                                                                      
Hello world!                                                                                                          
HELLOWORLD!                                                                                                           
                                                                                                                      
The two strings are equal.

Enter two sentences, each on their own line.                                                                          
                                                                                                                      
My, oh my. You have grown up.                                                                                         
MYOH   MYYOUHAveG rown up.                                                                                            
                                                                                                                      
The two strings are equal. 
```
