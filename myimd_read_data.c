#include <stdio.h>
#include "sqlite/sqlite3.c"
#include <stdlib.h>

//Create a callback function
static int callback(void *record, int argc, char **argv, char **nameRef){
	int i;
	fprintf(stderr, " %s : ", (const char*) record);

	for(i = 0; i < argc; i++){
		printf(" %s = %s \n", nameRef[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

int main(int argc, char* argv[]) {

sqlite3 *db;
char *err_msg = 0;
const char* record = "Callback function called";

//Here, we open our in-memory database
int conn = sqlite3_open(":memory:", &db);

//Do a database connection check
if(conn != SQLITE_OK){
	fprintf(stderr, "Unable to connect to database: %s \n", sqlite3_errmsg(db));

	sqlite3_close(db);

	return 1;
}

//Now, create a table and insert data into it
char *sql_qry = "CREATE TABLE contacts(id INTEGER PRIMARY KEY, name TEXT, course TEXT);"
"INSERT INTO contacts(name, course) VALUES ('Ed', 'Geography');"
"INSERT INTO contacts(name, course) VALUES ('Becky', 'Law');"
"INSERT INTO contacts(name, course) VALUES ('Frank', 'Mathematics');"
"INSERT INTO contacts(name, course) VALUES ('Rodney', 'Physics');"
"INSERT INTO contacts(name, course) VALUES ('Jeff', 'Biology');"
"INSERT INTO contacts(name, course) VALUES ('Rita', 'Agricultural Science');"
"INSERT INTO contacts(name, course) VALUES ('Leona', 'Economics');"
"INSERT INTO contacts(name, course) VALUES ('Erika', 'Artificial Intelligence');";

//Execute the query
conn = sqlite3_exec(db, sql_qry, 0, 0, &err_msg);

//Do a check for table creation
if(conn != SQLITE_OK){
	fprintf(stderr, "Failed to create table \n");
	fprintf(stderr, "SQL error: %s \n", err_msg);
	sqlite3_free(err_msg);
} else {
	fprintf(stdout, "Table created successfully \n");
}

//Now, let's create a variable to print out last inserted rowid
int last_id = sqlite3_last_insert_rowid(db);
printf("The id of last inserted row is: %d \n", last_id);

//Let's create a variable to print out previous id to last rowid
int prev_id = sqlite3_last_insert_rowid(db) - 1;
printf("The id before last inserted row is: %d \n", prev_id);

//Now, create a variable to print out next rowid
int next_id = sqlite3_last_insert_rowid(db) + 1;
printf("The id of next inserted row will be: %d \n", next_id);

//Create sql query
char *sql = "SELECT * FROM contacts";
//Execute query
conn = sqlite3_exec(db, sql, callback, (void*) record, &err_msg);

//Close the database
sqlite3_close(db);

	return 0;
}