import sqlite3

# Connect to SQLite database (creates file if not exists)
conn = sqlite3.connect("students.db")

# Create a cursor object
cur = conn.cursor()

# 1. Create Table
cur.execute("""
CREATE TABLE IF NOT EXISTS students (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT,
    age INTEGER,
    city TEXT
)
""")

# 2. Insert Data
cur.execute("INSERT INTO students (name, age, city) VALUES ('Dharmesh', 25, 'Ahmedabad')")
cur.execute("INSERT INTO students (name, age, city) VALUES ('Ravi', 22, 'Surat')")
cur.execute("INSERT INTO students (name, age, city) VALUES ('Meera', 24, 'Rajkot')")

# Save changes
conn.commit()

# 3. Fetch Data From Table
cur.execute("SELECT * FROM students")
data = cur.fetchall()

# 4. Display Data
print("Student Records:")
for row in data:
    print(row)

# Close the connection
conn.close()
