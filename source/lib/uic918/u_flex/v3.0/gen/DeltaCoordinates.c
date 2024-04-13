/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module-RailTicketData"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v3.0.3.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#include "DeltaCoordinates.h"

static asn_TYPE_member_t asn_MBR_DeltaCoordinates_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaCoordinates, longitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"longitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaCoordinates, latitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latitude"
		},
};
static const ber_tlv_tag_t asn_DEF_DeltaCoordinates_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DeltaCoordinates_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* longitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* latitude */
};
static asn_SEQUENCE_specifics_t asn_SPC_DeltaCoordinates_specs_1 = {
	sizeof(struct DeltaCoordinates),
	offsetof(struct DeltaCoordinates, _asn_ctx),
	asn_MAP_DeltaCoordinates_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DeltaCoordinates = {
	"DeltaCoordinates",
	"DeltaCoordinates",
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
	asn_DEF_DeltaCoordinates_tags_1,
	sizeof(asn_DEF_DeltaCoordinates_tags_1)
		/sizeof(asn_DEF_DeltaCoordinates_tags_1[0]), /* 1 */
	asn_DEF_DeltaCoordinates_tags_1,	/* Same as above */
	sizeof(asn_DEF_DeltaCoordinates_tags_1)
		/sizeof(asn_DEF_DeltaCoordinates_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DeltaCoordinates_1,
	2,	/* Elements count */
	&asn_SPC_DeltaCoordinates_specs_1	/* Additional specs */
};
