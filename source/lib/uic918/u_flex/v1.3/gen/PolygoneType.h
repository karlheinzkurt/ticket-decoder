/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v1.3.4.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#ifndef	_PolygoneType_H_
#define	_PolygoneType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GeoCoordinateType.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaCoordinates;

/* PolygoneType */
typedef struct PolygoneType {
	GeoCoordinateType_t	 firstEdge;
	struct PolygoneType__edges {
		A_SEQUENCE_OF(struct DeltaCoordinates) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} edges;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PolygoneType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PolygoneType;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DeltaCoordinates.h"

#endif	/* _PolygoneType_H_ */
#include <asn_internal.h>