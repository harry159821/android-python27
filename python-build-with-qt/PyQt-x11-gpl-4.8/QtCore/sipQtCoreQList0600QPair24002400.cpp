/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 419 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 40 "sipQtCoreQList0600QPair24002400.cpp"



extern "C" {static void assign_QList_0600QPair_2400_2400(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0600QPair_2400_2400(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPair<qreal,qreal> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPair<qreal,qreal> > *>(sipSrc);
}


extern "C" {static void *array_QList_0600QPair_2400_2400(SIP_SSIZE_T);}
static void *array_QList_0600QPair_2400_2400(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPair<qreal,qreal> >[sipNrElem];
}


extern "C" {static void *copy_QList_0600QPair_2400_2400(const void *, SIP_SSIZE_T);}
static void *copy_QList_0600QPair_2400_2400(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPair<qreal,qreal> >(reinterpret_cast<const QList<QPair<qreal,qreal> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0600QPair_2400_2400(void *, int);}
static void release_QList_0600QPair_2400_2400(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QPair<qreal,qreal> > *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0600QPair_2400_2400(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0600QPair_2400_2400(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QPair<qreal,qreal> > **sipCppPtr = reinterpret_cast<QList<QPair<qreal,qreal> > **>(sipCppPtrV);

#line 450 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *seq = PySequence_ITEM(sipPy, i);

            if (!seq || !PySequence_Check(seq) || PySequence_Size(seq) != 2)
            {
                Py_XDECREF(seq);
                return 0;
            }
        }

        return 1;
    }

    QList<QPair<qreal, qreal> > *ql = new QList<QPair<qreal, qreal> >;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *seq = PySequence_ITEM(sipPy, i);
        PyObject *itm0 = PySequence_ITEM(seq, 0);
        PyObject *itm1 = PySequence_ITEM(seq, 1);

        Py_DECREF(seq);

        if (!itm0 || !itm1)
        {
            Py_XDECREF(itm0);
            Py_XDECREF(itm1);

            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        qreal first = PyFloat_AsDouble(itm0);
        qreal second = PyFloat_AsDouble(itm1);
 
        Py_DECREF(itm0);
        Py_DECREF(itm1);

        ql->append(QPair<qreal, qreal>(first, second));
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 138 "sipQtCoreQList0600QPair24002400.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0600QPair_2400_2400(void *, PyObject *);}
static PyObject *convertFrom_QList_0600QPair_2400_2400(void *sipCppV,PyObject *)
{
   QList<QPair<qreal,qreal> > *sipCpp = reinterpret_cast<QList<QPair<qreal,qreal> > *>(sipCppV);

#line 424 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<qreal, qreal> &p = sipCpp->at(i);
        PyObject *pobj;

        if ((pobj = Py_BuildValue((char *)"dd", p.first, p.second)) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 171 "sipQtCoreQList0600QPair24002400.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0600QPair_2400_2400 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2827,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0600QPair_2400_2400,
    array_QList_0600QPair_2400_2400,
    copy_QList_0600QPair_2400_2400,
    release_QList_0600QPair_2400_2400,
    convertTo_QList_0600QPair_2400_2400,
    convertFrom_QList_0600QPair_2400_2400
};
