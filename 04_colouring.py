def graphColouring (graph):
    colouring = {}
    for node in graph:
        neighbours = graph[node] 
        colours = []
        for neighbour in neighbours:
            if neighbour in colouring:
                colours.append(colouring [neighbour])
        colour = 1
        while colour in colours:
            colour += 1
        colouring[node ] = colour
    return colouring

# def graphColouring(m):
#     x={}
#     for i in m:
#         z = m[i]
#         colours =[]
#         for j in z:
#             if j in x:
#                 colours.append(x[j])
#         k = 1
#         while k in colours:
#             k+=1
#         x[i] = k
#     return x
graph = {
    'A': ['B', 'C'],
    'B': ['A', 'C', 'D'], 
    'C': ['A', 'B', 'D', 'E'],
    'D': ['B', 'C', 'E', 'F'], 
    'E': ['C', 'D'],
    'F': ['D']
}

colouring = graphColouring (graph)
print (colouring)