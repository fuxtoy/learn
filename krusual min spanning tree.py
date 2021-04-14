class grap:
 
    def __init__(self, vertices):
        self.V = vertices  # No. of vertices
        self.graph = []  # default dictionary

    def addEdge(self, u, v, w):
        self.graph.append([u, v, w])
 
    def find(self, parent, i):
        if parent[i] == i:
            return i
        return self.find(parent, parent[i])

    def union(self, parent, rank, x, y):
        xroot = self.find(parent, x)
        yroot = self.find(parent, y)
 
        if rank[xroot] < rank[yroot]:
            parent[xroot] = yroot
        elif rank[xroot] > rank[yroot]:
            parent[yroot] = xroot
 
        else:
            parent[yroot] = xroot
            rank[xroot] += 1

    def KruskalMST(self):
 
        result = []  # This will store the resultant MST
         

        i = 0
         
        e = 0

        self.graph = sorted(self.graph,
                            key=lambda item: item[2])
 
        parent = []
        rank = []
 

        for node in range(self.V):
            parent.append(node)
            rank.append(0)
 
        while e < self.V - 1:
            u, v, w = self.graph[i]
            i = i + 1
            x = self.find(parent, u)
            y = self.find(parent, v)
            if x != y:
                e = e + 1
                result.append([u, v, w])
                self.union(parent, rank, x, y)

        minimumCost = 0
        pk = 1
        for u, v, weight in result:
            minimumCost += weight
            print("%d: <%d,%d>" % (pk,u, v))
            pk += 1 
        print("\nThe cost of minimum spanning tree:" , minimumCost)

class AdjNode:
    def __init__(self, data):
        self.vertex = data
        self.next = None
class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.graph = [None] * self.V
    def add_edge(self, src, dest):
        node = AdjNode(dest)
        node.next = self.graph[src]
        self.graph[src] = node
        node = AdjNode(src)
        node.next = self.graph[dest]
        self.graph[dest] = node
    def print_graph(self):
        for i in range(self.V):
            print("{}: ".format(i), end="")
            temp = self.graph[i]
            while temp:
                sortlst.append(temp.vertex)
                sortlst.sort()
                temp = temp.next
            print(sortlst[0], end="")
            for i in range(len(sortlst)-1):
              print(" -> {}".format(sortlst[i+1]), end="")
            sortlst.clear()
            print(" -> end")
 
sortlst=[]
count = 0 
array=[[-1]*3 for i in range(50000)]
try:
  while True:
    whole = input()
    x= whole.split() 
    start = x[0] ; end = x[1] ; cost = x[2] ; 
    cost = int(cost) ; start = int(start) ; end = int(end)
    array[count][0] = start ;  array[count][1] = end ; array[count][2] = cost
    count += 1
except EOFError:
  pass
array.sort( key=lambda x: x[2])  
# Driver program to the above graph class
if __name__ == "__main__":
    max_num = 0
    for i in range(50000):
      if array[i][0] != -1 :
        if array[i][0] > array[i][1] and array[i][0] > max_num :
          max_num = array[i][0] 
        elif  array[i][0] < array[i][1] and array[i][1] > max_num:
          max_num = array[i][1] 
    V = max_num+1
    graph = Graph(V)
    print("Adjacency list:")
    for i in range (50000) :
      if array[i][0] != -1 :
        graph.add_edge(array[i][0], array[i][1])
    graph.print_graph() 
    print("\nminimum spanning tree:")
    # Driver code
    g = grap(V)
    for i in range (50000) :
      if array[i][0] != -1 :
        g.addEdge(array[i][0], array[i][1],array[i][2])
    g.KruskalMST()
