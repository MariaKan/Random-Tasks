import os
import random
import codecs
 
 
 # download python: http://www.python.org/download/releases/2.7.3/
 
root = ur'.\Music'
list_of_mp3 = []
 
# Make a list of all mp3's
for path, subdirs, files in os.walk(root):
    for name in files:
        # Check if it's an mp3
        if name[-4:] != '.mp3': continue
 
        # Add the file to the list
        list_of_mp3.append( os.path.join(path, name) )
 
# Rename to random names
 
random.shuffle(list_of_mp3)
 
i = 0
for full_path in list_of_mp3:
    path, orig_name = os.path.split(full_path)
    name = orig_name
 
    # If it was already renamed
    if name[0] == '#':
        name = name.split(r' -%- ')[1]
 
    new_path = os.path.join(root, ur'#%d -%%- %s' % (i, name))
 
    print new_path.encode('utf8'), '<-', full_path.encode('utf8')
 
    # Rename it to it's shuffled name
    # and move it to the Music folder if it's not there
    os.rename(full_path, new_path)
 
 
    i += 1