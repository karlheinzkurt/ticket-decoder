/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v2.0.2.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#include "SeriesDetailType.h"

static int
memb_supplyingCarrier_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_offerIdentification_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 99)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_supplyingCarrier_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  1,  32000 }	/* (1..32000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_offerIdentification_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  99 }	/* (1..99) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SeriesDetailType_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SeriesDetailType, supplyingCarrier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_supplyingCarrier_constraint_1,
		&asn_PER_memb_supplyingCarrier_constr_2,
		0,
		"supplyingCarrier"
		},
	{ ATF_POINTER, 2, offsetof(struct SeriesDetailType, offerIdentification),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_offerIdentification_constraint_1,
		&asn_PER_memb_offerIdentification_constr_3,
		0,
		"offerIdentification"
		},
	{ ATF_POINTER, 1, offsetof(struct SeriesDetailType, series),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"series"
		},
};
static const int asn_MAP_SeriesDetailType_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SeriesDetailType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SeriesDetailType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supplyingCarrier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offerIdentification */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* series */
};
static asn_SEQUENCE_specifics_t asn_SPC_SeriesDetailType_specs_1 = {
	sizeof(struct SeriesDetailType),
	offsetof(struct SeriesDetailType, _asn_ctx),
	asn_MAP_SeriesDetailType_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SeriesDetailType_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SeriesDetailType = {
	"SeriesDetailType",
	"SeriesDetailType",
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
	asn_DEF_SeriesDetailType_tags_1,
	sizeof(asn_DEF_SeriesDetailType_tags_1)
		/sizeof(asn_DEF_SeriesDetailType_tags_1[0]), /* 1 */
	asn_DEF_SeriesDetailType_tags_1,	/* Same as above */
	sizeof(asn_DEF_SeriesDetailType_tags_1)
		/sizeof(asn_DEF_SeriesDetailType_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SeriesDetailType_1,
	3,	/* Elements count */
	&asn_SPC_SeriesDetailType_specs_1	/* Additional specs */
};

