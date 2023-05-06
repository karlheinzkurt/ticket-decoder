/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../etc/UIC-barcode/misc/uicRailTicketData_v1.3.3.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#include "DelayConfirmation.h"

static int
memb_departureYear_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_departureDay_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 366)) {
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
memb_departureTime_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1440)) {
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
memb_departureUTCOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= 60)) {
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
memb_stationNum_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 9999999)) {
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
memb_delay_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 999)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_departureYear_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  2016,  2269 }	/* (2016..2269) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_departureDay_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  366 }	/* (1..366) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_departureTime_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1440 }	/* (0..1440) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_departureUTCOffset_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  60 }	/* (-60..60) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stationNum_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1,  1,  9999999 }	/* (1..9999999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_delay_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  1,  999 }	/* (1..999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_10_set_0(int set_value, void **sptr) {
	CodeTableType_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		return asn_long2INTEGER(st, 0);
	} else {
		/* Test default value 0 */
		long value;
		if(asn_INTEGER2long(st, &value))
			return -1;
		return (value == 0);
	}
}
static int asn_DFL_15_set_1(int set_value, void **sptr) {
	ConfirmationType_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 1 */
		return asn_long2INTEGER(st, 1);
	} else {
		/* Test default value 1 */
		long value;
		if(asn_INTEGER2long(st, &value))
			return -1;
		return (value == 1);
	}
}
static asn_TYPE_member_t asn_MBR_affectedTickets_16[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TicketLinkType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_affectedTickets_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_affectedTickets_specs_16 = {
	sizeof(struct DelayConfirmation__affectedTickets),
	offsetof(struct DelayConfirmation__affectedTickets, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_affectedTickets_16 = {
	"affectedTickets",
	"affectedTickets",
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
	asn_DEF_affectedTickets_tags_16,
	sizeof(asn_DEF_affectedTickets_tags_16)
		/sizeof(asn_DEF_affectedTickets_tags_16[0]) - 1, /* 1 */
	asn_DEF_affectedTickets_tags_16,	/* Same as above */
	sizeof(asn_DEF_affectedTickets_tags_16)
		/sizeof(asn_DEF_affectedTickets_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_affectedTickets_16,
	1,	/* Single element */
	&asn_SPC_affectedTickets_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DelayConfirmation_1[] = {
	{ ATF_POINTER, 11, offsetof(struct DelayConfirmation, referenceIA5),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceIA5"
		},
	{ ATF_POINTER, 10, offsetof(struct DelayConfirmation, referenceNum),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceNum"
		},
	{ ATF_POINTER, 9, offsetof(struct DelayConfirmation, trainNum),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trainNum"
		},
	{ ATF_POINTER, 8, offsetof(struct DelayConfirmation, trainIA5),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trainIA5"
		},
	{ ATF_POINTER, 7, offsetof(struct DelayConfirmation, departureYear),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_departureYear_constraint_1,
		&asn_PER_memb_departureYear_constr_6,
		0,
		"departureYear"
		},
	{ ATF_POINTER, 6, offsetof(struct DelayConfirmation, departureDay),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_departureDay_constraint_1,
		&asn_PER_memb_departureDay_constr_7,
		0,
		"departureDay"
		},
	{ ATF_POINTER, 5, offsetof(struct DelayConfirmation, departureTime),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_departureTime_constraint_1,
		&asn_PER_memb_departureTime_constr_8,
		0,
		"departureTime"
		},
	{ ATF_POINTER, 4, offsetof(struct DelayConfirmation, departureUTCOffset),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_departureUTCOffset_constraint_1,
		&asn_PER_memb_departureUTCOffset_constr_9,
		0,
		"departureUTCOffset"
		},
	{ ATF_POINTER, 3, offsetof(struct DelayConfirmation, stationCodeTable),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CodeTableType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_10_set_0,	/* DEFAULT 0 */
		"stationCodeTable"
		},
	{ ATF_POINTER, 2, offsetof(struct DelayConfirmation, stationNum),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_stationNum_constraint_1,
		&asn_PER_memb_stationNum_constr_11,
		0,
		"stationNum"
		},
	{ ATF_POINTER, 1, offsetof(struct DelayConfirmation, stationIA5),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"stationIA5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DelayConfirmation, delay),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_delay_constraint_1,
		&asn_PER_memb_delay_constr_13,
		0,
		"delay"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DelayConfirmation, trainCancelled),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trainCancelled"
		},
	{ ATF_POINTER, 4, offsetof(struct DelayConfirmation, confirmationType),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConfirmationType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_15_set_1,	/* DEFAULT 1 */
		"confirmationType"
		},
	{ ATF_POINTER, 3, offsetof(struct DelayConfirmation, affectedTickets),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		0,
		&asn_DEF_affectedTickets_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"affectedTickets"
		},
	{ ATF_POINTER, 2, offsetof(struct DelayConfirmation, infoText),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTF8String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"infoText"
		},
	{ ATF_POINTER, 1, offsetof(struct DelayConfirmation, extension),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extension"
		},
};
static const int asn_MAP_DelayConfirmation_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14, 15, 16 };
static const ber_tlv_tag_t asn_DEF_DelayConfirmation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DelayConfirmation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* referenceIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* referenceNum */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trainNum */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trainIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* departureYear */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* departureDay */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* departureTime */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* departureUTCOffset */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* stationCodeTable */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* stationNum */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* stationIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* delay */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* trainCancelled */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* confirmationType */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* affectedTickets */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* infoText */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* extension */
};
static asn_SEQUENCE_specifics_t asn_SPC_DelayConfirmation_specs_1 = {
	sizeof(struct DelayConfirmation),
	offsetof(struct DelayConfirmation, _asn_ctx),
	asn_MAP_DelayConfirmation_tag2el_1,
	17,	/* Count of tags in the map */
	asn_MAP_DelayConfirmation_oms_1,	/* Optional members */
	15, 0,	/* Root/Additions */
	16,	/* Start extensions */
	18	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DelayConfirmation = {
	"DelayConfirmation",
	"DelayConfirmation",
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
	asn_DEF_DelayConfirmation_tags_1,
	sizeof(asn_DEF_DelayConfirmation_tags_1)
		/sizeof(asn_DEF_DelayConfirmation_tags_1[0]), /* 1 */
	asn_DEF_DelayConfirmation_tags_1,	/* Same as above */
	sizeof(asn_DEF_DelayConfirmation_tags_1)
		/sizeof(asn_DEF_DelayConfirmation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DelayConfirmation_1,
	17,	/* Elements count */
	&asn_SPC_DelayConfirmation_specs_1	/* Additional specs */
};
