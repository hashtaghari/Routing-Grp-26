import matplotlib.pyplot as plt
import networkx as nx

f = open(".\\data\\g1.txt", "r")

back_ground = "#59999c"
edge_color = "#fffb00"
vertex_color = "#f67d7d"

line1 = f.readline()
G = nx.Graph()
names = []
color_list = []
for line in f:
    data = line.split()
    # print(data)
    G.add_edge(data[0], data[1], edge_labels=data[2], lenght=(2*len(data[2])))
    color_list.append(edge_color)
    names.append(((data[0], data[1]), data[2]))

pos = nx.circular_layout(G)
fig = plt.figure()
# edge_names = nx.get_edge_attributes(G,'edge_labels').values()
nx.draw(G, pos, with_labels=True, node_size=450,
        node_color=vertex_color, width=7, font_color='white')

props = dict(boxstyle='round', facecolor="#FFFDD0", alpha=1)

nx.draw_networkx_edge_labels(G, pos, edge_labels=dict(
    names), font_color='#1C4755', bbox=props)

nx.draw_networkx_edges(G, pos, edge_color=color_list, style="dashed")

fig.set_facecolor(back_ground)
plt.show()
