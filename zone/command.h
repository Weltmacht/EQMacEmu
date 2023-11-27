/*	EQEMu: Everquest Server Emulator
	Copyright (C) 2001-2002 EQEMu Development Team (http://eqemu.org)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/


#ifndef COMMAND_H
#define COMMAND_H

class Client;
class Seperator;

#include "../common/types.h"

#define	COMMAND_CHAR '#'

typedef void (*CmdFuncPtr)(Client *,const Seperator *);

typedef struct {
	int access;
	const char *desc;		// description of command
	CmdFuncPtr function;	//null means perl function
} CommandRecord;

extern int (*command_dispatch)(Client *,char const*);
extern int commandcount;			// number of commands loaded

// the command system:
int command_init(void);
void command_deinit(void);
int command_add(std::string command_name, const char *desc, int access, CmdFuncPtr function);
int command_notavail(Client *c, const char *message);
int command_realdispatch(Client *c, char const *message);
void command_logcommand(Client *c, const char *message);

//commands
void command_advnpcspawn(Client *c, const Seperator *sep);
void command_aggro(Client *c, const Seperator *sep);
void command_aggrozone(Client *c, const Seperator *sep);
void command_ai(Client *c, const Seperator *sep);
void command_appearance(Client *c, const Seperator *sep);
void command_apply_shared_memory(Client *c, const Seperator *sep);
void command_attack(Client *c, const Seperator *sep);
void command_attackentity(Client *c, const Seperator *sep);
void command_altactivate(Client *c, const Seperator *sep);
void command_ban(Client *c, const Seperator *sep);
void command_betabuff(Client* c, const Seperator *sep);
void command_beard(Client *c, const Seperator *sep);
void command_beardcolor(Client *c, const Seperator *sep);
void command_bind(Client *c, const Seperator *sep);
void command_boatinfo(Client *c, const Seperator *sep);
void command_bug(Client *c, const Seperator *sep);
void command_castspell(Client *c, const Seperator *sep);
void command_chat(Client *c, const Seperator *sep);
void command_chattest(Client *c, const Seperator *sep);
void command_checklos(Client *c, const Seperator *sep);
void command_cleartimers(Client *c, const Seperator *sep);
void command_connectworldserver(Client *c, const Seperator *sep);
void command_coredump(Client *c, const Seperator *sep);
void command_corpse(Client *c, const Seperator *sep);
void command_crashtest(Client *c, const Seperator *sep);
void command_cvs(Client *c, const Seperator *sep);
void command_d1(Client *c, const Seperator *sep);
void command_damage(Client *c, const Seperator *sep);
void command_damagetotals(Client *c, const Seperator *sep);
void command_date(Client *c, const Seperator *sep);
void command_dbspawn2(Client *c, const Seperator *sep);
void command_delacct(Client *c, const Seperator *sep);
void command_deletegraveyard(Client *c, const Seperator *sep);
void command_depop(Client *c, const Seperator *sep);
void command_depopzone(Client *c, const Seperator *sep);
void command_disablerecipe(Client *c, const Seperator *sep);
void command_distance(Client *c, const Seperator *sep);
void command_doanim(Client *c, const Seperator *sep);
void command_emote(Client *c, const Seperator *sep);
void command_emotesearch(Client *c, const Seperator *sep);
void command_emoteview(Client *c, const Seperator *sep);
void command_enablerecipe(Client *c, const Seperator *sep);
void command_equipitem(Client *c, const Seperator *sep);
void command_expansion(Client *c, const Seperator *sep);
void command_face(Client *c, const Seperator *sep);
void command_falltest(Client *c, const Seperator *sep);
void command_fillbuffs(Client *c, const Seperator *sep);
void command_findaliases(Client* c, const Seperator* sep);
void command_findnpctype(Client *c, const Seperator *sep);
void command_findspell(Client *c, const Seperator *sep);
void command_findzone(Client *c, const Seperator *sep);
void command_fixmob(Client *c, const Seperator *sep);
void command_flagedit(Client *c, const Seperator *sep);
void command_flag(Client *c, const Seperator *sep);
void command_flags(Client *c, const Seperator *sep);
void command_fleeinfo(Client *c, const Seperator *sep);
void command_flymode(Client *c, const Seperator *sep);
void command_fov(Client *c, const Seperator *sep);
void command_freeze(Client *c, const Seperator *sep);
void command_gassign(Client *c, const Seperator *sep);
void command_gender(Client *c, const Seperator *sep);
void command_getvariable(Client *c, const Seperator *sep);
void command_ginfo(Client *c, const Seperator *sep);
void command_giveitem(Client *c, const Seperator *sep);
void command_givemoney(Client *c, const Seperator *sep);
void command_giveplayerfaction(Client *c, const Seperator *sep);
void command_globalview(Client *c, const Seperator *sep);
void command_gm(Client *c, const Seperator *sep);
void command_gmdamage(Client *c, const Seperator *sep);
void command_gmspeed(Client *c, const Seperator *sep);
void command_godmode(Client *c, const Seperator *sep);
void command_goto(Client *c, const Seperator *sep);
void command_grid(Client *c, const Seperator *sep);
void command_gridrecord(Client *c, const Seperator *sep);
void command_guild(Client *c, const Seperator *sep);
void command_guildapprove(Client *c, const Seperator *sep);
void command_guildcreate(Client *c, const Seperator *sep);
void command_guildlist(Client *c, const Seperator *sep);
void command_hair(Client *c, const Seperator *sep);
void command_haircolor(Client *c, const Seperator *sep);
void command_haste(Client *c, const Seperator *sep);
void command_hatelist(Client *c, const Seperator *sep);
void command_heal(Client *c, const Seperator *sep);
void command_helm(Client *c, const Seperator *sep);
void command_help(Client *c, const Seperator *sep);
void command_hideme(Client *c, const Seperator *sep);
void command_hotfix(Client *c, const Seperator *sep);
void command_hp(Client *c, const Seperator *sep);
void command_interrogateinv(Client *c, const Seperator *sep);
void command_interrogatelegacy(Client *c, const Seperator *sep);
void command_interrupt(Client *c, const Seperator *sep);
void command_invul(Client *c, const Seperator *sep);
void command_ipban(Client *c, const Seperator *sep);
void command_ipc(Client *c, const Seperator *sep);
void command_ipexemption(Client *c, const Seperator *sep);
void command_iplookup(Client *c, const Seperator *sep);
void command_iteminfo(Client *c, const Seperator *sep);
void command_itemsearch(Client *c, const Seperator *sep);
void command_keyring(Client *c, const Seperator *sep);
void command_kick(Client *c, const Seperator *sep);
void command_kill(Client *c, const Seperator *sep);
void command_lastname(Client *c, const Seperator *sep);
void command_leaderboard(Client *c, const Seperator *sep);
void command_level(Client *c, const Seperator *sep);
void command_listnpcs(Client *c, const Seperator *sep);
void command_load_shared_memory(Client *c, const Seperator *sep);
void command_loc(Client *c, const Seperator *sep);
void command_logs(Client *c, const Seperator *sep);
void command_logtest(Client *c, const Seperator *sep);
void command_makepet(Client *c, const Seperator *sep);
void command_mana(Client *c, const Seperator *sep);
void command_manaburn(Client *c, const Seperator *sep);
void command_manastat(Client *c, const Seperator *sep);
void command_maxallskills(Client *c, const Seperator *sep);
void command_memspell(Client *c, const Seperator *sep);
void command_merchantcloseshop(Client *c, const Seperator *sep);
void command_merchantopenshop(Client *c, const Seperator *sep);
void command_modifynpcstat(Client *c, const Seperator *sep);
void command_motd(Client *c, const Seperator *sep);
void command_movechar(Client *c, const Seperator *sep);
void command_mule(Client *c, const Seperator *sep);
void command_mysql(Client *c, const Seperator *sep);
void command_mysqltest(Client *c, const Seperator *sep); 
void command_mystats(Client *c, const Seperator *sep);
void command_name(Client *c, const Seperator *sep);
void command_netstats(Client *c, const Seperator *sep);
void command_npccast(Client *c, const Seperator *sep);
void command_npcedit(Client *c, const Seperator *sep);
void command_npcemote(Client *c, const Seperator *sep);
void command_npcloot(Client *c, const Seperator *sep);
void command_npcsay(Client *c, const Seperator *sep);
void command_npcshout(Client *c, const Seperator *sep);
void command_npcspawn(Client *c, const Seperator *sep);
void command_npcstats(Client *c, const Seperator *sep);
void command_npctypecache(Client *c, const Seperator *sep);
void command_npctypespawn(Client *c, const Seperator *sep);
void command_nukebuffs(Client *c, const Seperator *sep);
void command_nukeitem(Client *c, const Seperator *sep);
void command_numauths(Client *c, const Seperator *sep);
void command_oocmute(Client *c, const Seperator *sep);
void command_opcode(Client *c, const Seperator *sep);
void command_optest(Client *c, const Seperator *sep);
#ifdef PACKET_PROFILER
void command_packetprofile(Client *c, const Seperator *sep);
#endif
void command_path(Client *c, const Seperator *sep);
void command_peekinv(Client *c, const Seperator *sep);
void command_peqzone(Client *c, const Seperator *sep);
void command_permaclass(Client *c, const Seperator *sep);
void command_permagender(Client *c, const Seperator *sep);
void command_permarace(Client *c, const Seperator *sep);
void command_petition(Client *c, const Seperator *sep);
void command_playsound(Client *c, const Seperator *sep);
#ifdef EQPROFILE
void command_profiledump(Client *c, const Seperator *sep);
void command_profilereset(Client *c, const Seperator *sep);
#endif
void command_push(Client *c, const Seperator *sep);
void command_pvp(Client *c, const Seperator *sep);
void command_qglobal(Client *c, const Seperator *sep);
void command_qtest(Client *c, const Seperator *sep);
void command_quaketrigger(Client* c, const Seperator* sep);
void command_questerrors(Client *c, const Seperator *sep);
void command_race(Client *c, const Seperator *sep);
void command_raidloot(Client *c, const Seperator *sep);
void command_randomfeatures(Client *c, const Seperator *sep);
void command_randtest(Client*, const Seperator *sep);
void command_refreshgroup(Client *c, const Seperator *sep);
void command_reloadallrules(Client *c, const Seperator *sep);
void command_reloademote(Client *c, const Seperator *sep);
void command_reloadlevelmods(Client *c, const Seperator *sep);
void command_reloadmerchants(Client *c, const Seperator *sep);
void command_reloadqst(Client *c, const Seperator *sep);
void command_reloadstatic(Client *c, const Seperator *sep);
void command_reloadtitles(Client *c, const Seperator *sep);
void command_reloadtraps(Client *c, const Seperator *sep);
void command_reloadworld(Client *c, const Seperator *sep);
void command_reloadworldrules(Client *c, const Seperator *sep);
void command_reloadzps(Client *c, const Seperator *sep);
void command_removelegacyitem(Client *c, const Seperator *sep);
void command_repop(Client *c, const Seperator *sep);
void command_repopclose(Client *c, const Seperator *sep);
void command_resetaa(Client *c,const Seperator *sep);
void command_resetboat(Client *c, const Seperator *sep);
void command_revoke(Client *c, const Seperator *sep);
void command_rewind(Client *c, const Seperator *sep);
void command_rules(Client *c, const Seperator *sep);
void command_save(Client *c, const Seperator *sep);
void command_scribespell(Client *c, const Seperator *sep);
void command_scribespells(Client *c, const Seperator *sep);
void command_sendop(Client *c, const Seperator *sep);
void command_sendzonespawns(Client *c, const Seperator *sep);
void command_serverlock(Client* c, const Seperator* sep);
void command_serversidename(Client *c, const Seperator *sep);
void command_setaapts(Client *c, const Seperator *sep);
void command_setaaxp(Client *c, const Seperator *sep);
void command_setanim(Client *c, const Seperator *sep);
void command_setgraveyard(Client *c, const Seperator *sep);
void command_setgreed(Client *c, const Seperator *sep);
void command_setfaction(Client *c, const Seperator *sep);
void command_setlanguage(Client *c, const Seperator *sep);
void command_setlsinfo(Client *c, const Seperator *sep);
void command_setnpcexpansion(Client* c, const Seperator *sep);
void command_setpass(Client *c, const Seperator *sep);
void command_setskill(Client *c, const Seperator *sep);
void command_setskillall(Client *c, const Seperator *sep);
void command_setxp(Client *c, const Seperator *sep);
void command_showbonusstats(Client *c, const Seperator *sep);
void command_showbuffs(Client *c, const Seperator *sep);
void command_showfilters(Client *c, const Seperator *sep);
void command_showhelm(Client *c, const Seperator *sep);
void command_showpetspell(Client *c, const Seperator *sep);
void command_showregen(Client *c, const Seperator *sep);
void command_showskills(Client *c, const Seperator *sep);
void command_showspellslist(Client *c, const Seperator *sep);
void command_showstats(Client *c, const Seperator *sep);
void command_showtraderitems(Client *c, const Seperator *sep);
void command_shutdown(Client *c, const Seperator *sep);
void command_size(Client *c, const Seperator *sep);
void command_skilldifficulty(Client *c, const Seperator *sep);
void command_spawn(Client *c, const Seperator *sep);
void command_spawnfix(Client *c, const Seperator *sep);
void command_spawnstatus(Client *c, const Seperator *sep);
void command_spellinfo(Client *c, const Seperator *sep);
void command_starve(Client *c, const Seperator *sep);
void command_stun(Client *c, const Seperator *sep);
void command_summon(Client *c, const Seperator *sep);
void command_summonitem(Client *c, const Seperator *sep);
void command_suspend(Client *c, const Seperator *sep);
void command_synctod(Client *c, const Seperator *sep);
void command_testcommand(Client *c, const Seperator *sep);
void command_testcopy(Client *c, const Seperator *sep);
void command_testspawn(Client *c, const Seperator *sep);
void command_testspawnkill(Client *c, const Seperator *sep);
void command_texture(Client *c, const Seperator *sep);
void command_time(Client *c, const Seperator *sep);
void command_timers(Client *c, const Seperator *sep);
void command_timezone(Client *c, const Seperator *sep);
void command_title(Client *c, const Seperator *sep);
void command_titlesuffix(Client *c, const Seperator *sep);
void command_trapinfo(Client *c, const Seperator *sep);
void command_undeletechar(Client *c, const Seperator *sep);
void command_underworld(Client *c, const Seperator *sep);
void command_unfreeze(Client *c, const Seperator *sep);
void command_unmemspell(Client *c, const Seperator *sep);
void command_unmemspells(Client *c, const Seperator *sep);
void command_unscribespell(Client *c, const Seperator *sep);
void command_unscribespells(Client *c, const Seperator *sep);
void command_update(Client *c, const Seperator *sep);
void command_uptime(Client *c, const Seperator *sep);
void command_version(Client *c, const Seperator *sep);
void command_viewnpctype(Client *c, const Seperator *sep);
void command_viewplayerfaction(Client *c, const Seperator *sep);
void command_viewzoneloot(Client* c, const Seperator* sep);
void command_wc(Client *c, const Seperator *sep);
void command_weather(Client *c, const Seperator *sep);
void command_worldshutdown(Client *c, const Seperator *sep);
void command_wp(Client *c, const Seperator *sep);
void command_wpadd(Client *c, const Seperator *sep);
void command_wpinfo(Client *c, const Seperator *sep);
void command_xpinfo(Client *c, const Seperator *sep);
void command_zclip(Client *c, const Seperator *sep);
void command_zcolor(Client *c, const Seperator *sep);
void command_zheader(Client *c, const Seperator *sep);
void command_zone(Client *c, const Seperator *sep);
void command_zonebootup(Client *c, const Seperator *sep);
void command_zonelock(Client *c, const Seperator *sep);
void command_zoneshutdown(Client *c, const Seperator *sep);
void command_zonespawn(Client *c, const Seperator *sep);
void command_zonestatus(Client *c, const Seperator *sep);
void command_zopp(Client *c, const Seperator *sep);
void command_zsafecoords(Client *c, const Seperator *sep);
void command_zsave(Client *c, const Seperator *sep);
void command_zsky(Client *c, const Seperator *sep);
void command_zstats(Client *c, const Seperator *sep);
void command_zunderworld(Client *c, const Seperator *sep);
void command_zuwcoords(Client *c, const Seperator *sep);

#endif