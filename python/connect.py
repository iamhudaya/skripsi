import mysql.connector
from mysql.connector import Error

def insertVariblesIntoTable(id, distance):
    try:
        connection = mysql.connector.connect(host='localhost',
                                             database='skripsi',
                                             user='root',
                                             password='')
        cursor = connection.cursor()
        mySql_insert_query = """INSERT INTO wifi (Id, distance) 
                                VALUES (%s, %s) """

        recordTuple = (id, distance)
        cursor.execute(mySql_insert_query, recordTuple)
        connection.commit()
        print("Record inserted successfully into wifi table")

    except mysql.connector.Error as error:
        print("Failed to insert into MySQL table {}".format(error))

    finally:
        if (connection.is_connected()):
            cursor.close()
            connection.close()
            print("MySQL connection is closed")

insertVariblesIntoTable(1, 20)
