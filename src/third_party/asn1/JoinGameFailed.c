/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "JoinGameFailed.h"

static int
joinGameFailureReason_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
joinGameFailureReason_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
joinGameFailureReason_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	joinGameFailureReason_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
joinGameFailureReason_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	joinGameFailureReason_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
joinGameFailureReason_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	joinGameFailureReason_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
joinGameFailureReason_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	joinGameFailureReason_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
joinGameFailureReason_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	joinGameFailureReason_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
joinGameFailureReason_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	joinGameFailureReason_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_joinGameFailureReason_value2enum_2[] = {
	{ 1,	11,	"invalidGame" },
	{ 2,	10,	"gameIsFull" },
	{ 3,	13,	"gameIsRunning" },
	{ 4,	15,	"invalidPassword" },
	{ 5,	17,	"notAllowedAsGuest" },
	{ 6,	10,	"notInvited" },
	{ 7,	13,	"gameNameInUse" },
	{ 8,	11,	"badGameName" },
	{ 9,	15,	"invalidSettings" },
	{ 10,	16,	"ipAddressBlocked" }
};
static unsigned int asn_MAP_joinGameFailureReason_enum2value_2[] = {
	7,	/* badGameName(8) */
	1,	/* gameIsFull(2) */
	2,	/* gameIsRunning(3) */
	6,	/* gameNameInUse(7) */
	0,	/* invalidGame(1) */
	3,	/* invalidPassword(4) */
	8,	/* invalidSettings(9) */
	9,	/* ipAddressBlocked(10) */
	4,	/* notAllowedAsGuest(5) */
	5	/* notInvited(6) */
};
static asn_INTEGER_specifics_t asn_SPC_joinGameFailureReason_specs_2 = {
	asn_MAP_joinGameFailureReason_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_joinGameFailureReason_enum2value_2,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_joinGameFailureReason_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_joinGameFailureReason_2 = {
	"joinGameFailureReason",
	"joinGameFailureReason",
	joinGameFailureReason_2_free,
	joinGameFailureReason_2_print,
	joinGameFailureReason_2_constraint,
	joinGameFailureReason_2_decode_ber,
	joinGameFailureReason_2_encode_der,
	joinGameFailureReason_2_decode_xer,
	joinGameFailureReason_2_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_joinGameFailureReason_tags_2,
	sizeof(asn_DEF_joinGameFailureReason_tags_2)
		/sizeof(asn_DEF_joinGameFailureReason_tags_2[0]), /* 1 */
	asn_DEF_joinGameFailureReason_tags_2,	/* Same as above */
	sizeof(asn_DEF_joinGameFailureReason_tags_2)
		/sizeof(asn_DEF_joinGameFailureReason_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_joinGameFailureReason_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_JoinGameFailed_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct JoinGameFailed, joinGameFailureReason),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_joinGameFailureReason_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"joinGameFailureReason"
		},
};
static ber_tlv_tag_t asn_DEF_JoinGameFailed_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_JoinGameFailed_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 } /* joinGameFailureReason at 310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_JoinGameFailed_specs_1 = {
	sizeof(struct JoinGameFailed),
	offsetof(struct JoinGameFailed, _asn_ctx),
	asn_MAP_JoinGameFailed_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_JoinGameFailed = {
	"JoinGameFailed",
	"JoinGameFailed",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_JoinGameFailed_tags_1,
	sizeof(asn_DEF_JoinGameFailed_tags_1)
		/sizeof(asn_DEF_JoinGameFailed_tags_1[0]), /* 1 */
	asn_DEF_JoinGameFailed_tags_1,	/* Same as above */
	sizeof(asn_DEF_JoinGameFailed_tags_1)
		/sizeof(asn_DEF_JoinGameFailed_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_JoinGameFailed_1,
	1,	/* Elements count */
	&asn_SPC_JoinGameFailed_specs_1	/* Additional specs */
};

