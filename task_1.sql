SELECT name FROM courses;
SELECT name FROM teachers;

SELECT name from teachers WHERE id IN(
SELECT MAX(freq);
FROM (SELECT teacher_id,COUNT(teacher_id) freq
    FROM courses GROUP BY teacher_id
));

SELECT name from teachers WHERE id NOT IN(
    SELECT teacher_id from courses
);