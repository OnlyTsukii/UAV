
from waypoint import Waypoint
from copy import deepcopy

class Node:
    def __init__(self, waypoint: Waypoint):
        self.waypoint: Waypoint = waypoint
        self.next = None
        self.prev = None  

class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None  
        self.length = 0  

    def get_length(self):
        return self.length
    
    def insert_head(self, waypoint: Waypoint):
        new_node = Node(waypoint)
        if not self.head: 
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node
        self.length += 1  

    def insert_tail(self, waypoint: Waypoint):
        new_node = Node(waypoint)
        if not self.head: 
            self.head = new_node
            self.tail = new_node
        else:
            new_node.prev = self.tail
            self.tail.next = new_node
            self.tail = new_node
        self.length += 1  

    def insert_after_node(self, target_waypoint: Waypoint, new_waypoint: Waypoint):
        current = self.head
        while current and current.waypoint.id != target_waypoint.id:
            current = current.next
        
        if current is None:
            raise ValueError(f"Waypoint {target_waypoint} not found in the list.")

        new_node = Node(new_waypoint)
        new_node.next = current.next
        new_node.prev = current
        current.next = new_node

        if new_node.next:  
            new_node.next.prev = new_node
        else:  
            self.tail = new_node

        self.length += 1

    def insert_before_node(self, target_waypoint: Waypoint, new_waypoint: Waypoint):
        current = self.head
        while current and current.waypoint.id != target_waypoint.id:
            current = current.next

        if current is None:
            raise ValueError(f"Waypoint {target_waypoint} not found in the list.")

        new_node = Node(new_waypoint)
        new_node.next = current
        new_node.prev = current.prev

        if current.prev:  
            current.prev.next = new_node
        else:  
            self.head = new_node
        
        current.prev = new_node
        self.length += 1

    def pop_head(self) -> Waypoint:
        if not self.head: 
            raise IndexError("Cannot delete from an empty list.")
        
        waypoint = deepcopy(self.head.waypoint)
        self.head = self.head.next  
        
        if self.head:
            self.head.prev = None
        else:
            self.tail = None 

        self.length -= 1
        return waypoint

    def display(self, logger):
        current = self.head
        while current:
            logger.info(f"{current.waypoint.latitude, current.waypoint.longitude, current.waypoint.type, current.waypoint.mission}")
            current = current.next

