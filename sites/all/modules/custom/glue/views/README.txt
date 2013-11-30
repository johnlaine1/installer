To save a view in code.

Go to the views UI, select the view, export to code.
create a file named [machine_name_of_view].view.inc
Add a <?php opening tag to start the file.
Paste the code.
Clear the cache.
Go to views UI, view will probably say 'database overriding code', click on revert.
All done.

When you make changes and want those changes in code as well, delete the code
that is currently in the respective file and copy paste the new code in.