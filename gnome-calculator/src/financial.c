/* financial.c generated by valac 0.20.1, the Vala compiler
 * generated from financial.vala, do not modify */

/*
 * Copyright (C) 1987-2008 Sun Microsystems, Inc. All Rights Reserved.
 * Copyright (C) 2008-2012 Robert Ancell
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version. See http://www.gnu.org/copyleft/gpl.html the full text of the
 * license.
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_FINANCIAL_DIALOG (financial_dialog_get_type ())

#define TYPE_MATH_EQUATION (math_equation_get_type ())
#define MATH_EQUATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MATH_EQUATION, MathEquation))
#define MATH_EQUATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MATH_EQUATION, MathEquationClass))
#define IS_MATH_EQUATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MATH_EQUATION))
#define IS_MATH_EQUATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MATH_EQUATION))
#define MATH_EQUATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MATH_EQUATION, MathEquationClass))

typedef struct _MathEquation MathEquation;
typedef struct _MathEquationClass MathEquationClass;

#define TYPE_NUMBER (number_get_type ())
#define NUMBER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_NUMBER, Number))
#define NUMBER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_NUMBER, NumberClass))
#define IS_NUMBER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_NUMBER))
#define IS_NUMBER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_NUMBER))
#define NUMBER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_NUMBER, NumberClass))

typedef struct _Number Number;
typedef struct _NumberClass NumberClass;
#define _number_unref0(var) ((var == NULL) ? NULL : (var = (number_unref (var), NULL)))

typedef enum  {
	FINANCIAL_DIALOG_CTRM_DIALOG,
	FINANCIAL_DIALOG_DDB_DIALOG,
	FINANCIAL_DIALOG_FV_DIALOG,
	FINANCIAL_DIALOG_GPM_DIALOG,
	FINANCIAL_DIALOG_PMT_DIALOG,
	FINANCIAL_DIALOG_PV_DIALOG,
	FINANCIAL_DIALOG_RATE_DIALOG,
	FINANCIAL_DIALOG_SLN_DIALOG,
	FINANCIAL_DIALOG_SYD_DIALOG,
	FINANCIAL_DIALOG_TERM_DIALOG
} FinancialDialog;



GType financial_dialog_get_type (void) G_GNUC_CONST;
GType math_equation_get_type (void) G_GNUC_CONST;
gpointer number_ref (gpointer instance);
void number_unref (gpointer instance);
GParamSpec* param_spec_number (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_number (GValue* value, gpointer v_object);
void value_take_number (GValue* value, gpointer v_object);
gpointer value_get_number (const GValue* value);
GType number_get_type (void) G_GNUC_CONST;
void do_finc_expression (MathEquation* equation, FinancialDialog function, Number* arg1, Number* arg2, Number* arg3, Number* arg4);
Number* calc_ctrm (MathEquation* equation, Number* pint, Number* fv, Number* pv);
Number* calc_ddb (MathEquation* equation, Number* cost, Number* life, Number* period);
Number* calc_fv (MathEquation* equation, Number* pmt, Number* pint, Number* n);
Number* calc_gpm (MathEquation* equation, Number* cost, Number* margin);
Number* calc_pmt (MathEquation* equation, Number* prin, Number* pint, Number* n);
Number* calc_pv (MathEquation* equation, Number* pmt, Number* pint, Number* n);
Number* calc_rate (MathEquation* equation, Number* fv, Number* pv, Number* n);
Number* calc_sln (MathEquation* equation, Number* cost, Number* salvage, Number* life);
Number* calc_syd (MathEquation* equation, Number* cost, Number* salvage, Number* life, Number* period);
Number* calc_term (MathEquation* equation, Number* pmt, Number* fv, Number* pint);
Number* number_new_integer (gint64 value);
Number* number_construct_integer (GType object_type, gint64 value);
void math_equation_set_number (MathEquation* self, Number* x, guint representation_base);
Number* number_divide (Number* self, Number* y);
Number* number_ln (Number* self);
Number* number_add (Number* self, Number* y);
gint64 number_to_integer (Number* self);
Number* number_subtract (Number* self, Number* y);
Number* number_multiply_integer (Number* self, gint64 y);
void math_equation_set_status (MathEquation* self, const gchar* value);
Number* number_xpowy (Number* self, Number* y);
Number* number_multiply (Number* self, Number* y);


GType financial_dialog_get_type (void) {
	static volatile gsize financial_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&financial_dialog_type_id__volatile)) {
		static const GEnumValue values[] = {{FINANCIAL_DIALOG_CTRM_DIALOG, "FINANCIAL_DIALOG_CTRM_DIALOG", "ctrm-dialog"}, {FINANCIAL_DIALOG_DDB_DIALOG, "FINANCIAL_DIALOG_DDB_DIALOG", "ddb-dialog"}, {FINANCIAL_DIALOG_FV_DIALOG, "FINANCIAL_DIALOG_FV_DIALOG", "fv-dialog"}, {FINANCIAL_DIALOG_GPM_DIALOG, "FINANCIAL_DIALOG_GPM_DIALOG", "gpm-dialog"}, {FINANCIAL_DIALOG_PMT_DIALOG, "FINANCIAL_DIALOG_PMT_DIALOG", "pmt-dialog"}, {FINANCIAL_DIALOG_PV_DIALOG, "FINANCIAL_DIALOG_PV_DIALOG", "pv-dialog"}, {FINANCIAL_DIALOG_RATE_DIALOG, "FINANCIAL_DIALOG_RATE_DIALOG", "rate-dialog"}, {FINANCIAL_DIALOG_SLN_DIALOG, "FINANCIAL_DIALOG_SLN_DIALOG", "sln-dialog"}, {FINANCIAL_DIALOG_SYD_DIALOG, "FINANCIAL_DIALOG_SYD_DIALOG", "syd-dialog"}, {FINANCIAL_DIALOG_TERM_DIALOG, "FINANCIAL_DIALOG_TERM_DIALOG", "term-dialog"}, {0, NULL, NULL}};
		GType financial_dialog_type_id;
		financial_dialog_type_id = g_enum_register_static ("FinancialDialog", values);
		g_once_init_leave (&financial_dialog_type_id__volatile, financial_dialog_type_id);
	}
	return financial_dialog_type_id__volatile;
}


void do_finc_expression (MathEquation* equation, FinancialDialog function, Number* arg1, Number* arg2, Number* arg3, Number* arg4) {
	Number* _result_ = NULL;
	FinancialDialog _tmp0_;
	MathEquation* _tmp52_;
	Number* _tmp53_;
	g_return_if_fail (equation != NULL);
	g_return_if_fail (arg1 != NULL);
	g_return_if_fail (arg2 != NULL);
	g_return_if_fail (arg3 != NULL);
	g_return_if_fail (arg4 != NULL);
	_tmp0_ = function;
	switch (_tmp0_) {
		case FINANCIAL_DIALOG_CTRM_DIALOG:
		{
			MathEquation* _tmp1_;
			Number* _tmp2_;
			Number* _tmp3_;
			Number* _tmp4_;
			Number* _tmp5_ = NULL;
			_tmp1_ = equation;
			_tmp2_ = arg1;
			_tmp3_ = arg2;
			_tmp4_ = arg3;
			_tmp5_ = calc_ctrm (_tmp1_, _tmp2_, _tmp3_, _tmp4_);
			_number_unref0 (_result_);
			_result_ = _tmp5_;
			break;
		}
		case FINANCIAL_DIALOG_DDB_DIALOG:
		{
			MathEquation* _tmp6_;
			Number* _tmp7_;
			Number* _tmp8_;
			Number* _tmp9_;
			Number* _tmp10_ = NULL;
			_tmp6_ = equation;
			_tmp7_ = arg1;
			_tmp8_ = arg2;
			_tmp9_ = arg3;
			_tmp10_ = calc_ddb (_tmp6_, _tmp7_, _tmp8_, _tmp9_);
			_number_unref0 (_result_);
			_result_ = _tmp10_;
			break;
		}
		case FINANCIAL_DIALOG_FV_DIALOG:
		{
			MathEquation* _tmp11_;
			Number* _tmp12_;
			Number* _tmp13_;
			Number* _tmp14_;
			Number* _tmp15_ = NULL;
			_tmp11_ = equation;
			_tmp12_ = arg1;
			_tmp13_ = arg2;
			_tmp14_ = arg3;
			_tmp15_ = calc_fv (_tmp11_, _tmp12_, _tmp13_, _tmp14_);
			_number_unref0 (_result_);
			_result_ = _tmp15_;
			break;
		}
		case FINANCIAL_DIALOG_GPM_DIALOG:
		{
			MathEquation* _tmp16_;
			Number* _tmp17_;
			Number* _tmp18_;
			Number* _tmp19_ = NULL;
			_tmp16_ = equation;
			_tmp17_ = arg1;
			_tmp18_ = arg2;
			_tmp19_ = calc_gpm (_tmp16_, _tmp17_, _tmp18_);
			_number_unref0 (_result_);
			_result_ = _tmp19_;
			break;
		}
		case FINANCIAL_DIALOG_PMT_DIALOG:
		{
			MathEquation* _tmp20_;
			Number* _tmp21_;
			Number* _tmp22_;
			Number* _tmp23_;
			Number* _tmp24_ = NULL;
			_tmp20_ = equation;
			_tmp21_ = arg1;
			_tmp22_ = arg2;
			_tmp23_ = arg3;
			_tmp24_ = calc_pmt (_tmp20_, _tmp21_, _tmp22_, _tmp23_);
			_number_unref0 (_result_);
			_result_ = _tmp24_;
			break;
		}
		case FINANCIAL_DIALOG_PV_DIALOG:
		{
			MathEquation* _tmp25_;
			Number* _tmp26_;
			Number* _tmp27_;
			Number* _tmp28_;
			Number* _tmp29_ = NULL;
			_tmp25_ = equation;
			_tmp26_ = arg1;
			_tmp27_ = arg2;
			_tmp28_ = arg3;
			_tmp29_ = calc_pv (_tmp25_, _tmp26_, _tmp27_, _tmp28_);
			_number_unref0 (_result_);
			_result_ = _tmp29_;
			break;
		}
		case FINANCIAL_DIALOG_RATE_DIALOG:
		{
			MathEquation* _tmp30_;
			Number* _tmp31_;
			Number* _tmp32_;
			Number* _tmp33_;
			Number* _tmp34_ = NULL;
			_tmp30_ = equation;
			_tmp31_ = arg1;
			_tmp32_ = arg2;
			_tmp33_ = arg3;
			_tmp34_ = calc_rate (_tmp30_, _tmp31_, _tmp32_, _tmp33_);
			_number_unref0 (_result_);
			_result_ = _tmp34_;
			break;
		}
		case FINANCIAL_DIALOG_SLN_DIALOG:
		{
			MathEquation* _tmp35_;
			Number* _tmp36_;
			Number* _tmp37_;
			Number* _tmp38_;
			Number* _tmp39_ = NULL;
			_tmp35_ = equation;
			_tmp36_ = arg1;
			_tmp37_ = arg2;
			_tmp38_ = arg3;
			_tmp39_ = calc_sln (_tmp35_, _tmp36_, _tmp37_, _tmp38_);
			_number_unref0 (_result_);
			_result_ = _tmp39_;
			break;
		}
		case FINANCIAL_DIALOG_SYD_DIALOG:
		{
			MathEquation* _tmp40_;
			Number* _tmp41_;
			Number* _tmp42_;
			Number* _tmp43_;
			Number* _tmp44_;
			Number* _tmp45_ = NULL;
			_tmp40_ = equation;
			_tmp41_ = arg1;
			_tmp42_ = arg2;
			_tmp43_ = arg3;
			_tmp44_ = arg4;
			_tmp45_ = calc_syd (_tmp40_, _tmp41_, _tmp42_, _tmp43_, _tmp44_);
			_number_unref0 (_result_);
			_result_ = _tmp45_;
			break;
		}
		case FINANCIAL_DIALOG_TERM_DIALOG:
		{
			MathEquation* _tmp46_;
			Number* _tmp47_;
			Number* _tmp48_;
			Number* _tmp49_;
			Number* _tmp50_ = NULL;
			_tmp46_ = equation;
			_tmp47_ = arg1;
			_tmp48_ = arg2;
			_tmp49_ = arg3;
			_tmp50_ = calc_term (_tmp46_, _tmp47_, _tmp48_, _tmp49_);
			_number_unref0 (_result_);
			_result_ = _tmp50_;
			break;
		}
		default:
		{
			Number* _tmp51_;
			_tmp51_ = number_new_integer ((gint64) 0);
			_number_unref0 (_result_);
			_result_ = _tmp51_;
			break;
		}
	}
	_tmp52_ = equation;
	_tmp53_ = _result_;
	math_equation_set_number (_tmp52_, _tmp53_, (guint) 0);
	_number_unref0 (_result_);
}


Number* calc_ctrm (MathEquation* equation, Number* pint, Number* fv, Number* pv) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* _tmp1_;
	Number* _tmp2_ = NULL;
	Number* t1;
	Number* _tmp3_ = NULL;
	Number* t2;
	Number* _tmp4_;
	Number* _tmp5_;
	Number* _tmp6_;
	Number* _tmp7_ = NULL;
	Number* _tmp8_;
	Number* t3;
	Number* _tmp9_ = NULL;
	Number* t4;
	Number* _tmp10_ = NULL;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (pint != NULL, NULL);
	g_return_val_if_fail (fv != NULL, NULL);
	g_return_val_if_fail (pv != NULL, NULL);
	_tmp0_ = fv;
	_tmp1_ = pv;
	_tmp2_ = number_divide (_tmp0_, _tmp1_);
	t1 = _tmp2_;
	_tmp3_ = number_ln (t1);
	t2 = _tmp3_;
	_tmp4_ = pint;
	_tmp5_ = number_new_integer ((gint64) 1);
	_tmp6_ = _tmp5_;
	_tmp7_ = number_add (_tmp4_, _tmp6_);
	_tmp8_ = _tmp7_;
	_number_unref0 (_tmp6_);
	t3 = _tmp8_;
	_tmp9_ = number_ln (t3);
	t4 = _tmp9_;
	_tmp10_ = number_divide (t2, t4);
	result = _tmp10_;
	_number_unref0 (t4);
	_number_unref0 (t3);
	_number_unref0 (t2);
	_number_unref0 (t1);
	return result;
}


static gpointer _number_ref0 (gpointer self) {
	return self ? number_ref (self) : NULL;
}


Number* calc_ddb (MathEquation* equation, Number* cost, Number* life, Number* period) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* z;
	Number* _tmp1_;
	Number* tbv;
	Number* _tmp2_;
	gint64 _tmp3_ = 0LL;
	gint64 len;
	gint64 _tmp22_;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (cost != NULL, NULL);
	g_return_val_if_fail (life != NULL, NULL);
	g_return_val_if_fail (period != NULL, NULL);
	_tmp0_ = number_new_integer ((gint64) 0);
	z = _tmp0_;
	_tmp1_ = number_new_integer ((gint64) 0);
	tbv = _tmp1_;
	_tmp2_ = period;
	_tmp3_ = number_to_integer (_tmp2_);
	len = _tmp3_;
	{
		gint i;
		i = 0;
		{
			gboolean _tmp4_;
			_tmp4_ = TRUE;
			while (TRUE) {
				gboolean _tmp5_;
				gint _tmp7_;
				gint64 _tmp8_;
				Number* _tmp9_;
				Number* _tmp10_;
				Number* _tmp11_ = NULL;
				Number* t1;
				Number* _tmp12_;
				Number* _tmp13_ = NULL;
				Number* t2;
				Number* _tmp14_;
				Number* _tmp15_;
				Number* _tmp16_ = NULL;
				Number* _tmp17_;
				Number* _tmp18_;
				Number* _tmp19_;
				Number* _tmp20_;
				Number* _tmp21_ = NULL;
				_tmp5_ = _tmp4_;
				if (!_tmp5_) {
					gint _tmp6_;
					_tmp6_ = i;
					i = _tmp6_ + 1;
				}
				_tmp4_ = FALSE;
				_tmp7_ = i;
				_tmp8_ = len;
				if (!(((gint64) _tmp7_) < _tmp8_)) {
					break;
				}
				_tmp9_ = cost;
				_tmp10_ = tbv;
				_tmp11_ = number_subtract (_tmp9_, _tmp10_);
				t1 = _tmp11_;
				_tmp12_ = t1;
				_tmp13_ = number_multiply_integer (_tmp12_, (gint64) 2);
				t2 = _tmp13_;
				_tmp14_ = t2;
				_tmp15_ = life;
				_tmp16_ = number_divide (_tmp14_, _tmp15_);
				_number_unref0 (z);
				z = _tmp16_;
				_tmp17_ = tbv;
				_tmp18_ = _number_ref0 (_tmp17_);
				_number_unref0 (t1);
				t1 = _tmp18_;
				_tmp19_ = t1;
				_tmp20_ = z;
				_tmp21_ = number_add (_tmp19_, _tmp20_);
				_number_unref0 (tbv);
				tbv = _tmp21_;
				_number_unref0 (t2);
				_number_unref0 (t1);
			}
		}
	}
	_tmp22_ = len;
	if (_tmp22_ >= ((gint64) 0)) {
		MathEquation* _tmp23_;
		const gchar* _tmp24_ = NULL;
		_tmp23_ = equation;
		_tmp24_ = _ ("Error: the number of periods must be positive");
		math_equation_set_status (_tmp23_, _tmp24_);
	}
	result = z;
	_number_unref0 (tbv);
	return result;
}


Number* calc_fv (MathEquation* equation, Number* pmt, Number* pint, Number* n) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* _tmp1_;
	Number* _tmp2_;
	Number* _tmp3_ = NULL;
	Number* _tmp4_;
	Number* t1;
	Number* _tmp5_;
	Number* _tmp6_ = NULL;
	Number* t2;
	Number* _tmp7_;
	Number* _tmp8_;
	Number* _tmp9_ = NULL;
	Number* _tmp10_;
	Number* t3;
	Number* _tmp11_;
	Number* _tmp12_ = NULL;
	Number* t4;
	Number* _tmp13_;
	Number* _tmp14_ = NULL;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (pmt != NULL, NULL);
	g_return_val_if_fail (pint != NULL, NULL);
	g_return_val_if_fail (n != NULL, NULL);
	_tmp0_ = pint;
	_tmp1_ = number_new_integer ((gint64) 1);
	_tmp2_ = _tmp1_;
	_tmp3_ = number_add (_tmp0_, _tmp2_);
	_tmp4_ = _tmp3_;
	_number_unref0 (_tmp2_);
	t1 = _tmp4_;
	_tmp5_ = n;
	_tmp6_ = number_xpowy (t1, _tmp5_);
	t2 = _tmp6_;
	_tmp7_ = number_new_integer ((gint64) (-1));
	_tmp8_ = _tmp7_;
	_tmp9_ = number_add (t2, _tmp8_);
	_tmp10_ = _tmp9_;
	_number_unref0 (_tmp8_);
	t3 = _tmp10_;
	_tmp11_ = pmt;
	_tmp12_ = number_multiply (_tmp11_, t3);
	t4 = _tmp12_;
	_tmp13_ = pint;
	_tmp14_ = number_divide (t4, _tmp13_);
	result = _tmp14_;
	_number_unref0 (t4);
	_number_unref0 (t3);
	_number_unref0 (t2);
	_number_unref0 (t1);
	return result;
}


Number* calc_gpm (MathEquation* equation, Number* cost, Number* margin) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* t1;
	Number* _tmp1_;
	Number* _tmp2_ = NULL;
	Number* t2;
	Number* _tmp3_;
	Number* _tmp4_ = NULL;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (cost != NULL, NULL);
	g_return_val_if_fail (margin != NULL, NULL);
	_tmp0_ = number_new_integer ((gint64) 1);
	t1 = _tmp0_;
	_tmp1_ = margin;
	_tmp2_ = number_subtract (t1, _tmp1_);
	t2 = _tmp2_;
	_tmp3_ = cost;
	_tmp4_ = number_divide (_tmp3_, t2);
	result = _tmp4_;
	_number_unref0 (t2);
	_number_unref0 (t1);
	return result;
}


Number* calc_pmt (MathEquation* equation, Number* prin, Number* pint, Number* n) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* _tmp1_;
	Number* _tmp2_;
	Number* _tmp3_ = NULL;
	Number* _tmp4_;
	Number* t1;
	Number* _tmp5_;
	Number* _tmp6_ = NULL;
	Number* t2;
	Number* _tmp7_;
	Number* _tmp8_;
	Number* _tmp9_ = NULL;
	Number* t3;
	Number* _tmp10_ = NULL;
	Number* t4;
	Number* _tmp11_;
	Number* _tmp12_;
	Number* _tmp13_ = NULL;
	Number* _tmp14_;
	Number* _tmp15_;
	Number* _tmp16_ = NULL;
	Number* _tmp17_;
	Number* _tmp18_;
	Number* _tmp19_ = NULL;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (prin != NULL, NULL);
	g_return_val_if_fail (pint != NULL, NULL);
	g_return_val_if_fail (n != NULL, NULL);
	_tmp0_ = pint;
	_tmp1_ = number_new_integer ((gint64) 1);
	_tmp2_ = _tmp1_;
	_tmp3_ = number_add (_tmp0_, _tmp2_);
	_tmp4_ = _tmp3_;
	_number_unref0 (_tmp2_);
	t1 = _tmp4_;
	_tmp5_ = n;
	_tmp6_ = number_multiply_integer (_tmp5_, (gint64) (-1));
	t2 = _tmp6_;
	_tmp7_ = t1;
	_tmp8_ = t2;
	_tmp9_ = number_xpowy (_tmp7_, _tmp8_);
	t3 = _tmp9_;
	_tmp10_ = number_multiply_integer (t3, (gint64) (-1));
	t4 = _tmp10_;
	_tmp11_ = number_new_integer ((gint64) 1);
	_tmp12_ = _tmp11_;
	_tmp13_ = number_add (t4, _tmp12_);
	_number_unref0 (t1);
	t1 = _tmp13_;
	_number_unref0 (_tmp12_);
	_tmp14_ = pint;
	_tmp15_ = t1;
	_tmp16_ = number_divide (_tmp14_, _tmp15_);
	_number_unref0 (t2);
	t2 = _tmp16_;
	_tmp17_ = prin;
	_tmp18_ = t2;
	_tmp19_ = number_multiply (_tmp17_, _tmp18_);
	result = _tmp19_;
	_number_unref0 (t4);
	_number_unref0 (t3);
	_number_unref0 (t2);
	_number_unref0 (t1);
	return result;
}


Number* calc_pv (MathEquation* equation, Number* pmt, Number* pint, Number* n) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* _tmp1_;
	Number* _tmp2_;
	Number* _tmp3_ = NULL;
	Number* _tmp4_;
	Number* t1;
	Number* _tmp5_;
	Number* _tmp6_ = NULL;
	Number* t2;
	Number* _tmp7_;
	Number* _tmp8_;
	Number* _tmp9_ = NULL;
	Number* t3;
	Number* _tmp10_ = NULL;
	Number* t4;
	Number* _tmp11_;
	Number* _tmp12_;
	Number* _tmp13_ = NULL;
	Number* _tmp14_;
	Number* _tmp15_;
	Number* _tmp16_ = NULL;
	Number* _tmp17_;
	Number* _tmp18_;
	Number* _tmp19_ = NULL;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (pmt != NULL, NULL);
	g_return_val_if_fail (pint != NULL, NULL);
	g_return_val_if_fail (n != NULL, NULL);
	_tmp0_ = pint;
	_tmp1_ = number_new_integer ((gint64) 1);
	_tmp2_ = _tmp1_;
	_tmp3_ = number_add (_tmp0_, _tmp2_);
	_tmp4_ = _tmp3_;
	_number_unref0 (_tmp2_);
	t1 = _tmp4_;
	_tmp5_ = n;
	_tmp6_ = number_multiply_integer (_tmp5_, (gint64) (-1));
	t2 = _tmp6_;
	_tmp7_ = t1;
	_tmp8_ = t2;
	_tmp9_ = number_xpowy (_tmp7_, _tmp8_);
	t3 = _tmp9_;
	_tmp10_ = number_multiply_integer (t3, (gint64) (-1));
	t4 = _tmp10_;
	_tmp11_ = number_new_integer ((gint64) 1);
	_tmp12_ = _tmp11_;
	_tmp13_ = number_add (t4, _tmp12_);
	_number_unref0 (t1);
	t1 = _tmp13_;
	_number_unref0 (_tmp12_);
	_tmp14_ = t1;
	_tmp15_ = pint;
	_tmp16_ = number_divide (_tmp14_, _tmp15_);
	_number_unref0 (t2);
	t2 = _tmp16_;
	_tmp17_ = pmt;
	_tmp18_ = t2;
	_tmp19_ = number_multiply (_tmp17_, _tmp18_);
	result = _tmp19_;
	_number_unref0 (t4);
	_number_unref0 (t3);
	_number_unref0 (t2);
	_number_unref0 (t1);
	return result;
}


Number* calc_rate (MathEquation* equation, Number* fv, Number* pv, Number* n) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* _tmp1_;
	Number* _tmp2_ = NULL;
	Number* t1;
	Number* _tmp3_;
	Number* t2;
	Number* _tmp4_;
	Number* _tmp5_ = NULL;
	Number* t3;
	Number* _tmp6_ = NULL;
	Number* t4;
	Number* _tmp7_;
	Number* _tmp8_;
	Number* _tmp9_ = NULL;
	Number* _tmp10_;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (fv != NULL, NULL);
	g_return_val_if_fail (pv != NULL, NULL);
	g_return_val_if_fail (n != NULL, NULL);
	_tmp0_ = fv;
	_tmp1_ = pv;
	_tmp2_ = number_divide (_tmp0_, _tmp1_);
	t1 = _tmp2_;
	_tmp3_ = number_new_integer ((gint64) 1);
	t2 = _tmp3_;
	_tmp4_ = n;
	_tmp5_ = number_divide (t2, _tmp4_);
	t3 = _tmp5_;
	_tmp6_ = number_xpowy (t1, t3);
	t4 = _tmp6_;
	_tmp7_ = number_new_integer ((gint64) (-1));
	_tmp8_ = _tmp7_;
	_tmp9_ = number_add (t4, _tmp8_);
	_tmp10_ = _tmp9_;
	_number_unref0 (_tmp8_);
	result = _tmp10_;
	_number_unref0 (t4);
	_number_unref0 (t3);
	_number_unref0 (t2);
	_number_unref0 (t1);
	return result;
}


Number* calc_sln (MathEquation* equation, Number* cost, Number* salvage, Number* life) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* _tmp1_;
	Number* _tmp2_ = NULL;
	Number* t1;
	Number* _tmp3_;
	Number* _tmp4_ = NULL;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (cost != NULL, NULL);
	g_return_val_if_fail (salvage != NULL, NULL);
	g_return_val_if_fail (life != NULL, NULL);
	_tmp0_ = cost;
	_tmp1_ = salvage;
	_tmp2_ = number_subtract (_tmp0_, _tmp1_);
	t1 = _tmp2_;
	_tmp3_ = life;
	_tmp4_ = number_divide (t1, _tmp3_);
	result = _tmp4_;
	_number_unref0 (t1);
	return result;
}


Number* calc_syd (MathEquation* equation, Number* cost, Number* salvage, Number* life, Number* period) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* _tmp1_;
	Number* _tmp2_ = NULL;
	Number* _tmp3_;
	Number* _tmp4_;
	Number* _tmp5_;
	Number* _tmp6_ = NULL;
	Number* _tmp7_;
	Number* t3;
	Number* _tmp8_;
	Number* _tmp9_;
	Number* _tmp10_;
	Number* _tmp11_ = NULL;
	Number* _tmp12_;
	Number* t2;
	Number* _tmp13_;
	Number* _tmp14_;
	Number* _tmp15_ = NULL;
	Number* t4;
	Number* _tmp16_;
	Number* _tmp17_;
	Number* _tmp18_ = NULL;
	Number* _tmp19_;
	Number* t1;
	Number* _tmp20_;
	Number* _tmp21_ = NULL;
	Number* _tmp22_;
	Number* _tmp23_;
	Number* _tmp24_ = NULL;
	Number* _tmp25_;
	Number* _tmp26_;
	Number* _tmp27_ = NULL;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (cost != NULL, NULL);
	g_return_val_if_fail (salvage != NULL, NULL);
	g_return_val_if_fail (life != NULL, NULL);
	g_return_val_if_fail (period != NULL, NULL);
	_tmp0_ = life;
	_tmp1_ = period;
	_tmp2_ = number_subtract (_tmp0_, _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = number_new_integer ((gint64) 1);
	_tmp5_ = _tmp4_;
	_tmp6_ = number_add (_tmp3_, _tmp5_);
	_tmp7_ = _tmp6_;
	_number_unref0 (_tmp5_);
	_number_unref0 (_tmp3_);
	t3 = _tmp7_;
	_tmp8_ = life;
	_tmp9_ = number_new_integer ((gint64) 1);
	_tmp10_ = _tmp9_;
	_tmp11_ = number_add (_tmp8_, _tmp10_);
	_tmp12_ = _tmp11_;
	_number_unref0 (_tmp10_);
	t2 = _tmp12_;
	_tmp13_ = life;
	_tmp14_ = t2;
	_tmp15_ = number_multiply (_tmp13_, _tmp14_);
	t4 = _tmp15_;
	_tmp16_ = number_new_integer ((gint64) 2);
	_tmp17_ = _tmp16_;
	_tmp18_ = number_divide (t4, _tmp17_);
	_tmp19_ = _tmp18_;
	_number_unref0 (_tmp17_);
	t1 = _tmp19_;
	_tmp20_ = t1;
	_tmp21_ = number_divide (t3, _tmp20_);
	_number_unref0 (t2);
	t2 = _tmp21_;
	_tmp22_ = cost;
	_tmp23_ = salvage;
	_tmp24_ = number_subtract (_tmp22_, _tmp23_);
	_number_unref0 (t1);
	t1 = _tmp24_;
	_tmp25_ = t1;
	_tmp26_ = t2;
	_tmp27_ = number_multiply (_tmp25_, _tmp26_);
	result = _tmp27_;
	_number_unref0 (t1);
	_number_unref0 (t4);
	_number_unref0 (t2);
	_number_unref0 (t3);
	return result;
}


Number* calc_term (MathEquation* equation, Number* pmt, Number* fv, Number* pint) {
	Number* result = NULL;
	Number* _tmp0_;
	Number* _tmp1_;
	Number* _tmp2_;
	Number* _tmp3_ = NULL;
	Number* _tmp4_;
	Number* t1;
	Number* _tmp5_;
	Number* _tmp6_ = NULL;
	Number* t2;
	Number* _tmp7_;
	Number* _tmp8_;
	Number* _tmp9_ = NULL;
	Number* _tmp10_;
	Number* _tmp11_;
	Number* _tmp12_ = NULL;
	Number* t3;
	Number* _tmp13_;
	Number* _tmp14_;
	Number* _tmp15_ = NULL;
	Number* _tmp16_;
	Number* t4;
	Number* _tmp17_ = NULL;
	Number* _tmp18_;
	Number* _tmp19_ = NULL;
	g_return_val_if_fail (equation != NULL, NULL);
	g_return_val_if_fail (pmt != NULL, NULL);
	g_return_val_if_fail (fv != NULL, NULL);
	g_return_val_if_fail (pint != NULL, NULL);
	_tmp0_ = pint;
	_tmp1_ = number_new_integer ((gint64) 1);
	_tmp2_ = _tmp1_;
	_tmp3_ = number_add (_tmp0_, _tmp2_);
	_tmp4_ = _tmp3_;
	_number_unref0 (_tmp2_);
	t1 = _tmp4_;
	_tmp5_ = t1;
	_tmp6_ = number_ln (_tmp5_);
	t2 = _tmp6_;
	_tmp7_ = fv;
	_tmp8_ = pint;
	_tmp9_ = number_multiply (_tmp7_, _tmp8_);
	_number_unref0 (t1);
	t1 = _tmp9_;
	_tmp10_ = t1;
	_tmp11_ = pmt;
	_tmp12_ = number_divide (_tmp10_, _tmp11_);
	t3 = _tmp12_;
	_tmp13_ = number_new_integer ((gint64) 1);
	_tmp14_ = _tmp13_;
	_tmp15_ = number_add (t3, _tmp14_);
	_tmp16_ = _tmp15_;
	_number_unref0 (_tmp14_);
	t4 = _tmp16_;
	_tmp17_ = number_ln (t4);
	_number_unref0 (t1);
	t1 = _tmp17_;
	_tmp18_ = t1;
	_tmp19_ = number_divide (_tmp18_, t2);
	result = _tmp19_;
	_number_unref0 (t4);
	_number_unref0 (t3);
	_number_unref0 (t2);
	_number_unref0 (t1);
	return result;
}


