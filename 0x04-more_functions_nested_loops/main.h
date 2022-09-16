#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 *
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);
/**
 * _islower - prints if c is lower case
 * @c: character to use
 * Return: 1 or 0
 */
int _islower(int c);
/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_digit - prints digit last
 *
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);
/**
 * jack_bauer - jack bauer gooo
 *
 */
void jack_bauer(void);
/**
 * times_table - times this up
 *
 *
 */
void times_table(void);
/**
 * add - adds stuff up
 *
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 *
 */
void print_to_98(int n);
/**
 * _isupper - checks if uppercase or not
 * @c: character to check
 *
 * Return: returns 1 or 0
 */
int _isupper(int c);
/**
 *_isdigit - checks for a digit(0 through 9)
 *@c: data to check its type
 *
 * Return: returns 1 if its a digit and 0 if otherwise.
 */
int _isdigit(int c);
/**
 * mul - multiplies two integers
 * @a: first integer
 * @b:second integer
 *
 * Return: returns product of the two integers
 */
int mul(int a, int b);
/**
 * print_numbers - prints the numbers 0 to 9 followed by a new line
 *
 * Return: always return void
 */
void print_numbers(void);
/**
 * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void);
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void);
Last login: Fri Sep 16 07:53:35 on console
McLovin@McLovin ~ % vagrant ssh
VM must be running to open SSH connection. Run `vagrant up`
to start the virtual machine.
McLovin@McLovin ~ % vagrant up
Bringing machine 'default' up with 'virtualbox' provider...
==> default: Checking if box 'ubuntu/focal64' version '20220825.0.0' is up to date...
==> default: A newer version of the box 'ubuntu/focal64' for provider 'virtualbox' is
==> default: available! You currently have version '20220825.0.0'. The latest is version
==> default: '20220913.0.0'. Run `vagrant box update` to update.
==> default: Clearing any previously set forwarded ports...
==> default: Clearing any previously set network interfaces...
==> default: Preparing network interfaces based on configuration...
    default: Adapter 1: nat
==> default: Forwarding ports...
    default: 22 (guest) => 2222 (host) (adapter 1)
==> default: Running 'pre-boot' VM customizations...
==> default: Booting VM...
==> default: Waiting for machine to boot. This may take a few minutes...
    default: SSH address: 127.0.0.1:2222
    default: SSH username: vagrant
    default: SSH auth method: private key
==> default: Machine booted and ready!
==> default: Checking for guest additions in VM...
==> default: Mounting shared folders...
    default: /vagrant => /Users/McLovin
==> default: Machine already provisioned. Run `vagrant provision` or use the `--provision`
==> default: flag to force provisioning. Provisioners marked to run always will still run.
McLovin@McLovin ~ % ls
1.py				Public
Applications			PycharmProjects
Desktop				Vagrantfile
Documents			VirtualBox VMs
Downloads			Web development
Library				java_error_in_pycharm_1199.log
Movies				java_error_in_pycharm_953.log
Music				return fxn.py
Pictures
McLovin@McLovin ~ % vagrant ssh
Welcome to Ubuntu 20.04.5 LTS (GNU/Linux 5.4.0-125-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

  System information as of Fri Sep 16 12:29:06 UTC 2022

  System load:  1.14              Processes:               125
  Usage of /:   6.0% of 38.70GB   Users logged in:         0
  Memory usage: 21%               IPv4 address for enp0s3: 10.0.2.15
  Swap usage:   0%


2 updates can be applied immediately.
To see these additional updates run: apt list --upgradable

New release '22.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


Last login: Thu Sep 15 19:24:23 2022 from 10.0.2.2
vagrant@ubuntu-focal:~$ ls
Betty                      alx-system_engineering-devops  zero_day
alx-low_level_programming  c_practice
vagrant@ubuntu-focal:~$ cd alx-low_level_programming/
vagrant@ubuntu-focal:~/alx-low_level_programming$ ls
0x00-hello_world              0x02-functions_nested_loops  README.md
0x01-variables_if_else_while  0x03-debugging
vagrant@ubuntu-focal:~/alx-low_level_programming$ mkdir 0x04-more_functions_nested_loops
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 0-isupper.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 0-isupper.c

========== 0-isupper.c ==========
0-isupper.c:12: ERROR: space required before the open parenthesis '('
0-isupper.c:14: ERROR: space required before the open parenthesis '('
total: 2 errors, 0 warnings, 15 lines checked
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 0-isupper.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 0-isupper.c

========== 0-isupper.c ==========
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty main.h

========== main.h ==========
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ cat 0-main.c
cat: 0-main.c: No such file or directory
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isupper'
[master 2e7cc44] isupper
 2 files changed, 24 insertions(+)
 create mode 100644 0x04-more_functions_nested_loops/0-isupper.c
 create mode 100644 0x04-more_functions_nested_loops/main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 658 bytes | 329.00 KiB/s, done.
Total 5 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   8c88950..2e7cc44  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loopvagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loopvagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ i                                                                           ^C
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi README.md
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isupper'
[master b8df8cd] isupper
 1 file changed, 1 insertion(+)
 create mode 100644 0x04-more_functions_nested_loops/README.md
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 423 bytes | 423.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   2e7cc44..b8df8cd  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ls
0-isupper.c  README.md  main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 0-isupper.c

========== 0-isupper.c ==========
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 0-isupper.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 0-isupper.c

========== 0-isupper.c ==========
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isupper'
[master fe6c5e6] isupper
 1 file changed, 4 insertions(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 427 bytes | 427.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   b8df8cd..fe6c5e6  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ cd ..
vagrant@ubuntu-focal:~/alx-low_level_programming$ ls
0x00-hello_world              0x03-debugging
0x01-variables_if_else_while  0x04-more_functions_nested_loops
0x02-functions_nested_loops   README.md
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x02-functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ ls
0-putchar     11-print_to_98.c        5-sign.c              9-times_table.c
0-putchar.c   2-print_alphabet_x10.c  6-abs.c               README.md
1-alphabet.c  3-islower.c             7-print_last_digit.c  _putchar.c
10-add.c      4-isalpha.c             8-24_hours.c          main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ cp _putchar.c ../0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ cd ..
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ls
0-isupper.c  README.md  _putchar.c  main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 0-isupper.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi README.md
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ cd ..
vagrant@ubuntu-focal:~/alx-low_level_programming$ ls
0x00-hello_world              0x03-debugging
0x01-variables_if_else_while  0x04-more_functions_nested_loops
0x02-functions_nested_loops   README.md
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x02-functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ ls
0-putchar     11-print_to_98.c        5-sign.c              9-times_table.c
0-putchar.c   2-print_alphabet_x10.c  6-abs.c               README.md
1-alphabet.c  3-islower.c             7-print_last_digit.c  _putchar.c
10-add.c      4-isalpha.c             8-24_hours.c          main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ cp main.h ../0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ cd ..
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ls
0-isupper.c  README.md  _putchar.c  main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isupper'
[master d72ef1c] isupper
 3 files changed, 261 insertions(+), 1 deletion(-)
 rewrite 0x04-more_functions_nested_loops/README.md (100%)
 create mode 100644 0x04-more_functions_nested_loops/_putchar.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 2.97 KiB | 2.97 MiB/s, done.
Total 5 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   fe6c5e6..d72ef1c  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ man isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 1-isdigit.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 1-isdigit.c

========== 1-isdigit.c ==========
1-isdigit.c:8: warning: No description found for return value of '_isdigit'
_isdigit
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 1-isdigit.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 1-isdigit.c

========== 1-isdigit.c ==========
_isdigit
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isdigit'
[master 4c087e4] isdigit
 2 files changed, 25 insertions(+), 1 deletion(-)
 create mode 100644 0x04-more_functions_nested_loops/1-isdigit.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 689 bytes | 689.00 KiB/s, done.
Total 5 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   d72ef1c..4c087e4  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 2-mul.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 2-mul.c

========== 2-mul.c ==========
mul
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'multiply'
[master 14e42c7] multiply
 2 files changed, 20 insertions(+)
 create mode 100644 0x04-more_functions_nested_loops/2-mul.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 545 bytes | 545.00 KiB/s, done.
Total 5 (delta 4), reused 0 (delta 0)
remote: Resolving deltas: 100% (4/4), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   4c087e4..14e42c7  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 2-mul.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 2-mul.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 3-print_numbers.c

========== 3-print_numbers.c ==========
3-print_numbers.c:9: WARNING: Missing a blank line after declarations
total: 0 errors, 1 warnings, 14 lines checked
print_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 3-print_numbers.c

========== 3-print_numbers.c ==========
print_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print-numbers'
[master 6e66840] print-numbers
 3 files changed, 21 insertions(+), 1 deletion(-)
 create mode 100644 0x04-more_functions_nested_loops/3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 10, done.
Counting objects: 100% (10/10), done.
Delta compression using up to 2 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 725 bytes | 725.00 KiB/s, done.
Total 6 (delta 4), reused 0 (delta 0)
remote: Resolving deltas: 100% (4/4), completed with 4 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   14e42c7..6e66840  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print-numbers'
[master 5d6e3a9] print-numbers
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 373 bytes | 373.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   6e66840..5d6e3a9  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 3-print_numbers.c

========== 3-print_numbers.c ==========
print_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master 13d7f1d] print
 1 file changed, 2 insertions(+), 2 deletions(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 363 bytes | 363.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   5d6e3a9..13d7f1d  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master ba02291] print
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 361 bytes | 361.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   13d7f1d..ba02291  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master 6c001c2] print
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 351 bytes | 351.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   ba02291..6c001c2  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master bf0cf4c] print
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 353 bytes | 353.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   6c001c2..bf0cf4c  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 3-print_numbers.c

========== 3-print_numbers.c ==========
print_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master 3c35470] print
 1 file changed, 1 insertion(+)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 364 bytes | 364.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   bf0cf4c..3c35470  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 2-mul.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty /**

========== /bin ==========
diff: /bin/null: No such file or directory

========== /boot ==========
diff: /boot/null: No such file or directory

========== /dev ==========

========== /etc ==========
diff: /etc/null: No such file or directory

========== /home ==========
diff: /home/null: No such file or directory

========== /lib ==========
diff: /lib/null: No such file or directory

========== /lib32 ==========
diff: /lib32/null: No such file or directory

========== /lib64 ==========
diff: /lib64/null: No such file or directory

========== /libx32 ==========
diff: /libx32/null: No such file or directory

========== /lost+found ==========
diff: /lost+found/null: Permission denied
Error: Cannot open file /lost+found

========== /media ==========
diff: /media/null: No such file or directory

========== /mnt ==========
diff: /mnt/null: No such file or directory

========== /opt ==========
diff: /opt/null: No such file or directory

========== /proc ==========
diff: /proc/null: No such file or directory

========== /root ==========
diff: /root/null: Permission denied
Error: Cannot open file /root

========== /run ==========
diff: /run/null: No such file or directory

========== /sbin ==========
diff: /sbin/null: No such file or directory

========== /snap ==========
diff: /snap/null: No such file or directory

========== /srv ==========
diff: /srv/null: No such file or directory

========== /sys ==========
diff: /sys/null: No such file or directory

========== /tmp ==========
diff: /tmp/null: No such file or directory

========== /usr ==========
diff: /usr/null: No such file or directory

========== /vagrant ==========
diff: /vagrant/null: No such file or directory

========== /var ==========
diff: /var/null: No such file or directory
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$  * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
0-isupper.c: command not found
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$  *
0-isupper.c: command not found
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$  * Return: void
0-isupper.c: command not found
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$  */
-bash: */: No such file or directory
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ void print_most_numbers(void)betty 4-print_most_numbers.c
-bash: syntax error near unexpected token `('
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 4-print_most_numbers.c

========== 4-print_most_numbers.c ==========
4-print_most_numbers.c:10: ERROR: trailing whitespace
4-print_most_numbers.c:11: ERROR: spaces required around that '=' (ctx:WxV)
4-print_most_numbers.c:13: ERROR: spaces required around that '==' (ctx:WxV)
total: 3 errors, 0 warnings, 20 lines checked
print_most_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 4-print_most_numbers.c

========== 4-print_most_numbers.c ==========
4-print_most_numbers.c:10: ERROR: trailing whitespace
4-print_most_numbers.c:11: ERROR: spaces required around that '=' (ctx:WxV)
total: 2 errors, 0 warnings, 20 lines checked
print_most_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 4-print_most_numbers.c

========== 4-print_most_numbers.c ==========
print_most_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print most'
[master b0c089f] print most
 3 files changed, 27 insertions(+)
 create mode 100644 0x04-more_functions_nested_loops/4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 10, done.
Counting objects: 100% (10/10), done.
Delta compression using up to 2 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 766 bytes | 766.00 KiB/s, done.
Total 6 (delta 4), reused 0 (delta 0)
remote: Resolving deltas: 100% (4/4), completed with 4 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   3c35470..b0c089f  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty main.h

========== main.h ==========
_putchar
print_alphabet
print_alphabet_x10
_islower
_isalpha
print_sign
_abs
print_last_digit
jack_bauer
times_table
add
print_to_98
_isupper
_isdigit
mul
print_numbers
print_most_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print most'
[master 1fa8668] print most
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 366 bytes | 183.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   b0c089f..1fa8668  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 5-more_numbers.c

========== 5-more_numbers.c ==========
5-more_numbers.c:21: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 27 lines checked
more_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 5-more_numbers.c

========== 5-more_numbers.c ==========
5-more_numbers.c:21: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 27 lines checked
more_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 5-more_numbers.c

========== 5-more_numbers.c ==========
more_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'more numbers'
[master 133dffe] more numbers
 2 files changed, 33 insertions(+)
 create mode 100644 0x04-more_functions_nested_loops/5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 691 bytes | 691.00 KiB/s, done.
Total 5 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   1fa8668..133dffe  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'more numbers'
[master 8817728] more numbers
 1 file changed, 1 insertion(+), 2 deletions(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 358 bytes | 358.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   133dffe..8817728  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 6-print_line.c

#include "main.h"
/**
 * print_line - prints a line
 *
 * @n: integer to print stuff?
 */
void print_line(int n)
Last login: Fri Sep 16 07:53:35 on console
McLovin@McLovin ~ % vagrant ssh
VM must be running to open SSH connection. Run `vagrant up`
to start the virtual machine.
McLovin@McLovin ~ % vagrant up
Bringing machine 'default' up with 'virtualbox' provider...
==> default: Checking if box 'ubuntu/focal64' version '20220825.0.0' is up to date...
==> default: A newer version of the box 'ubuntu/focal64' for provider 'virtualbox' is
==> default: available! You currently have version '20220825.0.0'. The latest is version
==> default: '20220913.0.0'. Run `vagrant box update` to update.
==> default: Clearing any previously set forwarded ports...
==> default: Clearing any previously set network interfaces...
==> default: Preparing network interfaces based on configuration...
    default: Adapter 1: nat
==> default: Forwarding ports...
    default: 22 (guest) => 2222 (host) (adapter 1)
==> default: Running 'pre-boot' VM customizations...
==> default: Booting VM...
==> default: Waiting for machine to boot. This may take a few minutes...
    default: SSH address: 127.0.0.1:2222
    default: SSH username: vagrant
    default: SSH auth method: private key
==> default: Machine booted and ready!
==> default: Checking for guest additions in VM...
==> default: Mounting shared folders...
    default: /vagrant => /Users/McLovin
==> default: Machine already provisioned. Run `vagrant provision` or use the `--provision`
==> default: flag to force provisioning. Provisioners marked to run always will still run.
McLovin@McLovin ~ % ls 
1.py				Public
Applications			PycharmProjects
Desktop				Vagrantfile
Documents			VirtualBox VMs
Downloads			Web development
Library				java_error_in_pycharm_1199.log
Movies				java_error_in_pycharm_953.log
Music				return fxn.py
Pictures
McLovin@McLovin ~ % vagrant ssh
Welcome to Ubuntu 20.04.5 LTS (GNU/Linux 5.4.0-125-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

  System information as of Fri Sep 16 12:29:06 UTC 2022

  System load:  1.14              Processes:               125
  Usage of /:   6.0% of 38.70GB   Users logged in:         0
  Memory usage: 21%               IPv4 address for enp0s3: 10.0.2.15
  Swap usage:   0%


2 updates can be applied immediately.
To see these additional updates run: apt list --upgradable

New release '22.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


Last login: Thu Sep 15 19:24:23 2022 from 10.0.2.2
vagrant@ubuntu-focal:~$ ls
Betty                      alx-system_engineering-devops  zero_day
alx-low_level_programming  c_practice
vagrant@ubuntu-focal:~$ cd alx-low_level_programming/
vagrant@ubuntu-focal:~/alx-low_level_programming$ ls
0x00-hello_world              0x02-functions_nested_loops  README.md
0x01-variables_if_else_while  0x03-debugging
vagrant@ubuntu-focal:~/alx-low_level_programming$ mkdir 0x04-more_functions_nested_loops
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 0-isupper.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 0-isupper.c 

========== 0-isupper.c ==========
0-isupper.c:12: ERROR: space required before the open parenthesis '('
0-isupper.c:14: ERROR: space required before the open parenthesis '('
total: 2 errors, 0 warnings, 15 lines checked
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 0-isupper.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 0-isupper.c 

========== 0-isupper.c ==========
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty main.h 

========== main.h ==========
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ cat 0-main.c
cat: 0-main.c: No such file or directory
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isupper'
[master 2e7cc44] isupper
 2 files changed, 24 insertions(+)
 create mode 100644 0x04-more_functions_nested_loops/0-isupper.c
 create mode 100644 0x04-more_functions_nested_loops/main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 658 bytes | 329.00 KiB/s, done.
Total 5 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   8c88950..2e7cc44  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loopvagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loopvagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ i                                                                           ^C
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi README.md
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isupper'
[master b8df8cd] isupper
 1 file changed, 1 insertion(+)
 create mode 100644 0x04-more_functions_nested_loops/README.md
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 423 bytes | 423.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   2e7cc44..b8df8cd  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ls
0-isupper.c  README.md  main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 0-isupper.c 

========== 0-isupper.c ==========
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 0-isupper.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 0-isupper.c 

========== 0-isupper.c ==========
_isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isupper'
[master fe6c5e6] isupper
 1 file changed, 4 insertions(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 427 bytes | 427.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   b8df8cd..fe6c5e6  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ cd ..
vagrant@ubuntu-focal:~/alx-low_level_programming$ ls
0x00-hello_world              0x03-debugging
0x01-variables_if_else_while  0x04-more_functions_nested_loops
0x02-functions_nested_loops   README.md
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x02-functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ ls
0-putchar     11-print_to_98.c        5-sign.c              9-times_table.c
0-putchar.c   2-print_alphabet_x10.c  6-abs.c               README.md
1-alphabet.c  3-islower.c             7-print_last_digit.c  _putchar.c
10-add.c      4-isalpha.c             8-24_hours.c          main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ cp _putchar.c ../0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ cd ..
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ls
0-isupper.c  README.md  _putchar.c  main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 0-isupper.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi README.md 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ cd ..
vagrant@ubuntu-focal:~/alx-low_level_programming$ ls
0x00-hello_world              0x03-debugging
0x01-variables_if_else_while  0x04-more_functions_nested_loops
0x02-functions_nested_loops   README.md
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x02-functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ ls
0-putchar     11-print_to_98.c        5-sign.c              9-times_table.c
0-putchar.c   2-print_alphabet_x10.c  6-abs.c               README.md
1-alphabet.c  3-islower.c             7-print_last_digit.c  _putchar.c
10-add.c      4-isalpha.c             8-24_hours.c          main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ cp main.h ../0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x02-functions_nested_loops$ cd ..
vagrant@ubuntu-focal:~/alx-low_level_programming$ cd 0x04-more_functions_nested_loops/
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ls
0-isupper.c  README.md  _putchar.c  main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isupper'
[master d72ef1c] isupper
 3 files changed, 261 insertions(+), 1 deletion(-)
 rewrite 0x04-more_functions_nested_loops/README.md (100%)
 create mode 100644 0x04-more_functions_nested_loops/_putchar.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 2.97 KiB | 2.97 MiB/s, done.
Total 5 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   fe6c5e6..d72ef1c  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ man isupper
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 1-isdigit.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 1-isdigit.c 

========== 1-isdigit.c ==========
1-isdigit.c:8: warning: No description found for return value of '_isdigit'
_isdigit
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 1-isdigit.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 1-isdigit.c 

========== 1-isdigit.c ==========
_isdigit
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'isdigit'
[master 4c087e4] isdigit
 2 files changed, 25 insertions(+), 1 deletion(-)
 create mode 100644 0x04-more_functions_nested_loops/1-isdigit.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 689 bytes | 689.00 KiB/s, done.
Total 5 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   d72ef1c..4c087e4  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 2-mul.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 2-mul.c 

========== 2-mul.c ==========
mul
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'multiply'
[master 14e42c7] multiply
 2 files changed, 20 insertions(+)
 create mode 100644 0x04-more_functions_nested_loops/2-mul.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 545 bytes | 545.00 KiB/s, done.
Total 5 (delta 4), reused 0 (delta 0)
remote: Resolving deltas: 100% (4/4), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   4c087e4..14e42c7  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 2-mul.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 2-mul.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 3-print_numbers.c 

========== 3-print_numbers.c ==========
3-print_numbers.c:9: WARNING: Missing a blank line after declarations
total: 0 errors, 1 warnings, 14 lines checked
print_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 3-print_numbers.c 

========== 3-print_numbers.c ==========
print_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print-numbers'
[master 6e66840] print-numbers
 3 files changed, 21 insertions(+), 1 deletion(-)
 create mode 100644 0x04-more_functions_nested_loops/3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 10, done.
Counting objects: 100% (10/10), done.
Delta compression using up to 2 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 725 bytes | 725.00 KiB/s, done.
Total 6 (delta 4), reused 0 (delta 0)
remote: Resolving deltas: 100% (4/4), completed with 4 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   14e42c7..6e66840  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print-numbers'
[master 5d6e3a9] print-numbers
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 373 bytes | 373.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   6e66840..5d6e3a9  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 3-print_numbers.c 

========== 3-print_numbers.c ==========
print_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master 13d7f1d] print
 1 file changed, 2 insertions(+), 2 deletions(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 363 bytes | 363.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   5d6e3a9..13d7f1d  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master ba02291] print
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 361 bytes | 361.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   13d7f1d..ba02291  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master 6c001c2] print
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 351 bytes | 351.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   ba02291..6c001c2  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master bf0cf4c] print
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 353 bytes | 353.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   6c001c2..bf0cf4c  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 3-print_numbers.c 

========== 3-print_numbers.c ==========
print_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 3-print_numbers.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print'
[master 3c35470] print
 1 file changed, 1 insertion(+)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 364 bytes | 364.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   bf0cf4c..3c35470  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 2-mul.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty /**

========== /bin ==========
diff: /bin/null: No such file or directory

========== /boot ==========
diff: /boot/null: No such file or directory

========== /dev ==========

========== /etc ==========
diff: /etc/null: No such file or directory

========== /home ==========
diff: /home/null: No such file or directory

========== /lib ==========
diff: /lib/null: No such file or directory

========== /lib32 ==========
diff: /lib32/null: No such file or directory

========== /lib64 ==========
diff: /lib64/null: No such file or directory

========== /libx32 ==========
diff: /libx32/null: No such file or directory

========== /lost+found ==========
diff: /lost+found/null: Permission denied
Error: Cannot open file /lost+found

========== /media ==========
diff: /media/null: No such file or directory

========== /mnt ==========
diff: /mnt/null: No such file or directory

========== /opt ==========
diff: /opt/null: No such file or directory

========== /proc ==========
diff: /proc/null: No such file or directory

========== /root ==========
diff: /root/null: Permission denied
Error: Cannot open file /root

========== /run ==========
diff: /run/null: No such file or directory

========== /sbin ==========
diff: /sbin/null: No such file or directory

========== /snap ==========
diff: /snap/null: No such file or directory

========== /srv ==========
diff: /srv/null: No such file or directory

========== /sys ==========
diff: /sys/null: No such file or directory

========== /tmp ==========
diff: /tmp/null: No such file or directory

========== /usr ==========
diff: /usr/null: No such file or directory

========== /vagrant ==========
diff: /vagrant/null: No such file or directory

========== /var ==========
diff: /var/null: No such file or directory
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$  * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
0-isupper.c: command not found
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$  *
0-isupper.c: command not found
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$  * Return: void
0-isupper.c: command not found
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$  */
-bash: */: No such file or directory
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ void print_most_numbers(void)betty 4-print_most_numbers.c 
-bash: syntax error near unexpected token `('
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 4-print_most_numbers.c 

========== 4-print_most_numbers.c ==========
4-print_most_numbers.c:10: ERROR: trailing whitespace
4-print_most_numbers.c:11: ERROR: spaces required around that '=' (ctx:WxV)
4-print_most_numbers.c:13: ERROR: spaces required around that '==' (ctx:WxV)
total: 3 errors, 0 warnings, 20 lines checked
print_most_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 4-print_most_numbers.c 

========== 4-print_most_numbers.c ==========
4-print_most_numbers.c:10: ERROR: trailing whitespace
4-print_most_numbers.c:11: ERROR: spaces required around that '=' (ctx:WxV)
total: 2 errors, 0 warnings, 20 lines checked
print_most_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 4-print_most_numbers.c 

========== 4-print_most_numbers.c ==========
print_most_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print most'
[master b0c089f] print most
 3 files changed, 27 insertions(+)
 create mode 100644 0x04-more_functions_nested_loops/4-print_most_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 10, done.
Counting objects: 100% (10/10), done.
Delta compression using up to 2 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 766 bytes | 766.00 KiB/s, done.
Total 6 (delta 4), reused 0 (delta 0)
remote: Resolving deltas: 100% (4/4), completed with 4 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   3c35470..b0c089f  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty main.h 

========== main.h ==========
_putchar
print_alphabet
print_alphabet_x10
_islower
_isalpha
print_sign
_abs
print_last_digit
jack_bauer
times_table
add
print_to_98
_isupper
_isdigit
mul
print_numbers
print_most_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 4-print_most_numbers.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'print most'
[master 1fa8668] print most
 1 file changed, 1 insertion(+), 1 deletion(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 366 bytes | 183.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   b0c089f..1fa8668  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 5-more_numbers.c 

========== 5-more_numbers.c ==========
5-more_numbers.c:21: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 27 lines checked
more_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 5-more_numbers.c 

========== 5-more_numbers.c ==========
5-more_numbers.c:21: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 27 lines checked
more_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ betty 5-more_numbers.c 

========== 5-more_numbers.c ==========
more_numbers
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi main.h
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'more numbers'
[master 133dffe] more numbers
 2 files changed, 33 insertions(+)
 create mode 100644 0x04-more_functions_nested_loops/5-more_numbers.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 691 bytes | 691.00 KiB/s, done.
Total 5 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   1fa8668..133dffe  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 5-more_numbers.c 
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git add .
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git commit -m 'more numbers'
[master 8817728] more numbers
 1 file changed, 1 insertion(+), 2 deletions(-)
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 358 bytes | 358.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/abdulkhaliqsoule/alx-low_level_programming.git
   133dffe..8817728  master -> master
vagrant@ubuntu-focal:~/alx-low_level_programming/0x04-more_functions_nested_loops$ vi 6-print_line.c

#include "main.h"
/**
 * print_line - prints a line
 *
 * @n: integer to indicate number of times '_' is printed.
 */
void print_line(int n)
#endif

