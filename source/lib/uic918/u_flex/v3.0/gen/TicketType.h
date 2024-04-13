/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module-RailTicketData"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v3.0.3.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#ifndef	_TicketType_H_
#define	_TicketType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TicketType {
	TicketType_openTicket	= 0,
	TicketType_pass	= 1,
	TicketType_reservation	= 2,
	TicketType_carCarriageReservation	= 3
	/*
	 * Enumeration is extensible
	 */
} e_TicketType;

/* TicketType */
typedef ENUMERATED_t	 TicketType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TicketType;
asn_struct_free_f TicketType_free;
asn_struct_print_f TicketType_print;
asn_constr_check_f TicketType_constraint;
ber_type_decoder_f TicketType_decode_ber;
der_type_encoder_f TicketType_encode_der;
xer_type_decoder_f TicketType_decode_xer;
xer_type_encoder_f TicketType_encode_xer;
per_type_decoder_f TicketType_decode_uper;
per_type_encoder_f TicketType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TicketType_H_ */
#include <asn_internal.h>