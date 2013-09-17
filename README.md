innovatoripa
============

InnovatoriPA Community Edition

git filter-branch --force --index-filter \
  'git rm --cached --ignore-unmatch innovatoripa_d2d_migrate' \
  --prune-empty --tag-name-filter cat -- --all