cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | cut -d: -f1 | rev | sort -r | awk -v l1="$FT_LINE1" -v l2="$FT_LINE2" 'NR >= l1 && NR <= l2' | paste -sd, - | sed 's/$/./'

