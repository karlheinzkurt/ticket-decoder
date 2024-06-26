/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v2.0.2.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#include "FIPTicketData.h"

static int
memb_NativeInteger_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_NativeInteger_constraint_12(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32000)) {
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
memb_productOwnerNum_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32000)) {
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
memb_productIdNum_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
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
	
	if((value >= -1 && value <= 700)) {
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
	
	if((value >= -1 && value <= 370)) {
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
memb_numberOfTravelDays_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 200)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  370 }	/* (0..370) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_Member_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  1,  32000 }	/* (1..32000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_productOwnerNum_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  1,  32000 }	/* (1..32000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_productIdNum_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_validFromDay_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10, -1,  700 }	/* (-1..700) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_validUntilDay_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9, -1,  370 }	/* (-1..370) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_numberOfTravelDays_constr_16 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  1,  200 }	/* (1..200) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_8_set_0(int set_value, void **sptr) {
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
static int asn_DFL_9_set_0(int set_value, void **sptr) {
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
static asn_TYPE_member_t asn_MBR_activatedDay_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_NativeInteger_constraint_10,
		&asn_PER_memb_Member_constr_11,
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_activatedDay_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_activatedDay_specs_10 = {
	sizeof(struct FIPTicketData__activatedDay),
	offsetof(struct FIPTicketData__activatedDay, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_activatedDay_10 = {
	"activatedDay",
	"activatedDay",
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
	asn_DEF_activatedDay_tags_10,
	sizeof(asn_DEF_activatedDay_tags_10)
		/sizeof(asn_DEF_activatedDay_tags_10[0]) - 1, /* 1 */
	asn_DEF_activatedDay_tags_10,	/* Same as above */
	sizeof(asn_DEF_activatedDay_tags_10)
		/sizeof(asn_DEF_activatedDay_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_activatedDay_10,
	1,	/* Single element */
	&asn_SPC_activatedDay_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_carrierNum_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_NativeInteger_constraint_12,
		&asn_PER_memb_Member_constr_13,
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_carrierNum_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_carrierNum_specs_12 = {
	sizeof(struct FIPTicketData__carrierNum),
	offsetof(struct FIPTicketData__carrierNum, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierNum_12 = {
	"carrierNum",
	"carrierNum",
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
	asn_DEF_carrierNum_tags_12,
	sizeof(asn_DEF_carrierNum_tags_12)
		/sizeof(asn_DEF_carrierNum_tags_12[0]) - 1, /* 1 */
	asn_DEF_carrierNum_tags_12,	/* Same as above */
	sizeof(asn_DEF_carrierNum_tags_12)
		/sizeof(asn_DEF_carrierNum_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_carrierNum_12,
	1,	/* Single element */
	&asn_SPC_carrierNum_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_carrierIA5_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (22 << 2)),
		0,
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_carrierIA5_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_carrierIA5_specs_14 = {
	sizeof(struct FIPTicketData__carrierIA5),
	offsetof(struct FIPTicketData__carrierIA5, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierIA5_14 = {
	"carrierIA5",
	"carrierIA5",
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
	asn_DEF_carrierIA5_tags_14,
	sizeof(asn_DEF_carrierIA5_tags_14)
		/sizeof(asn_DEF_carrierIA5_tags_14[0]) - 1, /* 1 */
	asn_DEF_carrierIA5_tags_14,	/* Same as above */
	sizeof(asn_DEF_carrierIA5_tags_14)
		/sizeof(asn_DEF_carrierIA5_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_carrierIA5_14,
	1,	/* Single element */
	&asn_SPC_carrierIA5_specs_14	/* Additional specs */
};

static int asn_DFL_18_set_2(int set_value, void **sptr) {
	TravelClassType_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 2 */
		return asn_long2INTEGER(st, 2);
	} else {
		/* Test default value 2 */
		long value;
		if(asn_INTEGER2long(st, &value))
			return -1;
		return (value == 2);
	}
}
static asn_TYPE_member_t asn_MBR_FIPTicketData_1[] = {
	{ ATF_POINTER, 11, offsetof(struct FIPTicketData, referenceIA5),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceIA5"
		},
	{ ATF_POINTER, 10, offsetof(struct FIPTicketData, referenceNum),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceNum"
		},
	{ ATF_POINTER, 9, offsetof(struct FIPTicketData, productOwnerNum),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_productOwnerNum_constraint_1,
		&asn_PER_memb_productOwnerNum_constr_4,
		0,
		"productOwnerNum"
		},
	{ ATF_POINTER, 8, offsetof(struct FIPTicketData, productOwnerIA5),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"productOwnerIA5"
		},
	{ ATF_POINTER, 7, offsetof(struct FIPTicketData, productIdNum),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_productIdNum_constraint_1,
		&asn_PER_memb_productIdNum_constr_6,
		0,
		"productIdNum"
		},
	{ ATF_POINTER, 6, offsetof(struct FIPTicketData, productIdIA5),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"productIdIA5"
		},
	{ ATF_NOFLAGS, 5, offsetof(struct FIPTicketData, validFromDay),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_validFromDay_constraint_1,
		&asn_PER_memb_validFromDay_constr_8,
		asn_DFL_8_set_0,	/* DEFAULT 0 */
		"validFromDay"
		},
	{ ATF_NOFLAGS, 4, offsetof(struct FIPTicketData, validUntilDay),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_validUntilDay_constraint_1,
		&asn_PER_memb_validUntilDay_constr_9,
		asn_DFL_9_set_0,	/* DEFAULT 0 */
		"validUntilDay"
		},
	{ ATF_POINTER, 3, offsetof(struct FIPTicketData, activatedDay),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_activatedDay_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activatedDay"
		},
	{ ATF_POINTER, 2, offsetof(struct FIPTicketData, carrierNum),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_carrierNum_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierNum"
		},
	{ ATF_POINTER, 1, offsetof(struct FIPTicketData, carrierIA5),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_carrierIA5_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierIA5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FIPTicketData, numberOfTravelDays),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_numberOfTravelDays_constraint_1,
		&asn_PER_memb_numberOfTravelDays_constr_16,
		0,
		"numberOfTravelDays"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FIPTicketData, includesSupplements),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"includesSupplements"
		},
	{ ATF_POINTER, 2, offsetof(struct FIPTicketData, classCode),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TravelClassType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_18_set_2,	/* DEFAULT 2 */
		"classCode"
		},
	{ ATF_POINTER, 1, offsetof(struct FIPTicketData, extension),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extension"
		},
};
static const int asn_MAP_FIPTicketData_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14 };
static const ber_tlv_tag_t asn_DEF_FIPTicketData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FIPTicketData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* referenceIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* referenceNum */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* productOwnerNum */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* productOwnerIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* productIdNum */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* productIdIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* validFromDay */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* validUntilDay */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* activatedDay */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* carrierNum */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* carrierIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* numberOfTravelDays */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* includesSupplements */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* classCode */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 } /* extension */
};
static asn_SEQUENCE_specifics_t asn_SPC_FIPTicketData_specs_1 = {
	sizeof(struct FIPTicketData),
	offsetof(struct FIPTicketData, _asn_ctx),
	asn_MAP_FIPTicketData_tag2el_1,
	15,	/* Count of tags in the map */
	asn_MAP_FIPTicketData_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	14,	/* Start extensions */
	16	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FIPTicketData = {
	"FIPTicketData",
	"FIPTicketData",
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
	asn_DEF_FIPTicketData_tags_1,
	sizeof(asn_DEF_FIPTicketData_tags_1)
		/sizeof(asn_DEF_FIPTicketData_tags_1[0]), /* 1 */
	asn_DEF_FIPTicketData_tags_1,	/* Same as above */
	sizeof(asn_DEF_FIPTicketData_tags_1)
		/sizeof(asn_DEF_FIPTicketData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FIPTicketData_1,
	15,	/* Elements count */
	&asn_SPC_FIPTicketData_specs_1	/* Additional specs */
};

