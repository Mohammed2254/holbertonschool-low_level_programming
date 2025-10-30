#!/usr/bin/env bash
set -e

# Configuration
GIT_USER_NAME="mohammed"
GIT_USER_EMAIL="m.a.alabduli@gmail.com"
GIT_USERNAME_FILL="Mohammed2254"

# Set global git username and email
git config --global user.name "$GIT_USER_NAME"
git config --global user.email "$GIT_USER_EMAIL"

# Enable storing credentials for future git commands
git config --global credential.helper store
git config --global credential.username "$GIT_USERNAME_FILL"

# Push current branch to origin
echo "Executing git push..."
echo "First push will ask for password; it will be stored afterwards."
git push
