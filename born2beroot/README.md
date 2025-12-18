*This project has been created as part of the 42 curriculum by <isabde-s>.*

# Born2beroot

## Description

**Born2beroot** is a system administration project that serves as an introduction to virtualization and server configuration. The goal is to set up a virtual machine (VM) from scratch, following strict rules regarding partitioning, security, and monitoring.

Unlike standard coding projects, this exercise focuses on configuring an Operating System (Debian) without a graphical interface (GUI), implementing strict password policies and sudo configurations, managing disk partitions using LVM (Logical Volume Manager), configuring a firewall (UFW) and SSH access and creating a bash script to monitor system health.

## Project Description & Design Choices

### Operating System: Debian
For this project, **Debian** (stable) was chosen over Rocky Linux.

* **Why Debian?** Debian is known for its stability and its widely used package manager (`apt`). It has a massive community and documentation, making it an excellent choice for learning the fundamentals of Linux server administration.
* **Pros:** High stability, vast repository of packages, uses `apt` (user-friendly), lighter resource consumption.

### Comparative Analysis

During the setup, several technical choices were weighed. Here is the comparison required by the subject:

#### 1. Debian vs Rocky Linux
| Feature | Debian | Rocky Linux |
| :--- | :--- | :--- |
| **Family** | Debian-based | RHEL-based (Red Hat) |
| **Package Manager** | `apt` / `dpkg` | `dnf` / `rpm` |
| **Security Module** | AppArmor (default) | SELinux (default) |
| **Target Audience** | General purpose, Web Servers | Enterprise, Corporate environments |

#### 2. AppArmor vs SELinux
| Feature | AppArmor (Used) | SELinux |
| :--- | :--- | :--- |
| **Philosophy** | Path-based MAC (Mandatory Access Control). Restricts programs based on file paths. | Label-based MAC. Restricts access based on inode labels/tags on files. |
| **Complexity** | Easier to learn and configure. | More granular, but significantly steeper learning curve. |
| **Context** | Default in Debian/Ubuntu. | Default in RHEL/CentOS/Rocky. |

#### 3. UFW vs Firewalld
| Feature | UFW (Used) | Firewalld |
| :--- | :--- | :--- |
| **Full Name** | Uncomplicated Firewall | Firewall Daemon |
| **Interface** | Command-line interface designed to simplify `iptables`/`nftables`. | Dynamic firewall manager with support for network/firewall zones. |
| **Use Case** | Ideal for simple, static configurations (like this project). | Better for complex, dynamic environments with changing zones. |

#### 4. VirtualBox vs UTM
| F |eature | VirtualBox (Used) | UTM |
| :--- | :--- | :--- |
| **Architecture** | Best for x86_64 architecture (Intel/AMD). | Best for ARM64 (Apple Silicon M1/M2/M3) using QEMU. |
| **Performance** | Native virtualization on standard PCs. | Emulation required for x86 on Mac Silicon (slower), but fast for ARM guests. |

### Configuration Highlights
* **LVM:** 2 Encrypted partitions were created to ensure data security.
* **SSH:** Configured on port **4242**, with root login disabled.
* **Password Policy:** strict rules (uppercase, lowercase, numbers, length) enforced via libpam-pwquality.
* **Monitoring:** A custom bash script broadcasts system information to all terminals every 10 minutes.

---

## Instructions

To evaluate or run this project, you need the .vdi file (virtual disk) and a virtualization software (VirtualBox).

1.  **Installation**:
    * Ensure VirtualBox is installed.
    * Create a new Machine -> Select Type: Linux / Version: Debian (64-bit).
    * Do not create a virtual hard disk; instead, select **"Use an Existing Virtual Hard Disk File"** and choose the born2beroot.vdi file.

2.  **Execution**:
    * Start the VM.
    * The machine will boot into a TTY interface (Command Line Only).
    * Login with the user created during defense or root.

3.  **Verification**:
    * The signature of the machine (shasum) can be verified to ensure no changes were made after submission.

---

## Resources & AI Usage

### References
* [Cron How-to](https://help.ubuntu.com/community/CronHowto)
* [GitHub] (https://github.com/gemartin99/Born2beroot-Tester)

### AI Usage Statement
Artificial Intelligence tools (ChatGPT/Gemini) were used in this project to:
1.  **Clarify Concepts:** Help understand the theoretical differences between SELinux and AppArmor, and the structure of LVM partitions.
2.  **Scripting Assistance:** Generate snippets and syntax corrections for the `monitoring.sh` script to properly format the output of commands like free, df, and top.
3.  **Troubleshooting:** Assist in debugging syntax errors in the bash script (e.g., unary operator expected errors).

The VM installation, partitioning, and security configurations were performed manually to ensure full understanding of the process.
