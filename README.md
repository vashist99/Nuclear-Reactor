# Nuclear-Reactor
A nuclear reactor simulation

## About
This project aims to form a full fledged simulation of a nuclear reactor that will allow a user to change parameters to find the required possible result

### Physics
- Consider a fuel pellet Radius and thermal conductivity denoted
by R_{f} and k_{f}
- The temperature in the center of the rod - T_{m}
- Temperature in the outer surface of the fuel pellet - T_{fs}
- Temperature at the inner surface of the cladding - T_{cs}
- Temperature at the outer surface of the fuel rod - T_{s}
- A small gap and/or a contact resistance is assumed so that
T_{fs}!= T_{cs}
- it is also assumed that the gradients of temperature in the axial
direction are small compared with those in the radial direction
therefore the primary heat flux takes place in the radial direction


-Finally, Rod temperature -
<a href="https://www.codecogs.com/eqnedit.php?latex=T_{s}&space;=&space;T_{m}&space;-&space;\frac{Q}{4m}\left[\frac{1}{k_{f}}&plus;\frac{2}{h*R_{f}}&plus;\frac{&space;\left(1&plus;b/R_{f}&space;\right&space;)^{2}-1}{k_{c}}\right]" target="_blank"><img src="https://latex.codecogs.com/png.latex?T_{s}&space;=&space;T_{m}&space;-&space;\frac{Q}{4m}\left[\frac{1}{k_{f}}&plus;\frac{2}{h*R_{f}}&plus;\frac{&space;\left(1&plus;b/R_{f}&space;\right&space;)^{2}-1}{k_{c}}\right]" title="T_{s} = T_{m} - \frac{Q}{4m}\left[\frac{1}{k_{f}}+\frac{2}{h*R_{f}}+\frac{ \left(1+b/R_{f} \right )^{2}-1}{k_{c}}\right]" /></a>
