# Write your MySQL query statement below
# char_length()
select tweet_id
from Tweets
where char_length(content)>15