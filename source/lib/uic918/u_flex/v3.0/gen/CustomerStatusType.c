/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module-RailTicketData"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v3.0.3.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#include "CustomerStatusType.h"

static int
memb_statusProviderNum_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_statusProviderNum_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  1,  32000 }	/* (1..32000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CustomerStatusType_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CustomerStatusType, statusProviderNum),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_statusProviderNum_constraint_1,
		&asn_PER_memb_statusProviderNum_constr_2,
		0,
		"statusProviderNum"
		},
	{ ATF_POINTER, 3, offsetof(struct CustomerStatusType, statusProviderIA5),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"statusProviderIA5"
		},
	{ ATF_POINTER, 2, offsetof(struct CustomerStatusType, customerStatus),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"customerStatus"
		},
	{ ATF_POINTER, 1, offsetof(struct CustomerStatusType, customerStatusDescr),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"customerStatusDescr"
		},
};
static const int asn_MAP_CustomerStatusType_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CustomerStatusType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CustomerStatusType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* statusProviderNum */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* statusProviderIA5 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* customerStatus */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* customerStatusDescr */
};
static asn_SEQUENCE_specifics_t asn_SPC_CustomerStatusType_specs_1 = {
	sizeof(struct CustomerStatusType),
	offsetof(struct CustomerStatusType, _asn_ctx),
	asn_MAP_CustomerStatusType_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CustomerStatusType_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CustomerStatusType = {
	"CustomerStatusType",
	"CustomerStatusType",
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
	asn_DEF_CustomerStatusType_tags_1,
	sizeof(asn_DEF_CustomerStatusType_tags_1)
		/sizeof(asn_DEF_CustomerStatusType_tags_1[0]), /* 1 */
	asn_DEF_CustomerStatusType_tags_1,	/* Same as above */
	sizeof(asn_DEF_CustomerStatusType_tags_1)
		/sizeof(asn_DEF_CustomerStatusType_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CustomerStatusType_1,
	4,	/* Elements count */
	&asn_SPC_CustomerStatusType_specs_1	/* Additional specs */
};

