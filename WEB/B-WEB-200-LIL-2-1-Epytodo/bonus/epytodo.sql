CREATE DATABASE IF NOT EXISTS epytodo;

USE epytodo;

CREATE TABLE IF NOT EXISTS user
(
    id INT UNSIGNED NOT NULL AUTO_INCREMENT,
    email VARCHAR(255) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL,
    name VARCHAR(50) NOT NULL,
    firstname VARCHAR(50) NOT NULL,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
    PRIMARY KEY (id)
);

CREATE TABLE IF NOT EXISTS todo
(
    id INT UNSIGNED NOT NULL AUTO_INCREMENT,
    title TEXT NOT NULL,
    description TEXT NOT NULL,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
    due_time DATETIME Not NULL,
    status ENUM('not started', 'todo', 'in progress', 'done') DEFAULT 'not started',
    user_id INT UNSIGNED NOT NULL,
    FOREIGN KEY (user_id) REFERENCES user(id),
    PRIMARY KEY (id)
);
