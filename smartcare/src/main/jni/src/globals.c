//
// Created by nikolay on 20.01.16.
//
#include <jni.h>
#include "ontology/smartcare.h"
#include "globals.h"

jobject *GlobalMainActivityClassObject;
jobject *GlobalPatientHelpActivityClassObject;
JavaVM* JVM;
JNIEnv *envGlob;
jclass *GlobalMainActivityClass;
jclass *GlobalPatientHelpActivityClass;
jmethodID GlobalGetHelpRequestNotification;
sslog_node_t *GlobalNode;

jclass *class_question;
jclass *class_questionnaire;
jclass *class_answer;
jclass *class_answer_item;

jmethodID questionnaire_constructor;
jmethodID add_question;
jmethodID question_constructor;
jmethodID answer_constructor;
jmethodID add_answer;
jmethodID add_subanswer;
jmethodID item_constructor;
jmethodID add_answer_item_i;

jclass *class_feedback;
jclass *class_response;
jclass *class_response_item;
jmethodID feedback_constructor;
jmethodID response_constructor;
jmethodID response_item_constructor;
jmethodID add_response;
jmethodID add_response_item;
jmethodID add_linked_answer_item;











