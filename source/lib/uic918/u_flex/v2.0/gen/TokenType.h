/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v2.0.2.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#ifndef	_TokenType_H_
#define	_TokenType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include <IA5String.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TokenType */
typedef struct TokenType {
	INTEGER_t	*tokenProviderNum	/* OPTIONAL */;
	IA5String_t	*tokenProviderIA5	/* OPTIONAL */;
	IA5String_t	*tokenSpecification	/* OPTIONAL */;
	OCTET_STRING_t	 token;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TokenType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TokenType;

#ifdef __cplusplus
}
#endif

#endif	/* _TokenType_H_ */
#include <asn_internal.h>
