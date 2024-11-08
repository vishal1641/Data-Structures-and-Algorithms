# Write your MySQL query statement below
select v.customer_id,count(v.customer_id) as count_no_trans from Visits as v left join Transactions t on v.visit_id=t.visit_id
where t.transaction_id is null
group by v.customer_id

# Write your MySQL query statement below
-- SELECT v.customer_id,COUNT(customer_id) AS count_no_trans
-- FROM Visits v
-- LEFT JOIN Transactions t
-- ON v.visit_id=t.visit_id
-- WHERE t.transaction_id is null
-- GROUP BY v.customer_id