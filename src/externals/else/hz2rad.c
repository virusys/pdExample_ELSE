// Porres 2016
 
#include "m_pd.h"
#include <math.h>
#include <stdlib.h>

#define TWO_PI 3.14159265358979323846 * 2

static t_class *hz2rad_class;

typedef struct _hz2rad{
    t_object    x_obj;
    t_outlet   *x_outlet;
    t_float     x_f;
}t_hz2rad;

static t_float convert(t_float f){
    return(f * TWO_PI / sys_getsr());
}

static void hz2rad_bang(t_hz2rad *x){
    outlet_float(x->x_outlet, convert(x->x_f));
}

static void hz2rad_list(t_hz2rad *x, t_symbol *s, int ac, t_atom *av){
    s = NULL;
    if(ac == 0)
        hz2rad_bang(x);
    if(ac == 1)
        outlet_float(x->x_outlet, convert(x->x_f = atom_getfloat(av)));
    else if(ac > 1){
        t_atom* at = calloc(ac, sizeof(t_atom));
        for(int i = 0; i < ac; i++)
            SETFLOAT(at+i, convert(atom_getfloatarg(i, ac, av)));
        outlet_list(x->x_obj.ob_outlet, &s_list, ac, at);
        free(at);
    }
}

static void hz2rad_set(t_hz2rad *x, t_float f){
    x->x_f = f;
}

static void *hz2rad_new(t_floatarg f){
    t_hz2rad *x = (t_hz2rad *) pd_new(hz2rad_class);
    x->x_f = f;
    x->x_outlet = outlet_new(&x->x_obj, 0);
    return(x);
}

void hz2rad_setup(void){
    hz2rad_class = class_new(gensym("hz2rad"), (t_newmethod)hz2rad_new,
        0, sizeof(t_hz2rad),0, A_DEFFLOAT, 0);
    class_addlist(hz2rad_class,(t_method)hz2rad_list);
    class_addmethod(hz2rad_class,(t_method)hz2rad_set,gensym("set"), A_DEFFLOAT, 0);
}
