# pLagoon 

pLagoon is a simple, lightweight and efficient command-line tool that **recursively scans** the given directories and files which counts and return the **total number of lines of code**. Ideal for develops who want to know how much lines of code they have written in a **particular project** or a **particular programming language** also to track the **project complexity** or **code contribution**. It support filtering by various file extensions/type such as `.java`, `.c`, `.cpp`, `.css`, `.h`, `.html`, `.js`, `.json`, `.md`, `.py`, `.txt`, `.xml`.

## Features

- Recursively lists files in nested directories
- Count and return the number of lines in each file
- Supports filtering by file extension/type (Java, C, C++, Python, HTML, CSS, Javascript, etc.)
- It support every extension/type but filtering support is limited
- Display per-file line count and total LOC(Lines of Code)
- Clean modular structure using header files
- Cool and simple CLI(Command-Line Interface)

## Project Structure

```
pLagoon/
├── UI-UX/                   # UI/UX User Interface
│   ├── welcome.c
│   └── welcome.h
│
├── utils/                   # Logic and functions
│   ├── function.c
│   └── function.h
│
├── main.c                   # Entry point 
├── pLagoon.exe              # Main executable
├── LICENSE                  # Project license
└── README.md                # Project Documentation
```

## How It Works

1. Display a welcome banner.
2. Ask the user to enter a directory path.
3. Ask the user to select the file extension/type.
    ```
    0 - All Files
    1 - Java (.java)
    2 - C (.c)
    3 - C++ (.cpp)
    4 - CSS (.css)
    5 - C Header (.h)
    6 - HTML (.html)
    7 - Javascript (.js)
    8 - JSON (.json)
    9 - Markdown (.md)
    10 - Python (.py)
    11 - Text (.txt)
    12 - XML (.xml)
    ```
4. Lists matching files in the directory, show number of lines for each file, and prints the total number of lines at the end.

## Build & Run Instructions

### Requirements

- MinGW GCC (C compiler)
- Unix-based terminal (Linux/Mac) or PowerShell/WSL/Git Bash on Windows

### Compile it

```bash
# Clone the repository
git clone https://github.com/akshat-kaushik/pLagoon.git

# Compile it
gcc -o pLagoon main.c utils/function.c UI-UX/welcome.c 

# if not compile, Compile it using
gcc -o pLagoon main.c utils/funtion.c utils/function.h UI-UX/welcome.c UI-UX/welcome.h

# Run it
./pLagoon
```

## Sample Output

```
              _____                    _____            _____                    _____                   _______                  _______                   _____
             /|    |                  /|    |          /|    |                  /|    |                 /::|    |                /::|    |                 /*    *
            /::|    |                /::|____|        /::|    |                /::|    |               /::::|    |              /::::|    |               /::*____*
           /::::|    |              /:::/    /       /::::|    |              /::::|    |             /::::::|    |            /::::::|    |             /::::|   |
          /::::::|    |            /:::/    /       /::::::|    |            /::::::|    |           /::::::::|    |          /::::::::|    |           /:::::|   |
         /:::/ *::|    |          /:::/    /       /:::/*:::|    |          /:::/*:::|    |         /:::/~~*:::|    |        /:::/~~*:::|    |         /::::::|   |
        /:::/___*::|    |        /:::/    /       /:::/__*:::|    |        /:::/  *:::|    |       /:::/    *:::|    |      /:::/    *:::|    |       /:::/|::|   |
       /::::|    *::|    |      /:::/    /       /::::|   *:::|    |      /:::/    *:::|    |     /:::/    / *:::|    |    /:::/    / *:::|    |     /:::/ |::|   |
      /::::::|    *::|    |    /:::/    /       /::::::|   *:::|    |    /:::/    / *:::|    |   /:::/____/   *:::|____|  /:::/____/   *:::|____|   /:::/  |::|   | _____
     /:::/*:::|    *::|____|  /:::/    /       /:::/*:::|   *:::|    |  /:::/    /   *:::|____| |:::|    |     |:::|    ||:::|    |     |:::|    | /:::/   |::|   |/*    *        
    /:::/  *:::|    *::|    |/:::/____/       /:::/  *:::|   *:::|____|/:::/____/  ___*:::|    ||:::|____|     |:::|    ||:::|____|     |:::|    |/:: /    |::|   /::*____*       
    *::/    *:::|  /:::|____|*::::|   *       *::/    *:::|  /:::/    /*:::|    / /::|  ::|____| *:::|    |   /:::/    /  *:::|    |   /:::/    / *::/    /|::|  /:::/    /       
     */_____/*:::|/:::/    /  *::::|   *       *_____/ *:::|/:::/    /  *:::|    /::|  |:/    /   *:::|    | /:::/    /    *:::|    | /:::/    /   *_____/ |::| /:::/    /        
              *::::::/    /    *::::|   *               *::::::/    /    *:::|   *:::|  |____/     *:::|    /:::/    /      *:::|    /:::/    /            |::|/:::/    /
               *::::/    /      *::::|   *               *::::/    /      *:::|   *:::|____|        *:::|~~/:::/    /        *:::|~~/:::/    /             |::::::/    /
                *::/____/        *::::|   *              /:::/    /        *:::|  /:::/    /         *::::::::/    /          *::::::::/    /              |:::::/    /
                 ~~               *::::|   *            /:::/    /          *:::|/:::/    /           *::::::/    /            *::::::/    /               |::::/    /
                                   *::::|   *          /:::/    /            *::::::/    /             *::::/    /              *::::/    /                /:::/    /
                                    *::::|___*        /:::/    /              *::::/    /               *::/____/                *::/____/                /:::/    /
                                     *::/    /        *::/    /                *::/____/                 ~~                       ~~                      *::/    /
                                      *_____/          *_____/                                                                                             *_____/


ENTER PATH : C:\Users\AKSHAT KAUSHIK\OneDrive\Desktop\Projects\Project5 (Encryption)
$$$$$ SELECT FILE TYPE/EXTENSION $$$$$
For ALL == 0 Java == 1 C == 2 C++ == 3 css == 4 Header C == 5 HTML == 6 Javascript == 7 JSON == 8 md == 9 Python == 10 Text == 11 XML == 12 
Here :0
                                DIR :$16 .vscode
FILE :$0 FILE NAME :tasks.json Lines :28
FILE :$0 FILE NAME :a.exe Lines :1
FILE :$0 FILE NAME :copy.txt Lines :2
FILE :$0 FILE NAME :decryption.c Lines :25
FILE :$0 FILE NAME :decryption.exe Lines :1
FILE :$0 FILE NAME :encryption.c Lines :64
FILE :$0 FILE NAME :test.txt Lines :1
Total Lines of Code : 122 <$>
```

## Supported Extensions

```
 __________________
|      |           |
| Mode | Extension |
| ---- | --------- |
| 0    | All       |
| 1    | `.java`   |
| 2    | `.c`      |
| 3    | `.cpp`    |
| 4    | `.css`    |
| 5    | `.h`      |
| 6    | `.html`   |
| 7    | `.js`     |
| 8    | `.json`   |
| 9    | `.md`     |
| 10   | `.py`     |
| 11   | `.txt`    |
| 12   | `.xml`    |
|______|___________|
```

## To-Do/Improvements

- Add option to ignore blank lines and comments
- Export results to a **.txt** or **.csv** file
- Add interactive GUI and a menu instead of numeric input
- Show per-folder line count summary
- Add more filters extension support

## Contributing

Contributions are welcome and appreciated! feel free to contribute

## License

This project is licensed under the [MIT License](LICENSE).

## Author

Akshat Kaushik
GitHub: [@akshat-kaushik](https://github.com/akshat-kaushik)