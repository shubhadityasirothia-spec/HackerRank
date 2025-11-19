[16/11/25, 3:31:42 PM] Shubhaditya Sirothia:  
[20/11/25, 12:00:50 AM] Anish IOI: #!/bin/bash

DATE=$(date +"%Y-%m-%d")
MESSAGE="Daily upload for $DATE"

git add .
git commit -m "$MESSAGE"
git push

echo "✔ Successfully uploaded: $MESSAGE"