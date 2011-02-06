/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "StartKickPetitionMessage.h"

static int
memb_kickTimeoutSec_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 120)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_numVotesNeededToKick_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_StartKickPetitionMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct StartKickPetitionMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartKickPetitionMessage, petitionId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"petitionId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartKickPetitionMessage, proposingPlayerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"proposingPlayerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartKickPetitionMessage, kickPlayerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"kickPlayerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartKickPetitionMessage, kickTimeoutSec),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_kickTimeoutSec_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"kickTimeoutSec"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartKickPetitionMessage, numVotesNeededToKick),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_numVotesNeededToKick_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numVotesNeededToKick"
		},
};
static ber_tlv_tag_t asn_DEF_StartKickPetitionMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (66 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_StartKickPetitionMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 5 }, /* gameId at 581 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 4 }, /* petitionId at 582 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 3 }, /* proposingPlayerId at 583 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -3, 2 }, /* kickPlayerId at 584 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -4, 1 }, /* kickTimeoutSec at 585 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 5, -5, 0 } /* numVotesNeededToKick at 586 */
};
static asn_SEQUENCE_specifics_t asn_SPC_StartKickPetitionMessage_specs_1 = {
	sizeof(struct StartKickPetitionMessage),
	offsetof(struct StartKickPetitionMessage, _asn_ctx),
	asn_MAP_StartKickPetitionMessage_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_StartKickPetitionMessage = {
	"StartKickPetitionMessage",
	"StartKickPetitionMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_StartKickPetitionMessage_tags_1,
	sizeof(asn_DEF_StartKickPetitionMessage_tags_1)
		/sizeof(asn_DEF_StartKickPetitionMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_StartKickPetitionMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_StartKickPetitionMessage_tags_1)
		/sizeof(asn_DEF_StartKickPetitionMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_StartKickPetitionMessage_1,
	6,	/* Elements count */
	&asn_SPC_StartKickPetitionMessage_specs_1	/* Additional specs */
};

