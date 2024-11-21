def parse_tickets(ticket_string):
    tickets = ticket_string.split(", ")
    ticket_list = []
    for ticket in tickets:
        ticket_elements = ticket.split(" -> ")
        row = int(ticket_elements[0])
        count = int(ticket_elements[1])
        ticket_tuple = (row, count)
        ticket_list.append(ticket_tuple)
    return ticket_list

def rows_with_people(ticket_list):
    return len(ticket_list)

def total_tickets_sold(ticket_list):
    total = 0
    for row, count in ticket_list:
        total += count
    return total

def total_money_collected(ticket_list):
    total_money = 0
    for row, count in ticket_list:
        if 1 <= row <= 3:
            total_money += count * 20
        elif 4 <= row <= 12:
            total_money += count * 15
    return total_money

ticket_string = "3 -> 5, 6 -> 10, 8 -> 2"
ticket_list = parse_tickets(ticket_string)
print("Sales: ", rows_with_people(ticket_list))
print("Theathre tickets sold: ", total_tickets_sold(ticket_list))
print("Total money: ", total_money_collected(ticket_list))