/* Thread.c generated by valac 0.36.15, the Vala compiler
 * generated from Thread.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define TYPE_THREAD (thread_get_type ())
#define THREAD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_THREAD, Thread))
#define THREAD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_THREAD, ThreadClass))
#define IS_THREAD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_THREAD))
#define IS_THREAD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_THREAD))
#define THREAD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_THREAD, ThreadClass))

typedef struct _Thread Thread;
typedef struct _ThreadClass ThreadClass;
typedef struct _ThreadPrivate ThreadPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ParamSpecThread ParamSpecThread;

struct _Thread {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ThreadPrivate * priv;
};

struct _ThreadClass {
	GTypeClass parent_class;
	void (*finalize) (Thread *self);
};

struct _ThreadPrivate {
	gchar* subject;
	gchar* comment;
	gchar* extension;
	gchar* date;
	gint64 filename;
	gint64 threadNumber;
};

struct _ParamSpecThread {
	GParamSpec parent_instance;
};


static gpointer thread_parent_class = NULL;

gpointer thread_ref (gpointer instance);
void thread_unref (gpointer instance);
GParamSpec* param_spec_thread (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_thread (GValue* value, gpointer v_object);
void value_take_thread (GValue* value, gpointer v_object);
gpointer value_get_thread (const GValue* value);
GType thread_get_type (void) G_GNUC_CONST;
#define THREAD_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_THREAD, ThreadPrivate))
enum  {
	THREAD_0_PROPERTY
};
Thread* thread_new (void);
Thread* thread_construct (GType object_type);
gchar* thread_getSubject (Thread* self);
void thread_setSubject (Thread* self, const gchar* subject);
gchar* thread_getComment (Thread* self);
void thread_setComment (Thread* self, const gchar* comment);
gchar* thread_getExtension (Thread* self);
void thread_setExtension (Thread* self, const gchar* extension);
gchar* thread_getDate (Thread* self);
void thread_setDate (Thread* self, const gchar* date);
gint64 thread_getFilename (Thread* self);
void thread_setFilename (Thread* self, gint64 filename);
gint64 thread_getThreadNumber (Thread* self);
void thread_setThreadNumber (Thread* self, gint64 threadNumber);
static void thread_finalize (Thread * obj);


Thread* thread_construct (GType object_type) {
	Thread* self = NULL;
#line 10 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self = (Thread*) g_type_create_instance (object_type);
#line 10 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return self;
#line 87 "Thread.c"
}


Thread* thread_new (void) {
#line 10 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return thread_construct (TYPE_THREAD);
#line 94 "Thread.c"
}


gchar* thread_getSubject (Thread* self) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 16 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 18 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = self->priv->subject;
#line 18 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 18 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	result = _tmp1_;
#line 18 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return result;
#line 112 "Thread.c"
}


void thread_setSubject (Thread* self, const gchar* subject) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 22 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (self != NULL);
#line 22 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (subject != NULL);
#line 24 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = subject;
#line 24 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 24 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_g_free0 (self->priv->subject);
#line 24 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self->priv->subject = _tmp1_;
#line 131 "Thread.c"
}


gchar* thread_getComment (Thread* self) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 28 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 30 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = self->priv->comment;
#line 30 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 30 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	result = _tmp1_;
#line 30 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return result;
#line 149 "Thread.c"
}


void thread_setComment (Thread* self, const gchar* comment) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 34 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (self != NULL);
#line 34 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (comment != NULL);
#line 36 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = comment;
#line 36 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 36 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_g_free0 (self->priv->comment);
#line 36 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self->priv->comment = _tmp1_;
#line 168 "Thread.c"
}


gchar* thread_getExtension (Thread* self) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 40 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 42 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = self->priv->extension;
#line 42 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 42 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	result = _tmp1_;
#line 42 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return result;
#line 186 "Thread.c"
}


void thread_setExtension (Thread* self, const gchar* extension) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 46 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (self != NULL);
#line 46 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (extension != NULL);
#line 48 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = extension;
#line 48 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 48 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_g_free0 (self->priv->extension);
#line 48 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self->priv->extension = _tmp1_;
#line 205 "Thread.c"
}


gchar* thread_getDate (Thread* self) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 52 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 54 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = self->priv->date;
#line 54 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 54 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	result = _tmp1_;
#line 54 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return result;
#line 223 "Thread.c"
}


void thread_setDate (Thread* self, const gchar* date) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 58 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (self != NULL);
#line 58 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (date != NULL);
#line 60 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = date;
#line 60 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 60 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_g_free0 (self->priv->date);
#line 60 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self->priv->date = _tmp1_;
#line 242 "Thread.c"
}


gint64 thread_getFilename (Thread* self) {
	gint64 result = 0LL;
	gint64 _tmp0_;
#line 64 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_val_if_fail (self != NULL, 0LL);
#line 66 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = self->priv->filename;
#line 66 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	result = _tmp0_;
#line 66 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return result;
#line 257 "Thread.c"
}


void thread_setFilename (Thread* self, gint64 filename) {
	gint64 _tmp0_;
#line 70 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (self != NULL);
#line 72 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = filename;
#line 72 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self->priv->filename = _tmp0_;
#line 269 "Thread.c"
}


gint64 thread_getThreadNumber (Thread* self) {
	gint64 result = 0LL;
	gint64 _tmp0_;
#line 76 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_val_if_fail (self != NULL, 0LL);
#line 78 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = self->priv->threadNumber;
#line 78 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	result = _tmp0_;
#line 78 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return result;
#line 284 "Thread.c"
}


void thread_setThreadNumber (Thread* self, gint64 threadNumber) {
	gint64 _tmp0_;
#line 82 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (self != NULL);
#line 84 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_tmp0_ = threadNumber;
#line 84 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self->priv->threadNumber = _tmp0_;
#line 296 "Thread.c"
}


static void value_thread_init (GValue* value) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	value->data[0].v_pointer = NULL;
#line 303 "Thread.c"
}


static void value_thread_free_value (GValue* value) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (value->data[0].v_pointer) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		thread_unref (value->data[0].v_pointer);
#line 312 "Thread.c"
	}
}


static void value_thread_copy_value (const GValue* src_value, GValue* dest_value) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (src_value->data[0].v_pointer) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		dest_value->data[0].v_pointer = thread_ref (src_value->data[0].v_pointer);
#line 322 "Thread.c"
	} else {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		dest_value->data[0].v_pointer = NULL;
#line 326 "Thread.c"
	}
}


static gpointer value_thread_peek_pointer (const GValue* value) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return value->data[0].v_pointer;
#line 334 "Thread.c"
}


static gchar* value_thread_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (collect_values[0].v_pointer) {
#line 341 "Thread.c"
		Thread * object;
		object = collect_values[0].v_pointer;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		if (object->parent_instance.g_class == NULL) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 348 "Thread.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 352 "Thread.c"
		}
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		value->data[0].v_pointer = thread_ref (object);
#line 356 "Thread.c"
	} else {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		value->data[0].v_pointer = NULL;
#line 360 "Thread.c"
	}
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return NULL;
#line 364 "Thread.c"
}


static gchar* value_thread_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	Thread ** object_p;
	object_p = collect_values[0].v_pointer;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (!object_p) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 375 "Thread.c"
	}
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (!value->data[0].v_pointer) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		*object_p = NULL;
#line 381 "Thread.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		*object_p = value->data[0].v_pointer;
#line 385 "Thread.c"
	} else {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		*object_p = thread_ref (value->data[0].v_pointer);
#line 389 "Thread.c"
	}
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return NULL;
#line 393 "Thread.c"
}


GParamSpec* param_spec_thread (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecThread* spec;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_THREAD), NULL);
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return G_PARAM_SPEC (spec);
#line 407 "Thread.c"
}


gpointer value_get_thread (const GValue* value) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_THREAD), NULL);
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return value->data[0].v_pointer;
#line 416 "Thread.c"
}


void value_set_thread (GValue* value, gpointer v_object) {
	Thread * old;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_THREAD));
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	old = value->data[0].v_pointer;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (v_object) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_THREAD));
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		value->data[0].v_pointer = v_object;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		thread_ref (value->data[0].v_pointer);
#line 436 "Thread.c"
	} else {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		value->data[0].v_pointer = NULL;
#line 440 "Thread.c"
	}
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (old) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		thread_unref (old);
#line 446 "Thread.c"
	}
}


void value_take_thread (GValue* value, gpointer v_object) {
	Thread * old;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_THREAD));
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	old = value->data[0].v_pointer;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (v_object) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_THREAD));
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		value->data[0].v_pointer = v_object;
#line 465 "Thread.c"
	} else {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		value->data[0].v_pointer = NULL;
#line 469 "Thread.c"
	}
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (old) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		thread_unref (old);
#line 475 "Thread.c"
	}
}


static void thread_class_init (ThreadClass * klass) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	thread_parent_class = g_type_class_peek_parent (klass);
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	((ThreadClass *) klass)->finalize = thread_finalize;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_type_class_add_private (klass, sizeof (ThreadPrivate));
#line 487 "Thread.c"
}


static void thread_instance_init (Thread * self) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self->priv = THREAD_GET_PRIVATE (self);
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self->ref_count = 1;
#line 496 "Thread.c"
}


static void thread_finalize (Thread * obj) {
	Thread * self;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_THREAD, Thread);
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_signal_handlers_destroy (self);
#line 3 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_g_free0 (self->priv->subject);
#line 4 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_g_free0 (self->priv->comment);
#line 5 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_g_free0 (self->priv->extension);
#line 6 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	_g_free0 (self->priv->date);
#line 514 "Thread.c"
}


GType thread_get_type (void) {
	static volatile gsize thread_type_id__volatile = 0;
	if (g_once_init_enter (&thread_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_thread_init, value_thread_free_value, value_thread_copy_value, value_thread_peek_pointer, "p", value_thread_collect_value, "p", value_thread_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ThreadClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) thread_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Thread), 0, (GInstanceInitFunc) thread_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType thread_type_id;
		thread_type_id = g_type_register_fundamental (g_type_fundamental_next (), "Thread", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&thread_type_id__volatile, thread_type_id);
	}
	return thread_type_id__volatile;
}


gpointer thread_ref (gpointer instance) {
	Thread * self;
	self = instance;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	g_atomic_int_inc (&self->ref_count);
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	return instance;
#line 539 "Thread.c"
}


void thread_unref (gpointer instance) {
	Thread * self;
	self = instance;
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		THREAD_GET_CLASS (self)->finalize (self);
#line 1 "/media/dcharles/6caf58d5-d873-41ac-930d-63ff042b1cad/Documents/Pho/src/Thread.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 552 "Thread.c"
	}
}


