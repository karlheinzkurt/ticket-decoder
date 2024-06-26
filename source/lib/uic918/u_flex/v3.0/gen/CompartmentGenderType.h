/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN-Module-RailTicketData"
 * 	found in "../../../../../../etc/UIC-barcode/misc/uicRailTicketData_v3.0.3.asn"
 * 	`asn1c -fcompound-names -fwide-types -gen-PER`
 */

#ifndef	_CompartmentGenderType_H_
#define	_CompartmentGenderType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CompartmentGenderType {
	CompartmentGenderType_unspecified	= 0,
	CompartmentGenderType_family	= 1,
	CompartmentGenderType_female	= 2,
	CompartmentGenderType_male	= 3,
	CompartmentGenderType_mixed	= 4
	/*
	 * Enumeration is extensible
	 */
} e_CompartmentGenderType;

/* CompartmentGenderType */
typedef ENUMERATED_t	 CompartmentGenderType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompartmentGenderType;
asn_struct_free_f CompartmentGenderType_free;
asn_struct_print_f CompartmentGenderType_print;
asn_constr_check_f CompartmentGenderType_constraint;
ber_type_decoder_f CompartmentGenderType_decode_ber;
der_type_encoder_f CompartmentGenderType_encode_der;
xer_type_decoder_f CompartmentGenderType_decode_xer;
xer_type_encoder_f CompartmentGenderType_encode_xer;
per_type_decoder_f CompartmentGenderType_decode_uper;
per_type_encoder_f CompartmentGenderType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CompartmentGenderType_H_ */
#include <asn_internal.h>
