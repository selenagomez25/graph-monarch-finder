# graph-monarch-finder
cystemz question for his graph theory/proof writing class this kinda federal but idc its all public anyway in opal discord :)

```
cystemz — Today at 9:10 PM
well, basically i have to prove that every tournament has at least one monarch using strong induction
i just dont understand how strong induction applies here and not weak induction

patho.s — Today at 9:24 PM
basically the reason strong induction applies to it because properties of tournaments don't necessarily follow a step-by-step progression as we add vertices, which is called non-linear (change of the output is not proportional to the change of the input according to google, u should know this) progression. when we deal with tournaments, adding more vertexes can change how everything connects in the diagram. its not as straightforward as just building on what we knew before, so we need strnog induction to handle all these situations that can pop up as the tournament gets bigger. strong indcution uses what we know about all the smaller tournaments, not just the one right before, which is better to use than weak induction when things get complicated. as shown in the image i referenced, its an example of a standard tournament with five vertices; and (b) an associated graphical display with a directed edge from vertex v to vertex w whenever vertex v is chosen in the presence of w (https://www.researchgate.net/figure/a-An-example-of-a-standard-tournament-with-five-vertices-and-b-an-associated_fig1_315534275), the tournament is a c5 tournament, where each vertex is adjacent to exactly two other vertices. c5 is better as the smallest tournament where every vertex has both incoming and outgoing edges

cystemz — Today at 9:28 PM
i still dont understand why weak induction (k + 1) wont work here
because i feel like theoretically you could be fine just building off of the previous to prove theres a monarch
is it just because you could use the first element to help prove it?

patho.s — Today at 9:28 PM
it wont work as effectively as strong induction becasue non linear progression and other shit said here
Image

patho.s — Today at 9:29 PM
i see where ur coming from but ehh storng induction is still better in this case imo, using strong idcuton u canremove any vertex from the tournament, not just the last one added and its generally better here 
```
