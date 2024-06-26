/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module-RailTicketData"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v3.0.3.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#include "RegionalValidityType.h"

static asn_per_constraints_t asn_PER_type_RegionalValidityType_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RegionalValidityType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RegionalValidityType, choice.trainLink),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrainLinkType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trainLink"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RegionalValidityType, choice.viaStations),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ViaStationType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"viaStations"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RegionalValidityType, choice.zones),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ZoneType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"zones"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RegionalValidityType, choice.lines),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LineType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lines"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RegionalValidityType, choice.polygone),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PolygoneType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"polygone"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RegionalValidityType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trainLink */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* viaStations */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* zones */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lines */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* polygone */
};
static asn_CHOICE_specifics_t asn_SPC_RegionalValidityType_specs_1 = {
	sizeof(struct RegionalValidityType),
	offsetof(struct RegionalValidityType, _asn_ctx),
	offsetof(struct RegionalValidityType, present),
	sizeof(((struct RegionalValidityType *)0)->present),
	asn_MAP_RegionalValidityType_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	5	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RegionalValidityType = {
	"RegionalValidityType",
	"RegionalValidityType",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_RegionalValidityType_constr_1,
	asn_MBR_RegionalValidityType_1,
	5,	/* Elements count */
	&asn_SPC_RegionalValidityType_specs_1	/* Additional specs */
};

