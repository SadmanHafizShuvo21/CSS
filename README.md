# CSS

# markdown language syntax: 
## second markdown 
### third markdown

```cpp
#include<iostream>
int main(){

}
```
- shuvo
- yasin
- hadi
- benoy 

[google_click_me](https://www.google.com/)

Git is a widely-used version control system that helps developers track changes to code, collaborate effectively, and maintain a history of revisions. Here are some core concepts and commands to get you started:

### Key Concepts
1. **Repository (Repo)**: A collection of files tracked by Git, often containing code for a project.
2. **Commit**: A snapshot of your code at a particular point in time. Commits include messages that describe the changes made.
3. **Branch**: A parallel version of the repository. Branches allow you to develop new features or fix bugs without affecting the main codebase.
4. **Merge**: Combines changes from different branches.
5. **Remote**: A version of your repository that is hosted on the internet or network, like on GitHub or GitLab.
6. **Pull Request (PR)**: A request to merge changes from one branch into another, commonly used in team settings.

### Basic Workflow and Commands

1. **Initialize a Repository**
   ```bash
   git init
   ```
   This creates a new Git repository in the current directory.

2. **Clone a Repository**
   ```bash
   git clone <repository-url>
   ```
   Copies a remote repository to your local machine.

3. **Add Files to Staging Area**
   ```bash
   git add <filename>    # Adds a specific file
   git add .             # Adds all files
   ```
   The staging area holds changes to be committed.

4. **Commit Changes**
   ```bash
   git commit -m "Describe changes here"
   ```
   Commits changes in the staging area to the repository.

5. **Check Status**
   ```bash
   git status
   ```
   Shows which files are staged, modified, or untracked.

6. **Check Commit History**
   ```bash
   git log
   ```
   Displays the commit history.

7. **Create a Branch**
   ```bash
   git branch <branch-name>
   git checkout -b <branch-name>   # Creates and switches to a new branch
   ```

8. **Switch Branches**
   ```bash
   git checkout <branch-name>
   ```

9. **Merge Branches**
   ```bash
   git checkout <target-branch>
   git merge <branch-to-merge>
   ```

10. **Push Changes to Remote Repository**
    ```bash
    git push origin <branch-name>
    ```
    Pushes your commits to a remote repository.

11. **Pull Changes from Remote Repository**
    ```bash
    git pull origin <branch-name>
    ```
    Updates your local repository with changes from the remote.

12. **Resolve Merge Conflicts**
    If conflicts arise, Git will mark them in the files. You need to manually resolve these by editing the file, staging the resolved changes with `git add`, and then committing.

Git is highly versatile with additional commands and configurations for advanced workflows, but mastering these basics will cover most version control needs. Let me know if you'd like more details on any part!
