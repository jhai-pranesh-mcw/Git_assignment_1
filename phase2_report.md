# Phase 2 Report

## git revert

### Before revert 

![Before revert](assets/before_revert.png)

### After revert

![After revert](assets/after_revert.png)


### **Q : Which commit was reverted?**
 Commit `4f3a5d8` (bad commit) was reverted to `de7c431`(good commit) 
 using 
 ```bash
 git revert de7c431
 ```
 and made into revert commit `7475c0d`(new commit created through git revert)

 ### **Q : What changed?**
 In the program when `4f3a5d8` commit happened i added a variable called `int last = number%2` to solve the repeated computation of the condition `i < number/2` in
 the loop. I accidently used `%` instead of `/` hence the problem occured. I noticed that it wasa logic error and hence reverted to the commit that was last working fine and conflict happened at that exact line since we are not using `git reset` changes were still there , hence i used only the incoming changes and made it error free.

 ### **Q : Why revert is safer than reset?**
When we  use revert, the history of the branch is not discarded and we can use it for debugging. But when we use reset instead of revert, the commit history of the error commits are discarded. 

## git reflog

### reflog history : 

>The HEAD got reset after a `git reset --hard de7c431` 
![reflog history](assets/reflog.png)


Using the history of the reflog we manged to reset it again using the commit `551ae72` by 

```bash
git reset --hard 551ae72
```
and the tree became

![Working tree after reset using reflog](assets/working_tree_after_reflog.png)

### **Q:What is difference between git reflog and git log?**
`git reflog` is different from `git log` because git log only shows the commit history that can be reached from the branch or if `--all` is mentioned, then it shows all commits that are reachable from every branch, but git reflog
shows the history of all the reference movements like HEAD or branch ref , including the commits that are no longer reachable.

## git rebase and rebase squash

Creating a rebase-demo branch
```bash
git switch -c rebase-demo
```

