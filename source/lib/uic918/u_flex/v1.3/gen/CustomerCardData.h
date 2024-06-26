/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v1.3.4.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#ifndef	_CustomerCardData_H_
#define	_CustomerCardData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>
#include <INTEGER.h>
#include <NativeInteger.h>
#include "TravelClassType.h"
#include <UTF8String.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TravelerType;
struct ExtensionData;

/* CustomerCardData */
typedef struct CustomerCardData {
	struct TravelerType	*customer	/* OPTIONAL */;
	IA5String_t	*cardIdIA5	/* OPTIONAL */;
	INTEGER_t	*cardIdNum	/* OPTIONAL */;
	long	 validFromYear;
	long	*validFromDay	/* OPTIONAL */;
	long	 validUntilYear	/* DEFAULT 0 */;
	long	*validUntilDay	/* OPTIONAL */;
	TravelClassType_t	*classCode	/* OPTIONAL */;
	long	*cardType	/* OPTIONAL */;
	UTF8String_t	*cardTypeDescr	/* OPTIONAL */;
	INTEGER_t	*customerStatus	/* OPTIONAL */;
	IA5String_t	*customerStatusDescr	/* OPTIONAL */;
	struct CustomerCardData__includedServices {
		A_SEQUENCE_OF(INTEGER_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *includedServices;
	struct ExtensionData	*extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CustomerCardData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CustomerCardData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TravelerType.h"
#include "ExtensionData.h"

#endif	/* _CustomerCardData_H_ */
#include <asn_internal.h>
