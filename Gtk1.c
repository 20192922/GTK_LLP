#include <gtk-3.0/gtk/gtk.h>
int main(int argc,char ** argv){
    g_setenv("GDK_BACKEND","wayland",TRUE);
    setenv("WAYLAND_DISPLAY","wayland-1",1);
    gtk_init(&argc,&argv);
    GtkWidget *window  = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    gtk_window_set_title(GTK_WINDOW(window),"wayland GTK+ App");

    g_signal_connect(window,"destory",G_CALLBACK(gtk_main_quit),NULL);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}