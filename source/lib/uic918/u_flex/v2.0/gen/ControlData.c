/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v2.0.2.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#include "ControlData.h"

static int
memb_randomDetailedValidationRequired_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 99)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_randomDetailedValidationRequired_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  99 }	/* (0..99) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_identificationByCardReference_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CardReferenceType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_identificationByCardReference_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_identificationByCardReference_specs_2 = {
	sizeof(struct ControlData__identificationByCardReference),
	offsetof(struct ControlData__identificationByCardReference, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_identificationByCardReference_2 = {
	"identificationByCardReference",
	"identificationByCardReference",
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
	asn_DEF_identificationByCardReference_tags_2,
	sizeof(asn_DEF_identificationByCardReference_tags_2)
		/sizeof(asn_DEF_identificationByCardReference_tags_2[0]) - 1, /* 1 */
	asn_DEF_identificationByCardReference_tags_2,	/* Same as above */
	sizeof(asn_DEF_identificationByCardReference_tags_2)
		/sizeof(asn_DEF_identificationByCardReference_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_identificationByCardReference_2,
	1,	/* Single element */
	&asn_SPC_identificationByCardReference_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_includedTickets_13[] = {
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
static const ber_tlv_tag_t asn_DEF_includedTickets_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_includedTickets_specs_13 = {
	sizeof(struct ControlData__includedTickets),
	offsetof(struct ControlData__includedTickets, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_includedTickets_13 = {
	"includedTickets",
	"includedTickets",
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
	asn_DEF_includedTickets_tags_13,
	sizeof(asn_DEF_includedTickets_tags_13)
		/sizeof(asn_DEF_includedTickets_tags_13[0]) - 1, /* 1 */
	asn_DEF_includedTickets_tags_13,	/* Same as above */
	sizeof(asn_DEF_includedTickets_tags_13)
		/sizeof(asn_DEF_includedTickets_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_includedTickets_13,
	1,	/* Single element */
	&asn_SPC_includedTickets_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ControlData_1[] = {
	{ ATF_POINTER, 1, offsetof(struct ControlData, identificationByCardReference),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_identificationByCardReference_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"identificationByCardReference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ControlData, identificationByIdCard),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"identificationByIdCard"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ControlData, identificationByPassportId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"identificationByPassportId"
		},
	{ ATF_POINTER, 1, offsetof(struct ControlData, identificationItem),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"identificationItem"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ControlData, passportValidationRequired),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"passportValidationRequired"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ControlData, onlineValidationRequired),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"onlineValidationRequired"
		},
	{ ATF_POINTER, 1, offsetof(struct ControlData, randomDetailedValidationRequired),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_randomDetailedValidationRequired_constraint_1,
		&asn_PER_memb_randomDetailedValidationRequired_constr_9,
		0,
		"randomDetailedValidationRequired"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ControlData, ageCheckRequired),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ageCheckRequired"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ControlData, reductionCardCheckRequired),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reductionCardCheckRequired"
		},
	{ ATF_POINTER, 3, offsetof(struct ControlData, infoText),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTF8String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"infoText"
		},
	{ ATF_POINTER, 2, offsetof(struct ControlData, includedTickets),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_includedTickets_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"includedTickets"
		},
	{ ATF_POINTER, 1, offsetof(struct ControlData, extension),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extension"
		},
};
static const int asn_MAP_ControlData_oms_1[] = { 0, 3, 6, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_ControlData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ControlData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* identificationByCardReference */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* identificationByIdCard */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* identificationByPassportId */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* identificationItem */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* passportValidationRequired */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* onlineValidationRequired */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* randomDetailedValidationRequired */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ageCheckRequired */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* reductionCardCheckRequired */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* infoText */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* includedTickets */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* extension */
};
static asn_SEQUENCE_specifics_t asn_SPC_ControlData_specs_1 = {
	sizeof(struct ControlData),
	offsetof(struct ControlData, _asn_ctx),
	asn_MAP_ControlData_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_ControlData_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	11,	/* Start extensions */
	13	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ControlData = {
	"ControlData",
	"ControlData",
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
	asn_DEF_ControlData_tags_1,
	sizeof(asn_DEF_ControlData_tags_1)
		/sizeof(asn_DEF_ControlData_tags_1[0]), /* 1 */
	asn_DEF_ControlData_tags_1,	/* Same as above */
	sizeof(asn_DEF_ControlData_tags_1)
		/sizeof(asn_DEF_ControlData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ControlData_1,
	12,	/* Elements count */
	&asn_SPC_ControlData_specs_1	/* Additional specs */
};

