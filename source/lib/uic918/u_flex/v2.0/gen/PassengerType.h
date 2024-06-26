/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v2.0.2.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#ifndef	_PassengerType_H_
#define	_PassengerType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PassengerType {
	PassengerType_adult	= 0,
	PassengerType_senior	= 1,
	PassengerType_child	= 2,
	PassengerType_youth	= 3,
	PassengerType_dog	= 4,
	PassengerType_bicycle	= 5,
	PassengerType_freeAddonPassenger	= 6,
	PassengerType_freeAddonChild	= 7
	/*
	 * Enumeration is extensible
	 */
} e_PassengerType;

/* PassengerType */
typedef ENUMERATED_t	 PassengerType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PassengerType;
asn_struct_free_f PassengerType_free;
asn_struct_print_f PassengerType_print;
asn_constr_check_f PassengerType_constraint;
ber_type_decoder_f PassengerType_decode_ber;
der_type_encoder_f PassengerType_encode_der;
xer_type_decoder_f PassengerType_decode_xer;
xer_type_encoder_f PassengerType_encode_xer;
per_type_decoder_f PassengerType_decode_uper;
per_type_encoder_f PassengerType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PassengerType_H_ */
#include <asn_internal.h>
