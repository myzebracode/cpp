#include <stdio.h>
#include <stdlib.h>
#include "sqlite/sqlite3.c"

//Create a callback function
static int callback(void *record, int argc, char **argv, char **nameRef) {
fprintf(stderr, "%s\n", (const char*) record );

//Do a for loop
for(int i = 0; i < argc; i++) {
	printf("%s = %s \n", nameRef[i], argv[i] ? argv[i] : "NULL");
}

printf("\n");
return 0;

}

//Main function
int main(int argc, char* argv[]) {
	sqlite3 *db;
	char *err_msg = 0;
	int conn;


//Callback function called here
	const char* record = "Student record";

//Open database
	conn = sqlite3_open("students.db", &db);

//Do a check for the datbase connection
	if(conn != SQLITE_OK) {

		fprintf(stderr, "Cannot open database: %s \n", sqlite3_errmsg(db));

		return 0;

	} else 
	{
		fprintf( stderr, "Database was opened successfully \n");
	}

/**
	//Select a specific student from database
       char *mydb_sel = "SELECT * FROM degreestudents WHERE firstname = 'Musa' ";

    //Execute the query
       conn = sqlite3_exec(db, mydb_sel, callback, (void*) record, &err_msg);
**/

/**
	//Let's update our database table
	char *sql_myupdate = "UPDATE degreestudents SET firstname = 'Ivanka' WHERE lastname = 'Ibrahim' ";

	//Execute the query
	conn = sqlite3_exec(db, sql_myupdate, callback, (void*) record, &err_msg);

	//Select data from database table
	char *mydb_sel = "SELECT * FROM degreestudents";

	//Execute the select query
	conn = sqlite3_exec(db, mydb_sel, callback, (void*) record, &err_msg);
**/

	//Delete data from table
	char *sql_del = "DELETE FROM degreestudents WHERE firstname = 'Bob' ";

	//Execute the query
	conn = sqlite3_exec(db, sql_del, callback, (void*) record, &err_msg);

	//Select data from database table
	char *mydb_sel = "SELECT * FROM degreestudents";

	//Execute the select query
	conn = sqlite3_exec(db, mydb_sel, callback, (void*) record, &err_msg);


/***
//Create SQL query
	char *sql_qry = "SELECT * FROM degreestudents ";

//Now, execute query
	conn = sqlite3_exec(db, sql_qry, callback, (void*) record, &err_msg);
**/

//Do a check on the query
	if(conn != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s \n",  err_msg);

		sqlite3_free(err_msg);
	} else {
		fprintf(stdout, "Query successful");
	}

//Close database connection
	sqlite3_close(db);


	return 0;
}