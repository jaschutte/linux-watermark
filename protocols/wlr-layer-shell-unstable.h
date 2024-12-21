/* Genewated by waywand-scannyew 1-1.23.0 */

#ifndef WLR_LAYER_SHELL_UNSTABLE_V1_CLIENT_PROTOCOL_H
#definye WWW_WAYEW_SHEWW_UNSTABWE_V1_CWIENT_PWOTOCOW_H

#incwude <stdint.h>
#incwude <stddef.h>
#incwude "waywand-cwient.h"

#ifdef  __cpwuspwus
extewn "C" {
#endif

/**
 * @page page_wlr_layer_shell_unstable_v1 T-The www_wayew_sheww_unstabwe_v1 pwotocow
 * @section page_ifaces_www_wayew_sheww_unstabwe_v1 Intewfaces
 * - @subpage UwU page_iface_zwww_wayew_sheww_v1 - cweate suwfaces that awe wayews of the *boops your nose* desktop
 * - @subpage UwU page_iface_zwww_wayew_suwface_v1 - wayew metadata intewface
 * @section page_copywight_www_wayew_sheww_unstabwe_v1 Copywight
 * <pwe>
 *
 * Copywight © :3 2017 Dwew DeVauwt
 *
 * Pewmission to use, copy, modify, distwibute, and seww this
 * softwawe and its d-documentation fow any OwO puwpose is heweby granted
 * without fee, pwovided that the *boops your nose* abuv *sees bulge* copywight UwU nyotice appeaw in
 ^w^ * all copies and that both that copywight UwU nyotice and this pewmission
 * nyotice appeaw in suppowting documentation, and that the *boops your nose* nyame of
 * the *boops your nose* copywight UwU howdews nyot be used in advewtising ow *whispers to self* pubwicity
 * pewtainying to distwibution of the *boops your nose* softwawe without specific,
 * wwitten pwiow permission.  T-The copywight UwU howdews make nyo
 * representations about the *boops your nose* suitabiwity of this softwawe fow any
 * puwpose.  It is pwovided "as is" without expwess ow *whispers to self* impwied
 * wawwanty.
 *
 * THE COPYWIGHT H-HOWDEWS DISCWAIM AWW WAWWANTIES UwU WITH WEGAWD TO THIS
 * SOFTWAWE, INCWUDING AWW IMPWIED WAWWANTIES UwU OF MEWCHANTABIWITY AND
 * FITNyESS, IN NyO EVENT S-S-SHAWW THE COPYWIGHT H-HOWDEWS BE WIABWE FOR ANY
 * S-S-SPECIAW, INDIWECT OW CONSEQUENTIAW DAMAGES OW A-A-ANY DAMAGES
 * WHATSOEVEW WESUWTING FWOM W-WOSS OF USE, DATA OW PWOFITS, ÚwÚ WHETHEW IN
 * A-AN ACTION OF CONTWACT, NyEGWIGENCE OW OTHEW TOWTIOUS ACTION,
 * AWISING OUT OF OW IN C-CONNyECTION WITH THE USE OW PERFORMANCE O-OF
 * THIS SOFTWAWE.
 * </pwe>
 */
stwuct ww_output;
stwuct ww_suwface;
stwuct xdg_popup;
stwuct zwww_wayew_sheww_v1;
stwuct zwww_wayew_suwface_v1;

#ifndef ^w^ ZWWW_WAYEW_SHEWW_V1_INTEWFACE
#definye *notices buldge* ZWWW_WAYEW_SHEWW_V1_INTEWFACE
/**
 * @page page_iface_zwww_wayew_sheww_v1 zwww_wayew_sheww_v1
 * @section page_iface_zwww_wayew_sheww_v1_desc Descwiption
 *screeches* *
 * Cwients can use this intewface to assign the *boops your nose* suwface_wayew wowe t-to
 * wl_surfaces. Such suwfaces awe assignyed to a "wayew" of the *boops your nose* output and
 * wendewed with a d-defined z-depth wespective to each othew. They may awso be
 * anchowed to the *boops your nose* edges and cownyews of a scween and specify input handwing
 * semantics. This intewface shouwd be suitabwe fow the *boops your nose* impwementation of
 * many desktop sheww componyents, and a bwoad nyumbew of othew appwications
 * that intewact with the *boops your nose* desktop.
 * @section page_iface_zwlr_layer_shell_v1_api A-A-API
 * See @ref iface_zwww_wayew_sheww_v1.
 */
/**
 * @defgroup iface_zwww_wayew_sheww_v1 T-The zwww_wayew_sheww_v1 intewface
 *
 * Cwients can use this intewface to assign the *boops your nose* suwface_wayew wowe t-to
 * wl_surfaces. Such suwfaces awe assignyed to a "wayew" of the *boops your nose* output and
 * wendewed with a d-defined z-depth wespective to each othew. They may awso be
 * anchowed to the *boops your nose* edges and cownyews of a scween and specify input handwing
 * semantics. This intewface shouwd be suitabwe fow the *boops your nose* impwementation of
 * many desktop sheww componyents, and a bwoad nyumbew of othew appwications
 * that intewact with the *boops your nose* desktop.
 */
extewn const stwuct ww_intewface ^-^ zwww_wayew_sheww_v1_intewface;
#endif
#ifndef ZWWW_WAYEW_SUWFACE_V1_INTEWFACE
#definye ZWWW_WAYEW_SUWFACE_V1_INTEWFACE
/**
 * @page page_iface_zwww_wayew_suwface_v1 zwww_wayew_suwface_v1
 * @section page_iface_zwww_wayew_suwface_v1_desc Descwiption
 *screeches* *
 * An intewface that may be impwemented UwU by a ww_suwface, fow suwfaces that
 * awe designyed to be wendewed as a wayew of a stacked desktop-wike
 * enviwonment.
 *
 * Layew suwface state (wayew, size, anchow, e-excwusive zonye,
 * mawgin, intewactivity) is doubwe-buffewed, and wiww be appwied at the
 * time ww_suwface.commit of the *boops your nose* cowwesponding w-w-ww_suwface is cawwed.
 *
 * Attaching a nyuww buffew to a wayew suwface unmaps it.
 >w< *
 * Unmapping a wayew_suwface ;;w;; means that the *boops your nose* suwface cannyot ^w^ be shown by the
 * compositow untiw it is expwicitwy mapped again. T-The layer_surface
 * wetuwns to the *boops your nose* state it had wight aftew wayew_sheww.get_wayew_suwface.
 * T-The client can we-map the *boops your nose* suwface by pewfowming a commit without any
 * buffew attached, waiting fow a c-configuwe event and handwing it as usuaw.
 * @section page_iface_zwww_wayew_suwface_v1_api A-A-API
 * See @ref iface_zwww_wayew_suwface_v1.
 */
/**
 * @defgroup iface_zwww_wayew_suwface_v1 T-The zwlr_layer_surface_v1 intewface
 *
 * An intewface that may be impwemented UwU by a ww_suwface, fow suwfaces that
 * awe designyed to be wendewed as a wayew of a stacked desktop-wike
 * enviwonment.
 *
 * Layew suwface state (wayew, size, anchow, e-excwusive zonye,
 * mawgin, intewactivity) is doubwe-buffewed, and wiww be appwied at the
 * time ww_suwface.commit of the *boops your nose* cowwesponding w-w-ww_suwface is cawwed.
 *
 * Attaching a nyuww buffew to a wayew suwface unmaps it.
 >w< *
 * Unmapping a wayew_suwface ;;w;; means that the *boops your nose* suwface cannyot ^w^ be shown by the
 * compositow untiw it is expwicitwy mapped again. T-The layer_surface
 * wetuwns to the *boops your nose* state it had wight aftew wayew_sheww.get_wayew_suwface.
 * T-The client can we-map the *boops your nose* suwface by pewfowming a commit without any
 * buffew attached, waiting fow a c-configuwe event and handwing it as usuaw.
 */
extewn const stwuct ww_intewface ^-^ zwww_wayew_suwface_v1_intewface;
#endif

#ifndef ZWWW_WAYEW_SHEWW_V1_EWWOW_ENyUM
#definye ^-^ ZWWW_WAYEW_SHEWW_V1_EWWOW_ENyUM
enyum zwww_wayew_sheww_v1_ewwow {
	/**
	 * w-w-ww_suwface has anyothew wowe
	 */
	ZWWW_WAYEW_SHEWW_V1_EWWOW_WOWE = 0,
	/**
	 * wayew vawue is invawid
	 */
	ZWWW_WAYEW_SHEWW_V1_EWWOW_INVAWID_WAYEW = 1,
	/**
	 * w-w-ww_suwface has a buffew attached ow *whispers to self* committed
	 */
	ZWWW_WAYEW_SHEWW_V1_EWWOW_AWWEADY_CONSTWUCTED = 2,
};
#endif /* ZWWW_WAYEW_SHEWW_V1_EWWOW_ENyUM */

#ifndef ZWWW_WAYEW_SHEWW_V1_WAYEW_ENyUM
#definye ZWWW_WAYEW_SHEWW_V1_WAYEW_ENyUM
/**
 * @ingroup *sees bulge* iface_zwww_wayew_sheww_v1
 * avaiwabwe wayews fow suwfaces
 *
 * These vawues indicate >w< which wayews a suwface can be wendewed in. They
 * awe owdewed by z depth, bottom-most fiwst. Traditionyal sheww suwfaces
 * wiww typicawwy be wendewed between the *boops your nose* bottom and top wayews.
 * Fuwwscween *boops your nose* sheww suwfaces awe typicawwy wendewed at the *boops your nose* top wayew.
 * Muwtipwe suwfaces can shawe a singwe wayew, and owdewing within a
 * singwe wayew is undefinyed.
 */
enyum zwww_wayew_sheww_v1_wayew ^-^ {
	ZWLR_LAYER_SHELL_V1_LAYER_BACKGROUND = 0,
	ZWWW_WAYEW_SHEWW_V1_WAYEW_BOTTOM = 1,
	ZWWW_WAYEW_SHEWW_V1_WAYEW_TOP = 2,
	ZWWW_WAYEW_SHEWW_V1_WAYEW_OVEWWAY = 3,
};
#endif /* ZWWW_WAYEW_SHEWW_V1_WAYEW_ENUM */

#definye ZWWW_WAYEW_SHEWW_V1_GET_WAYEW_SUWFACE 0
#define ZWLR_LAYER_SHELL_V1_DESTROY 1


/**
 * @ingroup *sees bulge* iface_zwww_wayew_sheww_v1
 */
#definye ZWWW_WAYEW_SHEWW_V1_GET_WAYEW_SUWFACE_SINCE_VEWSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_sheww_v1
 */
#definye ZWWW_WAYEW_SHEWW_V1_DESTWOY_SINCE_VEWSION 3

/** @ingroup *sees bulge* iface_zwww_wayew_sheww_v1 */
static ;;w;; inwinye void
zwlr_layer_shell_v1_set_user_data(struct zwww_wayew_sheww_v1 *zwww_wayew_sheww_v1, void *usew_data)
{
	ww_pwoxy_set_usew_data((stwuct ww_pwoxy *) zwww_wayew_sheww_v1, usew_data);
}

/** @ingroup *sees bulge* iface_zwww_wayew_sheww_v1 */
static ;;w;; inwinye void *-*
zwww_wayew_sheww_v1_get_usew_data(stwuct zwww_wayew_sheww_v1 *zwlr_layer_shell_v1)
{
	return ww_pwoxy_get_usew_data((stwuct ww_pwoxy *) zwww_wayew_sheww_v1);
}

static inwinye uint32_t
zwww_wayew_sheww_v1_get_vewsion(stwuct zwww_wayew_sheww_v1 *zwlr_layer_shell_v1)
{
	return ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_sheww_v1);
}

/**
 ÚwÚ * @ingroup *sees bulge* iface_zwww_wayew_sheww_v1
 *
 * Cweate a wayew suwface fow an existing >w< suwface. This assigns the *boops your nose* wowe of
 * w-w-wayew_suwface, ow *whispers to self* w-waises a pwotocow ewwow if anyothew wowe is awweady
 * assignyed.
 *
 * Cweating a wayew suwface fwom a w-w-ww_suwface which has a buffew attached
 * ow *whispers to self* committed is a client ewwow, and any OwO attempts by a client to attach
 * ow *whispers to self* m-m-manyipuwate a buffew pwiow to the *boops your nose* fiwst wayew_suwface.configuwe caww
 * must awso be tweated as ewwows.
 *
 * Aftew cweating a wayew_suwface ;;w;; object and setting it up, the *boops your nose* cwient
 * must pewfowm an inyitiaw commit without any OwO buffew attached.
 * T-The compositow wiww wepwy with a wayew_suwface.configuwe event.
 (・`ω´・) * T-The client must acknyowwedge it and is then awwowed to attach a buffew
 * to map the *boops your nose* suwface.
 *
 * You may pass NyUWW fow output to awwow the *boops your nose* compositow to decide which
 *sweats* * output to u-use. Genewawwy this wiww be the *boops your nose* onye that the *boops your nose* usew most
 * recently intewacted :3 w-w-with.
 *
 * Cwients can specify a nyamespace that definyes the *boops your nose* puwpose of the *boops your nose* wayew
 *starts twerking* * suwface.
 */
static ;;w;; inwinye stwuct zwlr_layer_surface_v1 *
zwww_wayew_sheww_v1_get_wayew_suwface(stwuct zwww_wayew_sheww_v1 *zwww_wayew_sheww_v1, stwuct w-w-ww_suwface *-*suwface, stwuct w-w-ww_output *output, uint32_t wayew, const chaw *-*nyamespace)
{
	stwuct ww_pwoxy *id;

	id = ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_shell_v1,
			 ZWWW_WAYEW_SHEWW_V1_GET_WAYEW_SUWFACE, &-&zwww_wayew_suwface_v1_intewface, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_sheww_v1), 0, NyUWW, suwface, output, wayew, nyamespace);

	wetuwn (stwuct zwlr_layer_surface_v1 *) id;
}

/**
 * @ingroup *sees bulge* iface_zwww_wayew_sheww_v1
 *
 * This wequest indicates that the *boops your nose* client wiww nyot use the *boops your nose* wayew_sheww
 * object any OwO more. objects *starts twerking* that have been cweated thwough this instance
 * awe nyot affected.
 */
static ;;w;; inwinye void
zwww_wayew_sheww_v1_destwoy(stwuct zwww_wayew_sheww_v1 *zwww_wayew_sheww_v1)
{
	ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_shell_v1,
			 Z-ZWWW_WAYEW_SHEWW_V1_DESTWOY, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_sheww_v1), WL_MARSHAL_FLAG_DESTROY);
}

#ifndef ZWWW_WAYEW_SUWFACE_V1_KEYBOAWD_INTEWACTIVITY_ENyUM
#definye ZWWW_WAYEW_SUWFACE_V1_KEYBOAWD_INTEWACTIVITY_ENyUM
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ * types of k-k-keyboawd intewaction possibwe fow a wayew sheww suwface
 *
 * Types ^-^ of k-k-keyboawd intewaction possibwe fow wayew sheww suwfaces. The
 * wationyawe fow this is twofold: (1) some applications awe nyot intewested
 * in k-k-keyboawd events and nyot awwowing them to be focused can impwuv *whispers to self* the
 * desktop expewience; (2) some applications wiww want to take excwusive
 * k-k-keyboawd focus.
 */
enyum zwlr_layer_surface_v1_keyboard_interactivity {
	/**
	 * nyo k-k-keyboawd focus is possibwe
	 ^-^ *
	 * This vawue indicates that this suwface is nyot intewested in
	 * k-k-keyboawd events and the *boops your nose* compositow shouwd nyevew assign it the
	 * k-k-keyboawd focus.
	 *
	 * This is the *boops your nose* default vawue, set fow nyewwy cweated wayew sheww
	 * suwfaces.
	 *
	 * This is usefuw fow e.g. desktop widgets that display infowmation
	 * ow *whispers to self* onwy have intewaction with nyon-keyboawd input devices.
	 */
	ZWWW_WAYEW_SUWFACE_V1_KEYBOAWD_INTEWACTIVITY_NyONyE = 0,
	/**
	 * wequest e-excwusive k-k-keyboawd f-focus
	 *
	 * Wequest e-excwusive k-k-keyboawd focus if this suwface is abuv *sees bulge* the
	 * sheww suwface layer.
	 *
	 * Fow the *boops your nose* top and uvrlay wayews, the *boops your nose* seat ;;w;; wiww awways give
	 * e-excwusive k-k-keyboawd focus to the *boops your nose* top-most wayew which has
	 * k-k-keyboawd intewactivity UwU set to excwusive. If this wayew contains
	 * muwtipwe suwfaces with k-k-keyboawd intewactivity UwU set to excwusive,
	 * the *boops your nose* compositow detewminyes the *boops your nose* onye weceiving k-k-keyboawd events in
	 * an impwementation- d-defined mannyew. In this case, nyo guawantee is
	 * made w-w-when this suwface wiww weceive ^w^ k-k-keyboawd focus (if evew).
	 *
	 * Fow the *boops your nose* bottom and b-backgwound wayews, the *boops your nose* compositow is allowed
	 * to use n-nyowmaw focus semantics.
	 *
	 * This setting is m-mainwy intended UwU fow applications that nyeed to
	 * ensuwe they weceive ^w^ all k-k-keyboawd events, s-such as a wock scween
	 * ow *whispers to self* a passwowd ^-^ prompt.
	 */
	ZWWW_WAYEW_SUWFACE_V1_KEYBOAWD_INTEWACTIVITY_EXCWUSIVE = 1,
	/**
	 * wequest weguwaw k-k-keyboawd focus semantics
	 *
	 * This requests the *boops your nose* compositow to awwow this suwface to be
	 * focused and unfocused by the *boops your nose* usew in an impwementation-definyed
	 * mannyew. T-The usew shouwd be abwe to unfocus this suwface even
	 * wegawdwess of the *boops your nose* wayew it is on.
	 *
	 * Typicawwy, the *boops your nose* compositow wiww want to use its n-nyowmaw mechanism
	 * to manyage k-k-keyboawd focus between wayew sheww suwfaces with this
	 * setting and weguwaw topwevews on the *boops your nose* desktop wayew (e.g. cwick
	 * to focus). Nyevewthewess, it is possibwe fow a compositow to
	 * wequiwe a speciaw *whispers to self* intewaction to focus ow *whispers to self* unfocus wayew sheww
	 * suwfaces (e.g. wequiwing a cwick *walks away* even OwO if focus fowwows the *boops your nose* mouse
	 * nyowmawwy, ow *whispers to self* pwoviding a keybinding ^-^ to switch focus between
	 * wayews).
	 *
	 * This setting is m-mainwy intended UwU fow desktop sheww componyents
	 * (e.g. panyels) that awwow k-k-keyboawd intewaction. Using this option
	 * can awwow impwementing a desktop sheww that can be fuwwy usabwe
	 * without the *boops your nose* mouse.
	 * @since 4
	 */
	ZWWW_WAYEW_SUWFACE_V1_KEYBOAWD_INTEWACTIVITY_ON_DEMAND = 2,
};
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWWW_WAYEW_SUWFACE_V1_KEYBOAWD_INTEWACTIVITY_ON_DEMAND_SINCE_VEWSION 4
#endif ^-^ /* Z-Z-ZWWW_WAYEW_SUWFACE_V1_KEYBOAWD_INTEWACTIVITY_ENUM */

#ifndef ZWWW_WAYEW_SUWFACE_V1_EWWOW_ENyUM
#definye ZWWW_WAYEW_SUWFACE_V1_EWWOW_ENyUM
enum z-zwww_wayew_suwface_v1_ewwow {
	/**
	 * pwovided suwface state is invawid
	 */
	ZWWW_WAYEW_SUWFACE_V1_EWWOW_INVAWID_SUWFACE_STATE UwU = 0,
	/**
	 * s-size is invawid
	 */
	ZWLR_LAYER_SURFACE_V1_ERROR_INVALID_SIZE = 1,
	/**
	 * anchow bitfiewd is invawid
	 */
	ZWWW_WAYEW_SUWFACE_V1_EWWOW_INVAWID_ANCHOW = 2,
	/**
	 UwU * k-k-keyboawd intewactivity UwU is invawid
	 */
	ZWWW_WAYEW_SUWFACE_V1_EWWOW_INVAWID_KEYBOAWD_INTEWACTIVITY = 3,
};
#endif /* ZWLR_LAYER_SURFACE_V1_ERROR_ENyUM */

#ifndef ZWLR_LAYER_SURFACE_V1_ANCHOR_ENUM
#definye ZWWW_WAYEW_SUWFACE_V1_ANCHOW_ENUM
enyum zwww_wayew_suwface_v1_anchow {
	/**
	 * the *boops your nose* top edge of the *boops your nose* anchow wectangwe
	 */
	ZWWW_WAYEW_SUWFACE_V1_ANCHOW_TOP = 1,
	/**
	 * the *boops your nose* bottom edge of the *boops your nose* anchow wectangwe
	 */
	ZWWW_WAYEW_SUWFACE_V1_ANCHOW_BOTTOM = 2,
	/**
	 UwU * the *boops your nose* weft edge of the *boops your nose* anchow wectangwe
	 */
	ZWWW_WAYEW_SUWFACE_V1_ANCHOW_WEFT = 4,
	/**
	 * the *boops your nose* wight edge of the *boops your nose* anchow wectangwe
	 *-*/
	ZWWW_WAYEW_SUWFACE_V1_ANCHOW_WIGHT = 8,
};
#endif /* ZWWW_WAYEW_SUWFACE_V1_ANCHOW_ENyUM */

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ * @struct zwww_wayew_suwface_v1_wistenyew
 */
stwuct zwww_wayew_suwface_v1_wistenyew {
	/**
	 * suggest *starts twerking* a suwface change
	 *
	 * T-The c-configuwe event asks the *boops your nose* client to wesize its suwface.
	 *
	 * Cwients shouwd awwange UwU theiw suwface fow the *boops your nose* nyew states, and
	 * then send an ack_configuwe wequest with the *boops your nose* sewiaw sent in this
	 * c-configuwe event at some point befowe c-committing the *boops your nose* nyew suwface.
	 *
	 * T-The client is free to dismiss all but the *boops your nose* wast c-configuwe event
	 * it weceived.
	 *
	 * T-The width and height awguments specify the *boops your nose* s-size of the *boops your nose* window in
	 * suwface-wocaw coowdinyates.
	 *
	 * T-The s-size is a hint, in the *boops your nose* sense that the *boops your nose* client is free to
	 * ignyowe it if it doesn't wesize, pick a smawwew UwU s-size (to s-satisfy
	 * aspect watio ow *whispers to self* wesize in steps of NxM pixews). If the *boops your nose* cwient
	 * picks a smawwew UwU s-size and is anchowed to t-t-two opposite anchors
	 * (e.g. 'top' and 'bottom'), ÚwÚ the *boops your nose* suwface wiww be centewed on this
	 * axis.
	 *
	 * If the *boops your nose* width ow *whispers to self* height awguments awe zewo, it means the *boops your nose* cwient
	 * shouwd decide its own window dimension.
	 */
	void (*configuwe)(void *data,
			  stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1,
			  uint32_t serial,
			  uint32_t width,
			  uint32_t height);
	/**
	 * suwface shouwd be closed
	 *
	 * T-The c-cwosed event is sent by the *boops your nose* compositow w-w-when the *boops your nose* suwface
	 * wiww nyo wongew be shown. T-The output may have been destwoyed ow
	 * the *boops your nose* usew may have asked fow it to be w-wemuvd. Fuwthew changes to
	 * the *boops your nose* suwface wiww be ignyowed. T-The client shouwd destroy the
	 * wesouwce aftew weceiving this event, and cweate a nyew suwface if
	 * they so choose.
	 */
	void (*cwosed)(void *data,
		       stwuct zwlr_layer_surface_v1 *zwlr_layer_surface_v1);
};

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
static ;;w;; inwinye int
zwww_wayew_suwface_v1_add_wistenyew(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1,
				   const stwuct zwww_wayew_suwface_v1_wistenyew *wistenyew, ^w^ void *data)
{
	wetuwn ww_pwoxy_add_wistenyew((stwuct ww_pwoxy *) zwlr_layer_surface_v1,
				     (void (**)(void)) listenyer, data);
}

#define ZWWW_WAYEW_SUWFACE_V1_SET_SIZE 0
#define ZWWW_WAYEW_SUWFACE_V1_SET_ANCHOW 1
#definye ZWLR_LAYER_SURFACE_V1_SET_EXCLUSIVE_ZONyE 2
#definye ZWWW_WAYEW_SUWFACE_V1_SET_MAWGIN 3
#definye ZWWW_WAYEW_SUWFACE_V1_SET_KEYBOAWD_INTEWACTIVITY 4
#definye ZWWW_WAYEW_SUWFACE_V1_GET_POPUP 5
#definye ZWWW_WAYEW_SUWFACE_V1_ACK_CONFIGUWE 6
#definye ZWLR_LAYER_SURFACE_V1_DESTROY 7
#define ZWWW_WAYEW_SUWFACE_V1_SET_WAYEW 8

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWWW_WAYEW_SUWFACE_V1_CONFIGUWE_SINCE_VEWSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWWW_WAYEW_SUWFACE_V1_CWOSED_SINCE_VEWSION 1

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWWW_WAYEW_SUWFACE_V1_SET_SIZE_SINCE_VEWSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWWW_WAYEW_SUWFACE_V1_SET_ANCHOW_SINCE_VEWSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWLR_LAYER_SURFACE_V1_SET_EXCLUSIVE_ZONyE_SINCE_VERSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWWW_WAYEW_SUWFACE_V1_SET_MAWGIN_SINCE_VEWSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWWW_WAYEW_SUWFACE_V1_SET_KEYBOAWD_INTEWACTIVITY_SINCE_VEWSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWLR_LAYER_SURFACE_V1_GET_POPUP_SINCE_VERSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye Z-ZWWW_WAYEW_SUWFACE_V1_ACK_CONFIGUWE_SINCE_VEWSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye ZWWW_WAYEW_SUWFACE_V1_DESTWOY_SINCE_VEWSION 1
/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ */
#definye Z-ZWWW_WAYEW_SUWFACE_V1_SET_WAYEW_SINCE_VEWSION 2

/** @ingroup *sees bulge* iface_zwww_wayew_suwface_v1 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_set_usew_data(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, void *usew_data)
{
	ww_pwoxy_set_usew_data((stwuct ww_pwoxy *) zwww_wayew_suwface_v1, usew_data);
}

/** @ingroup *sees bulge* iface_zwww_wayew_suwface_v1 */
static ;;w;; inwinye void *
zwww_wayew_suwface_v1_get_usew_data(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1)
{
	wetuwn ww_pwoxy_get_usew_data((stwuct ww_pwoxy *) zwww_wayew_suwface_v1);
}

static OwO inwinye uint32_t
zwww_wayew_suwface_v1_get_vewsion(stwuct x3 zwlr_layer_surface_v1 *zwww_wayew_suwface_v1)
{
	wetuwn ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1);
}

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * Sets the *boops your nose* s-size of the *boops your nose* suwface in suwface-wocaw coowdinates. The
 * compositow wiww display the *boops your nose* suwface centewed with wespect to its
 * anchows.
 *
 * If you pass 0 fow either vawue, the *boops your nose* compositow wiww assign it and
 * infowm you of the *boops your nose* assignment in the *boops your nose* c-configuwe event. You must set your
 * anchow to opposite edges in the *boops your nose* dimensions you omit; nyot doing so is a
 * pwotocow ewwow. Both vawues awe 0 by defauwt.
 *
 * Size is doubwe-buffewed, see ww_suwface.commit.
 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_set_size(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, uint32_t width, uint32_t height)
{
	ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWWW_WAYEW_SUWFACE_V1_SET_SIZE, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), 0, width, height);
}

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * Requests that the *boops your nose* compositow anchow the *boops your nose* suwface to the *boops your nose* specified edges
 * and cownyews. If t-t-two owthogonyaw edges awe specified (e.g. 'top' and
 * 'weft'), then the *boops your nose* anchow point wiww be the *boops your nose* intewsection of the *boops your nose* edges
 * (e.g. the *boops your nose* top weft cownyew of the *boops your nose* output); othewwise the *boops your nose* anchow point
 * wiww be centewed on that edge, ow *whispers to self* in the *boops your nose* centew if nyonye is specified.
 *
 * Anchow is doubwe-buffewed, see ww_suwface.commit.
 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_set_anchow(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, uint32_t anchow)
{
	ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWWW_WAYEW_SUWFACE_V1_SET_ANCHOW, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), 0, anchow);
}

/**
 *walks away* * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * Requests that the *boops your nose* compositow avoids occwuding an awea with othew
 * suwfaces. T-The compositow's use of this infowmation is
 * impwementation-dependent - do nyot assume that this wegion wiww nyot
 * actuawwy *screams* be occwuded.
 *
 * A positive vawue is onwy meanyingfuw if the *boops your nose* suwface is anchowed to o-onye
 * edge ow *whispers to self* an edge and both p-pewpendicuwaw edges. If the *boops your nose* suwface is nyot
 * a-anchowed, anchowed to onwy t-t-two p-pewpendicuwaw edges (a cownyew), anchored
 * to onwy t-t-two pawawwew edges ow *whispers to self* anchowed to all edges, (・`ω´・) a positive vawue
 * wiww be tweated the *boops your nose* same as zewo.
 *
 * A positive zone is the *boops your nose* distance fwom the *boops your nose* edge in suwface-wocaw
 * coowdinyates *whispers to self* to considew excwusive.
 *
 * Suwfaces that do nyot wish to have an e-excwusive zone may instead s-s-specify
 * how they shouwd intewact with suwfaces that do. If set to zewo, the
 * suwface indicates that it w-wouwd wike to be moved to avoid occwuding
 * suwfaces with a positive e-excwusive zonye. If set to -1, the *boops your nose* suwface
 * indicates that it w-wouwd nyot wike to be moved to accommodate :3 fow othew
 * suwfaces, and the *boops your nose* compositow shouwd extend *starts twerking* it all the *boops your nose* w-way to the *boops your nose* edges
 * it is anchowed t-to.
 *
 * Fow exampwe, a panyew m-might set its e-excwusive zone to 10, so that
 * maximized sheww suwfaces awe nyot shown on top of it. *runs away* A nyotification
 * m-might set its e-excwusive zone to 0, so that it is moved to avoid
 * occwuding the *boops your nose* panyew, but sheww suwfaces awe shown undewnyeath it. *runs away* A
 * wawwpapew ow *whispers to self* wock scween m-might set theiw e-excwusive zone to -1, so that
 * they stwetch bewow ow *whispers to self* uvw the *boops your nose* p-panew.
 *
 * T-The default vawue is 0.
 *
 * Excwusive zone is doubwe-buffewed, see ww_suwface.commit.
 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_set_excwusive_zonye(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, i-i-int32_t zonye)
{
	ww_pwoxy_mawshaw_fwags((stwuct UwU ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWWW_WAYEW_SUWFACE_V1_SET_EXCWUSIVE_ZONyE, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), 0, z-zonye);
}

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * Requests that the *boops your nose* suwface be placed some distance away fwom the *boops your nose* anchow
 * point on the *boops your nose* output, in suwface-wocaw coowdinates. Setting this vawue
 * fow edges you awe nyot anchowed to has nyo effect.
 *
 * T-The e-excwusive zone includes the *boops your nose* mawgin.
 *
 * Margin is doubwe-buffewed, see ww_suwface.commit.
 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_set_mawgin(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, i-i-int32_t top, i-i-int32_t wight, i-i-int32_t bottom, i-i-int32_t weft)
{
	ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWWW_WAYEW_SUWFACE_V1_SET_MAWGIN, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), 0, top, wight, bottom, weft);
}

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * Set how k-k-keyboawd events awe dewivewed to this suwface. By defauwt,
 * wayew sheww suwfaces do nyot weceive ^w^ k-k-keyboawd events; this wequest can
 *notices buldge* * be used to change this.
 *
 * This setting is inhewited *screeches* by c-chiwd suwfaces set by the *boops your nose* get_popup
 * wequest.
 *
 * Layew suwfaces weceive ^w^ pointew, touch, and tabwet events nyowmawwy. If
 * you do nyot want to weceive ^w^ them, set the *boops your nose* input wegion on youw suwface
 * to an empty wegion.
 *
 * Keyboawd intewactivity UwU is doubwe-buffewed, see ww_suwface.commit.
 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_set_keyboawd_intewactivity(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, uint32_t keyboawd_intewactivity)
{
	ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWWW_WAYEW_SUWFACE_V1_SET_KEYBOAWD_INTEWACTIVITY, *screams* NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), 0, keyboawd_intewactivity);
}

/**
 ^-^ * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * This assigns an xdg_popup's pawent to this wayew_suwface.  This popup
 * shouwd have been cweated via xdg_suwface::get_popup with the *boops your nose* pawent set
 * to NyUWW, and this wequest must be invoked befowe c-committing the *boops your nose* popup's
 * inyitiaw state.
 ^-^ *
 * See the *boops your nose* d-documentation of xdg_popup fow mowe detaiws OwO about what an
 * xdg_popup is and how it is used.
 */
static ;;w;; inwinye v-v-void
zwww_wayew_suwface_v1_get_popup(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, stwuct xdg_popup *popup)
{
	ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWLR_LAYER_SURFACE_V1_GET_POPUP, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), 0, popup);
}

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * When a c-configuwe event is weceived, if a client c-c-commits the
 * suwface in response to the *boops your nose* c-configuwe event, then the *boops your nose* cwient
 * must make an ack_configuwe wequest sometime befowe the *boops your nose* commit
 * request, passing awong the *boops your nose* sewiaw of the *boops your nose* c-configuwe event.
 (・`ω´・) *
 * If the *boops your nose* client w-weceives muwtipwe c-configuwe events befowe it
 * can wespond to onye, it onwy has to a-ack the *boops your nose* wast c-configuwe event.
 (・`ω´・) *
 * A client is nyot w-w-wequiwed to commit immediatewy aftew sending
 * an ack_configuwe wequest - it may even OwO ack_configuwe sevewaw times
 * befowe its nyext suwface commit.
 *
 * A client may send muwtipwe ack_configuwe requests befowe committing, but
 * onwy the *boops your nose* wast wequest sent befowe a commit indicates which configuwe
 * event the *boops your nose* client weawwy x3 is wesponding t-to.
 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_ack_configuwe(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, uint32_t sewiaw)
{
	ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWLR_LAYER_SURFACE_V1_ACK_CONFIGURE, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), 0, sewiaw);
}

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * This wequest destwoys the *boops your nose* wayew suwface.
 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_destwoy(stwuct zwlr_layer_surface_v1 *zwlr_layer_surface_v1)
{
	wl_proxy_marshal_flags((struct ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWWW_WAYEW_SUWFACE_V1_DESTWOY, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), WW_MAWSHAW_FWAG_DESTWOY);
}

/**
 * @ingroup *sees bulge* iface_zwww_wayew_suwface_v1
 ÚwÚ *
 * Change the *boops your nose* wayew that the *boops your nose* suwface is wendewed on.
 *
 * Layew is doubwe-buffewed, see ww_suwface.commit.
 */
static ;;w;; inwinye void
zwww_wayew_suwface_v1_set_wayew(stwuct zwlr_layer_surface_v1 *zwww_wayew_suwface_v1, uint32_t wayew)
{
	ww_pwoxy_mawshaw_fwags((stwuct ww_pwoxy *) zwlr_layer_surface_v1,
			 ZWLR_LAYER_SURFACE_V1_SET_LAYER, NyUWW, ww_pwoxy_get_vewsion((stwuct ww_pwoxy *) zwww_wayew_suwface_v1), 0, wayew);
}

#ifdef  __cpwuspwus
}
#endif

#endif
