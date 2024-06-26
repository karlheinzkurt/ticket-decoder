/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v1.3.4.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#include "CustomerCardData.h"

static int
memb_validFromYear_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2016 && value <= 2269)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_validFromDay_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 370)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_validUntilYear_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 250)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_validUntilDay_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 370)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cardType_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 1000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_validFromYear_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  2016,  2269 }	/* (2016..2269) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_validFromDay_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  370 }	/* (0..370) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_validUntilYear_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  250 }	/* (0..250) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_validUntilDay_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  370 }	/* (0..370) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cardType_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  1,  1000 }	/* (1..1000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_7_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_includedServices_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_includedServices_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_includedServices_specs_14 = {
	sizeof(struct CustomerCardData__includedServices),
	offsetof(struct CustomerCardData__includedServices, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_includedServices_14 = {
	"includedServices",
	"includedServices",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_includedServices_tags_14,
	sizeof(asn_DEF_includedServices_tags_14)
		/sizeof(asn_DEF_includedServices_tags_14[0]) - 1, /* 1 */
	asn_DEF_includedServices_tags_14,	/* Same as above */
	sizeof(asn_DEF_includedServices_tags_14)
		/sizeof(asn_DEF_includedServices_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_includedServices_14,
	1,	/* Single element */
	&asn_SPC_includedServices_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CustomerCardData_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CustomerCardData, customer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TravelerType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"customer"
		},
	{ ATF_POINTER, 2, offsetof(struct CustomerCardData, cardIdIA5),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cardIdIA5"
		},
	{ ATF_POINTER, 1, offsetof(struct CustomerCardData, cardIdNum),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cardIdNum"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CustomerCardData, validFromYear),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_validFromYear_constraint_1,
		&asn_PER_memb_validFromYear_constr_5,
		0,
		"validFromYear"
		},
	{ ATF_POINTER, 10, offsetof(struct CustomerCardData, validFromDay),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_validFromDay_constraint_1,
		&asn_PER_memb_validFromDay_constr_6,
		0,
		"validFromDay"
		},
	{ ATF_NOFLAGS, 9, offsetof(struct CustomerCardData, validUntilYear),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_validUntilYear_constraint_1,
		&asn_PER_memb_validUntilYear_constr_7,
		asn_DFL_7_set_0,	/* DEFAULT 0 */
		"validUntilYear"
		},
	{ ATF_POINTER, 8, offsetof(struct CustomerCardData, validUntilDay),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_validUntilDay_constraint_1,
		&asn_PER_memb_validUntilDay_constr_8,
		0,
		"validUntilDay"
		},
	{ ATF_POINTER, 7, offsetof(struct CustomerCardData, classCode),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TravelClassType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"classCode"
		},
	{ ATF_POINTER, 6, offsetof(struct CustomerCardData, cardType),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cardType_constraint_1,
		&asn_PER_memb_cardType_constr_10,
		0,
		"cardType"
		},
	{ ATF_POINTER, 5, offsetof(struct CustomerCardData, cardTypeDescr),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTF8String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cardTypeDescr"
		},
	{ ATF_POINTER, 4, offsetof(struct CustomerCardData, customerStatus),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"customerStatus"
		},
	{ ATF_POINTER, 3, offsetof(struct CustomerCardData, customerStatusDescr),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"customerStatusDescr"
		},
	{ ATF_POINTER, 2, offsetof(struct CustomerCardData, includedServices),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_includedServices_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"includedServices"
		},
	{ ATF_POINTER, 1, offsetof(struct CustomerCardData, extension),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extension"
		},
};
static const int asn_MAP_CustomerCardData_oms_1[] = { 0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
static const ber_tlv_tag_t asn_DEF_CustomerCardData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CustomerCardData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* customer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cardIdIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cardIdNum */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* validFromYear */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* validFromDay */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* validUntilYear */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* validUntilDay */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* classCode */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cardType */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cardTypeDescr */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* customerStatus */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* customerStatusDescr */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* includedServices */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* extension */
};
static asn_SEQUENCE_specifics_t asn_SPC_CustomerCardData_specs_1 = {
	sizeof(struct CustomerCardData),
	offsetof(struct CustomerCardData, _asn_ctx),
	asn_MAP_CustomerCardData_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_CustomerCardData_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	13,	/* Start extensions */
	15	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CustomerCardData = {
	"CustomerCardData",
	"CustomerCardData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CustomerCardData_tags_1,
	sizeof(asn_DEF_CustomerCardData_tags_1)
		/sizeof(asn_DEF_CustomerCardData_tags_1[0]), /* 1 */
	asn_DEF_CustomerCardData_tags_1,	/* Same as above */
	sizeof(asn_DEF_CustomerCardData_tags_1)
		/sizeof(asn_DEF_CustomerCardData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CustomerCardData_1,
	14,	/* Elements count */
	&asn_SPC_CustomerCardData_specs_1	/* Additional specs */
};

