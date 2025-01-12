# Write your MySQL query statement below
select p.product_name,
SUM(unit) as unit
from products as p
inner join orders as o
on p.product_id=o.product_id
where year(order_date)=2020 and month(order_date)=02
group by product_name
having unit>=100