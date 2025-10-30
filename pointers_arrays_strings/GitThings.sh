#!/bin/bash

# Ask the user for a commit message
echo "Enter your commit message:"
read commit_message

# Stage all changes
git add .

# Commit with the user's message
git commit -m "$commit_message"

# Push to the remote repository
git push
