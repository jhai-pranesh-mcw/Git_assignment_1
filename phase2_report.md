# Phase 2 Report

## git revert

Before revert 

![Before revert](assets/before_revert.png)

After revert

![After revert](assets/after_revert.png)


### **Q : Which commit was reverted?**
 Commit `4f3a5d8` (bad commit) was reverted to `de7c431`(good commit) and made into revert commit `7475c0d`(new commit created through git revert)

 ### **Q : What changed?**
 In the program when `4f3a5d8` commit happened i added a variable called `int last = number%2` to solve the repeated computation of the condition `i < number/2` in
 the loop. I accidently used `%` instead of `/` hence the problem occured. And in the next commit i changed the name of the file. I noticed that it wasa logic error and hence reverted to the commit that was last working fine.

 ### **Q : Why revert is safer than reset?**
When we  use revert, the history of the branch is not discarded and we can use it for debugging. But when we use reset instead of revert, the commit history of the error commits are discarded. 

## git reflog