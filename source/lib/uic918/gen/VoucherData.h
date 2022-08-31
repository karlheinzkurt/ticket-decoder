/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../doc/barcode.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#ifndef	_VoucherData_H_
#define	_VoucherData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>
#include <INTEGER.h>
#include <NativeInteger.h>
#include <UTF8String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionData;

/* VoucherData */
typedef struct VoucherData {
	IA5String_t	*referenceIA5	/* OPTIONAL */;
	INTEGER_t	*referenceNum	/* OPTIONAL */;
	long	*productOwnerNum	/* OPTIONAL */;
	IA5String_t	*productOwnerIA5	/* OPTIONAL */;
	long	*productIdNum	/* OPTIONAL */;
	IA5String_t	*productIdIA5	/* OPTIONAL */;
	long	 validFromYear;
	long	 validFromDay;
	long	 validUntilYear;
	long	 validUntilDay;
	INTEGER_t	*value	/* DEFAULT 0 */;
	long	*type	/* OPTIONAL */;
	UTF8String_t	*infoText	/* OPTIONAL */;
	struct ExtensionData	*extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VoucherData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VoucherData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionData.h"

#endif	/* _VoucherData_H_ */
#include <asn_internal.h>