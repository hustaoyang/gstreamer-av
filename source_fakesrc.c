#include <gst/gst.h>
int main (int argc, char *argv[])
{
	/*GstElement *element;
	// init GStreamer 
	gst_init (&argc, &argv);
	// create element 
	element = gst_element_factory_make("fakesrc", "source");
	if (!element) {
	    g_print ("Failed to create element of type 'fakesrc'\n");
	
	    return -1;
	}
       */
        
	GstElementFactory *factory;
	GstElement * element;
	
	//gst_init GStreamer
	gst_init (&argc, &argv);
	// create element 
	element = gst_element_factory_find("fakesrc");
	if (!element) {
	    g_print ("Failed to create element of type 'fakesrc'\n");
	
	    return -1;
	}

	element = gst_element_factory_create(factory, "source");
	if(!element) {
	     g_print("Failed to create element, even though its factory exists!\n");
	     return -1;
	}

 	
  
	gst_object_unref(GST_OBJECT (element));

	return 0;
}
