# Discord dll hijack
This repository contains the code to a dll that proxys "bcrypt.dll" to "payload.dll" and executes a message box.
The compiled dll is in the release folder.
To make this attack work you must name the proxy dll "bcrypt.dll" and place it in the discord directory with the real "bcrypt.dll" named "payload.dll".
The real bcrypt.dll can be located in the windows folder.
Use of this this dll hijack is shown here https://www.youtube.com/watch?v=NjQAStxnZ3o
