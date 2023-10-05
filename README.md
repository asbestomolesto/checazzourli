checazzourli
============
bash/zsh - handling of uppercase / missing command by swearing 

Simple command-not-found handler for bash / zsh (man bash for details) to check if
you wrote a command all UPPERCASE and that command doesn't exist.

Now you will be insulted if you enter unknown commands.

Just copy it in /usr/lib/command-not-found and make it executable.

Usage example
==============
```
asbesto@rover:~$ echo hi
hi
asbesto@rover:~$ ECHO HI
AOOOOOH MA CHE CAZZO URLI
asbesto@rover:~$ DIR
AOOOOOH MA CHE CAZZO URLI
asbesto@rover:~$ LS
AOOOH MA CHE CAZZO URLI
asbesto@rover:~$ GIT CLONE
AOOOOOH MA CHE CAZZO URLI
asbesto@rover:~$
asbesto@rover:~$ vfv
vfv: command not found, IDIOTA
asbesto@rover:~$ vfv
vfv: command not found, PUTTANA IMPERIALE
asbesto@rover:~$ vfv
vfv: command not found, TESTA DI MINCHIA
asbesto@rover:~$ vfv
vfv: command not found, PEZZO DI MERDA
asbesto@rover:~$ 

```

License
============

```
(C) 2019 WTFPL Gabriele "Asbesto" Zaverio

        DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
```

     http://www.wtfpl.net

