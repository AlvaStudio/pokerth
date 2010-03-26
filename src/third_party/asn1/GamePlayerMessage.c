/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fnative-types`
 */

#include <asn_internal.h>

#include "GamePlayerMessage.h"

static asn_TYPE_member_t asn_MBR_gamePlayerNotification_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct gamePlayerNotification, choice.gamePlayerJoined),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GamePlayerJoined,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gamePlayerJoined"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct gamePlayerNotification, choice.gamePlayerLeft),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GamePlayerLeft,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gamePlayerLeft"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct gamePlayerNotification, choice.gameAdminChanged),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GameAdminChanged,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameAdminChanged"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct gamePlayerNotification, choice.removedFromGame),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RemovedFromGame,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"removedFromGame"
		},
};
static asn_TYPE_tag2member_t asn_MAP_gamePlayerNotification_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gamePlayerJoined at 335 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gamePlayerLeft at 336 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gameAdminChanged at 337 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* removedFromGame at 339 */
};
static asn_CHOICE_specifics_t asn_SPC_gamePlayerNotification_specs_3 = {
	sizeof(struct gamePlayerNotification),
	offsetof(struct gamePlayerNotification, _asn_ctx),
	offsetof(struct gamePlayerNotification, present),
	sizeof(((struct gamePlayerNotification *)0)->present),
	asn_MAP_gamePlayerNotification_tag2el_3,
	4,	/* Count of tags in the map */
	0,
	4	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gamePlayerNotification_3 = {
	"gamePlayerNotification",
	"gamePlayerNotification",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_gamePlayerNotification_3,
	4,	/* Elements count */
	&asn_SPC_gamePlayerNotification_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GamePlayerMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GamePlayerMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GamePlayerMessage, gamePlayerNotification),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_gamePlayerNotification_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gamePlayerNotification"
		},
};
static ber_tlv_tag_t asn_DEF_GamePlayerMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GamePlayerMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* gameId at 333 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* gamePlayerJoined at 335 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gamePlayerLeft at 336 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* gameAdminChanged at 337 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 } /* removedFromGame at 339 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GamePlayerMessage_specs_1 = {
	sizeof(struct GamePlayerMessage),
	offsetof(struct GamePlayerMessage, _asn_ctx),
	asn_MAP_GamePlayerMessage_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GamePlayerMessage = {
	"GamePlayerMessage",
	"GamePlayerMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GamePlayerMessage_tags_1,
	sizeof(asn_DEF_GamePlayerMessage_tags_1)
		/sizeof(asn_DEF_GamePlayerMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_GamePlayerMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_GamePlayerMessage_tags_1)
		/sizeof(asn_DEF_GamePlayerMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_GamePlayerMessage_1,
	2,	/* Elements count */
	&asn_SPC_GamePlayerMessage_specs_1	/* Additional specs */
};

