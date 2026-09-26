#include<stdio.h>
int main(int argc, char* argv[], char* envp[])
{
    int iCounter;

    puts("Environment setting are:\n\n");
    for(iCounter = 0;envp[iCounter] != NULL; iCounter++)
    
        puts(envp[iCounter]);
    
    return 0;
    
}
/*
Environment setting are:


ALLUSERSPROFILE=C:\ProgramData
APPDATA=C:\Users\mahaj\AppData\Roaming
CHROME_CRASHPAD_PIPE_NAME=\\.\pipe\crashpad_10124_XEJTODEJPOYGRZUU
CommonProgramFiles=C:\Program Files (x86)\Common Files
CommonProgramFiles(x86)=C:\Program Files (x86)\Common Files
CommonProgramW6432=C:\Program Files\Common Files
COMPUTERNAME=LAPTOP-EANIF3NE
ComSpec=C:\WINDOWS\system32\cmd.exe
DriverData=C:\Windows\System32\Drivers\DriverData
EFC_14020=1
FPS_BROWSER_APP_PROFILE_STRING=Internet Explorer
FPS_BROWSER_USER_PROFILE_STRING=Default
HOMEDRIVE=C:
HOMEPATH=\Users\mahaj
JAVA_HOME=C:\Program Files\Java\jdk-20
LOCALAPPDATA=C:\Users\mahaj\AppData\Local
LOGONSERVER=\\LAPTOP-EANIF3NE
NUMBER_OF_PROCESSORS=4
OneDrive=C:\Users\mahaj\OneDrive
ORIGINAL_XDG_CURRENT_DESKTOP=undefined
OS=Windows_NT
Path=C:\Program Files\Common Files\Oracle\Java\javapath;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\Program Files\Java\jdk-20\bin;C:\Program Files\nodejs\;C:\Users\mahaj\AppData\Local\Microsoft\WindowsApps;C:\MinGW\bin;C:\Users\mahaj\AppData\Local\Programs\Microsoft VS Code\bin;C:\Users\mahaj\AppData\Roaming\npm
PATHEXT=.COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.MSC;.CPL
PROCESSOR_ARCHITECTURE=x86
PROCESSOR_ARCHITEW6432=AMD64
PROCESSOR_IDENTIFIER=AMD64 Family 23 Model 24 Stepping 1, AuthenticAMD
PROCESSOR_LEVEL=23
PROCESSOR_REVISION=1801
ProgramData=C:\ProgramData
ProgramFiles=C:\Program Files (x86)
ProgramFiles(x86)=C:\Program Files (x86)
ProgramW6432=C:\Program Files
PSModulePath=C:\Users\mahaj\OneDrive\Documents\WindowsPowerShell\Modules;C:\Program Files\WindowsPowerShell\Modules;C:\WINDOWS\system32\WindowsPowerShell\v1.0\Modules
PUBLIC=C:\Users\Public
SESSIONNAME=Console
SystemDrive=C:
SystemRoot=C:\WINDOWS
TEMP=C:\Users\mahaj\AppData\Local\Temp
TMP=C:\Users\mahaj\AppData\Local\Temp
USERDOMAIN=LAPTOP-EANIF3NE
USERDOMAIN_ROAMINGPROFILE=LAPTOP-EANIF3NE
USERNAME=Shraddha Mahajan
USERPROFILE=C:\Users\mahaj
windir=C:\WINDOWS
TERM_PROGRAM=vscode
TERM_PROGRAM_VERSION=1.97.2
LANG=en_US.UTF-8
COLORTERM=truecolor
VSCODE_INJECTION=1
*/