/*
Enter your query here.
*/
select distinct city from station
where (CITY not LIKE 'a%' 
    and CITY not LIKE 'e%' 
    and CITY not LIKE 'i%' 
    and CITY not LIKE 'o%'
    and CITY not LIKE 'u%'
) and (CITY not LIKE '%a' 
    and CITY not LIKE '%e' 
    and CITY not LIKE '%i' 
    and CITY not LIKE '%o'
    and CITY not LIKE '%u'
)