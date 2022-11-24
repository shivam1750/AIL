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