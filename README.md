# Kernel Modules


## Dependencies
Some dependencies are needed that are not generally included in Linux distributions.

In the case of Ubuntu and debian, they can be obtained in this way: 
```bash
# Download the headers of the specific module that we have
$ sudo apt-get install linux-headers-$(uname -r)

# Download build essentials, to compile the c code
$ sudo apt-get install build-essential
```

## Administration commands
```bash
# To see the kernel version.
$ uname -r

# To see a list of all the modules currently available on your system.
$ ls -R /lib/modules/$(uname -r)

# Display all modules currently loaded into the kernel.
$ lsmod

# Display if the module is loaded or installed.
$ lsmod | grep "module_name"

# Display information for a particular module.
$ modinfo /path/to/module_name.ko

# Install a module into the running kernel.
$ sudo insmod module_name.ko

# Rebuild the module dependency database.
$ sudo depmod -a

# Remove a module from a running kernel.
$ sudo rmmod module_name

# Displays the registers of the modules.
$ sudo dmesg
```

The /proc filesystem is pseudo filesystem. It does not exist on a disk. Instead, the kernel creates it in memory. It is used to provide information about the system (originally about processes).
```bash
# Display all modules currently loaded into the kernel.
$ cat /proc/modules

# Display the pseudo file of a module.
$ cat /proc/module_name
```