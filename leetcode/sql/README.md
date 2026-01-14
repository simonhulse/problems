Solutions to Schema questions, using PostgreSQL

To run a problem, `cd` in a problem directory, and call:

    PGPASSWORD='<pwd>' psql -U <user> -f ../setup.sql -f create_tables.sql -f solution.sql -f ../cleanup.sql
