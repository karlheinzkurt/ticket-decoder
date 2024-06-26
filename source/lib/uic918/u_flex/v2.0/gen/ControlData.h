/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v2.0.2.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#ifndef	_ControlData_H_
#define	_ControlData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <INTEGER.h>
#include <NativeInteger.h>
#include <UTF8String.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionData;
struct CardReferenceType;
struct TicketLinkType;

/* ControlData */
typedef struct ControlData {
	struct ControlData__identificationByCardReference {
		A_SEQUENCE_OF(struct CardReferenceType) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *identificationByCardReference;
	BOOLEAN_t	 identificationByIdCard;
	BOOLEAN_t	 identificationByPassportId;
	INTEGER_t	*identificationItem	/* OPTIONAL */;
	BOOLEAN_t	 passportValidationRequired;
	BOOLEAN_t	 onlineValidationRequired;
	long	*randomDetailedValidationRequired	/* OPTIONAL */;
	BOOLEAN_t	 ageCheckRequired;
	BOOLEAN_t	 reductionCardCheckRequired;
	UTF8String_t	*infoText	/* OPTIONAL */;
	struct ControlData__includedTickets {
		A_SEQUENCE_OF(struct TicketLinkType) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *includedTickets;
	struct ExtensionData	*extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ControlData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ControlData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionData.h"
#include "CardReferenceType.h"
#include "TicketLinkType.h"

#endif	/* _ControlData_H_ */
#include <asn_internal.h>
