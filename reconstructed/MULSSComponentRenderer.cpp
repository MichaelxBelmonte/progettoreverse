// Reconstructed implementation of MULSSComponentRenderer
// From MikeCore binary — reverse-engineered pseudocode

#include "MULSSComponentRenderer.h"

// ============================================================
// @012a8c90 — 45108 bytes
// str: ""MUScrubbingTimeProgressor""
// str: ""MUAudioSourcePrincipalItem""
// str: ""MUAudioSourceSibilantItem""
// str: ""MULSSComponentRenderer::getInstanceBufferWithSize : byteSize too big!""
// str: ""MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012ae571) */
/* WARNING: Removing unreachable block (ram,0x012ad7fd) */
/* WARNING: Removing unreachable block (ram,0x012ad840) */
/* WARNING: Removing unreachable block (ram,0x012b38be) */
/* WARNING: Removing unreachable block (ram,0x012b1dcb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012a8c90(code *param_1,undefined8 param_2,float ******param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float ****ppppfVar4;
  char cVar5;
  float ***pppfVar6;
  float ******ppppppfVar7;
  float *****pppppfVar8;
  float *****pppppfVar9;
  ushort uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  char cVar34;
  byte bVar35;
  byte bVar36;
  undefined1 uVar37;
  float fVar38;
  uint uVar39;
  int iVar40;
  void *pvVar41;
  longlong lVar42;
  undefined *puVar43;
  undefined7 uVar47;
  float *****pppppfVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  bool bVar48;
  int iVar49;
  pthread_key_t pVar50;
  int iVar51;
  float *******pppppppfVar52;
  float *******pppppppfVar53;
  float *******pppppppfVar54;
  code *pcVar55;
  uint uVar56;
  ulonglong uVar57;
  undefined1 *puVar58;
  longlong lVar59;
  float fVar60;
  float ****ppppfVar61;
  undefined1 auVar62 [8];
  longlong lVar63;
  ulonglong uVar64;
  int iVar65;
  ulonglong uVar66;
  char *pcVar67;
  float *pfVar68;
  float fVar69;
  float *******unaff_RDI;
  longlong *plVar70;
  float ******ppppppfVar71;
  size_t sVar72;
  int iVar73;
  char *pcVar74;
  float *******pppppppfVar75;
  int iVar76;
  int iVar77;
  uint uVar78;
  int iVar79;
  uint uVar80;
  float ******ppppppfVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  undefined1 *puVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  float fVar87;
  double dVar88;
  undefined8 uVar89;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar95 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar96 [16];
  undefined8 extraout_XMM0_Qb_05;
  float fVar97;
  float fVar98;
  undefined1 auVar101 [12];
  undefined1 auVar102 [12];
  undefined1 auVar103 [12];
  double dVar99;
  undefined1 auVar104 [16];
  longlong lVar100;
  longlong lVar118;
  undefined1 auVar105 [16];
  undefined1 auVar117 [12];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float *****pppppfVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar129;
  float fVar130;
  float ******ppppppfVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar140;
  float fVar141;
  double dVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  float fVar149;
  undefined1 auVar150 [16];
  float *******local_d18;
  undefined1 local_d10;
  float *******local_d08;
  undefined1 local_d00;
  float ******local_cf8;
  undefined1 local_cf0;
  float ******local_ce8;
  undefined1 local_ce0;
  float *******local_cd8;
  undefined1 local_cd0;
  float ******local_cc8;
  undefined1 local_cc0;
  float ******local_cb8;
  undefined1 local_cb0;
  float ******local_ca8;
  undefined1 local_ca0;
  float ******local_c98;
  undefined1 local_c90;
  float ******local_c88;
  undefined1 local_c80;
  float ******local_c78;
  undefined1 local_c70;
  float ******local_c68;
  undefined1 local_c60;
  double local_c58;
  double local_c50;
  float *****local_c48;
  float ******local_c40;
  float *******local_c38;
  ulonglong local_c30;
  ulonglong local_c28;
  ulonglong local_c20;
  longlong local_c18;
  longlong local_c10;
  undefined1 local_c08 [16];
  undefined1 local_bf8 [16];
  undefined1 local_be8 [16];
  undefined8 local_bd0;
  undefined8 local_bc8;
  double local_bc0;
  ulonglong local_bb8;
  float *******local_bb0;
  undefined1 local_ba8 [16];
  undefined1 local_b98 [16];
  undefined4 local_b7c;
  float local_b78;
  float local_b74;
  uint local_b70;
  int local_b6c;
  float *****local_b68;
  double local_b60;
  longlong local_b58;
  double local_b50;
  float *******local_b48;
  double local_b40;
  undefined1 local_b38 [16];
  double local_b28;
  ulonglong uStack_b20;
  float ******local_b18;
  char local_b10;
  double local_b08;
  ulonglong local_b00;
  undefined1 local_af8 [16];
  float local_ae8;
  int local_ae4;
  undefined8 local_ae0;
  float ******local_ad8;
  double local_ad0;
  undefined1 local_ac8 [24];
  float *******local_ab0;
  double local_aa8;
  float *******local_aa0;
  float local_a94;
  int local_a90;
  float local_a8c;
  double local_a88;
  ulonglong local_a80;
  undefined8 local_a78;
  uint local_a6c;
  uint local_a68;
  float local_a64;
  float *******local_a60;
  float ******local_a58;
  float ******local_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  double local_a38;
  float local_a2c;
  undefined4 local_a28;
  float local_a24;
  float *****local_a20;
  float local_a18;
  float local_a14;
  double local_a10;
  byte local_a05;
  float local_a04;
  double local_a00;
  ulonglong local_9f8;
  ulonglong local_9f0;
  float *******local_9e8;
  double local_9e0;
  ulonglong local_9d8;
  ulonglong local_9d0;
  undefined1 local_9c8 [28];
  float local_9ac;
  undefined8 local_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined1 local_998 [8];
  undefined8 uStack_990;
  undefined8 local_980;
  undefined8 local_978;
  char local_96b;
  undefined1 local_96a;
  undefined1 local_969;
  float *******local_968;
  uint local_95c;
  float *****local_958;
  float *******local_950;
  float *******local_948;
  ulonglong local_940;
  float *******local_938;
  float *******local_930;
  char local_922;
  char local_921;
  float *******local_920;
  float ******local_918;
  undefined8 uStack_910;
  float *******local_908;
  ulonglong local_900;
  char local_8f1;
  float *******local_8f0;
  undefined1 local_8e8 [8];
  undefined8 uStack_8e0;
  float *******local_8d8;
  float *******local_8d0;
  float ******local_8c8;
  undefined *local_8c0;
  undefined1 local_8b8 [12];
  undefined4 uStack_8ac;
  float *******local_8a0;
  char local_891;
  float ******local_890;
  float ******local_888;
  ulonglong local_880;
  char local_878 [8];
  float *******local_870;
  undefined8 local_868;
  float *******local_860;
  float ******local_858;
  float *******local_850;
  int local_844;
  float ******local_838;
  char local_830 [8];
  longlong local_828 [8];
  longlong alStack_7e8 [2];
  longlong alStack_7d8 [244];
  longlong local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  uVar82 = (ulonglong)param_1 & 0xffffffff;
  fVar98 = SUB84(param_1,0);
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_b7c = 0;
  local_ae0 = 0;
  local_b68 = (float *****)0x0;
  local_bd0 = 0;
  local_bc8 = 0;
  FUN_012dde10();
  local_a50 = local_838;
  if ((((local_830[0] == '\0') && (local_838 != (float ******)0x0)) &&
      (FUN_00d50b00(), local_830[0] != '\0')) && (local_838 != (float ******)0x0)) {
    FUN_00d50b20();
  }
  FUN_012c2ab0();
  FUN_01430210();
  local_a90 = *(int *)((longlong)local_838 + 0xc);
  if (local_830[0] != '\0') {
    FUN_00d50b20();
  }
  if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  ppppppfVar81 = (float ******)&local_838;
  FUN_012ddd50();
  ppppppfVar131 = local_838;
  if ((DAT_027b0908 == '\0') && (iVar40 = ___cxa_guard_acquire(), iVar40 != 0)) {
    _DAT_027b0858 = FUN_00018c10();
    _DAT_027b0840 = "MUScrubbingTimeProgressor";
    _DAT_027b0848 = 0x58;
    param_1 = FUN_011a9870;
    _DAT_027b0850 = FUN_011a9870;
    _DAT_027b0860 = 0;
    uRam00000000027b0868 = 0;
    _DAT_027b0870 = 0;
    uRam00000000027b0878 = 0;
    _DAT_027b0880 = 0;
    uRam00000000027b0888 = 0;
    _DAT_027b0890 = 0;
    uRam00000000027b0898 = 0;
    _DAT_027b08a0 = 0;
    uRam00000000027b08a8 = 0;
    _DAT_027b08b0 = 0;
    uRam00000000027b08b8 = 0;
    _DAT_027b08c0 = 0;
    uRam00000000027b08c8 = 0;
    _DAT_027b08d0 = 0;
    uRam00000000027b08d8 = 0;
    _DAT_027b08e0 = 0;
    uRam00000000027b08e8 = 0;
    _DAT_027b08f0 = 0;
    uRam00000000027b08f8 = 0;
    _DAT_027b0900 = 0;
    ___cxa_guard_release();
  }
  if (ppppppfVar131 == (float ******)0x0) {
LAB_012a8df7:
    ppppppfVar81 = (float ******)&DAT_02802688;
  }
  else {
    (*(code *)(*ppppppfVar131)[0x6c])();
    cVar34 = FUN_00e85ea0();
    if (cVar34 == '\0') goto LAB_012a8df7;
  }
  local_c48 = *ppppppfVar81;
  if ((local_830[0] != '\0') && (local_838 != (float ******)0x0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x259) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x25b) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x13a) = 0;
  if (unaff_RDI[0x36] != (float ******)0x0) {
    unaff_RDI[0x36] = (float ******)0x0;
    FUN_00d50b20();
  }
  unaff_RDI[0x39] = (float ******)0x0;
  unaff_RDI[0x3a] = (float ******)0x0;
  unaff_RDI[0x37] = (float ******)0x0;
  unaff_RDI[0x38] = (float ******)0x0;
  unaff_RDI[0x3b] = (float ******)0x0;
  unaff_RDI[0x58] = (float ******)0x0;
  unaff_RDI[0x59] = (float ******)0x0;
  local_a2c = (float)FUN_00b33120();
  local_b00 = (ulonglong)(uint)local_a2c;
  if (0 < (int)local_a2c) {
    _memcpy(param_1,(void *)(local_b00 * 8),(size_t)param_3);
  }
  local_b50 = (double)FUN_00b335d0();
  local_a64 = (float)(int)(DAT_0240d198 * local_b50);
  if ((int)fVar98 < (int)(DAT_0240d198 * local_b50)) {
    local_a64 = fVar98;
  }
  local_9e0 = (double)(*(code *)(*unaff_RDI)[0xbc])();
  local_b40 = (double)(*(code *)(*unaff_RDI)[0xbe])();
  local_a88 = local_b40 - local_9e0;
  local_a05 = 0.0 <= local_a88;
  FUN_012c2ad0();
  local_968 = local_8d0;
  pppppppfVar52 = local_8d0;
  if (local_8d0 == (float *******)0x0) {
    local_a28 = 1;
    local_968 = (float *******)0x0;
    local_a48 = 0;
  }
  else {
    local_a48 = CONCAT71((int7)((ulonglong)local_8d0 >> 8),1);
    if ((((char)local_8c8 == '\0') && (FUN_00d50b00(), (char)local_8c8 != '\0')) &&
       (local_8d0 != (float *******)0x0)) {
      FUN_00d50b20();
    }
    local_a28 = 0;
  }
  pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
  pppppppfVar54 = local_968;
  if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), pppppppfVar54 = local_968, lVar42 != 0))
  {
    pppppppfVar54 = (float *******)local_968[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
    pppppppfVar52 = local_968;
  }
  local_a94 = (float)_exp2f(*(float *)(pppppppfVar54 + 8) * DAT_023941f4);
  pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
  pppppppfVar54 = local_968;
  if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), pppppppfVar54 = local_968, lVar42 != 0))
  {
    pppppppfVar54 = (float *******)local_968[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
    pppppppfVar52 = local_968;
  }
  uVar85 = _exp2f(*(float *)((longlong)pppppppfVar54 + 0x44) * DAT_023941f4);
  local_a40 = CONCAT44(local_a40._4_4_,uVar85);
  pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
  pppppppfVar54 = local_968;
  if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), pppppppfVar54 = local_968, lVar42 != 0))
  {
    pppppppfVar54 = (float *******)local_968[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
    pppppppfVar52 = local_968;
  }
  local_b78 = *(float *)(pppppppfVar54 + 9);
  pVar50 = (pthread_key_t)pppppppfVar52;
  pvVar41 = _pthread_getspecific(pVar50);
  if (pvVar41 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar41 = _pthread_getspecific(pVar50);
  if (pvVar41 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar41 = _pthread_getspecific(pVar50);
  if (pvVar41 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar41 = _pthread_getspecific(pVar50);
  if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
    pppppppfVar52 = (float *******)local_968[10];
    local_bb0 = pppppppfVar52;
    if (pppppppfVar52 != (float *******)0x0) goto LAB_012a9192;
LAB_012a9166:
    local_850 = (float *******)0x0;
    cVar34 = *(char *)((longlong)unaff_RDI + 0x25e);
  }
  else {
    pppppppfVar52 = (float *******)local_968[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4][10];
    local_bb0 = pppppppfVar52;
    if (pppppppfVar52 == (float *******)0x0) goto LAB_012a9166;
LAB_012a9192:
    local_bb0 = pppppppfVar52;
    FUN_00d50b00();
    local_850 = pppppppfVar52;
    cVar34 = *(char *)((longlong)unaff_RDI + 0x25e);
  }
  if ((cVar34 != '\0') && (*(char *)(unaff_RDI + 0x4c) == '\0')) {
    ppppppfVar81 = unaff_RDI[0x23];
    *(float *)(ppppppfVar81 + 2) =
         (float)(*(uint *)((longlong)ppppppfVar81 + 0xc) ^ _DAT_023945e0) /
         (float)(int)(DAT_0240d2e8 * local_b50);
    *(undefined4 *)((longlong)ppppppfVar81 + 0x14) = 0x7fffffff;
    *(undefined4 *)(unaff_RDI[0x20] + 4) = 0x7fffffff;
    *(undefined1 *)(unaff_RDI + 0x4c) = 1;
  }
  if (fVar98 != 0.0) {
    local_c50 = DAT_0238fee8 / (double)(int)fVar98;
    auVar132 = ZEXT416((uint)DAT_02390124);
    local_b48 = unaff_RDI + 0x37;
    local_ad0 = DAT_0238fee8 / local_b50;
    local_b28 = local_c50 * local_a88;
    uStack_b20 = 0;
    fVar98 = 0.0;
    fVar149 = 0.0;
    local_be8 = ZEXT416((uint)(DAT_02390124 / (float)local_a40));
    local_b74 = (float)((DAT_0240d180 <= local_b50) + 2 + (uint)(DAT_0240d180 <= local_b50));
    if (local_b50 < DAT_0240d188) {
      local_b74 = 1.4013e-45;
    }
    dVar99 = DAT_0240d2e8 * local_b50;
    local_ae4 = (uint)(0.0 <= local_a88) * 2 + -1;
    local_c30 = (ulonglong)((uint)local_b00 & 0xfffffffc);
    local_c28 = local_c30 - 4;
    uVar57 = (local_c28 >> 2) + 1;
    local_c20 = (ulonglong)((uint)uVar57 & 3);
    pcVar55 = (code *)(ulonglong)((uint)local_b00 & 0xfffffffe);
    local_c10 = -(uVar57 & 0xfffffffffffffffc);
    local_c18 = local_c20 << 5;
    local_b6c = (uint)(0.0 <= local_a88) * 4 + -2;
    auVar123._8_8_ = 0;
    auVar123._0_8_ = DAT_023908c8;
    local_948 = unaff_RDI + 0x2c;
    local_ad8 = (float ******)((longlong)unaff_RDI + 0x265);
    local_b70 = (uint)dVar99;
    local_ab0 = unaff_RDI + 0x24;
    local_c38 = unaff_RDI + 0x4f;
    local_a78._4_4_ = (undefined4)((ulonglong)local_a78 >> 0x20);
    local_a78 = (float *******)
                CONCAT44(local_a78._4_4_,(int)CONCAT71((int7)((ulonglong)local_c38 >> 8),1));
    local_9ac = 1.4013e-45;
    local_8c0 = (undefined *)0x0;
    local_870 = (float *******)0x0;
    local_920 = (float *******)0x0;
    local_890 = (float ******)0x0;
    local_9f8 = 0;
    local_950 = (float *******)0x0;
    local_9d8 = 0;
    local_930 = (float *******)0x0;
    local_9d0 = 0;
    local_938 = (float *******)0x0;
    local_9f0 = 0;
    local_8d8 = (float *******)0x0;
    local_980 = 0;
    local_908 = (float *******)0x0;
    local_860 = (float *******)0x0;
    local_8f0 = (float *******)0x0;
    local_868 = (float ******)((ulonglong)local_868 & 0xffffffff00000000);
    local_888 = (float ******)0x0;
    local_900 = 0;
    local_858 = (float ******)0x0;
    local_a80 = 0;
    local_bb8 = 0;
    local_a68 = 0;
    local_aa0 = (float *******)0x0;
    local_a60 = (float *******)0x0;
    local_b58 = 0;
    local_a58 = (float ******)0x0;
    local_b08 = 0.0;
    local_b98 = ZEXT816(0);
    local_bc0 = 0.0;
    local_a10 = 0.0;
    local_a00 = 0.0;
    local_c40 = (float ******)pcVar55;
    local_c08 = auVar132;
    local_bf8 = auVar132;
    local_b60 = DAT_023908c8;
    local_ae8 = DAT_0239011c;
    local_a40 = DAT_025908a0;
    local_a24 = DAT_02390124;
    local_a14 = DAT_02390124;
    local_a04 = DAT_02390124;
    do {
      pppppppfVar52 = local_920;
      local_a6c = (uint)uVar82;
      if (local_a6c == 0) {
        if ((((ulonglong)local_a78 & 1) != 0) && (unaff_RDI[0x1d] == (float ******)0x0)) {
LAB_012a957b:
          ppppppfVar81 = unaff_RDI[0x1d];
          if (ppppppfVar81 == (float ******)0x0) {
            FUN_00d23340();
            pppppppfVar52 = local_8d0;
            local_958._0_4_ = CONCAT31(local_958._1_3_,(char)local_8c8);
            pcVar55 = (code *)&local_958;
            ppppppfVar81 = (float ******)&local_8c8;
            if ((char)local_8c8 == '\0') {
              ppppppfVar81 = (float ******)pcVar55;
            }
            *(code *)ppppppfVar81 = (code)0x0;
            if (((char)local_8c8 != '\0') && (pppppppfVar52 != (float *******)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_958 == '\0') {
              if (pppppppfVar52 != (float *******)0x0) {
                FUN_00d50b00();
                goto LAB_012a9610;
              }
LAB_012a961e:
              auVar21._12_4_ = 0;
              auVar21._0_12_ = local_9c8._4_12_;
              local_9c8._0_16_ = auVar21 << 0x20;
              (*(code *)(*unaff_RDI)[0xcf])();
              bVar48 = false;
LAB_012a9636:
              if (pppppppfVar52 != (float *******)0x0) goto LAB_012a963b;
            }
            else {
              if (pppppppfVar52 == (float *******)0x0) goto LAB_012a961e;
LAB_012a9610:
              if (*(char *)((longlong)unaff_RDI + 0x25e) != '\0') goto LAB_012a961e;
              if (0 < (int)local_a6c) {
                if (*(char *)((longlong)unaff_RDI + 0x262) != '\0') {
                  bVar48 = false;
                  (*(code *)(*unaff_RDI)[0xcf])();
                  auVar22._12_4_ = 0;
                  auVar22._0_12_ = local_9c8._4_12_;
                  local_9c8._0_16_ = auVar22 << 0x20;
                  goto LAB_012a963b;
                }
                pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                pppppppfVar54 = pppppppfVar52;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  if (lVar42 != 0) {
                    pppppppfVar54 =
                         (float *******)
                         pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                if (pppppppfVar54[10] == (float ******)0x0) {
LAB_012acba1:
                  bVar48 = false;
                  (*(code *)(*unaff_RDI)[0xcf])();
                  auVar25._12_4_ = 0;
                  auVar25._0_12_ = local_9c8._4_12_;
                  local_9c8._0_16_ = auVar25 << 0x20;
                  goto LAB_012a963b;
                }
                pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                pppppppfVar54 = pppppppfVar52;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  if (lVar42 != 0) {
                    pppppppfVar54 =
                         (float *******)
                         pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                if (pppppppfVar54[9] == (float ******)0x0) goto LAB_012acba1;
                if (*(char *)(unaff_RDI + 0x27) == '\0') {
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  pppppppfVar54 = pppppppfVar52;
                  if (pvVar41 != (void *)0x0) {
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      pppppppfVar54 =
                           (float *******)
                           pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  ppppppfVar81 = pppppppfVar54[10];
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    ppppppfVar81 = pppppppfVar54[10];
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      ppppppfVar81 = (float ******)
                                     ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  ppppppfVar131 = unaff_RDI[0x1f];
                  *(bool *)((longlong)unaff_RDI + 0x139) =
                       ppppppfVar131 != (float ******)ppppppfVar81[9];
                  auVar26._12_4_ = 0;
                  auVar26._0_12_ = local_9c8._4_12_;
                  local_9c8._0_16_ = auVar26 << 0x20;
                }
                else {
                  *(undefined1 *)((longlong)unaff_RDI + 0x263) = 0;
                  (*(code *)(*unaff_RDI)[0xbb])();
                  if ((char)local_8c8 == '\0') {
                    if (local_8d0 != (float *******)0x0) {
                      FUN_00d50b00();
                      if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_012acc50;
                    }
                  }
                  else if (local_8d0 != (float *******)0x0) {
LAB_012acc50:
                    iVar40 = FUN_0130efc0();
                    if (iVar40 == 2) {
                      *(undefined1 *)((longlong)unaff_RDI + 0x263) = 1;
                    }
                    FUN_00d50b20();
                  }
                  if (0.0 <= local_a88) {
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    pppppppfVar54 = pppppppfVar52;
                    if (pvVar41 != (void *)0x0) {
                      lVar42 = FUN_00e8b990();
                      if (lVar42 != 0) {
                        pppppppfVar54 =
                             (float *******)
                             pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                    }
                    ppppppfVar81 = pppppppfVar54[9];
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      ppppppfVar81 = pppppppfVar54[9];
                      lVar42 = FUN_00e8b990();
                      if (lVar42 != 0) {
                        ppppppfVar81 = (float ******)
                                       ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                    }
                    if ((double)ppppppfVar81[0x2e] <= local_b40) {
                      local_8b8._0_8_ = ppppppfVar81[0x2e];
                      pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                      pppppppfVar54 = pppppppfVar52;
                      if (pvVar41 != (void *)0x0) {
                        lVar42 = FUN_00e8b990();
                        if (lVar42 != 0) {
                          pppppppfVar54 =
                               (float *******)
                               pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                        }
                      }
                      ppppppfVar81 = pppppppfVar54[9];
                      pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                      if (pvVar41 != (void *)0x0) {
                        ppppppfVar81 = pppppppfVar54[9];
                        lVar42 = FUN_00e8b990();
                        if (lVar42 != 0) {
                          ppppppfVar81 = (float ******)
                                         ppppppfVar81
                                         [(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                        }
                      }
                      local_8e8 = (undefined1  [8])ppppppfVar81[0x1d];
                      pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                      if (pvVar41 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      dVar88 = (double)FUN_011ef230();
                      dVar142 = ((double)local_8e8 + dVar88) - local_9e0;
                      uVar82 = 0;
                      if (dVar142 <= DAT_02390448) {
LAB_012acfe0:
                        cVar34 = *(char *)((longlong)unaff_RDI + 0x263);
                        pcVar55 = (code *)CONCAT71((int7)((ulonglong)pcVar55 >> 8),cVar34);
                        if ((cVar34 == '\0') && (dVar142 < DAT_0241b698)) {
                          *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 1;
                        }
                        if ((cVar34 == '\0') && (local_9e0 < (double)local_8b8._0_8_)) {
                          uVar82 = (ulonglong)
                                   (uint)(int)(((double)local_8b8._0_8_ - local_9e0) / local_b28 +
                                              DAT_023942d0);
                          goto LAB_012acef3;
                        }
                        goto LAB_012ad005;
                      }
                      if ((double)local_8e8 + dVar88 < local_b40) {
                        auVar123._8_8_ = uStack_b20;
                        auVar123._0_8_ = local_b28;
                        if ((local_b28 != DAT_02390448) || (NAN(local_b28) || NAN(DAT_02390448))) {
                          uVar82 = (ulonglong)(uint)(int)(dVar142 / local_b28 + DAT_023942d0);
                          goto LAB_012acfe0;
                        }
                      }
                    }
LAB_012ad043:
                    bVar48 = false;
                    auVar27._12_4_ = 0;
                    auVar27._0_12_ = local_9c8._4_12_;
                    local_9c8._0_16_ = auVar27 << 0x20;
                    goto LAB_012a963b;
                  }
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  pppppppfVar54 = pppppppfVar52;
                  if (pvVar41 != (void *)0x0) {
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      pppppppfVar54 =
                           (float *******)
                           pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  ppppppfVar81 = pppppppfVar54[9];
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    ppppppfVar81 = pppppppfVar54[9];
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      ppppppfVar81 = (float ******)
                                     ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  local_8e8 = (undefined1  [8])ppppppfVar81[0x1d];
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar88 = (double)FUN_011eeeb0();
                  auVar123._0_8_ = (double)local_8e8 + dVar88;
                  auVar123._8_8_ = 0;
                  dVar88 = auVar123._0_8_ - local_9e0;
                  uVar82 = 0;
                  if (dVar88 < 0.0) {
                    if (local_b40 < auVar123._0_8_) {
                      if ((local_b28 != DAT_02390448) || (NAN(local_b28) || NAN(DAT_02390448))) {
                        uVar82 = (ulonglong)(uint)(int)(dVar88 / local_b28 + DAT_023942d0);
                        goto LAB_012aced7;
                      }
                    }
                    if (*(char *)((longlong)unaff_RDI + 0x262) == '\0') {
                      bVar48 = false;
                      auVar29._12_4_ = 0;
                      auVar29._0_12_ = local_9c8._4_12_;
                      local_9c8._0_16_ = auVar29 << 0x20;
                    }
                    else {
                      bVar48 = false;
                      (*(code *)(*unaff_RDI)[0xcf])();
                      auVar28._12_4_ = 0;
                      auVar28._0_12_ = local_9c8._4_12_;
                      local_9c8._0_16_ = auVar28 << 0x20;
                    }
                    goto LAB_012a963b;
                  }
LAB_012aced7:
                  if ((*(char *)((longlong)unaff_RDI + 0x263) == '\0') && (_DAT_02391038 < dVar88))
                  {
LAB_012acef3:
                    *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 1;
                  }
LAB_012ad005:
                  iVar40 = (int)uVar82;
                  if (0 < iVar40) {
                    uVar78 = local_a6c - iVar40;
                    pcVar55 = (code *)(ulonglong)uVar78;
                    if (uVar78 == 0 || (int)local_a6c < iVar40) goto LAB_012ad043;
                    if (0 < (int)local_a2c) {
                      if ((uint)local_a2c < 4) {
                        uVar57 = 0;
                      }
                      else {
                        if (local_c28 < 0xc) {
                          lVar42 = 0;
                        }
                        else {
                          lVar42 = 0;
                          lVar63 = local_c10;
                          do {
                            lVar100 = uVar82 * 4;
                            lVar118 = uVar82 * 4;
                            lVar59 = local_828[lVar42 + -1];
                            lVar13 = local_828[lVar42 + 1];
                            (&local_838)[lVar42] =
                                 (float ******)((longlong)(&local_838)[lVar42] + uVar82 * 4);
                            local_828[lVar42 + -1] = lVar59 + lVar118;
                            local_828[lVar42] = local_828[lVar42] + lVar100;
                            local_828[lVar42 + 1] = lVar13 + lVar118;
                            local_828[lVar42 + 2] = local_828[lVar42 + 2] + lVar100;
                            local_828[lVar42 + 3] = local_828[lVar42 + 3] + lVar118;
                            local_828[lVar42 + 4] = local_828[lVar42 + 4] + lVar100;
                            local_828[lVar42 + 5] = local_828[lVar42 + 5] + lVar118;
                            auVar132._0_8_ = alStack_7e8[lVar42] + lVar100;
                            auVar132._8_8_ = alStack_7e8[lVar42 + 1] + lVar118;
                            local_828[lVar42 + 6] = local_828[lVar42 + 6] + lVar100;
                            local_828[lVar42 + 7] = local_828[lVar42 + 7] + lVar118;
                            *(undefined1 (*) [16])(alStack_7e8 + lVar42) = auVar132;
                            auVar123._0_8_ = (double)(alStack_7d8[lVar42] + lVar100);
                            auVar123._8_8_ = alStack_7d8[lVar42 + 1] + lVar118;
                            *(undefined1 (*) [16])(alStack_7d8 + lVar42) = auVar123;
                            alStack_7d8[lVar42 + 2] = lVar100 + alStack_7d8[lVar42 + 2];
                            alStack_7d8[lVar42 + 3] = lVar118 + alStack_7d8[lVar42 + 3];
                            lVar42 = lVar42 + 0x10;
                            lVar63 = lVar63 + 4;
                          } while (lVar63 != 0);
                        }
                        if (local_c20 != 0) {
                          lVar42 = lVar42 * 8;
                          lVar63 = 0;
                          do {
                            plVar70 = (longlong *)((longlong)&local_838 + lVar63 + lVar42);
                            auVar123._0_8_ = (double)(*plVar70 + uVar82 * 4);
                            auVar123._8_8_ = plVar70[1] + uVar82 * 4;
                            plVar70 = (longlong *)
                                      ((longlong)local_828 + lVar63 + lVar42 + -0x828 + 0x828);
                            lVar59 = *plVar70;
                            lVar13 = plVar70[1];
                            *(undefined1 (*) [16])((longlong)&local_838 + lVar63 + lVar42) =
                                 auVar123;
                            plVar70 = (longlong *)
                                      ((longlong)local_828 + lVar63 + lVar42 + -0x828 + 0x828);
                            *plVar70 = uVar82 * 4 + lVar59;
                            plVar70[1] = uVar82 * 4 + lVar13;
                            lVar63 = lVar63 + 0x20;
                          } while (local_c18 != lVar63);
                        }
                        uVar57 = local_c30;
                        if (local_c30 == local_b00) goto LAB_012ad228;
                      }
                      do {
                        (&local_838)[uVar57] =
                             (float ******)((longlong)(&local_838)[uVar57] + uVar82 * 4);
                        uVar57 = uVar57 + 1;
                      } while (local_b00 != uVar57);
                    }
LAB_012ad228:
                    local_9e0 = local_9e0 + (double)iVar40 * local_b28;
                    local_a6c = uVar78;
                  }
                  *(undefined2 *)(unaff_RDI + 0x27) = 0;
                  ppppppfVar131 = unaff_RDI[0x1f];
                  local_9c8._0_4_ = (int)CONCAT71((int7)(uVar82 >> 8),1);
                }
                if (ppppppfVar131 != (float ******)0x0) {
                  unaff_RDI[0x1f] = (float ******)0x0;
                  FUN_00d50b20();
                }
                ppppppfVar81 = _UNK_0240d118;
                unaff_RDI[0x28] = _DAT_0240d110;
                unaff_RDI[0x29] = ppppppfVar81;
                *(undefined4 *)((longlong)unaff_RDI[0x20] + 0x24) = 0xffffffff;
                *(undefined4 *)((longlong)unaff_RDI[0x21] + 0x24) = 0xffffffff;
                *(undefined4 *)(unaff_RDI[0x22] + 3) = 0xffffffff;
                *(undefined4 *)(unaff_RDI[0x23] + 3) = 0xffffffff;
                pppppppfVar54 = (float *******)unaff_RDI[0x1d];
                if (pppppppfVar54 != pppppppfVar52) {
                  FUN_00d50b00();
                  unaff_RDI[0x1d] = (float ******)pppppppfVar52;
                  if (pppppppfVar54 != (float *******)0x0) {
                    FUN_00d50b20();
                  }
                }
                bVar48 = true;
                FUN_00d23740();
                goto LAB_012a9636;
              }
              bVar48 = false;
              FUN_012a8950();
              auVar24._12_4_ = 0;
              auVar24._0_12_ = local_9c8._4_12_;
              local_9c8._0_16_ = auVar24 << 0x20;
LAB_012a963b:
              FUN_00d50b20();
            }
            if (!bVar48) {
              cVar34 = (char)local_920;
              uVar82 = (ulonglong)local_868 & 0xffffffff;
              goto joined_r0x012b3e39;
            }
            ppppppfVar81 = unaff_RDI[0x1d];
          }
          else {
            auVar20._12_4_ = 0;
            auVar20._0_12_ = local_9c8._4_12_;
            local_9c8._0_16_ = auVar20 << 0x20;
          }
          pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
          if (pvVar41 != (void *)0x0) {
            ppppppfVar81 = unaff_RDI[0x1d];
            lVar42 = FUN_00e8b990();
            if (lVar42 != 0) {
              ppppppfVar81 = (float ******)
                             ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
            }
          }
          uVar89 = 0;
          ppppppfVar81 = (float ******)ppppppfVar81[10];
          if (ppppppfVar81 == local_890) {
            if (((char)local_920 == '\0') && (ppppppfVar81 != (float ******)0x0)) {
              local_8a0 = (float *******)((longlong)&MACH_HEADER.magic + 1);
              FUN_00d50b00();
              ppppppfVar81 = local_890;
            }
            else {
              local_8a0 = local_920;
              ppppppfVar81 = local_890;
            }
          }
          else {
            if (ppppppfVar81 != (float ******)0x0) {
              uVar89 = FUN_00d50b00();
            }
            local_8a0 = (float *******)CONCAT71((int7)((ulonglong)uVar89 >> 8),1);
            if (((char)local_920 != '\0') && (local_890 != (float ******)0x0)) {
              FUN_00d50b20();
            }
          }
          local_890 = ppppppfVar81;
          ppppppfVar81 = unaff_RDI[0x1d];
          pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
          if (pvVar41 != (void *)0x0) {
            ppppppfVar81 = unaff_RDI[0x1d];
            lVar42 = FUN_00e8b990();
            if (lVar42 != 0) {
              ppppppfVar81 = (float ******)
                             ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
            }
          }
          ppppppfVar81 = (float ******)ppppppfVar81[9];
          cVar34 = (char)local_868;
          if (ppppppfVar81 == local_888) {
            if ((cVar34 == '\0') && (ppppppfVar81 != (float ******)0x0)) {
              local_8e8[0] = 1;
              local_868 = (float ******)((ulonglong)local_868 & 0xffffffff00000000);
              FUN_00d50b00();
              pppppppfVar52 = local_8a0;
              ppppppfVar131 = local_888;
            }
            else {
              local_8e8[0] = cVar34;
              pppppppfVar52 = local_8a0;
              ppppppfVar131 = local_888;
            }
          }
          else {
            if (ppppppfVar81 != (float ******)0x0) {
              FUN_00d50b00();
            }
            local_8e8[0] = 1;
            pppppppfVar52 = local_8a0;
            ppppppfVar131 = ppppppfVar81;
            if ((cVar34 != '\0') && (local_888 != (float ******)0x0)) {
              FUN_00d50b20();
              pppppppfVar52 = local_8a0;
            }
          }
          local_888 = ppppppfVar131;
          local_8a0 = pppppppfVar52;
          if ((local_890 == (float ******)0x0) || (local_888 == (float ******)0x0)) {
            uVar82 = (ulonglong)local_8e8[0];
            (*(code *)(*unaff_RDI)[0xcf])();
          }
          else {
            local_868._4_4_ = (undefined4)((ulonglong)local_868 >> 0x20);
            local_868 = (float ******)CONCAT44(local_868._4_4_,(int)CONCAT71(0x28025,local_8e8[0]));
            pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
            uVar47 = (undefined7)((ulonglong)ppppppfVar81 >> 8);
            if (pvVar41 == (void *)0x0) {
LAB_012a9880:
              uVar82 = CONCAT71(uVar47,local_8e8[0]);
              uVar85 = (undefined4)uVar82;
              pppppfVar119 = local_890[8];
            }
            else {
              local_868 = (float ******)
                          CONCAT44(local_868._4_4_,
                                   (int)CONCAT71((int7)((ulonglong)pvVar41 >> 8),local_8e8[0]));
              lVar42 = FUN_00e8b990();
              if (lVar42 == 0) goto LAB_012a9880;
              uVar82 = CONCAT71(uVar47,local_8e8[0]);
              uVar85 = (undefined4)uVar82;
              pppppfVar119 = (float *****)
                             local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4][8];
              pcVar55 = (code *)local_890;
            }
            if (pppppfVar119 != (float *****)0x0) {
              local_868._4_4_ = (undefined4)((ulonglong)local_868 >> 0x20);
              local_868._0_4_ = uVar85;
              pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
              ppppppfVar81 = local_890;
              if (pvVar41 != (void *)0x0) {
                local_868._0_4_ = (undefined4)CONCAT71((int7)((ulonglong)pvVar41 >> 8),local_8e8[0])
                ;
                lVar42 = FUN_00e8b990();
                ppppppfVar81 = local_890;
                if (lVar42 != 0) {
                  pcVar55 = (code *)local_890;
                  ppppppfVar81 = (float ******)
                                 local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              pppppfVar119 = ppppppfVar81[8];
              local_868 = (float ******)
                          CONCAT44(local_868._4_4_,(int)CONCAT71(0x28025,local_8e8[0]));
              pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
              if (pvVar41 != (void *)0x0) {
                pppppfVar119 = ppppppfVar81[8];
                local_868 = (float ******)
                            CONCAT44(local_868._4_4_,
                                     (int)CONCAT71((int7)((ulonglong)pvVar41 >> 8),local_8e8[0]));
                lVar42 = FUN_00e8b990();
                if (lVar42 != 0) {
                  pppppfVar119 = (float *****)
                                 pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              uVar82 = CONCAT71((int7)((ulonglong)pppppfVar119 >> 8),local_8e8[0]);
              if (pppppfVar119[0xc] != (float ****)0x0) {
                local_868 = (float ******)CONCAT44(local_868._4_4_,(int)uVar82);
                pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                if (pvVar41 == (void *)0x0) {
LAB_012a99c0:
                  pppppfVar119 = local_890[9];
                }
                else {
                  local_868 = (float ******)
                              CONCAT44(local_868._4_4_,
                                       (int)CONCAT71((int7)((ulonglong)pvVar41 >> 8),local_8e8[0]));
                  lVar42 = FUN_00e8b990();
                  if (lVar42 == 0) goto LAB_012a99c0;
                  pppppfVar119 = (float *****)
                                 local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4][9];
                  pcVar55 = (code *)local_890;
                }
                uVar82 = (ulonglong)local_8e8[0];
                if (pppppfVar119 != (float *****)0x0) {
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 == (void *)0x0) {
LAB_012a9a30:
                    pppppfVar119 = local_890[9];
                    ppppppfVar81 = local_890;
                  }
                  else {
                    lVar42 = FUN_00e8b990();
                    if (lVar42 == 0) goto LAB_012a9a30;
                    ppppppfVar81 = (float ******)
                                   local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    pppppfVar119 = ppppppfVar81[9];
                    pcVar55 = (code *)local_890;
                  }
                  if (DAT_027c0190 == '\0') {
                    iVar40 = ___cxa_guard_acquire();
                    if (iVar40 != 0) {
                      _DAT_027910a8 = FUN_007ef2d0();
                      _DAT_02791090 = "MUAudioSourceSibilantItem";
                      _DAT_02791098 = 200;
                      pcVar55 = FUN_01103980;
                      _DAT_027910a0 = FUN_01103980;
                      _DAT_027910b0 = 0;
                      uRam00000000027910b8 = 0;
                      _DAT_027910c0 = 0;
                      uRam00000000027910c8 = 0;
                      _DAT_027910d0 = 0;
                      uRam00000000027910d8 = 0;
                      _DAT_027910e0 = 0;
                      uRam00000000027910e8 = 0;
                      _DAT_027910f0 = 0;
                      uRam00000000027910f8 = 0;
                      _DAT_02791100 = 0;
                      uRam0000000002791108 = 0;
                      _DAT_02791110 = 0;
                      uRam0000000002791118 = 0;
                      _DAT_02791120 = 0;
                      uRam0000000002791128 = 0;
                      _DAT_02791130 = 0;
                      uRam0000000002791138 = 0;
                      _DAT_02791140 = 0;
                      uRam0000000002791148 = 0;
                      _DAT_02791150 = 0;
                      ___cxa_guard_release();
                    }
                  }
                  ppppppfVar131 = (float ******)&DAT_02802688;
                  if (pppppfVar119 != (float *****)0x0) {
                    (*(code *)(*pppppfVar119)[0x6c])();
                    cVar34 = FUN_00e85ea0();
                    if (cVar34 == '\0') {
                      ppppppfVar131 = (float ******)&DAT_02802688;
                    }
                    else {
                      ppppppfVar131 = ppppppfVar81 + 9;
                    }
                  }
                  *(bool *)((longlong)unaff_RDI + 0x13a) = *ppppppfVar131 != (float *****)0x0;
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      pcVar55 = (code *)local_888;
                    }
                  }
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013eb530();
                  pppppppfVar52 = local_908;
                  if (local_8d0 == local_908) {
                    cVar34 = (char)local_980;
                    if (((char)local_980 == '\0') && (local_8d0 != (float *******)0x0)) {
                      cVar34 = '\x01';
                      if ((char)local_8c8 != '\0') goto LAB_012a9c6a;
                      FUN_00d50b00();
                      cVar34 = '\x01';
                    }
LAB_012a9c50:
                    if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    pppppppfVar52 = local_8d0;
                    if ((char)local_8c8 == '\0') {
                      if (local_8d0 != (float *******)0x0) {
                        FUN_00d50b00();
                      }
                      cVar34 = '\x01';
                      if (((char)local_980 != '\0') && (local_908 != (float *******)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_012a9c50;
                    }
                    cVar34 = '\x01';
                    if (((char)local_980 != '\0') && (local_908 != (float *******)0x0)) {
                      FUN_00d50b20();
                    }
                  }
LAB_012a9c6a:
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  local_9a8._0_4_ = (uint)pppppppfVar52;
                  local_9a8._4_4_ = (undefined4)((ulonglong)pppppppfVar52 >> 0x20);
                  local_940 = CONCAT71(local_940._1_7_,cVar34);
                  ppppppfVar81 = local_890;
                  if ((pvVar41 != (void *)0x0) &&
                     (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_890, lVar42 != 0)) {
                    pcVar55 = (code *)local_890;
                    ppppppfVar81 = (float ******)
                                   local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                  pppppfVar119 = ppppppfVar81[9];
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    pppppfVar119 = ppppppfVar81[9];
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      pppppfVar119 = (float *****)
                                     pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  pppppfVar119 = (float *****)pppppfVar119[0x11];
                  if (pppppfVar119 == (float *****)0x0) {
                    local_8b8._0_8_ = (float *****)0x0;
                    auVar23._8_8_ = 0;
                    auVar23._0_8_ = uStack_990;
                    _local_998 = auVar23 << 0x40;
                  }
                  else {
                    FUN_00d50b00();
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    uVar82 = FUN_013eb530();
                    pppppppfVar52 = local_8d8;
                    uVar47 = (undefined7)((ulonglong)ppppppfVar81 >> 8);
                    if (local_8d0 == local_8d8) {
                      if (((char)local_9f0 == '\0') && (local_8d0 != (float *******)0x0)) {
                        uVar57 = CONCAT71(uVar47,1);
                        if ((char)local_8c8 != '\0') goto LAB_012a9e55;
                        uVar57 = CONCAT71(uVar47,1);
                        uVar82 = FUN_00d50b00();
                      }
                      else {
                        uVar57 = local_9f0 & 0xffffffff;
                        uVar82 = local_9f0;
                      }
LAB_012a9e3b:
                      if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                        uVar82 = FUN_00d50b20();
                      }
                    }
                    else {
                      pppppppfVar52 = local_8d0;
                      if ((char)local_8c8 == '\0') {
                        if (local_8d0 != (float *******)0x0) {
                          uVar82 = FUN_00d50b00();
                        }
                        uVar57 = CONCAT71(uVar47,1);
                        if (((char)local_9f0 != '\0') && (local_8d8 != (float *******)0x0)) {
                          uVar82 = FUN_00d50b20();
                        }
                        goto LAB_012a9e3b;
                      }
                      uVar57 = CONCAT71(uVar47,1);
                      if (((char)local_9f0 != '\0') && (local_8d8 != (float *******)0x0)) {
                        uVar82 = FUN_00d50b20();
                      }
                    }
LAB_012a9e55:
                    auVar21 = _local_998;
                    local_998._1_7_ = (int7)(uVar82 >> 8);
                    local_998[0] = 1;
                    uStack_990 = auVar21._8_8_;
                    local_9f0 = uVar57 & 0xffffffff;
                    local_8d8 = pppppppfVar52;
                    local_8b8._0_8_ = pppppfVar119;
                  }
                  uVar47 = (undefined7)((ulonglong)unaff_RDI >> 8);
                  if (*(char *)((longlong)unaff_RDI + 0x13a) == '\0') {
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                      pppppfVar44 = local_888[0x34];
                      ppppppfVar81 = local_888;
                      if (pppppfVar44 != (float *****)local_8b8._0_8_) goto LAB_012a9f44;
LAB_012a9efa:
                      pppppfVar8 = (float *****)local_8b8._0_8_;
                      auVar21 = _local_998;
                      if ((pppppfVar119 == (float *****)0x0) && (pppppfVar44 != (float *****)0x0)) {
                        local_998._1_7_ = (int7)((ulonglong)ppppppfVar81 >> 8);
                        local_998[0] = 1;
                        uStack_990 = auVar21._8_8_;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      ppppppfVar81 = (float ******)
                                     local_888[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      pppppfVar44 = ppppppfVar81[0x34];
                      pcVar55 = (code *)local_888;
                      if (pppppfVar44 == (float *****)local_8b8._0_8_) goto LAB_012a9efa;
LAB_012a9f44:
                      if (pppppfVar44 != (float *****)0x0) {
                        ppppppfVar81 = (float ******)FUN_00d50b00();
                      }
                      auVar21 = _local_998;
                      local_998._1_7_ = (int7)((ulonglong)ppppppfVar81 >> 8);
                      local_998[0] = 1;
                      uStack_990 = auVar21._8_8_;
                      pppppfVar8 = pppppfVar44;
                      if (pppppfVar119 != (float *****)0x0 &&
                          (float *****)local_8b8._0_8_ != (float *****)0x0) {
                        FUN_00d50b20();
                      }
                    }
                    local_8b8._0_8_ = pppppfVar8;
                    if ((float *****)local_8b8._0_8_ == (float *****)0x0) {
                      local_8b8._0_8_ = (float *****)0x0;
                    }
                    else {
                      pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                      if (pvVar41 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_013eb530();
                      pppppppfVar52 = local_938;
                      if (local_8d0 == local_938) {
                        if (((char)local_9d0 == '\0') && (local_8d0 != (float *******)0x0)) {
                          uVar82 = CONCAT71(uVar47,1);
                          if ((char)local_8c8 != '\0') goto LAB_012aa1bb;
                          uVar82 = CONCAT71(uVar47,1);
                          FUN_00d50b00();
                        }
                        else {
                          uVar82 = local_9d0 & 0xffffffff;
                        }
LAB_012aa1a1:
                        if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        pppppppfVar52 = local_8d0;
                        if ((char)local_8c8 == '\0') {
                          if (local_8d0 != (float *******)0x0) {
                            FUN_00d50b00();
                          }
                          uVar82 = CONCAT71(uVar47,1);
                          if (((char)local_9d0 != '\0') && (local_938 != (float *******)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_012aa1a1;
                        }
                        uVar82 = CONCAT71(uVar47,1);
                        if (((char)local_9d0 != '\0') && (local_938 != (float *******)0x0)) {
                          FUN_00d50b20();
                        }
                      }
LAB_012aa1bb:
                      local_9d0 = uVar82 & 0xffffffff;
                      local_938 = pppppppfVar52;
                    }
                  }
                  else if (local_938 == (float *******)0x0) {
                    local_938 = (float *******)0x0;
                  }
                  else {
                    if ((char)local_9d0 != '\0') {
                      FUN_00d50b20();
                    }
                    local_9d0 = 0;
                    local_938 = (float *******)0x0;
                  }
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                    pppppfVar119 = local_888[0x31];
                    ppppppfVar81 = local_888;
                    pppppfVar44 = pppppfVar119;
                    if (pppppfVar119 != (float *****)local_8b8._0_8_) goto LAB_012aa267;
LAB_012aa21d:
                    pppppfVar119 = (float *****)local_8b8._0_8_;
                    auVar21 = _local_998;
                    if (local_998[0] == '\0') {
                      if (pppppfVar44 == (float *****)0x0) {
                      }
                      else {
                        local_998._1_7_ = (int7)((ulonglong)ppppppfVar81 >> 8);
                        local_998[0] = 1;
                        uStack_990 = auVar21._8_8_;
                        FUN_00d50b00();
LAB_012aa29a:
                        local_8b8._0_8_ = pppppfVar119;
                      }
                    }
                    else {
                    }
                    if (pppppfVar119 != (float *****)0x0) goto LAB_012aa340;
LAB_012aa2ad:
                    if (*(char *)((longlong)unaff_RDI + 0x13a) == '\0') goto LAB_012aa486;
LAB_012aa2bb:
                    uVar89 = local_8b8._0_8_;
                    if (local_930 != (float *******)0x0) {
                      if ((char)local_9d8 != '\0') {
                        FUN_00d50b20();
                      }
                      local_9d8 = 0;
                    }
                    local_930 = (float *******)0x0;
                  }
                  else {
                    ppppppfVar81 = (float ******)
                                   local_888[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    pppppfVar119 = ppppppfVar81[0x31];
                    pcVar55 = (code *)local_888;
                    pppppfVar44 = pppppfVar119;
                    if (pppppfVar119 == (float *****)local_8b8._0_8_) goto LAB_012aa21d;
LAB_012aa267:
                    if (pppppfVar119 != (float *****)0x0) {
                      ppppppfVar81 = (float ******)FUN_00d50b00();
                    }
                    auVar21 = _local_998;
                    bVar48 = local_998[0] != '\0';
                    local_998._1_7_ = (int7)((ulonglong)ppppppfVar81 >> 8);
                    local_998[0] = 1;
                    uStack_990 = auVar21._8_8_;
                    if ((bVar48) && ((float *****)local_8b8._0_8_ != (float *****)0x0)) {
                      FUN_00d50b20();
                      goto LAB_012aa29a;
                    }
                    local_8b8._0_8_ = pppppfVar119;
                    if (pppppfVar119 == (float *****)0x0) goto LAB_012aa2ad;
LAB_012aa340:
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_013eb530();
                    pppppppfVar52 = local_950;
                    if (local_8d0 == local_950) {
                      if (((char)local_9f8 == '\0') && (local_8d0 != (float *******)0x0)) {
                        uVar82 = CONCAT71(uVar47,1);
                        if ((char)local_8c8 != '\0') goto LAB_012aa460;
                        uVar82 = CONCAT71(uVar47,1);
                        FUN_00d50b00();
                      }
                      else {
                        uVar82 = local_9f8 & 0xffffffff;
                      }
LAB_012aa446:
                      if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      pppppppfVar52 = local_8d0;
                      if ((char)local_8c8 == '\0') {
                        if (local_8d0 != (float *******)0x0) {
                          FUN_00d50b00();
                        }
                        uVar82 = CONCAT71(uVar47,1);
                        if (((char)local_9f8 != '\0') && (local_950 != (float *******)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_012aa446;
                      }
                      uVar82 = CONCAT71(uVar47,1);
                      if (((char)local_9f8 != '\0') && (local_950 != (float *******)0x0)) {
                        FUN_00d50b20();
                      }
                    }
LAB_012aa460:
                    local_9f8 = uVar82 & 0xffffffff;
                    local_950 = pppppppfVar52;
                    if (*(char *)((longlong)unaff_RDI + 0x13a) != '\0') goto LAB_012aa2bb;
LAB_012aa486:
                    uVar89 = local_8b8._0_8_;
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                      pppppfVar119 = local_888[0x32];
                      ppppppfVar81 = local_888;
                      if (pppppfVar119 != (float *****)uVar89) goto LAB_012aa507;
LAB_012aa4d3:
                      auVar21 = _local_998;
                      pppppfVar44 = (float *****)uVar89;
                      if ((local_998[0] == '\0') && (pppppfVar119 != (float *****)0x0)) {
                        local_998._1_7_ = (int7)((ulonglong)ppppppfVar81 >> 8);
                        local_998[0] = 1;
                        uStack_990 = auVar21._8_8_;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      ppppppfVar81 = (float ******)
                                     local_888[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      pppppfVar119 = ppppppfVar81[0x32];
                      pcVar55 = (code *)local_888;
                      if (pppppfVar119 == (float *****)uVar89) goto LAB_012aa4d3;
LAB_012aa507:
                      if (pppppfVar119 != (float *****)0x0) {
                        ppppppfVar81 = (float ******)FUN_00d50b00();
                      }
                      auVar21 = _local_998;
                      bVar48 = local_998[0] != '\0';
                      local_998._1_7_ = (int7)((ulonglong)ppppppfVar81 >> 8);
                      local_998[0] = 1;
                      uStack_990 = auVar21._8_8_;
                      pppppfVar44 = pppppfVar119;
                      if ((bVar48) && ((float *****)uVar89 != (float *****)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    if (pppppfVar44 == (float *****)0x0) {
                      uVar89 = 0;
                    }
                    else {
                      local_8b8._0_8_ = pppppfVar44;
                      pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                      if (pvVar41 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_013eb530();
                      pppppppfVar52 = local_930;
                      uVar47 = (undefined7)((ulonglong)pppppfVar44 >> 8);
                      if (local_8d0 == local_930) {
                        if (((char)local_9d8 == '\0') && (local_8d0 != (float *******)0x0)) {
                          uVar82 = CONCAT71(uVar47,1);
                          if ((char)local_8c8 != '\0') goto LAB_012aa683;
                          uVar82 = CONCAT71(uVar47,1);
                          FUN_00d50b00();
                        }
                        else {
                          uVar82 = local_9d8 & 0xffffffff;
                        }
LAB_012aa669:
                        if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        pppppppfVar52 = local_8d0;
                        if ((char)local_8c8 == '\0') {
                          if (local_8d0 != (float *******)0x0) {
                            FUN_00d50b00();
                          }
                          uVar82 = CONCAT71(uVar47,1);
                          if (((char)local_9d8 != '\0') && (local_930 != (float *******)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_012aa669;
                        }
                        uVar82 = CONCAT71(uVar47,1);
                        if (((char)local_9d8 != '\0') && (local_930 != (float *******)0x0)) {
                          FUN_00d50b20();
                        }
                      }
LAB_012aa683:
                      local_9d8 = uVar82 & 0xffffffff;
                      uVar89 = local_8b8._0_8_;
                      local_930 = pppppppfVar52;
                    }
                  }
                  local_8b8._0_8_ = uVar89;
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  ppppppfVar81 = local_890;
                  if ((pvVar41 != (void *)0x0) &&
                     (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_890, lVar42 != 0)) {
                    pcVar55 = (code *)local_890;
                    ppppppfVar81 = (float ******)
                                   local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                  pppppfVar119 = ppppppfVar81[9];
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    pppppfVar119 = ppppppfVar81[9];
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      pppppfVar119 = (float *****)
                                     pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  ppppppfVar71 = local_858;
                  ppppppfVar131 = (float ******)pppppfVar119[0xf];
                  if (ppppppfVar131 == local_858) {
                    if (((char)local_900 == '\0') && (ppppppfVar131 != (float ******)0x0)) {
                      FUN_00d50b00();
                      goto LAB_012aa790;
                    }
                    uVar82 = local_900 & 0xffffffff;
                    uVar85 = (undefined4)local_900;
                    local_918 = local_858;
                  }
                  else {
                    if (ppppppfVar131 != (float ******)0x0) {
                      FUN_00d50b00();
                    }
                    ppppppfVar71 = ppppppfVar131;
                    if (((char)local_900 != '\0') && (local_858 != (float ******)0x0)) {
                      FUN_00d50b20();
                    }
LAB_012aa790:
                    uVar82 = CONCAT71((int7)((ulonglong)ppppppfVar81 >> 8),1);
                    uVar85 = (undefined4)uVar82;
                    local_918 = ppppppfVar71;
                  }
                  if (local_918 == (float ******)0x0) {
                    uVar85 = (undefined4)uVar82;
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    ppppppfVar81 = local_890;
                    if ((pvVar41 != (void *)0x0) &&
                       (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_890, lVar42 != 0)) {
                      pcVar55 = (code *)local_890;
                      ppppppfVar81 = (float ******)
                                     local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    pppppfVar119 = ppppppfVar81[8];
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      pppppfVar119 = ppppppfVar81[8];
                      lVar42 = FUN_00e8b990();
                      if (lVar42 != 0) {
                        pppppfVar119 = (float *****)
                                       pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                    }
                    ppppfVar61 = pppppfVar119[0xc];
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      ppppfVar61 = pppppfVar119[0xc];
                      lVar42 = FUN_00e8b990();
                      if (lVar42 != 0) {
                        ppppfVar61 = (float ****)
                                     ppppfVar61[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                    }
                    local_918 = (float ******)ppppfVar61[7];
                    if (local_918 == (float ******)0x0) {
                      local_918 = (float ******)0x0;
                    }
                    else {
                      FUN_00d50b00();
                      uVar85 = (undefined4)CONCAT71((int7)(uVar82 >> 8),1);
                    }
                  }
                  local_880 = CONCAT44(local_880._4_4_,uVar85);
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  ppppppfVar81 = local_890;
                  if ((pvVar41 != (void *)0x0) &&
                     (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_890, lVar42 != 0)) {
                    pcVar55 = (code *)local_890;
                    ppppppfVar81 = (float ******)
                                   local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                  pppppfVar119 = ppppppfVar81[9];
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    pppppfVar119 = ppppppfVar81[9];
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      pppppfVar119 = (float *****)
                                     pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  local_a80 = (ulonglong)(pppppfVar119[0x17] != (float ****)0x0);
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  ppppppfVar81 = local_890;
                  if ((pvVar41 != (void *)0x0) &&
                     (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_890, lVar42 != 0)) {
                    pcVar55 = (code *)local_890;
                    ppppppfVar81 = (float ******)
                                   local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                  pppppfVar119 = ppppppfVar81[8];
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if (pvVar41 != (void *)0x0) {
                    pppppfVar119 = ppppppfVar81[8];
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      pppppfVar119 = (float *****)
                                     pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  local_868 = (float ******)pppppfVar119[0xc];
                  uVar37 = local_8e8[0];
                  if (local_868 != (float ******)0x0) {
                    FUN_00d50b00();
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pcVar55 = (code *)local_868;
                    }
                    uVar89 = FUN_01326de0();
                    if ((int)uVar89 != 2) {
                      pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                      if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                        pcVar55 = (code *)local_868;
                      }
                      uVar89 = FUN_01326de0();
                      if ((int)uVar89 != 4) goto LAB_012aaa99;
                    }
                    local_a80 = CONCAT71((int7)((ulonglong)uVar89 >> 8),1);
                  }
LAB_012aaa99:
                  uVar82 = CONCAT71((int7)((ulonglong)pppppfVar119 >> 8),uVar37);
                  pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                  if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                    pcVar55 = (code *)local_888;
                  }
                  uVar89 = FUN_012660a0();
                  local_a14 = (float)uVar89 + local_b78;
                  if ((*(char *)((longlong)unaff_RDI + 0x13a) == '\0') || (0.0 <= local_a14)) {
                    if (*(char *)((longlong)unaff_RDI + 0x13a) == '\0') {
                      auVar123 = ZEXT416((uint)DAT_02390124);
                      auVar132._4_4_ = (float)(int)((ulonglong)uVar89 >> 0x20);
                      auVar132._0_4_ = local_a14;
                      auVar132._8_4_ = (float)(int)extraout_XMM0_Qb;
                      auVar132._12_4_ = (float)(int)((ulonglong)extraout_XMM0_Qb >> 0x20);
                      local_a14 = (float)(~-(uint)(0.0 < local_a14) & (uint)DAT_02390124 |
                                         (uint)(DAT_02390124 - local_a14) & -(uint)(0.0 < local_a14)
                                         );
                      goto joined_r0x012aacdf;
                    }
                    local_a14 = DAT_02390124;
                    if (local_918 != (float ******)0x0) goto LAB_012aab2e;
LAB_012aace5:
                    (*(code *)(*unaff_RDI)[0xcf])();
                    local_858 = (float ******)CONCAT71(local_858._1_7_,(char)local_8c0);
                    puVar43 = local_8c0;
                    pppppppfVar52 = local_870;
                  }
                  else {
                    local_a14 = local_a14 + DAT_02390124;
joined_r0x012aacdf:
                    if (local_918 == (float ******)0x0) goto LAB_012aace5;
LAB_012aab2e:
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    ppppppfVar81 = local_918;
                    if ((pvVar41 != (void *)0x0) &&
                       (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_918, lVar42 != 0)) {
                      pcVar55 = (code *)local_918;
                      ppppppfVar81 = (float ******)
                                     local_918[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    local_a00 = (double)(*(code *)(*ppppppfVar81)[0x6e])();
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    ppppppfVar81 = local_918;
                    if ((pvVar41 != (void *)0x0) &&
                       (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_918, lVar42 != 0)) {
                      pcVar55 = (code *)local_918;
                      ppppppfVar81 = (float ******)
                                     local_918[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    local_9ac = (float)(*(code *)(*ppppppfVar81)[0x74])();
                    ppppppfVar81 = unaff_RDI[0x1d];
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      ppppppfVar81 = unaff_RDI[0x1d];
                      lVar42 = FUN_00e8b990();
                      if (lVar42 != 0) {
                        ppppppfVar81 = (float ******)
                                       ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                    }
                    FUN_011ef8f0();
                    pppppppfVar52 = local_870;
                    uVar47 = (undefined7)((ulonglong)ppppppfVar81 >> 8);
                    if (local_8d0 == local_870) {
                      if (((char)local_8c0 == '\0') && (local_8d0 != (float *******)0x0)) {
                        uVar82 = CONCAT71(uVar47,1);
                        if ((char)local_8c8 != '\0') goto LAB_012aada4;
                        uVar82 = CONCAT71(uVar47,1);
                        FUN_00d50b00();
                      }
                      else {
                        uVar82 = (ulonglong)local_8c0 & 0xffffffff;
                      }
LAB_012aad8a:
                      if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      pppppppfVar52 = local_8d0;
                      if ((char)local_8c8 == '\0') {
                        if (local_8d0 != (float *******)0x0) {
                          FUN_00d50b00();
                        }
                        uVar82 = CONCAT71(uVar47,1);
                        if (((char)local_8c0 != '\0') && (local_870 != (float *******)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_012aad8a;
                      }
                      uVar82 = CONCAT71(uVar47,1);
                      if (((char)local_8c0 != '\0') && (local_870 != (float *******)0x0)) {
                        FUN_00d50b20();
                      }
                    }
LAB_012aada4:
                    pppppppfVar54 = DAT_028ac598;
                    if (pppppppfVar52 == (float *******)0x0) {
                      if (DAT_028ac598 == (float *******)0x0) {
                        pppppppfVar52 = (float *******)0x0;
                      }
                      else {
                        local_8c0 = (undefined *)(uVar82 & 0xffffffff);
                        local_870 = (float *******)0x0;
                        FUN_00d50b00();
                        uVar82 = 1;
                        pppppppfVar52 = pppppppfVar54;
                      }
                    }
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    ppppppfVar81 = local_888;
                    if ((pvVar41 != (void *)0x0) &&
                       (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_888, lVar42 != 0)) {
                      ppppppfVar81 = (float ******)
                                     local_888[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      pcVar55 = (code *)local_888;
                    }
                    local_a58 = (float ******)ppppppfVar81[0x1d];
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    ppppppfVar81 = local_888;
                    if ((pvVar41 != (void *)0x0) &&
                       (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_888, lVar42 != 0)) {
                      ppppppfVar81 = (float ******)
                                     local_888[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      pcVar55 = (code *)local_888;
                    }
                    local_bc0 = (double)ppppppfVar81[0x1e] + (double)local_a58;
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pcVar55 = (code *)local_888;
                    }
                    local_b60 = (double)FUN_0129b620();
                    local_b98._8_8_ = 0;
                    local_b98._0_8_ = unaff_RDI[0x28];
                    unaff_RDI[0x28] = local_a58;
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    local_858 = (float ******)CONCAT71(local_858._1_7_,(char)uVar82);
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pcVar55 = (code *)local_888;
                    }
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if (pvVar41 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_b58 = FUN_013de650();
                    local_8c8._0_1_ = '\0';
                    local_8d0 = (float *******)0x0;
                    pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
                    if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                      pppppppfVar54 = (float *******)local_890[9];
                      if (pppppppfVar54 != (float *******)0x0) goto LAB_012ab090;
LAB_012ab078:
                      pVar50 = (pthread_key_t)pcVar55;
                      pppppppfVar54 = (float *******)0x0;
                    }
                    else {
                      pppppppfVar54 =
                           (float *******)
                           local_890[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4][9];
                      pcVar55 = (code *)local_890;
                      if (pppppppfVar54 == (float *******)0x0) goto LAB_012ab078;
LAB_012ab090:
                      pVar50 = (pthread_key_t)pcVar55;
                      FUN_00d50b00();
                      local_8c8._0_1_ = '\x01';
                      local_8d0 = pppppppfVar54;
                    }
                    pvVar41 = _pthread_getspecific(pVar50);
                    pppppppfVar75 = pppppppfVar54;
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pppppppfVar75 =
                           (float *******)
                           pppppppfVar54[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    local_a60 = (float *******)pppppppfVar75[0xb];
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar75);
                    pppppppfVar75 = pppppppfVar54;
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pppppppfVar75 =
                           (float *******)
                           pppppppfVar54[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    puVar58 = (undefined1 *)((longlong)pppppppfVar75[0xc] + (longlong)local_a60);
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar75);
                    pppppppfVar75 = pppppppfVar54;
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pppppppfVar75 =
                           (float *******)
                           pppppppfVar54[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    local_a20 = (float *****)(double)(longlong)pppppppfVar75[0xe];
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar75);
                    pppppppfVar75 = pppppppfVar54;
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pppppppfVar75 =
                           (float *******)
                           pppppppfVar54[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    local_a38 = (double)(longlong)pppppppfVar75[0xd];
                    uVar89 = 0;
                    if ((DAT_027c0170 == '\0') &&
                       (uVar89 = ___cxa_guard_acquire(), (int)uVar89 != 0)) {
                      _DAT_02790158 = FUN_007ef2d0();
                      _DAT_02790140 = "MUAudioSourcePrincipalItem";
                      _DAT_02790148 = 0x138;
                      _DAT_02790150 = FUN_010fe5c0;
                      _DAT_02790160 = 0;
                      uRam0000000002790168 = 0;
                      _DAT_02790170 = 0;
                      uRam0000000002790178 = 0;
                      _DAT_02790180 = 0;
                      uRam0000000002790188 = 0;
                      _DAT_02790190 = 0;
                      uRam0000000002790198 = 0;
                      _DAT_027901a0 = 0;
                      uRam00000000027901a8 = 0;
                      _DAT_027901b0 = 0;
                      uRam00000000027901b8 = 0;
                      _DAT_027901c0 = 0;
                      uRam00000000027901c8 = 0;
                      _DAT_027901d0 = 0;
                      uRam00000000027901d8 = 0;
                      _DAT_027901e0 = 0;
                      uRam00000000027901e8 = 0;
                      _DAT_027901f0 = 0;
                      uRam00000000027901f8 = 0;
                      _DAT_02790200 = 0;
                      uVar89 = ___cxa_guard_release();
                    }
                    pppppppfVar75 = (float *******)&DAT_02802688;
                    if (pppppppfVar54 != (float *******)0x0) {
                      (*(code *)(*pppppppfVar54)[0x6c])();
                      uVar89 = FUN_00e85ea0();
                      pppppppfVar75 = (float *******)&local_8d0;
                      if ((char)uVar89 == '\0') {
                        pppppppfVar75 = (float *******)&DAT_02802688;
                      }
                    }
                    local_870 = (float *******)*pppppppfVar75;
                    local_908 = (float *******)
                                CONCAT71(local_908._1_7_,*(char *)(pppppppfVar75 + 1));
                    if ((*(char *)(pppppppfVar75 + 1) == '\0') || (local_870 == (float *******)0x0))
                    {
                      if (local_870 != (float *******)0x0) goto LAB_012ab22b;
                      local_978 = (float ******)
                                  CONCAT44(local_978._4_4_,
                                           (int)CONCAT71((int7)((ulonglong)uVar89 >> 8),1));
                      local_aa0 = local_a60;
                    }
                    else {
                      FUN_00d50b00();
LAB_012ab22b:
                      local_978 = (float ******)((ulonglong)local_978 & 0xffffffff00000000);
                      pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar75);
                      pppppppfVar54 = local_870;
                      if (pvVar41 != (void *)0x0) {
                        local_978 = (float ******)((ulonglong)local_978 & 0xffffffff00000000);
                        lVar42 = FUN_00e8b990();
                        pppppppfVar54 = local_870;
                        if (lVar42 != 0) {
                          pppppppfVar54 =
                               (float *******)
                               local_870[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                          pppppppfVar75 = local_870;
                        }
                      }
                      local_aa0 = (float *******)
                                  ((longlong)pppppppfVar54[0x1a] + (longlong)local_a60);
                      local_978 = (float ******)((ulonglong)local_978 & 0xffffffff00000000);
                    }
                    local_a10 = DAT_0238fee8 / local_a00;
                    local_b08 = (double)(longlong)puVar58;
                    if (local_9c8[0] != '\0') {
                      *(undefined1 *)((longlong)unaff_RDI + 0x25a) = 0;
                      *(undefined2 *)((longlong)unaff_RDI + 0x25c) = 0;
                      *(float *)(unaff_RDI + 0x2c) = 1.4013e-45;
                      if ((int)local_9ac < 2) {
LAB_012ab348:
                        lVar42 = 0;
                        do {
                          if ((int)*(float *)((longlong)unaff_RDI + 0x304) <
                              (int)*(float *)(unaff_RDI + 0x2b)) {
                            FUN_00e828a0();
                          }
                          if (0 < (int)*(float *)(unaff_RDI + 0x60)) {
                            uVar82 = 0;
                            do {
                              if (*(char *)((longlong)unaff_RDI[0x62] + uVar82) == '\0') {
                                *(undefined1 *)((longlong)unaff_RDI[0x62] + uVar82) = 1;
                                pppppfVar119 = unaff_RDI[0x61][uVar82] + 2;
                                goto LAB_012ab463;
                              }
                              uVar82 = uVar82 + 1;
                            } while ((uint)*(float *)(unaff_RDI + 0x60) != uVar82);
                          }
                          FUN_00e828a0();
                          pppppfVar119 = (float *****)0x0;
LAB_012ab463:
                          unaff_RDI[0x2a][lVar42] = pppppfVar119;
                          if ((int)*(float *)((longlong)unaff_RDI + 0x304) <
                              (int)*(float *)(unaff_RDI + 0x2b)) {
                            FUN_00e828a0();
                          }
                          if (0 < (int)*(float *)(unaff_RDI + 0x60)) {
                            uVar82 = 0;
                            do {
                              if (*(char *)((longlong)unaff_RDI[0x62] + uVar82) == '\0') {
                                *(undefined1 *)((longlong)unaff_RDI[0x62] + uVar82) = 1;
                                pppppfVar119 = unaff_RDI[0x61][uVar82] + 2;
                                goto LAB_012ab363;
                              }
                              uVar82 = uVar82 + 1;
                            } while ((uint)*(float *)(unaff_RDI + 0x60) != uVar82);
                          }
                          FUN_00e828a0();
                          pppppfVar119 = (float *****)0x0;
LAB_012ab363:
                          unaff_RDI[0x53][lVar42] = pppppfVar119;
                          unaff_RDI[0x2e][lVar42] = (float *****)0x0;
                          unaff_RDI[0x2f][lVar42] = (float *****)0x0;
                          unaff_RDI[0x30][lVar42] = (float *****)0x0;
                          unaff_RDI[0x31][lVar42] = (float *****)0x0;
                          unaff_RDI[0x33][lVar42] = (float *****)0x0;
                          unaff_RDI[0x34][lVar42] = (float *****)0x0;
                          lVar42 = lVar42 + 1;
                        } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                      }
                      else {
                        if (local_a2c == 1.4013e-45) {
                          *(undefined1 *)((longlong)unaff_RDI + 0x25a) = 1;
                          goto LAB_012ab348;
                        }
                        fVar98 = local_9ac;
                        if ((int)local_a2c < (int)local_9ac) {
                          fVar98 = local_a2c;
                        }
                        *(float *)local_948 = fVar98;
                        if (0 < (int)fVar98) goto LAB_012ab348;
                      }
                      unaff_RDI[0x35] = (float ******)0x0;
                      fVar98 = (float)((DAT_0240d180 <= local_a00) + 2 +
                                      (uint)(DAT_0240d180 <= local_a00));
                      if (local_a00 < DAT_0240d188) {
                        fVar98 = 1.4013e-45;
                      }
                      *(float *)(unaff_RDI + 0x2d) = fVar98;
                      bVar36 = SUB41(fVar98,0);
                      if ((uint)local_b74 <= (uint)fVar98) {
                        bVar36 = SUB41(local_b74,0);
                      }
                      uVar10 = SUB42(fVar98,0) / (ushort)bVar36;
                      *(uint *)((longlong)unaff_RDI + 0x164) = (uint)(byte)uVar10;
                      *(uint *)((longlong)unaff_RDI + 0x16c) =
                           (uint)(byte)(SUB42(fVar98,0) / uVar10);
                      unaff_RDI[0x49] = (float ******)(local_ad0 * local_a00);
                      unaff_RDI[0x4a] = (float ******)(DAT_0238fee8 / (local_ad0 * local_a00));
                      plVar70 = (longlong *)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                      pvVar41 = _pthread_getspecific((pthread_key_t)fVar98);
                      pppppppfVar54 = pppppppfVar52;
                      if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                        pppppppfVar54 =
                             (float *******)
                             pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                      *(undefined1 *)(unaff_RDI + 0x4b) = *(undefined1 *)(pppppppfVar54 + 7);
                      pvVar41 = _pthread_getspecific((pthread_key_t)fVar98);
                      pppppppfVar54 = pppppppfVar52;
                      if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                        pppppppfVar54 =
                             (float *******)
                             pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                      fVar98 = (float)((int)*(float *)((longlong)unaff_RDI + 0x16c) *
                                      (int)*(float *)((longlong)pppppppfVar54 + 0x44));
                      *(float *)(unaff_RDI + 0x43) = fVar98;
                      pvVar41 = _pthread_getspecific((pthread_key_t)fVar98);
                      if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                        plVar70 = (longlong *)
                                  plVar70[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                      local_920 = (float *******)(local_9e0 - (double)local_a58);
                      dVar88 = (double)(**(code **)(*plVar70 + 0x3d8))();
                      pppppfVar119 = (float *****)(local_a00 * dVar88 + (double)local_b58);
                      unaff_RDI[0x20][2] = pppppfVar119;
                      unaff_RDI[0x41] =
                           (float ******)
                           ((double)pppppfVar119 - (double)(longlong)(double)pppppfVar119);
                      if (*(char *)((longlong)unaff_RDI + 0x263) == '\0') {
                        pvVar41 = _pthread_getspecific((pthread_key_t)fVar98);
                        ppppppfVar81 = local_918;
                        if ((pvVar41 != (void *)0x0) &&
                           (lVar42 = FUN_00e8b990(), ppppppfVar81 = local_918, lVar42 != 0)) {
                          ppppppfVar81 = (float ******)
                                         local_918[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                        }
                        cVar34 = (*(code *)(*ppppppfVar81)[0x8b])();
                        if ((cVar34 != '\0') && (*(char *)((longlong)unaff_RDI + 0x13a) == '\0')) {
                          *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 1;
                        }
                      }
                      pppppppfVar54 = local_aa0;
                      if ((double)unaff_RDI[0x20][2] < (double)(longlong)local_aa0) {
                        pppppppfVar54 = (float *******)0xffffffffffffffff;
                      }
                      pppppppfVar75 = (float *******)0xffffffffffffffff;
                      if ((double)unaff_RDI[0x20][2] < (double)(longlong)local_aa0) {
                        pppppppfVar75 = local_aa0;
                      }
                      unaff_RDI[0x5a] = (float ******)pppppppfVar54;
                      unaff_RDI[0x5b] = (float ******)pppppppfVar75;
                      *(undefined2 *)(unaff_RDI + 0x54) = 0;
                      *(undefined1 *)((longlong)unaff_RDI + 0x2a2) = 0;
                      pppppppfVar53 = local_aa0;
                      if (local_850 != (float *******)0x0) {
                        pvVar41 = _pthread_getspecific((pthread_key_t)local_aa0);
                        if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                          cVar34 = *(char *)((longlong)local_850 + 0x79);
                        }
                        else {
                          cVar34 = *(char *)((longlong)
                                             local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) +
                                                       4] + 0x79);
                          pppppppfVar53 = local_850;
                        }
                        if (cVar34 != '\0') {
                          *(undefined1 *)(unaff_RDI + 0x54) = 1;
                        }
                      }
                      local_9c8._0_8_ = (longlong)(double)pppppfVar119;
                      ppppppfVar81 = unaff_RDI[0x1d];
                      local_a78 = pppppppfVar75;
                      pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar53);
                      if (pvVar41 != (void *)0x0) {
                        ppppppfVar81 = unaff_RDI[0x1d];
                        lVar42 = FUN_00e8b990();
                        if (lVar42 != 0) {
                          ppppppfVar81 = (float ******)
                                         ppppppfVar81
                                         [(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                        }
                      }
                      pppppfVar119 = ppppppfVar81[10];
                      pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar53);
                      if (pvVar41 != (void *)0x0) {
                        pppppfVar119 = ppppppfVar81[10];
                        lVar42 = FUN_00e8b990();
                        if (lVar42 != 0) {
                          pppppfVar119 = (float *****)
                                         pppppfVar119
                                         [(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                        }
                      }
                      ppppfVar61 = pppppfVar119[8];
                      pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar53);
                      if (pvVar41 != (void *)0x0) {
                        ppppfVar61 = pppppfVar119[8];
                        lVar42 = FUN_00e8b990();
                        if (lVar42 != 0) {
                          ppppfVar61 = (float ****)
                                       ppppfVar61[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                        }
                      }
                      pppfVar6 = ppppfVar61[0xc];
                      if (pppfVar6 == (float ***)0x0) {
LAB_012ab989:
                        *(undefined1 *)(unaff_RDI + 0x54) = 0;
                        if (*(char *)((longlong)unaff_RDI + 0x13a) == '\0') goto LAB_012ab92e;
LAB_012ab99b:
                        *(undefined1 *)(unaff_RDI + 0x4b) = 0;
                        *(undefined1 *)((longlong)unaff_RDI + 0x2a1) = 0;
                      }
                      else {
                        FUN_00d50b00();
                        pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar53);
                        if (pvVar41 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        iVar40 = FUN_01326de0();
                        if (iVar40 != 1) {
                          pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar53);
                          if (pvVar41 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          iVar40 = FUN_01326de0();
                          if (iVar40 != 3) goto LAB_012ab989;
                        }
                        *(undefined1 *)((longlong)unaff_RDI + 0x2a2) = 1;
                        if (*(char *)((longlong)unaff_RDI + 0x13a) != '\0') goto LAB_012ab99b;
LAB_012ab92e:
                        if (*(char *)(unaff_RDI + 0x54) != '\0') {
                          pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar53);
                          if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                            cVar34 = *(char *)(local_850 + 0xf);
                          }
                          else {
                            cVar34 = *(char *)(local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1)
                                                         + 4] + 0xf);
                            pppppppfVar53 = local_850;
                          }
                          if (cVar34 == '\0') {
                            if (local_a90 != 0) {
                              pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar53);
                              pppppppfVar75 = local_850;
                              if ((pvVar41 != (void *)0x0) &&
                                 (lVar42 = FUN_00e8b990(), pppppppfVar75 = local_850, lVar42 != 0))
                              {
                                pppppppfVar75 =
                                     (float *******)
                                     local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                              }
                              if (*(char *)((longlong)pppppppfVar75 + 0x7d) == '\0')
                              goto LAB_012abcf1;
                            }
                          }
                          else {
LAB_012abcf1:
                            *(undefined1 *)(unaff_RDI + 0x4b) = 1;
                            *(undefined1 *)((longlong)unaff_RDI + 0x2a1) = 1;
                            if (unaff_RDI[0x57] == (float ******)0x0) {
                              if ((int)*(float *)((longlong)unaff_RDI + 0x304) <
                                  (int)*(float *)(unaff_RDI + 0x2b)) {
                                FUN_00e828a0();
                              }
                              if (0 < (int)*(float *)(unaff_RDI + 0x60)) {
                                uVar82 = 0;
                                do {
                                  if (*(char *)((longlong)unaff_RDI[0x62] + uVar82) == '\0') {
                                    *(undefined1 *)((longlong)unaff_RDI[0x62] + uVar82) = 1;
                                    ppppppfVar81 = (float ******)(unaff_RDI[0x61][uVar82] + 2);
                                    goto LAB_012acbd1;
                                  }
                                  uVar82 = uVar82 + 1;
                                } while ((uint)*(float *)(unaff_RDI + 0x60) != uVar82);
                              }
                              FUN_00e828a0();
                              ppppppfVar81 = (float ******)0x0;
LAB_012acbd1:
                              unaff_RDI[0x57] = ppppppfVar81;
                              ___bzero();
                            }
                          }
                        }
                      }
                      *(undefined1 *)((longlong)unaff_RDI + 0x264) = 0;
                      local_d18 = local_930;
                      local_d10 = 0;
                      local_d08 = local_8d8;
                      local_d00 = 0;
                      auVar132._8_8_ = 0;
                      auVar132._0_8_ = (longlong)local_a10;
                      fVar98 = 0.0;
                      fVar149 = 0.0;
                      FUN_012b5260(local_9e0,local_a58,local_a00,local_a10,&local_d18,&local_d08);
                      unaff_RDI[0x5a] = (float ******)pppppppfVar54;
                      unaff_RDI[0x5b] = (float ******)local_a78;
                      if (((*(char *)(unaff_RDI + 0x4b) == '\0') &&
                          (*(float *)local_948 == 2.8026e-45)) &&
                         (*(char *)((longlong)unaff_RDI + 0x25b) == '\0')) {
                        *(undefined1 *)((longlong)unaff_RDI + 0x25c) = 1;
                      }
                      unaff_RDI[0x45] = (float ******)local_9c8._0_8_;
                      unaff_RDI[0x44] = (float ******)(double)(int)*(float *)(unaff_RDI + 0x42);
                      *(undefined1 *)((longlong)unaff_RDI + 0x261) = 0;
                      *(undefined1 *)(unaff_RDI + 0x4e) = 0;
                      *(code *)((longlong)local_ad8 + 4) = (code)0x0;
                      *(undefined4 *)local_ad8 = 0;
                      *(undefined4 *)((longlong)unaff_RDI[0x23] + 0xc) = 0x7fc00000;
                      *(undefined4 *)((longlong)unaff_RDI[0x22] + 0xc) = 0x7fc00000;
                      pppppppfVar75 = (float *******)0x0;
                      unaff_RDI[0x21][2] = (float *****)0x7ff8000000000000;
                      *(float *)((longlong)unaff_RDI + 0x134) = 0.0;
                      if (*(char *)((longlong)unaff_RDI + 0x25f) != '\0') {
                        auVar91 = ZEXT416((uint)DAT_02390124);
                        if (local_950 != (float *******)0x0) {
                          pvVar41 = _pthread_getspecific(0);
                          pppppppfVar54 = local_950;
                          if ((pvVar41 != (void *)0x0) &&
                             (lVar42 = FUN_00e8b990(), pppppppfVar54 = local_950, lVar42 != 0)) {
                            pppppppfVar75 = local_950;
                            pppppppfVar54 =
                                 (float *******)
                                 local_950[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                          }
                          auVar90._0_8_ = (double)(*(code *)(*pppppppfVar54)[0x7b])(local_920);
                          auVar90._8_8_ = extraout_XMM0_Qb_00;
                          auVar91._4_12_ = auVar90._4_12_;
                          auVar91._0_4_ = (float)auVar90._0_8_;
                        }
                        fVar60 = *(float *)((longlong)unaff_RDI + 0x26c);
                        auVar120._0_4_ =
                             ~-(uint)(!NAN(fVar60) && !NAN(fVar60)) & (uint)auVar91._0_4_;
                        auVar120._4_4_ = auVar91._4_4_;
                        auVar120._8_4_ = auVar91._8_4_;
                        auVar120._12_4_ = auVar91._12_4_;
                        local_9c8._0_16_ =
                             auVar120 |
                             ZEXT416((uint)(auVar91._0_4_ * fVar60) &
                                     -(uint)(!NAN(fVar60) && !NAN(fVar60)));
                        if (local_850 != (float *******)0x0) {
                          pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar75);
                          if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                            cVar34 = *(char *)((longlong)local_850 + 0x7d);
                          }
                          else {
                            cVar34 = *(char *)((longlong)
                                               local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1)
                                                         + 4] + 0x7d);
                            pppppppfVar75 = local_850;
                          }
                          if (cVar34 == '\0') {
                            pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar75);
                            pppppppfVar54 = local_850;
                            if ((pvVar41 != (void *)0x0) &&
                               (lVar42 = FUN_00e8b990(), pppppppfVar54 = local_850, lVar42 != 0)) {
                              pppppppfVar54 =
                                   (float *******)
                                   local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                              pppppppfVar75 = local_850;
                            }
                            local_a78 = (float *******)
                                        CONCAT44(local_a78._4_4_,
                                                 *(float *)((longlong)pppppppfVar54 + 0xc4));
                            pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar75);
                            pppppppfVar54 = local_850;
                            if ((pvVar41 != (void *)0x0) &&
                               (lVar42 = FUN_00e8b990(), pppppppfVar54 = local_850, lVar42 != 0)) {
                              pppppppfVar54 =
                                   (float *******)
                                   local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                            }
                            local_9c8._0_4_ =
                                 (float)local_9c8._0_4_ *
                                 (float)local_a78 * *(float *)((longlong)pppppppfVar54 + 0xc4);
                          }
                        }
                        ppppppfVar81 = unaff_RDI[0x23];
                        *(float *)(ppppppfVar81 + 2) =
                             ((local_9c8._0_4_ * local_a14) /
                             (float)(int)*(float *)((longlong)unaff_RDI + 0x164)) /
                             (float)(int)dVar99;
                        *(undefined4 *)((longlong)ppppppfVar81 + 0xc) = 0;
                        pppppppfVar75 = (float *******)(ulonglong)local_b70;
                        *(uint *)((longlong)ppppppfVar81 + 0x14) = local_b70;
                      }
                      *(undefined1 *)((longlong)unaff_RDI + 0x26a) = 0;
                      if (pppfVar6 != (float ***)0x0) {
                        FUN_00d50b20();
                      }
                    }
                    if ((*unaff_RDI[0x3c] == (float *****)0x0) && (0 < (int)*(float *)local_948)) {
                      lVar42 = 0;
                      do {
                        if ((int)*(float *)((longlong)unaff_RDI + 0x304) <
                            (int)*(float *)((longlong)unaff_RDI + 0x15c)) {
                          FUN_00e828a0();
                        }
                        if (0 < (int)*(float *)(unaff_RDI + 0x60)) {
                          uVar82 = 0;
                          do {
                            if (*(char *)((longlong)unaff_RDI[0x62] + uVar82) == '\0') {
                              *(undefined1 *)((longlong)unaff_RDI[0x62] + uVar82) = 1;
                              ppppppfVar81 = (float ******)(unaff_RDI[0x61][uVar82] + 2);
                              goto LAB_012abed3;
                            }
                            uVar82 = uVar82 + 1;
                          } while ((uint)*(float *)(unaff_RDI + 0x60) != uVar82);
                        }
                        FUN_00e828a0();
                        ppppppfVar81 = (float ******)0x0;
LAB_012abed3:
                        pppppppfVar75 = (float *******)unaff_RDI[0x3c];
                        pppppppfVar75[lVar42] = ppppppfVar81;
                        lVar42 = lVar42 + 1;
                      } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                    }
                    pVar50 = (pthread_key_t)pppppppfVar75;
                    if (*(char *)(unaff_RDI + 0x4b) == '\0') {
                      pvVar41 = _pthread_getspecific(pVar50);
                      if (pvVar41 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      local_a24 = (float)FUN_012a52b0();
                    }
                    pvVar41 = _pthread_getspecific(pVar50);
                    if (pvVar41 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar41 = _pthread_getspecific(pVar50);
                    pppppppfVar54 = pppppppfVar52;
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pppppppfVar54 =
                           (float *******)
                           pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    local_bb8 = CONCAT71((int7)((ulonglong)pppppppfVar54 >> 8),
                                         *(undefined1 *)((longlong)pppppppfVar54 + 0x3b));
                    pvVar41 = _pthread_getspecific(pVar50);
                    pppppppfVar54 = pppppppfVar52;
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pppppppfVar54 =
                           (float *******)
                           pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    local_ae8 = *(float *)(pppppppfVar54 + 9);
                    pvVar41 = _pthread_getspecific(pVar50);
                    pppppppfVar54 = pppppppfVar52;
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pppppppfVar54 =
                           (float *******)
                           pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    local_c08 = ZEXT416((uint)*(float *)((longlong)pppppppfVar54 + 0x4c));
                    pvVar41 = _pthread_getspecific(pVar50);
                    pppppppfVar54 = pppppppfVar52;
                    if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                      pppppppfVar54 =
                           (float *******)
                           pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    param_3 = (float ******)((ulonglong)local_978 & 0xffffffff);
                    cVar34 = *(char *)((longlong)unaff_RDI + 0x25d);
                    local_bf8 = ZEXT416((uint)*(float *)(pppppppfVar54 + 10));
                    cVar5 = *(char *)(unaff_RDI + 0x4c);
                    if (cVar5 == '\0') {
                      *(float *)(unaff_RDI[0x20] + 4) = *(float *)((longlong)unaff_RDI + 0x134);
                    }
                    *(float *)((longlong)unaff_RDI[0x22] + 0x14) =
                         *(float *)((longlong)unaff_RDI + 0x134);
                    *(float *)(unaff_RDI[0x21] + 4) = *(float *)((longlong)unaff_RDI + 0x134);
                    if (cVar5 == '\0' && *(char *)((longlong)unaff_RDI + 0x25f) == '\0') {
                      *(float *)((longlong)unaff_RDI[0x23] + 0x14) =
                           *(float *)((longlong)unaff_RDI + 0x134);
                    }
                    *(float *)(unaff_RDI + 0x26) = 0.0;
                    if ((char)local_908 != '\0' && (char)local_978 == '\0') {
                      FUN_00d50b20();
                    }
                    if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                      FUN_00d50b20();
                    }
                    local_c58 = (double)(longlong)local_a60 + (double)local_a20;
                    auVar92._0_8_ =
                         ~-(ulonglong)
                           (!NAN((double)local_b98._0_8_) && !NAN((double)local_b98._0_8_)) &
                         (ulonglong)local_b28;
                    auVar92._8_8_ = ~local_b98._8_8_ & uStack_b20;
                    auVar121._0_8_ =
                         -(ulonglong)
                          (!NAN((double)local_b98._0_8_) && !NAN((double)local_b98._0_8_)) &
                         (ulonglong)
                         ((local_a88 - ((double)local_a58 - (double)local_b98._0_8_)) * local_c50);
                    auVar121._8_8_ = 0;
                    auVar123 = auVar121 | auVar92;
                    local_a38 = local_a38 + local_b08;
                    local_a04 = *(float *)(&DAT_0240d1a0 + (ulonglong)(cVar34 == '\0') * 4);
                    local_a78 = (float *******)((ulonglong)local_a78 & 0xffffffff00000000);
                    uVar82 = (ulonglong)local_8e8[0];
                    local_b98 = auVar123;
                    puVar43 = &DAT_0240d1a0;
                  }
                  if (local_868 != (float ******)0x0) {
                    puVar43 = (undefined *)FUN_00d50b20();
                  }
                  if ((local_998[0] != '\0') && (local_8b8._0_8_ != 0)) {
                    puVar43 = (undefined *)FUN_00d50b20();
                  }
                  uVar47 = (undefined7)((ulonglong)puVar43 >> 8);
                  if (local_918 != (float ******)0x0) {
                    local_8c0 = (undefined *)CONCAT71(uVar47,local_858._0_1_);
                    local_870 = pppppppfVar52;
                    local_980 = CONCAT71((int7)((ulonglong)local_8a0 >> 8),(undefined1)local_940);
                    local_908 = (float *******)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                    local_868 = (float ******)CONCAT44(local_868._4_4_,(int)uVar82);
                    local_900 = local_880 & 0xffffffff;
                    local_858 = local_918;
                    fVar60 = *(float *)(unaff_RDI + 0x26);
                    local_920 = local_8a0;
                    pcVar55 = (code *)local_918;
                    goto joined_r0x012ac2a7;
                  }
                  local_8c0 = (undefined *)CONCAT71(uVar47,local_858._0_1_);
                  local_980 = CONCAT71(uVar47,(undefined1)local_940);
                  local_908 = (float *******)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                  local_900 = local_880 & 0xffffffff;
                  local_858 = (float ******)0x0;
                  cVar34 = (char)local_8a0;
                  local_870 = pppppppfVar52;
                  goto joined_r0x012b3e39;
                }
              }
            }
            pppppppfVar52 = local_8a0;
            (*(code *)(*unaff_RDI)[0xcf])();
          }
          goto LAB_012b3ac8;
        }
        uVar82 = (ulonglong)local_868 & 0xffffffff;
        FUN_012a8950();
        goto LAB_012b3ac8;
      }
      if (((ulonglong)local_a78 & 1) != 0) goto LAB_012a957b;
      fVar60 = *(float *)(unaff_RDI + 0x26);
joined_r0x012ac2a7:
      if (fVar60 == 0.0) {
        pVar50 = (pthread_key_t)pcVar55;
        ppppppfVar81 = unaff_RDI[0x20];
        uStack_8e0 = 0;
        local_8e8 = (undefined1  [8])DAT_023908c8;
        fVar60 = (float)(*(int *)(ppppppfVar81 + 4) - (int)*(float *)((longlong)unaff_RDI + 0x134));
        *(float *)(ppppppfVar81 + 4) = fVar60;
        if (fVar60 == 0.0) {
          *(float *)(ppppppfVar81 + 4) = local_a64;
          pvVar41 = _pthread_getspecific((pthread_key_t)local_a64);
          pppppppfVar52 = local_908;
          if (pvVar41 != (void *)0x0) {
            lVar42 = FUN_00e8b990();
            pppppppfVar52 = local_908;
            if (lVar42 != 0) {
              pppppppfVar52 =
                   (float *******)local_908[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
            }
          }
          uStack_8e0 = 0;
          local_8e8 = (undefined1  [8])(local_9e0 - (double)local_a58);
          pVar50 = 1;
          dVar88 = (double)(*(code *)(*pppppppfVar52)[0x7a])(1,local_b98._0_8_);
          ppppppfVar81 = unaff_RDI[0x20];
          fVar60 = *(float *)(ppppppfVar81 + 4);
          ppppppfVar81[3] =
               (float *****)
               (((dVar88 * local_a00 + (double)local_b58) - (double)ppppppfVar81[2]) /
               (double)(int)fVar60);
        }
        pvVar41 = _pthread_getspecific(pVar50);
        if (pvVar41 == (void *)0x0) {
LAB_012ac3d9:
          pppppppfVar52 = local_870;
          if (*(char *)((longlong)local_870 + 0x39) != '\0') goto LAB_012ac413;
LAB_012ac3e6:
          if ((local_c48 != (float *****)0x0) ||
             (pppppppfVar52 = (float *******)unaff_RDI[0x20],
             (double)unaff_RDI[0x20][3] * (double)unaff_RDI[0x4a] < DAT_02420c40))
          goto LAB_012ac413;
          local_a68 = 0;
        }
        else {
          lVar42 = FUN_00e8b990();
          if (lVar42 == 0) goto LAB_012ac3d9;
          pppppppfVar52 = (float *******)local_870[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
          if (*(char *)((longlong)pppppppfVar52 + 0x39) == '\0') goto LAB_012ac3e6;
LAB_012ac413:
          local_a68 = (uint)CONCAT71((int7)((ulonglong)pppppppfVar52 >> 8),1);
        }
        pppppppfVar52 = (float *******)unaff_RDI[0x21];
        fVar38 = (float)((int)*(float *)(pppppppfVar52 + 4) -
                        (int)*(float *)((longlong)unaff_RDI + 0x134));
        *(float *)(pppppppfVar52 + 4) = fVar38;
        if (fVar38 == 0.0) {
          local_8b8._0_8_ = ((double)unaff_RDI[0x20][2] - (double)(longlong)local_a60) * local_a10;
          local_918 = (float ******)((double)unaff_RDI[0x20][3] * local_a10);
          local_8e8 = (undefined1  [8])
                      ((ulonglong)local_8e8 &
                       -(ulonglong)(!NAN((double)local_8e8) && !NAN((double)local_8e8)) |
                      ~-(ulonglong)(!NAN((double)local_8e8) && !NAN((double)local_8e8)) &
                      (ulonglong)(local_9e0 - (double)local_a58));
          if (NAN((double)pppppppfVar52[2])) {
            fVar38 = DAT_02390124;
            if (local_938 != (float *******)0x0) {
              pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
              pppppppfVar52 = local_938;
              if (pvVar41 != (void *)0x0) {
                lVar42 = FUN_00e8b990();
                pppppppfVar52 = local_938;
                if (lVar42 != 0) {
                  pppppppfVar52 =
                       (float *******)local_938[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              dVar88 = (double)(*(code *)(*pppppppfVar52)[0x7b])(local_8b8._0_8_,0);
              fVar38 = (float)dVar88;
              pppppppfVar52 = (float *******)unaff_RDI[0x21];
            }
            local_8a0 = (float *******)CONCAT44(local_8a0._4_4_,fVar38 * local_a94);
            pppppppfVar52[2] =
                 (float ******)
                 ((double)(fVar38 * local_a94) *
                 (local_a00 / (double)(int)*(float *)((longlong)unaff_RDI + 0x164)) * local_ad0);
            fVar38 = DAT_02390124;
            if (local_930 != (float *******)0x0) {
              pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
              pppppppfVar54 = local_930;
              if (pvVar41 != (void *)0x0) {
                lVar42 = FUN_00e8b990();
                pppppppfVar54 = local_930;
                if (lVar42 != 0) {
                  pppppppfVar52 = local_930;
                  pppppppfVar54 =
                       (float *******)local_930[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              dVar88 = (double)(*(code *)(*pppppppfVar54)[0x7b])();
              fVar38 = (float)dVar88;
            }
            _local_998 = ZEXT416((uint)(DAT_02390124 / fVar38));
            if (local_850 == (float *******)0x0) {
LAB_012ad6c8:
              local_998._0_4_ = (float)local_998._0_4_ * (float)local_be8._0_4_;
            }
            else {
              pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
              pppppppfVar52 = local_850;
              if (pvVar41 != (void *)0x0) {
                lVar42 = FUN_00e8b990();
                pppppppfVar52 = local_850;
                if (lVar42 != 0) {
                  pppppppfVar52 =
                       (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              if (*(char *)((longlong)pppppppfVar52 + 0x7d) == '\0') goto LAB_012ad6c8;
            }
            local_9a8._0_4_ =
                 ~-(uint)(local_8a0._0_4_ < DAT_02390124) & local_c08._0_4_ |
                 -(uint)(local_8a0._0_4_ < DAT_02390124) & local_bf8._0_4_;
            local_9a8._4_4_ = local_c08._4_4_;
            uStack_9a0 = local_c08._8_4_;
            uStack_99c = local_c08._12_4_;
            if ((_DAT_0240d1a8 < (double)(float)local_998._0_4_) &&
               ((double)(float)local_998._0_4_ < DAT_0240d1b0)) {
              _logf();
            }
            fVar38 = (float)_powf();
            *(float *)((longlong)unaff_RDI[0x22] + 0xc) = (float)local_998._0_4_ * fVar38;
            pppppppfVar52 = (float *******)unaff_RDI[0x21];
            *(float *)(pppppppfVar52 + 4) = local_a64;
            if (local_938 != (float *******)0x0) goto LAB_012ac59d;
LAB_012ad7e1:
            cVar34 = '\x01';
            fVar38 = local_a64;
            if (*(char *)((longlong)unaff_RDI + 0x13a) == '\0') {
              auVar123 = ZEXT416((uint)(float)((double)pppppppfVar52[2] /
                                              ((local_a00 /
                                               (double)(int)*(float *)((longlong)unaff_RDI + 0x164))
                                              * local_ad0)));
              cVar34 = '\0';
LAB_012ac626:
              auVar123._0_4_ = auVar123._0_4_ * local_a94;
            }
            else {
              auVar123 = ZEXT416((uint)DAT_02390124);
            }
          }
          else {
            *(float *)(pppppppfVar52 + 4) = local_a64;
            if (local_938 == (float *******)0x0) goto LAB_012ad7e1;
LAB_012ac59d:
            pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
            pppppppfVar52 = local_938;
            if (pvVar41 != (void *)0x0) {
              lVar42 = FUN_00e8b990();
              pppppppfVar52 = local_938;
              if (lVar42 != 0) {
                pppppppfVar52 =
                     (float *******)local_938[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
              }
            }
            dVar88 = (double)(*(code *)(*pppppppfVar52)[0x7a])(local_8b8._0_8_,local_918);
            auVar123 = ZEXT416((uint)(float)dVar88);
            cVar34 = *(char *)((longlong)unaff_RDI + 0x13a);
            pppppppfVar52 = (float *******)unaff_RDI[0x21];
            fVar38 = *(float *)(pppppppfVar52 + 4);
            if (cVar34 == '\0') goto LAB_012ac626;
          }
          pppppppfVar52[3] =
               (float ******)
               (((double)auVar123._0_4_ *
                 (local_a00 / (double)(int)*(float *)((longlong)unaff_RDI + 0x164)) * local_ad0 -
                (double)pppppppfVar52[2]) / (double)(int)fVar38);
          ppppppfVar81 = unaff_RDI[0x22];
          *(float *)((longlong)ppppppfVar81 + 0x14) = fVar38;
          if (local_930 == (float *******)0x0) {
            *(undefined4 *)(ppppppfVar81 + 2) = 0;
            if (cVar34 != '\0') {
              *(undefined4 *)((longlong)ppppppfVar81 + 0xc) = 0x3f800000;
            }
          }
          else {
            local_918 = (float ******)CONCAT44(local_918._4_4_,auVar123._0_4_);
            pvVar41 = _pthread_getspecific((pthread_key_t)ppppppfVar81);
            pppppppfVar52 = local_930;
            if (pvVar41 != (void *)0x0) {
              lVar42 = FUN_00e8b990();
              pppppppfVar52 = local_930;
              if (lVar42 != 0) {
                pppppppfVar52 =
                     (float *******)local_930[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
              }
            }
            pVar50 = 0;
            dVar88 = (double)(*(code *)(*pppppppfVar52)[0x7a])(0,unaff_RDI[0x22] + 3);
            _local_8b8 = ZEXT416((uint)(DAT_02390124 / (float)dVar88));
            if (local_850 == (float *******)0x0) {
LAB_012ac83c:
              local_8b8._0_4_ = (float)local_8b8._0_4_ * (float)local_be8._0_4_;
            }
            else {
              pvVar41 = _pthread_getspecific(pVar50);
              if (pvVar41 == (void *)0x0) {
LAB_012ac8cb:
                cVar34 = *(char *)((longlong)local_850 + 0x7d);
              }
              else {
                lVar42 = FUN_00e8b990();
                if (lVar42 == 0) goto LAB_012ac8cb;
                cVar34 = *(char *)((longlong)
                                   local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4] + 0x7d)
                ;
              }
              if (cVar34 == '\0') goto LAB_012ac83c;
            }
            auVar123 = ZEXT416((uint)local_918._0_4_);
            auVar133._0_4_ = ~-(uint)(local_918._0_4_ < DAT_02390124) & local_c08._0_4_;
            auVar133._4_4_ = local_c08._4_4_;
            auVar133._8_4_ = local_c08._8_4_;
            auVar133._12_4_ = local_c08._12_4_;
            auVar132 = auVar133 | ZEXT416(-(uint)(local_918._0_4_ < DAT_02390124) & local_bf8._0_4_)
            ;
            if ((_DAT_0240d1a8 < (double)(float)local_8b8._0_4_) &&
               ((double)(float)local_8b8._0_4_ < DAT_0240d1b0)) {
              _local_998 = auVar132;
              fVar38 = (float)_logf();
              auVar117._4_8_ = auVar132._8_8_;
              auVar117._0_4_ = local_998._4_4_;
              auVar132._0_8_ = auVar117._0_8_ << 0x20;
              auVar132._8_4_ = (float)(undefined4)uStack_990;
              auVar132._12_4_ = (float)uStack_990._4_4_;
              fVar38 = (float)((uint)(fVar38 * DAT_02394208) & _DAT_02390140);
              auVar123 = ZEXT816(0);
              if ((DAT_0240d14c <= fVar38) && (fVar38 < DAT_0239043c)) {
                auVar11._12_4_ = 0;
                auVar11._0_12_ = auVar132._4_12_;
                auVar132 = auVar11 << 0x20;
              }
            }
            fVar38 = (float)_powf();
            ppppppfVar81 = unaff_RDI[0x22];
            fVar97 = *(float *)((longlong)ppppppfVar81 + 0x14);
            *(float *)(ppppppfVar81 + 2) =
                 (local_8b8._0_4_ * fVar38 - *(float *)((longlong)ppppppfVar81 + 0xc)) /
                 (float)(int)fVar97;
            fVar38 = *(float *)(unaff_RDI[0x21] + 4);
            if ((int)fVar97 < (int)fVar38) {
              *(float *)(unaff_RDI[0x21] + 4) = fVar97;
              fVar38 = fVar97;
            }
          }
        }
        if ((int)fVar38 < (int)fVar60) {
          fVar60 = fVar38;
        }
        ppppppfVar81 = unaff_RDI[0x23];
        fVar38 = (float)(*(int *)((longlong)ppppppfVar81 + 0x14) -
                        (int)*(float *)((longlong)unaff_RDI + 0x134));
        *(float *)((longlong)ppppppfVar81 + 0x14) = fVar38;
        if (fVar38 == 0.0) {
          auVar104._0_8_ =
               (ulonglong)local_8e8 &
               -(ulonglong)(!NAN((double)local_8e8) && !NAN((double)local_8e8));
          auVar104._8_8_ = uStack_8e0;
          auVar122._0_8_ =
               ~-(ulonglong)(!NAN((double)local_8e8) && !NAN((double)local_8e8)) &
               (ulonglong)(local_9e0 - (double)local_a58);
          auVar122._8_8_ = 0;
          auVar123 = auVar122 | auVar104;
          _local_8e8 = auVar123;
          if (NAN(*(float *)((longlong)ppppppfVar81 + 0xc))) {
            if (local_950 == (float *******)0x0) {
              *(undefined4 *)((longlong)ppppppfVar81 + 0xc) = 0x3f800000;
              fVar38 = DAT_02390124;
            }
            else {
              pvVar41 = _pthread_getspecific(0);
              pppppppfVar52 = local_950;
              if (pvVar41 != (void *)0x0) {
                lVar42 = FUN_00e8b990();
                pppppppfVar52 = local_950;
                if (lVar42 != 0) {
                  pppppppfVar52 =
                       (float *******)local_950[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              dVar88 = (double)(*(code *)(*pppppppfVar52)[0x7b])();
              ppppppfVar81 = unaff_RDI[0x23];
              *(float *)((longlong)ppppppfVar81 + 0xc) = (float)dVar88;
              fVar38 = (float)dVar88;
            }
            fVar38 = fVar38 * local_a04;
            *(float *)((longlong)ppppppfVar81 + 0xc) = fVar38;
            if (!NAN(*(float *)((longlong)unaff_RDI + 0x26c))) {
              fVar38 = fVar38 * *(float *)((longlong)unaff_RDI + 0x26c);
              auVar123 = ZEXT416((uint)fVar38);
              *(float *)((longlong)ppppppfVar81 + 0xc) = fVar38;
            }
            if (local_850 != (float *******)0x0) {
              pppppppfVar54 = unaff_RDI;
              pvVar41 = _pthread_getspecific((pthread_key_t)unaff_RDI);
              pppppppfVar52 = local_850;
              if (pvVar41 != (void *)0x0) {
                lVar42 = FUN_00e8b990();
                pppppppfVar52 = local_850;
                if (lVar42 != 0) {
                  pppppppfVar52 =
                       (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  pppppppfVar54 = local_850;
                }
              }
              if (*(char *)((longlong)pppppppfVar52 + 0x7d) == '\0') {
                pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar54);
                pppppppfVar52 = local_850;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  pppppppfVar52 = local_850;
                  if (lVar42 != 0) {
                    pppppppfVar52 =
                         (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    pppppppfVar54 = local_850;
                  }
                }
                local_8b8._0_4_ = *(float *)((longlong)pppppppfVar52 + 0xc4);
                pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar54);
                pppppppfVar52 = local_850;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  pppppppfVar52 = local_850;
                  if (lVar42 != 0) {
                    pppppppfVar52 =
                         (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                ppppppfVar81 = unaff_RDI[0x23];
                fVar38 = (float)local_8b8._0_4_ * *(float *)((longlong)pppppppfVar52 + 0xc4) *
                         *(float *)((longlong)ppppppfVar81 + 0xc);
                *(float *)((longlong)ppppppfVar81 + 0xc) = fVar38;
              }
              else {
                ppppppfVar81 = unaff_RDI[0x23];
                fVar38 = *(float *)((longlong)ppppppfVar81 + 0xc);
              }
            }
            *(float *)((longlong)ppppppfVar81 + 0xc) =
                 (fVar38 * local_a14) / (float)(int)*(float *)((longlong)unaff_RDI + 0x164);
            *(float *)((longlong)ppppppfVar81 + 0x14) = local_a64;
            if (local_950 != (float *******)0x0) goto LAB_012ac4ba;
LAB_012ad9f2:
            fVar97 = 0.0;
            fVar38 = local_a64;
          }
          else {
            *(float *)((longlong)ppppppfVar81 + 0x14) = local_a64;
            if (local_950 == (float *******)0x0) goto LAB_012ad9f2;
LAB_012ac4ba:
            pvVar41 = _pthread_getspecific((pthread_key_t)local_a64);
            pppppppfVar52 = local_950;
            if (pvVar41 != (void *)0x0) {
              lVar42 = FUN_00e8b990();
              pppppppfVar52 = local_950;
              if (lVar42 != 0) {
                pppppppfVar52 =
                     (float *******)local_950[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
              }
            }
            pppppppfVar54 = (float *******)0x0;
            dVar88 = (double)(*(code *)(*pppppppfVar52)[0x7a])(0,local_b98._0_8_);
            fVar38 = *(float *)((longlong)unaff_RDI + 0x26c);
            auVar123._0_4_ =
                 (float)(~-(uint)(!NAN(fVar38) && !NAN(fVar38)) & (uint)((float)dVar88 * local_a04))
            ;
            auVar123._4_4_ = (float)(int)((ulonglong)dVar88 >> 0x20);
            auVar123._8_4_ = (float)(int)extraout_XMM0_Qb_01;
            auVar123._12_4_ = (float)(int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
            auVar132 = ZEXT416(-(uint)(!NAN(fVar38) && !NAN(fVar38)) &
                               (uint)((float)dVar88 * local_a04 * fVar38)) | auVar123;
            _local_8e8 = auVar132;
            if (local_850 != (float *******)0x0) {
              pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar54);
              if (pvVar41 == (void *)0x0) {
LAB_012ac873:
                cVar34 = *(char *)((longlong)local_850 + 0x7d);
              }
              else {
                lVar42 = FUN_00e8b990();
                if (lVar42 == 0) goto LAB_012ac873;
                cVar34 = *(char *)((longlong)
                                   local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4] + 0x7d)
                ;
                pppppppfVar54 = local_850;
              }
              if (cVar34 == '\0') {
                pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar54);
                pppppppfVar52 = local_850;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  pppppppfVar52 = local_850;
                  if (lVar42 != 0) {
                    pppppppfVar52 =
                         (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    pppppppfVar54 = local_850;
                  }
                }
                local_8b8._0_4_ = *(float *)((longlong)pppppppfVar52 + 0xc4);
                pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar54);
                pppppppfVar52 = local_850;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  pppppppfVar52 = local_850;
                  if (lVar42 != 0) {
                    pppppppfVar52 =
                         (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                local_8e8._0_4_ =
                     (float)local_8e8._0_4_ *
                     (float)local_8b8._0_4_ * *(float *)((longlong)pppppppfVar52 + 0xc4);
              }
            }
            ppppppfVar81 = unaff_RDI[0x23];
            fVar97 = ((local_8e8._0_4_ * local_a14) /
                      (float)(int)*(float *)((longlong)unaff_RDI + 0x164) -
                     *(float *)((longlong)ppppppfVar81 + 0xc)) /
                     (float)(int)*(float *)((longlong)ppppppfVar81 + 0x14);
            fVar38 = *(float *)((longlong)ppppppfVar81 + 0x14);
          }
          *(float *)(ppppppfVar81 + 2) = fVar97;
          *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 0;
        }
        if ((int)fVar38 < (int)fVar60) {
          fVar60 = fVar38;
        }
        *(float *)((longlong)unaff_RDI + 0x134) = fVar60;
        *(float *)(unaff_RDI + 0x26) = fVar60;
        if (((double)unaff_RDI[0x29] != (double)DAT_023b2568) ||
           (NAN((double)unaff_RDI[0x29]) || NAN((double)DAT_023b2568))) {
          pvVar41 = _pthread_getspecific((pthread_key_t)fVar38);
          ppppppfVar81 = local_858;
          if (pvVar41 != (void *)0x0) {
            lVar42 = FUN_00e8b990();
            ppppppfVar81 = local_858;
            if (lVar42 != 0) {
              ppppppfVar81 = (float ******)local_858[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4]
              ;
            }
          }
          cVar34 = (*(code *)(*ppppppfVar81)[0x8c])();
          if ((cVar34 != '\0') ||
             ((ppppppfVar81 = DAT_023b2568,
              DAT_023d7d68 <
              (double)((ulonglong)((double)unaff_RDI[0x20][3] + DAT_023b19a0) & _DAT_023908f0) &&
              (*(char *)(unaff_RDI + 0x4b) != '\0')))) {
            ppppppfVar81 = (float ******)(local_a38 - (double)(longlong)(local_a00 * DAT_0240d2e8));
          }
          unaff_RDI[0x29] = ppppppfVar81;
        }
      }
      ppppppfVar81 = unaff_RDI[0x41];
      if ((double)unaff_RDI[0x44] <= (double)ppppppfVar81) {
        local_a18 = 1.0;
        local_891 = '\0';
        local_8f1 = '\0';
        local_96b = '\0';
        local_96a = 0;
        local_922 = '\0';
        local_921 = '\0';
        lVar42 = (longlong)(int)*(float *)(unaff_RDI + 0x42);
        puVar58 = (undefined1 *)(longlong)(int)*(float *)((longlong)unaff_RDI + 0x164);
        local_998 = (undefined1  [8])(longlong)(int)*(float *)((longlong)unaff_RDI + 0x214);
        pppppppfVar52 = (float *******)((int)*(float *)(unaff_RDI + 0x2b) - lVar42);
        iVar40 = (int)pppppppfVar52;
        local_8b8._0_8_ = lVar42;
        local_918 = (float ******)(lVar42 * 4);
        fVar60 = *(float *)(unaff_RDI + 0x2c);
        local_8a0 = (float *******)puVar58;
        if (0 < (int)fVar60) {
          local_8e8 = (undefined1  [8])(lVar42 + -1);
          puVar84 = (undefined1 *)((longlong)pppppppfVar52 * 4 + 4);
          lVar42 = 0;
          do {
            puVar58 = puVar84;
            _memmove(pppppppfVar52,puVar84,(size_t)param_3);
            ___bzero();
            lVar42 = lVar42 + 1;
            fVar60 = *(float *)(unaff_RDI + 0x2c);
          } while (lVar42 < (int)fVar60);
        }
        sVar72 = (size_t)param_3;
        puVar84 = (undefined1 *)((longlong)iVar40 * 4);
        if ((*(char *)(unaff_RDI + 0x4e) != '\0') && (0 < (int)fVar60)) {
          lVar42 = 0;
          do {
            puVar58 = puVar84;
            _memmove(pppppppfVar52,puVar84,(size_t)param_3);
            ___bzero();
            sVar72 = (size_t)param_3;
            lVar42 = lVar42 + 1;
          } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
        }
        if (unaff_RDI[0x57] != (float ******)0x0) {
          _memmove(pppppppfVar52,puVar84,sVar72);
          ___bzero();
          puVar58 = puVar84;
        }
        pppppppfVar54 = local_8a0;
        auVar22 = _local_8b8;
        auVar21 = local_9c8._0_16_;
        if (*(char *)(unaff_RDI + 0x4b) == '\0') {
          fVar60 = *(float *)(unaff_RDI + 0x43);
          local_918 = (float ******)(longlong)(int)fVar60;
          uVar82 = (longlong)(int)fVar60 / (longlong)(int)*(float *)((longlong)unaff_RDI + 0x16c);
          uVar57 = (longlong)(int)*(float *)((longlong)unaff_RDI + 0x164) * (longlong)local_918;
          local_9c8._0_4_ = (int)fVar60 + 3;
          if (-1 < (longlong)local_918) {
            local_9c8._0_4_ = fVar60;
          }
          local_9c8._4_4_ = 0;
          local_9c8._8_8_ = auVar21._8_8_;
          iVar40 = (int)uVar57;
          iVar51 = iVar40 + 3;
          if (-1 < iVar40) {
            iVar51 = iVar40;
          }
          iVar51 = iVar51 >> 2;
          local_998._0_4_ = (float)(int)*(float *)(unaff_RDI + 0x2d);
          iVar49 = (int)uVar82;
          local_8b8._0_8_ = uVar82 & 0xffffffff;
          iVar79 = iVar49 + 3;
          if (-1 < iVar49) {
            iVar79 = iVar49;
          }
          auVar105._8_8_ = 0;
          auVar105._0_8_ = DAT_023942d0;
          local_8a0 = (float *******)unaff_RDI[0x45];
          local_958._0_4_ = 0;
          iVar65 = (int)(((uint)(uVar57 >> 0x1f) & 1) + iVar40) >> 1;
          iVar49 = -iVar65;
          iVar77 = (int)local_8a0;
          iVar73 = (int)(longlong)
                        (((double)(int)fVar60 / (double)unaff_RDI[0x21][2]) *
                         (double)unaff_RDI[0x20][3] * DAT_023942d0 + (double)unaff_RDI[0x20][2] +
                        DAT_023942d0);
          uVar56 = (iVar49 - iVar77) + iVar73;
          uVar78 = -uVar56;
          if (0 < (int)uVar56) {
            uVar78 = uVar56;
          }
          iVar76 = iVar51 * local_ae4;
          uVar39 = ((iVar73 - iVar65) - iVar77) - iVar76;
          uVar56 = -uVar39;
          if (0 < (int)uVar39) {
            uVar56 = uVar39;
          }
          pppppppfVar52 = local_8a0;
          if (uVar56 < uVar78) {
            uVar78 = ((iVar49 + iVar73) - local_b6c * iVar51) - iVar77;
            local_958._0_4_ = 0;
            do {
              local_958._0_4_ = (uint)local_958 + local_ae4;
              uVar39 = -uVar78;
              if (0 < (int)uVar78) {
                uVar39 = uVar78;
              }
              pppppppfVar52 = (float *******)((longlong)pppppppfVar52 + (longlong)iVar76);
              uVar78 = uVar78 - iVar76;
              bVar48 = uVar39 < uVar56;
              uVar56 = uVar39;
            } while (bVar48);
            unaff_RDI[0x45] = (float ******)pppppppfVar52;
          }
          local_8e8 = (undefined1  [8])(longlong)iVar51;
          if ((((uint)local_958 == 0 & local_a05) == 1) &&
             ((longlong)pppppppfVar52 < (longlong)local_aa0)) {
            unaff_RDI[0x45] = (float ******)((longlong)pppppppfVar52 + (longlong)iVar51);
            local_958._0_4_ = 1;
          }
          uVar78 = (uint)local_958;
          cVar34 = *(char *)((longlong)unaff_RDI + 0x13a);
          FUN_00d23340();
          pppppppfVar54 = local_8d0;
          local_878[0] = (char)local_8c8;
          pppppppfVar52 = (float *******)local_878;
          pppppppfVar75 = &local_8c8;
          if ((char)local_8c8 == '\0') {
            pppppppfVar75 = pppppppfVar52;
          }
          *(undefined1 *)pppppppfVar75 = 0;
          if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
            FUN_00d50b20();
          }
          if (pppppppfVar54 == local_8f0) {
            if (((char)local_860 == '\0') && (pppppppfVar54 != (float *******)0x0)) {
              local_844 = CONCAT31(local_844._1_3_,1);
              if (local_878[0] == '\0') {
                FUN_00d50b00();
              }
            }
            else if ((local_878[0] == '\0') || (pppppppfVar54 == (float *******)0x0)) {
              local_844 = CONCAT31(local_844._1_3_,(char)local_860);
            }
            else {
              FUN_00d50b20();
              local_844 = CONCAT31(local_844._1_3_,(char)local_860);
            }
          }
          else if (local_878[0] == '\0') {
            if (pppppppfVar54 != (float *******)0x0) {
              FUN_00d50b00();
            }
            local_844 = CONCAT31(local_844._1_3_,1);
            if (((char)local_860 == '\0') || (local_8f0 == (float *******)0x0)) goto LAB_012ae126;
            FUN_00d50b20();
            local_8f0 = pppppppfVar54;
          }
          else {
            local_844 = CONCAT31(local_844._1_3_,1);
            if (((char)local_860 == '\0') || (local_8f0 == (float *******)0x0)) {
LAB_012ae126:
              local_8f0 = pppppppfVar54;
            }
            else {
              FUN_00d50b20();
              local_8f0 = pppppppfVar54;
            }
          }
          local_95c = 0;
          if (cVar34 == '\0') {
            if (local_a88 <= DAT_02390448) {
              local_978 = (float ******)((ulonglong)local_978._4_4_ << 0x20);
              uVar56 = 0;
            }
            else {
              local_978 = (float ******)((ulonglong)local_978._4_4_ << 0x20);
              uVar56 = 0;
              if (local_8f0 != (float *******)0x0) {
                pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                if (pvVar41 == (void *)0x0) {
LAB_012af55b:
                  ppppppfVar81 = local_8f0[10];
                }
                else {
                  lVar42 = FUN_00e8b990();
                  if (lVar42 == 0) goto LAB_012af55b;
                  ppppppfVar81 = (float ******)
                                 local_8f0[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4][10];
                  pppppppfVar52 = local_8f0;
                }
                if (ppppppfVar81 != (float ******)0x0) {
                  pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                  pppppppfVar54 = local_8f0;
                  if (pvVar41 != (void *)0x0) {
                    lVar42 = FUN_00e8b990();
                    pppppppfVar54 = local_8f0;
                    if (lVar42 != 0) {
                      pppppppfVar52 = local_8f0;
                      pppppppfVar54 =
                           (float *******)local_8f0[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  ppppppfVar81 = pppppppfVar54[10];
                  pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                  if (pvVar41 != (void *)0x0) {
                    ppppppfVar81 = pppppppfVar54[10];
                    lVar42 = FUN_00e8b990();
                    if (lVar42 != 0) {
                      ppppppfVar81 = (float ******)
                                     ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  if (ppppppfVar81[9] != (float *****)0x0) {
                    local_940 = CONCAT44(local_940._4_4_,iVar79);
                    local_9a8._0_4_ = 0;
                    local_9a8._4_4_ = 0;
                    local_880 = 0;
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                    pppppppfVar54 = local_8f0;
                    if (pvVar41 != (void *)0x0) {
                      local_9a8._0_4_ = 0;
                      local_9a8._4_4_ = 0;
                      local_880 = 0;
                      lVar42 = FUN_00e8b990();
                      pppppppfVar54 = local_8f0;
                      if (lVar42 != 0) {
                        pppppppfVar52 = local_8f0;
                        pppppppfVar54 =
                             (float *******)
                             local_8f0[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                    }
                    ppppppfVar81 = pppppppfVar54[10];
                    local_9a8._0_4_ = 0;
                    local_9a8._4_4_ = 0;
                    local_880 = 0;
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                    if (pvVar41 != (void *)0x0) {
                      ppppppfVar81 = pppppppfVar54[10];
                      local_9a8._0_4_ = 0;
                      local_9a8._4_4_ = 0;
                      local_880 = 0;
                      lVar42 = FUN_00e8b990();
                      if (lVar42 != 0) {
                        ppppppfVar81 = (float ******)
                                       ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      }
                    }
                    pppppfVar119 = ppppppfVar81[9];
                    if (pppppfVar119 == (float *****)0x0) {
                      local_9a8._0_4_ = 0;
                      local_9a8._4_4_ = 0;
                      local_880 = 0;
                    }
                    else {
                      local_9a8._0_4_ = 0;
                      local_9a8._4_4_ = 0;
                      local_880 = 0;
                      uVar89 = FUN_00d50b00();
                      local_880 = CONCAT71((int7)((ulonglong)uVar89 >> 8),1);
                      local_9a8._0_4_ = (uint)pppppfVar119;
                      local_9a8._4_4_ = (undefined4)((ulonglong)pppppfVar119 >> 0x20);
                    }
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                    if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                      ppppppfVar81 = (float ******)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                    }
                    else {
                      pppppppfVar52 = (float *******)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                      ppppppfVar81 = pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    pppppfVar44 = ppppppfVar81[0xb];
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                    if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                      ppppppfVar81 = (float ******)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                    }
                    else {
                      pppppppfVar52 = (float *******)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                      ppppppfVar81 = pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                    lVar42 = (*(code *)(*ppppppfVar81)[0x72])();
                    local_95c = 0;
                    local_978 = (float ******)((ulonglong)local_978 & 0xffffffff00000000);
                    uVar56 = 0;
                    local_a20 = pppppfVar119;
                    if (lVar42 + (longlong)pppppfVar44 <
                        (longlong)(uVar57 + (longlong)unaff_RDI[0x45])) {
                      local_860 = (float *******)0x0;
                      pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                      if (pvVar41 == (void *)0x0) {
LAB_012af872:
                        local_9e8 = (float *******)local_8f0[9];
                        if (local_9e8 == (float *******)0x0) goto LAB_012af865;
LAB_012af889:
                        local_860 = (float *******)0x0;
                        FUN_00d50b00();
                        local_860 = local_9e8;
                      }
                      else {
                        local_860 = (float *******)0x0;
                        lVar63 = FUN_00e8b990();
                        if (lVar63 == 0) goto LAB_012af872;
                        local_9e8 = (float *******)
                                    local_8f0[(ulonglong)(*(uint *)(lVar63 + 0x154) & 1) + 4][9];
                        pppppppfVar52 = local_8f0;
                        if (local_9e8 != (float *******)0x0) goto LAB_012af889;
LAB_012af865:
                        local_860 = (float *******)0x0;
                      }
                      pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                      pppppppfVar54 = local_860;
                      if ((pvVar41 != (void *)0x0) &&
                         (lVar63 = FUN_00e8b990(), pppppppfVar54 = local_860, lVar63 != 0)) {
                        pppppppfVar54 =
                             (float *******)
                             local_860[(ulonglong)(*(uint *)(lVar63 + 0x154) & 1) + 4];
                        pppppppfVar52 = local_860;
                      }
                      local_978 = pppppppfVar54[0x1d];
                      pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                      auVar102 = auVar132._4_12_;
                      auVar117 = auVar105._4_12_;
                      pppppppfVar54 = local_860;
                      if (pvVar41 != (void *)0x0) {
                        lVar63 = FUN_00e8b990();
                        auVar102 = auVar132._4_12_;
                        auVar117 = auVar105._4_12_;
                        pppppppfVar54 = local_860;
                        if (lVar63 != 0) {
                          pppppppfVar54 =
                               (float *******)
                               local_860[(ulonglong)(*(uint *)(lVar63 + 0x154) & 1) + 4];
                          pppppppfVar52 = local_860;
                        }
                      }
                      pVar50 = (pthread_key_t)pppppppfVar52;
                      auVar106._0_4_ =
                           (float)(((((double)local_978 + (double)pppppppfVar54[0x17]) - local_9e0)
                                   / local_b28) * (double)unaff_RDI[0x21][2]);
                      auVar106._4_12_ = auVar117;
                      auVar136._0_4_ = (float)(int)*(float *)(unaff_RDI + 0x43);
                      auVar136._4_12_ = auVar102;
                      local_95c = 0;
                      local_978 = (float ******)((ulonglong)local_978 & 0xffffffff00000000);
                      if (auVar106._0_4_ < auVar136._0_4_) {
                        auVar125._4_12_ = auVar123._4_12_;
                        auVar125._0_4_ =
                             (float)((lVar42 + (longlong)pppppfVar44) - (longlong)unaff_RDI[0x45]);
                        auVar132 = insertps(auVar106,auVar125,0x10);
                        auVar126._4_4_ = auVar102._0_4_;
                        auVar126._0_4_ = auVar136._0_4_;
                        auVar126._8_4_ = auVar102._4_4_;
                        auVar126._12_4_ = auVar102._8_4_;
                        auVar123 = insertps(auVar126,ZEXT416((uint)(float)iVar40),0x10);
                        auVar132 = divps(auVar132,auVar123);
                        fVar60 = auVar132._0_4_ - auVar132._4_4_;
                        auVar123._0_4_ = (float)((uint)fVar60 & _DAT_02390140);
                        auVar123._4_4_ = (float)((uint)auVar132._4_4_ & _UNK_02390144);
                        auVar123._8_4_ = (float)(auVar132._8_4_ & _UNK_02390148);
                        auVar123._12_4_ = (float)(auVar132._12_4_ & _UNK_0239014c);
                        if (DAT_02394254 < auVar123._0_4_) {
                          pVar50 = (pthread_key_t)(fVar60 * (float)iVar40);
                          unaff_RDI[0x45] =
                               (float ******)((longlong)unaff_RDI[0x45] - (longlong)(int)pVar50);
                          *(undefined1 *)((longlong)unaff_RDI + 0x265) = 1;
                          *(undefined2 *)((longlong)unaff_RDI + 0x267) = 0;
                        }
                        local_af8 = auVar106;
                        local_ac8._0_16_ = auVar136;
                        pvVar41 = _pthread_getspecific(pVar50);
                        if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                          pVar50 = (pthread_key_t)local_8f0;
                        }
                        uVar89 = FUN_011ef8f0();
                        pppppppfVar52 = local_8d0;
                        if ((char)local_8c8 == '\0') {
                          if (local_8d0 != (float *******)0x0) {
                            FUN_00d50b00();
                            if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                              FUN_00d50b20();
                            }
                            goto LAB_012aface;
                          }
                        }
                        else if (local_8d0 != (float *******)0x0) {
LAB_012aface:
                          pvVar41 = _pthread_getspecific(pVar50);
                          if ((pvVar41 != (void *)0x0) && (lVar42 = FUN_00e8b990(), lVar42 != 0)) {
                            pppppppfVar52 =
                                 (float *******)
                                 pppppppfVar52[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                          }
                          uVar47 = (undefined7)((ulonglong)pppppppfVar52 >> 8);
                          local_978 = (float ******)
                                      CONCAT44(local_978._4_4_,
                                               (int)CONCAT71(uVar47,*(char *)((longlong)
                                                                              pppppppfVar52 + 0x3a)
                                                                    != '\0'));
                          local_95c = (uint)CONCAT71(uVar47,1);
                          FUN_00d50b20();
                          auVar106 = local_af8;
                          auVar136 = local_ac8._0_16_;
                          goto LAB_012afb4f;
                        }
                        local_95c = (uint)CONCAT71((int7)((ulonglong)uVar89 >> 8),1);
                        local_978 = (float ******)((ulonglong)local_978 & 0xffffffff00000000);
                        auVar106 = local_af8;
                        auVar136 = local_ac8._0_16_;
                      }
LAB_012afb4f:
                      uVar56 = (uint)(auVar136._0_4_ <= auVar106._0_4_);
                      if ((local_9e8 != (float *******)0x0) && (local_860 != (float *******)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    iVar79 = (int)(float)local_940;
                    if ((local_a20 != (float *****)0x0) &&
                       (local_9a8 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8),
                       CONCAT44(local_9a8._4_4_,(uint)local_9a8) != 0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_012afb9b;
                  }
                }
                goto LAB_012af65f;
              }
            }
          }
          else {
LAB_012af65f:
            local_95c = 0;
            local_978 = (float ******)((ulonglong)local_978._4_4_ << 0x20);
            uVar56 = 0;
          }
LAB_012afb9b:
          local_af8._0_4_ = uVar56;
          bVar48 = local_a88 <= 0.0;
          if (uVar78 != 1) {
            *(code *)local_ad8 = (code)0x1;
          }
          uVar78 = (int)(((uint)((ulonglong)local_8b8._0_8_ >> 0x1f) & 1) + local_8b8._0_4_) >> 1;
          puVar58 = (undefined1 *)((longlong)local_8e8 + (longlong)local_8a0);
          if (*(char *)((longlong)unaff_RDI + 0x264) == '\0') {
            *(undefined2 *)((longlong)unaff_RDI + 0x265) = 0;
          }
          local_921 = DAT_023b36e8 < *(float *)((longlong)unaff_RDI[0x22] + 0xc) ||
                      *(float *)((longlong)unaff_RDI[0x22] + 0xc) < DAT_023b36e4;
          pcVar74 = &local_921;
          uVar89 = FUN_012b84d0(puVar58,(ulonglong)uVar78,pcVar74,&local_958);
          pppppppfVar52 = (float *******)CONCAT71((int7)((ulonglong)puVar58 >> 8),local_921);
          local_9a8._0_4_ = CONCAT31(local_9a8._1_3_,local_921);
          if (*(code *)local_ad8 != (code)0x0 || local_921 != '\0') {
            local_891 = '\x01';
            local_8f1 = '\x01';
            local_96a = 1;
            local_96b = '\x01';
            if (unaff_RDI[0x36] == (float ******)0x0) {
              uVar89 = FUN_012b9080(pppppppfVar52,local_8b8._0_8_);
              pppppppfVar75 = local_8d0;
              pppppppfVar54 = (float *******)unaff_RDI[0x36];
              if (pppppppfVar54 == local_8d0) {
                if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
                  uVar89 = FUN_00d50b20();
                }
              }
              else {
                if (((char)local_8c8 == '\0') && (local_8d0 != (float *******)0x0)) {
                  uVar89 = FUN_00d50b00();
                  pppppppfVar54 = (float *******)unaff_RDI[0x36];
                }
                unaff_RDI[0x36] = (float ******)pppppppfVar75;
                if (pppppppfVar54 != (float *******)0x0) {
                  uVar89 = FUN_00d50b20();
                }
              }
            }
          }
          uVar89 = FUN_012b96f0(uVar89,&local_b68);
          FUN_012b98e0(uVar89,&local_bc8);
          auVar132 = local_9c8._0_16_;
          local_a8c = (float)CONCAT31(local_a8c._1_3_,bVar48);
          local_880 = (ulonglong)uVar78;
          local_9c8._0_4_ = local_9c8._0_4_ >> 2;
          local_9c8._4_4_ = 0;
          local_a20 = (float *****)
                      CONCAT44(local_a20._4_4_,
                               ((float)local_a00 / (float)local_998._0_4_) /
                               (float)(int)local_8b8._0_4_);
          uVar80 = iVar79 >> 2;
          uVar56 = (uint)local_918;
          uVar39 = uVar56 - local_9c8._0_4_;
          pppppppfVar54 = (float *******)(ulonglong)uVar39;
          local_940 = CONCAT44(local_940._4_4_,uVar80);
          local_9c8._8_8_ = auVar132._8_8_;
          local_9e8 = pppppppfVar54;
          if (*(code *)local_ad8 != (code)0x0) {
            if (*(code *)((longlong)unaff_RDI + 0x266) == *(code *)local_ad8) {
              if ((uint)local_958 < 2) {
                if ((uint)local_958 != 0) goto LAB_012b029d;
              }
              else {
                *(undefined1 *)(unaff_RDI + 0x4d) = 0;
LAB_012b029d:
                *(undefined1 *)((longlong)unaff_RDI + 0x267) = 0;
              }
              auVar33._12_4_ = 0;
              auVar33._0_12_ = local_ac8._4_12_;
              local_ac8._0_16_ = auVar33 << 0x20;
            }
            else {
              *(undefined2 *)((longlong)unaff_RDI + 0x267) = 0;
              *(undefined1 *)((longlong)unaff_RDI + 0x269) = 0;
              local_ac8._0_4_ = (undefined4)CONCAT71((int7)((ulonglong)local_ad8 >> 8),1);
              if (*(char *)((longlong)unaff_RDI + 0x25c) == '\0') {
              }
              else {
                *(undefined1 *)((longlong)unaff_RDI + 0x25d) = 1;
                ppppppfVar81 = unaff_RDI[0x23];
                fVar149 = *(float *)((longlong)ppppppfVar81 + 0xc) * DAT_0239011c;
                *(float *)((longlong)ppppppfVar81 + 0xc) = fVar149;
                fVar98 = *(float *)((longlong)unaff_RDI + 0x26c);
                if ((fVar98 != DAT_0239424c) || (NAN(fVar98) || NAN(DAT_0239424c))) {
                  *(float *)((longlong)ppppppfVar81 + 0xc) = fVar149 * fVar98;
                }
                if (local_850 != (float *******)0x0) {
                  pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                  if ((pvVar41 == (void *)0x0) || (lVar42 = FUN_00e8b990(), lVar42 == 0)) {
                    cVar34 = *(char *)((longlong)local_850 + 0x7d);
                  }
                  else {
                    cVar34 = *(char *)((longlong)
                                       local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4] +
                                      0x7d);
                    pppppppfVar52 = local_850;
                  }
                  if (cVar34 == '\0') {
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                    pppppppfVar54 = local_850;
                    if ((pvVar41 != (void *)0x0) &&
                       (lVar42 = FUN_00e8b990(), pppppppfVar54 = local_850, lVar42 != 0)) {
                      pppppppfVar54 =
                           (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      pppppppfVar52 = local_850;
                    }
                    local_998._0_4_ = *(float *)((longlong)pppppppfVar54 + 0xc4);
                    pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                    pppppppfVar54 = local_850;
                    if ((pvVar41 != (void *)0x0) &&
                       (lVar42 = FUN_00e8b990(), pppppppfVar54 = local_850, lVar42 != 0)) {
                      pppppppfVar54 =
                           (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                      pppppppfVar52 = local_850;
                    }
                    ppppppfVar81 = unaff_RDI[0x23];
                    *(float *)((longlong)ppppppfVar81 + 0xc) =
                         (float)local_998._0_4_ * *(float *)((longlong)pppppppfVar54 + 0xc4) *
                         *(float *)((longlong)ppppppfVar81 + 0xc);
                  }
                  else {
                    ppppppfVar81 = unaff_RDI[0x23];
                  }
                }
                local_a04 = DAT_0239011c;
                *(float *)(ppppppfVar81 + 2) = *(float *)(ppppppfVar81 + 2) * DAT_0239011c;
                fVar98 = *(float *)(unaff_RDI + 0x2b);
                if (fVar98 == 0.0) {
                }
                else {
                  pppppfVar119 = *unaff_RDI[0x2a];
                  pppppppfVar52 = (float *******)unaff_RDI[0x2a][1];
                  if (((int)fVar98 - 1U < 7) ||
                     ((pcVar67 = (char *)((ulonglong)((int)fVar98 - 1U) + 1),
                      pppppfVar119 < (float *****)((longlong)pppppppfVar52 + (longlong)pcVar67 * 4)
                      && (pppppppfVar52 <
                          (float *******)((longlong)pppppfVar119 + (longlong)pcVar67 * 4))))) {
LAB_012b08eb:
                    fVar149 = fVar98;
                    if (((uint)fVar98 & 1) != 0) {
                      fVar149 = *(float *)pppppfVar119;
                      fVar60 = *(float *)pppppppfVar52;
                      fVar38 = fVar149 + fVar60;
                      auVar123 = ZEXT416((uint)fVar38);
                      *(float *)pppppfVar119 = fVar38;
                      pppppfVar119 = (float *****)((longlong)pppppfVar119 + 4);
                      *(float *)pppppppfVar52 = fVar149 - fVar60;
                      pppppppfVar52 = (float *******)((longlong)pppppppfVar52 + 4);
                      fVar149 = (float)((int)fVar98 + -1);
                    }
                    if (fVar98 != 1.4013e-45) {
                      lVar42 = 0;
                      do {
                        fVar98 = *(float *)((longlong)pppppfVar119 + lVar42 * 4);
                        fVar60 = *(float *)((longlong)pppppppfVar52 + lVar42 * 4);
                        *(float *)((longlong)pppppfVar119 + lVar42 * 4) = fVar98 + fVar60;
                        *(float *)((longlong)pppppppfVar52 + lVar42 * 4) = fVar98 - fVar60;
                        fVar98 = *(float *)((longlong)pppppfVar119 + (lVar42 + 1) * 4);
                        fVar60 = *(float *)((longlong)pppppppfVar52 + (lVar42 + 1) * 4);
                        fVar38 = fVar98 + fVar60;
                        auVar123 = ZEXT416((uint)fVar38);
                        *(float *)((longlong)pppppfVar119 + (lVar42 + 1) * 4) = fVar38;
                        *(float *)((longlong)pppppppfVar52 + (lVar42 + 1) * 4) = fVar98 - fVar60;
                        lVar42 = lVar42 + 2;
                      } while (fVar149 != (float)lVar42);
                    }
                  }
                  else {
                    pcVar74 = (char *)((ulonglong)pcVar67 & 0xfffffffffffffff8);
                    uVar82 = ((ulonglong)(pcVar74 + -8) >> 3) + 1;
                    if (pcVar74 + -8 == (char *)0x0) {
                      lVar42 = 0;
                    }
                    else {
                      lVar63 = -(uVar82 & 0xfffffffffffffffe);
                      lVar42 = 0;
                      do {
                        pfVar68 = (float *)((longlong)pppppfVar119 + lVar42 * 4);
                        fVar149 = *pfVar68;
                        fVar60 = pfVar68[1];
                        fVar38 = pfVar68[2];
                        fVar97 = pfVar68[3];
                        pfVar68 = (float *)((longlong)pppppfVar119 + (lVar42 + 4) * 4);
                        fVar87 = *pfVar68;
                        fVar69 = pfVar68[1];
                        fVar130 = pfVar68[2];
                        fVar129 = pfVar68[3];
                        pfVar68 = (float *)((longlong)pppppppfVar52 + lVar42 * 4);
                        fVar140 = *pfVar68;
                        fVar141 = pfVar68[1];
                        fVar14 = pfVar68[2];
                        fVar15 = pfVar68[3];
                        pfVar68 = (float *)((longlong)pppppppfVar52 + (lVar42 + 4) * 4);
                        fVar16 = *pfVar68;
                        fVar17 = pfVar68[1];
                        fVar18 = pfVar68[2];
                        fVar19 = pfVar68[3];
                        pfVar68 = (float *)((longlong)pppppfVar119 + lVar42 * 4);
                        *pfVar68 = fVar149 + fVar140;
                        pfVar68[1] = fVar60 + fVar141;
                        pfVar68[2] = fVar38 + fVar14;
                        pfVar68[3] = fVar97 + fVar15;
                        pfVar68 = (float *)((longlong)pppppfVar119 + (lVar42 + 4) * 4);
                        *pfVar68 = fVar87 + fVar16;
                        pfVar68[1] = fVar69 + fVar17;
                        pfVar68[2] = fVar130 + fVar18;
                        pfVar68[3] = fVar129 + fVar19;
                        pfVar68 = (float *)((longlong)pppppppfVar52 + lVar42 * 4);
                        *pfVar68 = fVar149 - fVar140;
                        pfVar68[1] = fVar60 - fVar141;
                        pfVar68[2] = fVar38 - fVar14;
                        pfVar68[3] = fVar97 - fVar15;
                        pfVar68 = (float *)((longlong)pppppppfVar52 + (lVar42 + 4) * 4);
                        *pfVar68 = fVar87 - fVar16;
                        pfVar68[1] = fVar69 - fVar17;
                        pfVar68[2] = fVar130 - fVar18;
                        pfVar68[3] = fVar129 - fVar19;
                        pfVar68 = (float *)((longlong)pppppfVar119 + (lVar42 + 8) * 4);
                        fVar149 = *pfVar68;
                        fVar60 = pfVar68[1];
                        fVar38 = pfVar68[2];
                        fVar97 = pfVar68[3];
                        pfVar68 = (float *)((longlong)pppppfVar119 + (lVar42 + 0xc) * 4);
                        fVar87 = *pfVar68;
                        fVar69 = pfVar68[1];
                        fVar130 = pfVar68[2];
                        fVar129 = pfVar68[3];
                        auVar123 = *(undefined1 (*) [16])
                                    ((longlong)pppppppfVar52 + (lVar42 + 8) * 4);
                        auVar132 = *(undefined1 (*) [16])
                                    ((longlong)pppppppfVar52 + (lVar42 + 0xc) * 4);
                        auVar144._0_4_ = fVar87 + auVar132._0_4_;
                        auVar144._4_4_ = fVar69 + auVar132._4_4_;
                        auVar144._8_4_ = fVar130 + auVar132._8_4_;
                        auVar144._12_4_ = fVar129 + auVar132._12_4_;
                        pfVar68 = (float *)((longlong)pppppfVar119 + (lVar42 + 8) * 4);
                        *pfVar68 = fVar149 + auVar123._0_4_;
                        pfVar68[1] = fVar60 + auVar123._4_4_;
                        pfVar68[2] = fVar38 + auVar123._8_4_;
                        pfVar68[3] = fVar97 + auVar123._12_4_;
                        *(undefined1 (*) [16])((longlong)pppppfVar119 + (lVar42 + 0xc) * 4) =
                             auVar144;
                        auVar108._0_4_ = fVar87 - auVar132._0_4_;
                        auVar108._4_4_ = fVar69 - auVar132._4_4_;
                        auVar108._8_4_ = fVar130 - auVar132._8_4_;
                        auVar108._12_4_ = fVar129 - auVar132._12_4_;
                        pfVar68 = (float *)((longlong)pppppppfVar52 + (lVar42 + 8) * 4);
                        *pfVar68 = fVar149 - auVar123._0_4_;
                        pfVar68[1] = fVar60 - auVar123._4_4_;
                        pfVar68[2] = fVar38 - auVar123._8_4_;
                        pfVar68[3] = fVar97 - auVar123._12_4_;
                        *(undefined1 (*) [16])((longlong)pppppppfVar52 + (lVar42 + 0xc) * 4) =
                             auVar108;
                        lVar42 = lVar42 + 0x10;
                        lVar63 = lVar63 + 2;
                      } while (lVar63 != 0);
                    }
                    if ((uVar82 & 1) != 0) {
                      pfVar68 = (float *)((longlong)pppppfVar119 + lVar42 * 4);
                      fVar149 = *pfVar68;
                      fVar60 = pfVar68[1];
                      fVar38 = pfVar68[2];
                      fVar97 = pfVar68[3];
                      pfVar68 = (float *)((longlong)pppppfVar119 + (lVar42 + 4) * 4);
                      fVar87 = *pfVar68;
                      fVar69 = pfVar68[1];
                      fVar130 = pfVar68[2];
                      fVar129 = pfVar68[3];
                      auVar123 = *(undefined1 (*) [16])((longlong)pppppppfVar52 + lVar42 * 4);
                      auVar132 = *(undefined1 (*) [16])((longlong)pppppppfVar52 + (lVar42 + 4) * 4);
                      auVar145._0_4_ = fVar87 + auVar132._0_4_;
                      auVar145._4_4_ = fVar69 + auVar132._4_4_;
                      auVar145._8_4_ = fVar130 + auVar132._8_4_;
                      auVar145._12_4_ = fVar129 + auVar132._12_4_;
                      pfVar68 = (float *)((longlong)pppppfVar119 + lVar42 * 4);
                      *pfVar68 = fVar149 + auVar123._0_4_;
                      pfVar68[1] = fVar60 + auVar123._4_4_;
                      pfVar68[2] = fVar38 + auVar123._8_4_;
                      pfVar68[3] = fVar97 + auVar123._12_4_;
                      *(undefined1 (*) [16])((longlong)pppppfVar119 + (lVar42 + 4) * 4) = auVar145;
                      auVar109._0_4_ = fVar87 - auVar132._0_4_;
                      auVar109._4_4_ = fVar69 - auVar132._4_4_;
                      auVar109._8_4_ = fVar130 - auVar132._8_4_;
                      auVar109._12_4_ = fVar129 - auVar132._12_4_;
                      pfVar68 = (float *)((longlong)pppppppfVar52 + lVar42 * 4);
                      *pfVar68 = fVar149 - auVar123._0_4_;
                      pfVar68[1] = fVar60 - auVar123._4_4_;
                      pfVar68[2] = fVar38 - auVar123._8_4_;
                      pfVar68[3] = fVar97 - auVar123._12_4_;
                      *(undefined1 (*) [16])((longlong)pppppppfVar52 + (lVar42 + 4) * 4) = auVar109;
                    }
                    if (pcVar67 != pcVar74) {
                      pppppppfVar52 =
                           (float *******)((longlong)pppppppfVar52 + (longlong)pcVar74 * 4);
                      pppppfVar119 = (float *****)((longlong)pppppfVar119 + (longlong)pcVar74 * 4);
                      fVar98 = (float)((int)fVar98 - (int)pcVar74);
                      goto LAB_012b08eb;
                    }
                  }
                  local_a04 = DAT_0239011c;
                }
              }
            }
            if (((((char)local_95c == '\0') && (*(char *)((longlong)unaff_RDI + 0x26a) != '\0')) &&
                (0 < (int)*(float *)local_948)) && (7 < (int)local_8b8._0_4_)) {
              uVar82 = 2;
              if (2 < (int)uVar80) {
                uVar82 = (ulonglong)uVar80;
              }
              pcVar74 = (char *)(uVar82 - 1);
              pppppppfVar52 = (float *******)-((ulonglong)pcVar74 & 0xfffffffffffffffe);
              lVar42 = 0;
              do {
                pppppfVar119 = unaff_RDI[0x31][lVar42];
                pppppfVar44 = unaff_RDI[0x2e][lVar42];
                lVar63 = 1;
                if (0xb < (int)local_8b8._0_4_) {
                  lVar63 = 1;
                  do {
                    while (*(char *)((longlong)unaff_RDI[0x35] + lVar63) == '\0') {
                      pppppfVar119[lVar63] = pppppfVar44[lVar63];
                      if (*(char *)((longlong)unaff_RDI[0x35] + lVar63 + 1) == '\0')
                      goto LAB_012b0a83;
LAB_012b0a56:
                      puVar58 = (undefined1 *)((longlong)pppppppfVar52 + lVar63);
                      lVar63 = lVar63 + 2;
                      if (puVar58 == (undefined1 *)0xffffffffffffffff) goto LAB_012b0aa0;
                    }
                    if (*(char *)((longlong)unaff_RDI[0x35] + lVar63 + 1) != '\0')
                    goto LAB_012b0a56;
LAB_012b0a83:
                    pppppfVar119[lVar63 + 1] = pppppfVar44[lVar63 + 1];
                    puVar58 = (undefined1 *)((longlong)pppppppfVar52 + lVar63);
                    lVar63 = lVar63 + 2;
                  } while (puVar58 != (undefined1 *)0xffffffffffffffff);
                }
LAB_012b0aa0:
                if ((((ulonglong)pcVar74 & 1) != 0) &&
                   (*(char *)((longlong)unaff_RDI[0x35] + lVar63) == '\0')) {
                  pppppfVar119[lVar63] = pppppfVar44[lVar63];
                }
                lVar42 = lVar42 + 1;
              } while (lVar42 < (int)*(float *)local_948);
            }
            local_998 = (undefined1  [8])(longlong)(int)uVar80;
            if (*(char *)(unaff_RDI + 0x4d) == '\0') {
              pppppppfVar52 = (float *******)((longlong)unaff_RDI[0x45] - (longlong)local_8e8);
              bVar48 = false;
              uVar56 = local_8b8._0_4_;
              if (local_8f0 == (float *******)0x0) {
                if ((local_a80 & 1) != 0) {
                  lVar42 = (longlong)local_a38;
                  puVar58 = (undefined1 *)((longlong)(int)local_8b8._0_4_ + (longlong)pppppppfVar52)
                  ;
                  uVar56 = ((int)lVar42 - (int)puVar58) + local_8b8._0_4_;
                  if ((int)uVar56 < 0) {
                    uVar56 = 0;
                  }
                  bVar48 = lVar42 < (longlong)puVar58;
                  if ((longlong)puVar58 <= lVar42) {
                    uVar56 = local_8b8._0_4_;
                  }
                }
                fVar98 = *(float *)local_948;
              }
              else {
                fVar98 = *(float *)local_948;
              }
              if (0 < (int)fVar98) {
                lVar42 = 0;
                do {
                  ___bzero();
                  lVar42 = lVar42 + 1;
                } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
              }
              local_cc8 = local_858;
              local_cc0 = 0;
              local_860 = pppppppfVar52;
              auVar95._0_8_ =
                   FUN_012b6e60(unaff_RDI[0x3c],*(float *)(unaff_RDI + 0x2d),local_9ac,pppppppfVar52
                               );
              auVar95._8_8_ = extraout_XMM0_Qb_02;
              ppppppfVar81 = unaff_RDI[0x3c];
              if (bVar48) {
                uVar78 = uVar56 - 100;
                if ((int)uVar56 < 100) {
                  uVar78 = 0;
                }
                uVar39 = 100;
                if ((int)uVar56 < 100) {
                  uVar39 = uVar56;
                }
                if ((int)uVar56 < 1) goto LAB_012b0d50;
                fVar98 = *(float *)local_948;
                uVar82 = (ulonglong)(uint)fVar98;
                if (0 < (int)fVar98) {
                  fVar149 = DAT_02390124 / (float)(int)uVar39;
                  auVar95 = ZEXT416((uint)fVar149);
                  if ((int)uVar39 < 2) {
                    uVar39 = 1;
                  }
                  uVar57 = 0;
                  fVar60 = DAT_02390124;
                  do {
                    fVar38 = fVar60 - fVar149;
                    lVar42 = uVar57 + uVar78;
                    fVar60 = 0.0;
                    if (0.0 <= fVar38) {
                      fVar60 = fVar38;
                    }
                    uVar64 = 0;
                    if (2 < uVar82 - 1) {
                      do {
                        *(float *)((longlong)ppppppfVar81[uVar64] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar64] + lVar42 * 4) * fVar60;
                        *(float *)((longlong)ppppppfVar81[uVar64 + 1] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar64 + 1] + lVar42 * 4) * fVar60;
                        *(float *)((longlong)ppppppfVar81[uVar64 + 2] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar64 + 2] + lVar42 * 4) * fVar60;
                        *(float *)((longlong)ppppppfVar81[uVar64 + 3] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar64 + 3] + lVar42 * 4) * fVar60;
                        uVar64 = uVar64 + 4;
                      } while (((uint)fVar98 & 0xfffffffc) != uVar64);
                    }
                    if ((ulonglong)((uint)fVar98 & 3) != 0) {
                      uVar66 = 0;
                      do {
                        *(float *)((longlong)ppppppfVar81[uVar66 + uVar64] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar66 + uVar64] + lVar42 * 4) *
                             fVar60;
                        uVar66 = uVar66 + 1;
                      } while (((uint)fVar98 & 3) != uVar66);
                    }
                    uVar57 = uVar57 + 1;
                  } while (uVar57 != uVar39);
                  goto LAB_012b0d50;
                }
LAB_012b0db7:
                ppppppfVar81 = unaff_RDI[0x36];
              }
              else {
LAB_012b0d50:
                uVar82 = (ulonglong)(uint)*(float *)local_948;
                if ((int)*(float *)local_948 < 1) goto LAB_012b0db7;
                uVar57 = 0;
                do {
                  auVar95._0_8_ = (**(code **)(DAT_02786500 + 0x38))(auVar95._0_8_,local_8b8._0_8_);
                  auVar95._8_8_ = extraout_XMM0_Qb_03;
                  uVar57 = uVar57 + 1;
                } while (uVar82 != uVar57);
                uVar82 = (ulonglong)(uint)*(float *)(unaff_RDI + 0x2c);
                ppppppfVar81 = unaff_RDI[0x36];
              }
              if (ppppppfVar81 != (float ******)0x0) {
                FUN_00d50b00();
              }
              local_cb0 = 1;
              pcVar74 = (char *)0x0;
              local_cb8 = ppppppfVar81;
              FUN_012b9ad0(&local_cb8,uVar82,0,local_940 & 0xffffffff);
              uVar78 = (uint)local_880;
              if (ppppppfVar81 != (float ******)0x0) {
                FUN_00d50b20();
              }
              auVar123._8_8_ = 0;
              auVar123._0_8_ = local_a10;
              unaff_RDI[0x47] = (float ******)((double)(longlong)local_860 * local_a10);
              unaff_RDI[0x48] =
                   (float ******)
                   ((double)(longlong)((longlong)(int)uVar56 + (longlong)local_860) * local_a10);
              *(undefined2 *)((longlong)unaff_RDI + 0x267) = 0x100;
              pppppppfVar52 = local_860;
LAB_012b0e8a:
              sVar72 = (size_t)pcVar74;
              pvVar41 = (void *)((longlong)(int)uVar78 * 8);
              if (0 < (int)*(float *)local_948) {
                if ((char)local_95c == '\0') {
                  lVar42 = 0;
                  do {
                    _memcpy(unaff_RDI[0x32],pvVar41,(size_t)pcVar74);
                    pppppppfVar52 = (float *******)unaff_RDI[0x34];
                    _memcpy(pppppppfVar52,(void *)((longlong)(int)uVar78 << 2),(size_t)pcVar74);
                    sVar72 = (size_t)pcVar74;
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                }
                else {
                  lVar42 = 0;
                  do {
                    pppppppfVar52 = (float *******)unaff_RDI[0x32];
                    _memcpy(pppppppfVar52,pvVar41,(size_t)pcVar74);
                    sVar72 = (size_t)pcVar74;
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                }
              }
              _memcpy(pppppppfVar52,pvVar41,sVar72);
              pppppppfVar52 = (float *******)unaff_RDI[0x45];
              bVar48 = false;
              uVar78 = local_8b8._0_4_;
              uVar56 = uVar78;
              if (local_8f0 == (float *******)0x0) {
                if ((local_a80 & 1) != 0) {
                  lVar42 = (longlong)local_a38;
                  puVar58 = (undefined1 *)((longlong)(int)uVar78 + (longlong)pppppppfVar52);
                  uVar56 = ((int)lVar42 - (int)puVar58) + uVar78;
                  if ((int)uVar56 < 0) {
                    uVar56 = 0;
                  }
                  bVar48 = lVar42 < (longlong)puVar58;
                  if ((longlong)puVar58 <= lVar42) {
                    uVar56 = uVar78;
                  }
                }
                fVar98 = *(float *)local_948;
              }
              else {
                fVar98 = *(float *)local_948;
              }
              if (0 < (int)fVar98) {
                lVar42 = 0;
                do {
                  ___bzero();
                  lVar42 = lVar42 + 1;
                } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
              }
              local_ca8 = local_858;
              local_ca0 = 0;
              local_860 = pppppppfVar52;
              auVar96._0_8_ =
                   FUN_012b6e60(unaff_RDI[0x3c],*(float *)(unaff_RDI + 0x2d),local_9ac,pppppppfVar52
                               );
              auVar96._8_8_ = extraout_XMM0_Qb_04;
              ppppppfVar81 = unaff_RDI[0x3c];
              if (bVar48) {
                uVar78 = uVar56 - 100;
                if ((int)uVar56 < 100) {
                  uVar78 = 0;
                }
                uVar39 = 100;
                if ((int)uVar56 < 100) {
                  uVar39 = uVar56;
                }
                if ((int)uVar56 < 1) goto LAB_012b11c0;
                fVar98 = *(float *)local_948;
                uVar82 = (ulonglong)(uint)fVar98;
                if (0 < (int)fVar98) {
                  fVar149 = DAT_02390124 / (float)(int)uVar39;
                  auVar96 = ZEXT416((uint)fVar149);
                  if ((int)uVar39 < 2) {
                    uVar39 = 1;
                  }
                  uVar57 = 0;
                  auVar110 = ZEXT416((uint)DAT_02390124);
                  do {
                    auVar123._4_12_ = auVar110._4_12_;
                    auVar123._0_4_ = auVar110._0_4_ - fVar149;
                    lVar42 = uVar57 + uVar78;
                    auVar102 = ZEXT812(0);
                    if (0.0 <= auVar123._0_4_) {
                      auVar102._4_8_ = 0;
                      auVar102._0_4_ = auVar123._0_4_;
                    }
                    auVar110._12_4_ = 0;
                    auVar110._0_12_ = auVar102;
                    uVar64 = 0;
                    fVar60 = auVar102._0_4_;
                    if (2 < uVar82 - 1) {
                      do {
                        *(float *)((longlong)ppppppfVar81[uVar64] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar64] + lVar42 * 4) * fVar60;
                        *(float *)((longlong)ppppppfVar81[uVar64 + 1] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar64 + 1] + lVar42 * 4) * fVar60;
                        *(float *)((longlong)ppppppfVar81[uVar64 + 2] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar64 + 2] + lVar42 * 4) * fVar60;
                        fVar38 = *(float *)((longlong)ppppppfVar81[uVar64 + 3] + lVar42 * 4) *
                                 fVar60;
                        auVar123 = ZEXT416((uint)fVar38);
                        *(float *)((longlong)ppppppfVar81[uVar64 + 3] + lVar42 * 4) = fVar38;
                        uVar64 = uVar64 + 4;
                      } while (((uint)fVar98 & 0xfffffffc) != uVar64);
                    }
                    if ((ulonglong)((uint)fVar98 & 3) != 0) {
                      uVar66 = 0;
                      do {
                        fVar38 = *(float *)((longlong)ppppppfVar81[uVar66 + uVar64] + lVar42 * 4) *
                                 fVar60;
                        auVar123 = ZEXT416((uint)fVar38);
                        *(float *)((longlong)ppppppfVar81[uVar66 + uVar64] + lVar42 * 4) = fVar38;
                        uVar66 = uVar66 + 1;
                      } while (((uint)fVar98 & 3) != uVar66);
                    }
                    uVar57 = uVar57 + 1;
                  } while (uVar57 != uVar39);
                  goto LAB_012b11c0;
                }
LAB_012b1227:
                ppppppfVar81 = unaff_RDI[0x36];
              }
              else {
LAB_012b11c0:
                uVar82 = (ulonglong)(uint)*(float *)local_948;
                if ((int)*(float *)local_948 < 1) goto LAB_012b1227;
                uVar57 = 0;
                do {
                  auVar96._0_8_ = (**(code **)(DAT_02786500 + 0x38))(auVar96._0_8_,local_8b8._0_8_);
                  auVar96._8_8_ = extraout_XMM0_Qb_05;
                  uVar57 = uVar57 + 1;
                } while (uVar82 != uVar57);
                uVar82 = (ulonglong)(uint)*(float *)(unaff_RDI + 0x2c);
                ppppppfVar81 = unaff_RDI[0x36];
              }
              if (ppppppfVar81 != (float ******)0x0) {
                FUN_00d50b00();
              }
              local_c90 = 1;
              pppppppfVar52 = &local_c98;
              pcVar74 = (char *)0x0;
              local_c98 = ppppppfVar81;
              FUN_012b9ad0(pppppppfVar52,uVar82,0,local_940 & 0xffffffff);
              pppppppfVar54 = local_860;
              if (ppppppfVar81 != (float ******)0x0) {
                FUN_00d50b20();
              }
              unaff_RDI[0x47] = (float ******)((double)(longlong)pppppppfVar54 * local_a10);
              unaff_RDI[0x48] =
                   (float ******)
                   ((double)(longlong)((longlong)(int)uVar56 + (longlong)pppppppfVar54) * local_a10)
              ;
              if (0 < (int)*(float *)(unaff_RDI + 0x2c)) {
                pvVar41 = (void *)((longlong)((int)local_880 - (int)(float)local_940) << 3);
                if ((int)local_8b8._0_4_ < 8) {
                  lVar42 = 0;
                  do {
                    pppppppfVar52 = (float *******)unaff_RDI[0x3d];
                    _memcpy(pppppppfVar52,pvVar41,(size_t)pcVar74);
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                }
                else {
                  uVar82 = 2;
                  if (2 < (int)(float)local_940) {
                    uVar82 = local_940 & 0xffffffff;
                  }
                  lVar42 = 0;
                  do {
                    pppppfVar119 = unaff_RDI[0x2f][lVar42];
                    pppppfVar44 = unaff_RDI[0x2e][lVar42];
                    pppppfVar8 = unaff_RDI[0x32][lVar42];
                    lVar63 = 1;
                    if (0xb < (int)local_8b8._0_4_) {
                      lVar63 = 1;
                      do {
                        fVar98 = SUB84(pppppfVar44[lVar63],0);
                        fVar149 = (float)((ulonglong)pppppfVar44[lVar63] >> 0x20);
                        fVar60 = SUB84(pppppfVar8[lVar63],0);
                        fVar38 = (float)((ulonglong)pppppfVar8[lVar63] >> 0x20);
                        auVar146._0_4_ = fVar149 * fVar38 + fVar98 * fVar60;
                        auVar146._4_4_ = fVar149;
                        auVar146._8_8_ = 0;
                        auVar137._0_4_ = fVar149 * fVar60 - fVar98 * fVar38;
                        auVar137._4_4_ = fVar149;
                        auVar137._8_8_ = 0;
                        auVar132 = insertps(auVar146,auVar137,0x10);
                        pppppfVar119[lVar63] = auVar132._0_8_;
                        ppppfVar61 = pppppfVar44[lVar63 + 1];
                        fVar98 = (float)((ulonglong)ppppfVar61 >> 0x20);
                        fVar149 = SUB84(pppppfVar8[lVar63 + 1],0);
                        auVar123._0_4_ = SUB84(ppppfVar61,0) * fVar149;
                        auVar123._4_8_ = (ulonglong)ppppfVar61 >> 0x20;
                        auVar123._12_4_ = 0.0;
                        fVar60 = (float)((ulonglong)pppppfVar8[lVar63 + 1] >> 0x20);
                        auVar147._0_4_ = fVar98 * fVar60 + auVar123._0_4_;
                        auVar147._4_4_ = fVar98;
                        auVar147._8_8_ = 0;
                        auVar138._0_4_ = fVar98 * fVar149 - SUB84(ppppfVar61,0) * fVar60;
                        auVar138._4_4_ = fVar98;
                        auVar138._8_8_ = 0;
                        auVar132 = insertps(auVar147,auVar138,0x10);
                        pppppfVar119[lVar63 + 1] = auVar132._0_8_;
                        lVar59 = lVar63 - (uVar82 - 1 & 0xfffffffffffffffe);
                        lVar63 = lVar63 + 2;
                      } while (lVar59 != -1);
                    }
                    if ((uVar82 - 1 & 1) != 0) {
                      ppppfVar61 = pppppfVar44[lVar63];
                      fVar98 = (float)((ulonglong)ppppfVar61 >> 0x20);
                      fVar149 = SUB84(pppppfVar8[lVar63],0);
                      auVar123._0_4_ = SUB84(ppppfVar61,0) * fVar149;
                      auVar123._4_8_ = (ulonglong)ppppfVar61 >> 0x20;
                      auVar123._12_4_ = 0.0;
                      fVar60 = (float)((ulonglong)pppppfVar8[lVar63] >> 0x20);
                      auVar148._0_4_ = fVar98 * fVar60 + auVar123._0_4_;
                      auVar148._4_4_ = fVar98;
                      auVar148._8_8_ = 0;
                      auVar139._0_4_ = fVar98 * fVar149 - SUB84(ppppfVar61,0) * fVar60;
                      auVar139._4_4_ = fVar98;
                      auVar139._8_8_ = 0;
                      auVar132 = insertps(auVar148,auVar139,0x10);
                      pppppfVar119[lVar63] = auVar132._0_8_;
                    }
                    pppppppfVar52 = (float *******)unaff_RDI[0x3d];
                    _memcpy(pppppppfVar52,pvVar41,(size_t)pcVar74);
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                }
              }
              *(undefined1 *)((longlong)unaff_RDI + 0x267) = 1;
              uVar78 = (uint)local_880;
              cVar34 = *(char *)((longlong)unaff_RDI + 0x269);
            }
            else {
              if (*(char *)((longlong)unaff_RDI + 0x267) == '\0') goto LAB_012b0e8a;
              cVar34 = *(char *)((longlong)unaff_RDI + 0x269);
            }
            if (cVar34 == '\0') {
              if (local_8a0 == (float *******)unaff_RDI[0x45]) {
                if (0 < (int)*(float *)local_948) {
                  pvVar41 = (void *)((longlong)local_998 * 8);
                  lVar42 = 0;
                  do {
                    pppppppfVar52 = (float *******)unaff_RDI[0x31];
                    _memcpy(pppppppfVar52,pvVar41,(size_t)pcVar74);
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                }
              }
              else if (local_8a0 == (float *******)((longlong)unaff_RDI[0x45] - (longlong)local_8e8)
                      ) {
                if (0 < (int)*(float *)local_948) {
                  pvVar41 = (void *)((longlong)local_998 * 8);
                  lVar42 = 0;
                  do {
                    pppppppfVar52 = (float *******)unaff_RDI[0x32];
                    _memcpy(pppppppfVar52,pvVar41,(size_t)pcVar74);
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                }
              }
              else {
                bVar48 = false;
                uVar78 = local_8b8._0_4_;
                uVar56 = uVar78;
                if ((local_8f0 == (float *******)0x0) && ((local_a80 & 1) != 0)) {
                  lVar42 = (longlong)local_a38;
                  puVar58 = (undefined1 *)((longlong)(int)uVar78 + (longlong)local_8a0);
                  uVar56 = ((int)lVar42 - (int)puVar58) + uVar78;
                  if ((int)uVar56 < 0) {
                    uVar56 = 0;
                  }
                  bVar48 = lVar42 < (longlong)puVar58;
                  if ((longlong)puVar58 <= lVar42) {
                    uVar56 = uVar78;
                  }
                }
                if (0 < (int)*(float *)local_948) {
                  lVar42 = 0;
                  do {
                    ___bzero();
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
                }
                local_c88 = local_858;
                local_c80 = 0;
                pppppppfVar52 = (float *******)unaff_RDI[0x3c];
                FUN_012b6e60(pppppppfVar52,*(float *)(unaff_RDI + 0x2d),local_9ac,local_8a0);
                ppppppfVar81 = unaff_RDI[0x3c];
                if (bVar48) {
                  uVar78 = uVar56 - 100;
                  pppppppfVar52 = (float *******)0x0;
                  if ((int)uVar56 < 100) {
                    uVar78 = 0;
                  }
                  uVar39 = 100;
                  if ((int)uVar56 < 100) {
                    uVar39 = uVar56;
                  }
                  if ((int)uVar56 < 1) goto LAB_012b1880;
                  fVar98 = *(float *)local_948;
                  pppppppfVar52 = local_948;
                  if (0 < (int)fVar98) {
                    fVar149 = DAT_02390124 / (float)(int)uVar39;
                    if ((int)uVar39 < 2) {
                      uVar39 = 1;
                    }
                    uVar82 = 0;
                    auVar111 = ZEXT416((uint)DAT_02390124);
                    do {
                      auVar123._4_12_ = auVar111._4_12_;
                      auVar123._0_4_ = auVar111._0_4_ - fVar149;
                      lVar42 = uVar82 + uVar78;
                      auVar103 = ZEXT812(0);
                      if (0.0 <= auVar123._0_4_) {
                        auVar103._4_8_ = 0;
                        auVar103._0_4_ = auVar123._0_4_;
                      }
                      auVar111._12_4_ = 0;
                      auVar111._0_12_ = auVar103;
                      uVar57 = 0;
                      fVar60 = auVar103._0_4_;
                      if (2 < (ulonglong)(uint)fVar98 - 1) {
                        do {
                          *(float *)((longlong)ppppppfVar81[uVar57] + lVar42 * 4) =
                               *(float *)((longlong)ppppppfVar81[uVar57] + lVar42 * 4) * fVar60;
                          *(float *)((longlong)ppppppfVar81[uVar57 + 1] + lVar42 * 4) =
                               *(float *)((longlong)ppppppfVar81[uVar57 + 1] + lVar42 * 4) * fVar60;
                          *(float *)((longlong)ppppppfVar81[uVar57 + 2] + lVar42 * 4) =
                               *(float *)((longlong)ppppppfVar81[uVar57 + 2] + lVar42 * 4) * fVar60;
                          fVar38 = *(float *)((longlong)ppppppfVar81[uVar57 + 3] + lVar42 * 4) *
                                   fVar60;
                          auVar123 = ZEXT416((uint)fVar38);
                          *(float *)((longlong)ppppppfVar81[uVar57 + 3] + lVar42 * 4) = fVar38;
                          uVar57 = uVar57 + 4;
                        } while (((uint)fVar98 & 0xfffffffc) != uVar57);
                      }
                      if ((ulonglong)((uint)fVar98 & 3) != 0) {
                        uVar64 = 0;
                        do {
                          pppppppfVar52 = (float *******)ppppppfVar81[uVar64 + uVar57];
                          fVar38 = *(float *)((longlong)pppppppfVar52 + lVar42 * 4) * fVar60;
                          auVar123 = ZEXT416((uint)fVar38);
                          *(float *)((longlong)pppppppfVar52 + lVar42 * 4) = fVar38;
                          uVar64 = uVar64 + 1;
                        } while (((uint)fVar98 & 3) != uVar64);
                      }
                      uVar82 = uVar82 + 1;
                    } while (uVar82 != uVar39);
                    goto LAB_012b1880;
                  }
                }
                else {
LAB_012b1880:
                  fVar98 = *(float *)local_948;
                  if (0 < (int)fVar98) {
                    uVar82 = 0;
                    do {
                      (**(code **)(DAT_02786500 + 0x38))();
                      uVar82 = uVar82 + 1;
                    } while ((uint)fVar98 != uVar82);
                    fVar98 = *(float *)(unaff_RDI + 0x2c);
                  }
                }
                local_8e8 = (undefined1  [8])unaff_RDI[0x36];
                auVar62 = (undefined1  [8])0;
                if (unaff_RDI[0x36] != (float ******)0x0) {
                  FUN_00d50b00();
                  auVar62 = local_8e8;
                }
                if (0 < (int)fVar98) {
                  pppppppfVar52 = (float *******)unaff_RDI[0x31];
                  local_860 = (float *******)unaff_RDI[0x3d];
                  uVar82 = 0;
                  local_8a0 = pppppppfVar52;
                  do {
                    ppppppfVar81 = local_860[uVar82];
                    ppppppfVar131 = local_8a0[uVar82];
                    FUN_00e83530();
                    *ppppppfVar131 = (float *****)0x3f800000;
                    if (7 < (int)local_8b8._0_4_) {
                      lVar42 = 1;
                      do {
                        while( true ) {
                          fVar60 = (float)((ulonglong)ppppppfVar81[lVar42] >> 0x20);
                          fVar38 = (float)((uint)fVar60 & _DAT_02390140);
                          uVar57 = CONCAT44((uint)fVar60 & _UNK_02390144,fVar38);
                          fVar149 = SUB84(ppppppfVar81[lVar42],0);
                          if ((fVar149 == DAT_0239424c) &&
                             (uVar64 = uVar57, !NAN(fVar149) && !NAN(DAT_0239424c))) break;
                          fVar97 = (float)((uint)fVar149 & _DAT_02390140);
                          uVar64 = (ulonglong)(uint)fVar97;
                          if ((fVar60 == DAT_0239424c) && (!NAN(fVar60) && !NAN(DAT_0239424c)))
                          break;
                          if (fVar97 <= fVar38) {
                            fVar97 = SQRT((fVar97 / fVar38) * (fVar97 / fVar38) + DAT_02390124) *
                                     fVar38;
                            goto joined_r0x012b19e3;
                          }
                          fVar38 = SQRT((fVar38 / fVar97) * (fVar38 / fVar97) + DAT_02390124);
                          uVar57 = CONCAT44((uint)fVar60 & _UNK_02390144,fVar38);
                          fVar97 = fVar97 * fVar38;
                          if (fVar97 <= DAT_023b4df0) goto LAB_012b1990;
LAB_012b19e5:
                          fVar97 = DAT_02390124 / fVar97;
                          auVar123 = ZEXT416((uint)fVar97);
                          ppppppfVar131[lVar42] =
                               (float *****)CONCAT44(fVar60 * fVar97,fVar149 * fVar97);
                          lVar42 = lVar42 + 1;
                          if (local_998 == (undefined1  [8])lVar42) goto LAB_012b1940;
                        }
                        fVar97 = (float)uVar64;
joined_r0x012b19e3:
                        if (DAT_023b4df0 < fVar97) goto LAB_012b19e5;
LAB_012b1990:
                        auVar123._8_8_ = 0;
                        auVar123._0_8_ = (double)uVar57;
                        ppppppfVar131[lVar42] = (float *****)0x3f800000;
                        lVar42 = lVar42 + 1;
                      } while (local_998 != (undefined1  [8])lVar42);
                    }
LAB_012b1940:
                    uVar82 = uVar82 + 1;
                    auVar62 = local_8e8;
                  } while (uVar82 != (uint)fVar98);
                }
                uVar78 = (uint)local_880;
                if (auVar62 != (undefined1  [8])0x0) {
                  FUN_00d50b20();
                }
              }
              *(undefined1 *)((longlong)unaff_RDI + 0x269) = 1;
            }
            pppppppfVar75 = (float *******)(longlong)(int)uVar78;
            iVar40 = (int)(float)local_940;
            fVar60 = DAT_02390124;
            dVar88 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
            if ((char)local_9a8 != '\0') {
              local_860 = pppppppfVar75;
              ___bzero();
              sVar72 = (size_t)pppppppfVar75;
              fVar98 = *(float *)local_948;
              local_9a8 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
              if (0 < (int)fVar98) {
                iVar40 = (int)(float)local_940;
                local_9a8 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                if (7 < (int)local_8b8._0_4_) {
                  uVar82 = 2;
                  if (2 < (int)(float)local_940) {
                    uVar82 = local_940 & 0xffffffff;
                  }
                  ppppppfVar81 = unaff_RDI[0x33];
                  ppppppfVar131 = *local_b48;
                  uVar57 = uVar82 - 1;
                  if (uVar57 < 8) {
                    pppppppfVar54 = (float *******)(ulonglong)((uint)uVar57 & 3);
                    uVar64 = 0;
                    do {
                      pppppfVar119 = ppppppfVar81[uVar64];
                      pppppppfVar53 = (float *******)((longlong)&MACH_HEADER.magic + 1);
                      if (2 < uVar82 - 2) {
                        uVar66 = 0;
                        do {
                          uVar83 = uVar66;
                          *(float *)((longlong)ppppppfVar131 + (uVar83 + 1) * 4) =
                               *(float *)((longlong)pppppfVar119 + uVar83 * 4 + 4) +
                               *(float *)((longlong)ppppppfVar131 + (uVar83 + 1) * 4);
                          *(float *)((longlong)ppppppfVar131 + (uVar83 + 2) * 4) =
                               *(float *)((longlong)pppppfVar119 + uVar83 * 4 + 8) +
                               *(float *)((longlong)ppppppfVar131 + (uVar83 + 2) * 4);
                          *(float *)((longlong)ppppppfVar131 + (uVar83 + 3) * 4) =
                               *(float *)((longlong)pppppfVar119 + uVar83 * 4 + 0xc) +
                               *(float *)((longlong)ppppppfVar131 + (uVar83 + 3) * 4);
                          *(float *)((longlong)ppppppfVar131 + (uVar83 + 4) * 4) =
                               *(float *)((longlong)pppppfVar119 + uVar83 * 4 + 0x10) +
                               *(float *)((longlong)ppppppfVar131 + (uVar83 + 4) * 4);
                          uVar66 = uVar83 + 4;
                        } while ((uVar57 & 0xfffffffffffffffc) != uVar83 + 4);
                        pppppppfVar53 = (float *******)(uVar83 + 5);
                      }
                      pppppppfVar52 = pppppppfVar53;
                      if (pppppppfVar54 != (float *******)0x0) {
                        pppppppfVar52 = (float *******)0x0;
                        do {
                          *(float *)((longlong)ppppppfVar131 +
                                    (longlong)((longlong)pppppppfVar53 + (longlong)pppppppfVar52) *
                                    4) = *(float *)((longlong)pppppfVar119 +
                                                   (longlong)pppppppfVar52 * 4 +
                                                   (longlong)pppppppfVar53 * 4) +
                                         *(float *)((longlong)ppppppfVar131 +
                                                   (longlong)
                                                   ((longlong)pppppppfVar53 +
                                                   (longlong)pppppppfVar52) * 4);
                          pppppppfVar52 = (float *******)((longlong)pppppppfVar52 + 1);
                        } while (pppppppfVar54 != pppppppfVar52);
                      }
                      uVar64 = uVar64 + 1;
                      local_9a8 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                    } while (uVar64 != (uint)fVar98);
                  }
                  else {
                    pppppppfVar75 = (float *******)((longlong)ppppppfVar131 + uVar82 * 4);
                    uVar66 = uVar57 & 0xfffffffffffffff8;
                    local_8e8 = (undefined1  [8])(uVar66 + 1);
                    local_8a0 = (float *******)(uVar66 - 8);
                    uVar83 = ((ulonglong)local_8a0 >> 3) + 1;
                    local_9a8 = (double)-(uVar83 & 0xfffffffffffffffe);
                    uVar64 = 0;
                    do {
                      pppppfVar119 = ppppppfVar81[uVar64];
                      if (((longlong)ppppppfVar131 + 4U < (longlong)pppppfVar119 + uVar82 * 4) &&
                         (uVar45 = 1, (float *******)((longlong)pppppfVar119 + 4) < pppppppfVar75))
                      {
LAB_012b1d11:
                        uVar78 = (int)uVar82 - (int)uVar45;
                        uVar46 = ~uVar45;
                        pppppppfVar52 = (float *******)((ulonglong)uVar78 & 3);
                        pppppppfVar54 = pppppppfVar52;
                        if ((uVar78 & 3) != 0) {
                          do {
                            *(float *)((longlong)ppppppfVar131 + uVar45 * 4) =
                                 *(float *)((longlong)pppppfVar119 + uVar45 * 4) +
                                 *(float *)((longlong)ppppppfVar131 + uVar45 * 4);
                            uVar45 = uVar45 + 1;
                            pppppppfVar54 = (float *******)((longlong)pppppppfVar54 + -1);
                            pppppppfVar52 = (float *******)0x0;
                          } while (pppppppfVar54 != (float *******)0x0);
                        }
                        if (2 < uVar46 + uVar82) {
                          do {
                            *(float *)((longlong)ppppppfVar131 + uVar45 * 4) =
                                 *(float *)((longlong)pppppfVar119 + uVar45 * 4) +
                                 *(float *)((longlong)ppppppfVar131 + uVar45 * 4);
                            *(float *)((longlong)ppppppfVar131 + (uVar45 + 1) * 4) =
                                 *(float *)((longlong)pppppfVar119 + uVar45 * 4 + 4) +
                                 *(float *)((longlong)ppppppfVar131 + (uVar45 + 1) * 4);
                            *(float *)((longlong)ppppppfVar131 + (uVar45 + 2) * 4) =
                                 *(float *)((longlong)pppppfVar119 + uVar45 * 4 + 8) +
                                 *(float *)((longlong)ppppppfVar131 + (uVar45 + 2) * 4);
                            *(float *)((longlong)ppppppfVar131 + (uVar45 + 3) * 4) =
                                 *(float *)((longlong)pppppfVar119 + uVar45 * 4 + 0xc) +
                                 *(float *)((longlong)ppppppfVar131 + (uVar45 + 3) * 4);
                            uVar45 = uVar45 + 4;
                          } while (uVar82 != uVar45);
                        }
                      }
                      else {
                        if (local_8a0 == (float *******)0x0) {
                          lVar42 = 0;
LAB_012b1cd8:
                          uVar45 = lVar42 << 2 | 4;
                          pfVar68 = (float *)((longlong)pppppfVar119 + uVar45);
                          auVar132 = *(undefined1 (*) [16])((longlong)pppppfVar119 + uVar45 + 0x10);
                          pfVar1 = (float *)((longlong)ppppppfVar131 + uVar45);
                          auVar128._0_4_ = *pfVar1 + *pfVar68;
                          auVar128._4_4_ = pfVar1[1] + pfVar68[1];
                          auVar128._8_4_ = pfVar1[2] + pfVar68[2];
                          auVar128._12_4_ = pfVar1[3] + pfVar68[3];
                          pfVar68 = (float *)((longlong)ppppppfVar131 + uVar45 + 0x10);
                          fVar149 = pfVar68[1];
                          fVar60 = pfVar68[2];
                          fVar38 = pfVar68[3];
                          *(undefined1 (*) [16])((longlong)ppppppfVar131 + uVar45) = auVar128;
                          pfVar1 = (float *)((longlong)ppppppfVar131 + uVar45 + 0x10);
                          *pfVar1 = *pfVar68 + auVar132._0_4_;
                          pfVar1[1] = fVar149 + auVar132._4_4_;
                          pfVar1[2] = fVar60 + auVar132._8_4_;
                          pfVar1[3] = fVar38 + auVar132._12_4_;
                        }
                        else {
                          lVar42 = 0;
                          dVar88 = local_9a8;
                          do {
                            pfVar68 = (float *)((longlong)pppppfVar119 + lVar42 * 4 + 4);
                            pfVar1 = (float *)((longlong)pppppfVar119 + lVar42 * 4 + 0x14);
                            fVar149 = *pfVar1;
                            fVar60 = pfVar1[1];
                            fVar38 = pfVar1[2];
                            fVar97 = pfVar1[3];
                            pfVar1 = (float *)((longlong)ppppppfVar131 + (lVar42 + 1) * 4);
                            auVar127._0_4_ = *pfVar1 + *pfVar68;
                            auVar127._4_4_ = pfVar1[1] + pfVar68[1];
                            auVar127._8_4_ = pfVar1[2] + pfVar68[2];
                            auVar127._12_4_ = pfVar1[3] + pfVar68[3];
                            pfVar68 = (float *)((longlong)ppppppfVar131 + (lVar42 + 5) * 4);
                            fVar87 = *pfVar68;
                            fVar69 = pfVar68[1];
                            fVar130 = pfVar68[2];
                            fVar129 = pfVar68[3];
                            pfVar68 = (float *)((longlong)ppppppfVar131 + (lVar42 + 9) * 4);
                            fVar140 = *pfVar68;
                            fVar141 = pfVar68[1];
                            fVar14 = pfVar68[2];
                            fVar15 = pfVar68[3];
                            auVar132 = *(undefined1 (*) [16])
                                        ((longlong)ppppppfVar131 + (lVar42 + 0xd) * 4);
                            *(undefined1 (*) [16])((longlong)ppppppfVar131 + (lVar42 + 1) * 4) =
                                 auVar127;
                            pfVar68 = (float *)((longlong)ppppppfVar131 + (lVar42 + 5) * 4);
                            *pfVar68 = fVar87 + fVar149;
                            pfVar68[1] = fVar69 + fVar60;
                            pfVar68[2] = fVar130 + fVar38;
                            pfVar68[3] = fVar129 + fVar97;
                            pfVar68 = (float *)((longlong)pppppfVar119 + lVar42 * 4 + 0x24);
                            fVar149 = pfVar68[1];
                            fVar60 = pfVar68[2];
                            fVar38 = pfVar68[3];
                            pfVar1 = (float *)((longlong)pppppfVar119 + lVar42 * 4 + 0x34);
                            auVar112._0_4_ = *pfVar1 + auVar132._0_4_;
                            auVar112._4_4_ = pfVar1[1] + auVar132._4_4_;
                            auVar112._8_4_ = pfVar1[2] + auVar132._8_4_;
                            auVar112._12_4_ = pfVar1[3] + auVar132._12_4_;
                            pfVar1 = (float *)((longlong)ppppppfVar131 + (lVar42 + 9) * 4);
                            *pfVar1 = *pfVar68 + fVar140;
                            pfVar1[1] = fVar149 + fVar141;
                            pfVar1[2] = fVar60 + fVar14;
                            pfVar1[3] = fVar38 + fVar15;
                            *(undefined1 (*) [16])((longlong)ppppppfVar131 + (lVar42 + 0xd) * 4) =
                                 auVar112;
                            lVar42 = lVar42 + 0x10;
                            dVar88 = (double)((longlong)dVar88 + 2);
                          } while (dVar88 != 0.0);
                          pppppppfVar52 = (float *******)0x0;
                          if ((uVar83 & 1) != 0) goto LAB_012b1cd8;
                        }
                        uVar45 = uVar66 + 1;
                        if (uVar57 != uVar66) goto LAB_012b1d11;
                      }
                      uVar64 = uVar64 + 1;
                    } while (uVar64 != (uint)fVar98);
                  }
                }
                sVar72 = (size_t)pppppppfVar75;
                uVar78 = (uint)local_880;
                if (1 < (int)fVar98) {
                  (**(code **)(DAT_02786500 + 0x20))(DAT_02390124 / (float)(int)fVar98);
                }
              }
              if (1 < (int)local_8b8._0_4_) {
                _memset_pattern16(pppppppfVar52,(void *)((ulonglong)(uVar78 - 1) * 4 + 4),sVar72);
              }
              pVar50 = (pthread_key_t)pppppppfVar52;
              if (*(char *)((longlong)unaff_RDI + 0x2a2) != '\0') {
                ppppppfVar81 = unaff_RDI[0x1d];
                pvVar41 = _pthread_getspecific(pVar50);
                if (pvVar41 != (void *)0x0) {
                  ppppppfVar81 = unaff_RDI[0x1d];
                  lVar42 = FUN_00e8b990();
                  if (lVar42 != 0) {
                    ppppppfVar81 = (float ******)
                                   ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                pppppfVar119 = ppppppfVar81[10];
                pvVar41 = _pthread_getspecific(pVar50);
                if (pvVar41 != (void *)0x0) {
                  pppppfVar119 = ppppppfVar81[10];
                  lVar42 = FUN_00e8b990();
                  if (lVar42 != 0) {
                    pppppfVar119 = (float *****)
                                   pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                ppppfVar61 = pppppfVar119[9];
                if (DAT_027c0170 == '\0') {
                  iVar51 = ___cxa_guard_acquire();
                  if (iVar51 != 0) {
                    _DAT_02790158 = FUN_007ef2d0();
                    _DAT_02790140 = "MUAudioSourcePrincipalItem";
                    _DAT_02790148 = 0x138;
                    pVar50 = 0x10fe5c0;
                    _DAT_02790150 = FUN_010fe5c0;
                    _DAT_02790160 = 0;
                    uRam0000000002790168 = 0;
                    _DAT_02790170 = 0;
                    uRam0000000002790178 = 0;
                    _DAT_02790180 = 0;
                    uRam0000000002790188 = 0;
                    _DAT_02790190 = 0;
                    uRam0000000002790198 = 0;
                    _DAT_027901a0 = 0;
                    uRam00000000027901a8 = 0;
                    _DAT_027901b0 = 0;
                    uRam00000000027901b8 = 0;
                    _DAT_027901c0 = 0;
                    uRam00000000027901c8 = 0;
                    _DAT_027901d0 = 0;
                    uRam00000000027901d8 = 0;
                    _DAT_027901e0 = 0;
                    uRam00000000027901e8 = 0;
                    _DAT_027901f0 = 0;
                    uRam00000000027901f8 = 0;
                    _DAT_02790200 = 0;
                    ___cxa_guard_release();
                    iVar40 = (int)(float)local_940;
                  }
                }
                ppppfVar4 = DAT_02802688;
                if (ppppfVar61 != (float ****)0x0) {
                  (*(code *)(*ppppfVar61)[0x6c])();
                  cVar34 = FUN_00e85ea0();
                  ppppfVar4 = DAT_02802688;
                  if (cVar34 != '\0') {
                    ppppfVar4 = pppppfVar119[9];
                  }
                }
                if (ppppfVar4 != (float ****)0x0) {
                  FUN_00d50b00();
                  pvVar41 = _pthread_getspecific(pVar50);
                  if (pvVar41 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar85 = FUN_014ed7a0(unaff_RDI[0x47],unaff_RDI[0x48]);
                  local_8e8._0_4_ = uVar85;
                  FUN_00d50b20();
                }
              }
              auVar123 = ZEXT816(0);
              FUN_012b9d70(unaff_RDI[0x3a],unaff_RDI[0x38],iVar40,&local_a18);
              pppppppfVar75 = local_860;
              fVar60 = local_a18;
              dVar88 = local_9a8;
              if ((local_a18 < DAT_023b36e4) || (DAT_023b36e8 < local_a18)) {
                local_922 = '\x01';
              }
            }
            uVar78 = (uint)local_958;
            local_9a8._4_4_ = (undefined4)((ulonglong)dVar88 >> 0x20);
            fVar98 = 0.0;
            fVar149 = 0.0;
            fVar38 = local_ae8 * DAT_0239011c;
            local_ba8._0_4_ = fVar60;
            if (local_ac8[0] == '\0') {
              if ((char)local_978 == '\0') {
                if ((local_bb8 & 1) == 0 && local_a8c._0_1_ == '\0') {
                  if ((7 < (int)local_8b8._0_4_) && (0 < (int)(uint)local_958)) {
                    pppppfVar119 = *unaff_RDI[0x33];
                    ppppppfVar81 = (float ******)*unaff_RDI[0x34];
                    local_860 = (float *******)*unaff_RDI[0x32];
                    local_a20 = *unaff_RDI[0x2e];
                    local_9a8._0_4_ = (uint)((char)local_95c == '\0') * 2;
                    uVar82 = 2;
                    if (2 < (int)(float)local_940) {
                      uVar82 = local_940 & 0xffffffff;
                    }
                    lVar42 = 0;
                    _local_8e8 = ZEXT416((uint)((DAT_02390124 - local_ae8) * DAT_02410f88));
                    local_8a0 = (float *******)CONCAT44(local_8a0._4_4_,fVar38);
                    local_978 = ppppppfVar81;
                    iVar40 = (uint)local_9a8;
                    do {
                      if (uVar78 == 1) {
                        ppppppfVar131 = unaff_RDI[0x35];
                        cVar34 = *(char *)((longlong)ppppppfVar131 + lVar42 + 1);
                        if (iVar40 <= cVar34) goto LAB_012b2340;
joined_r0x012b2455:
                        if (cVar34 < '\x04') {
                          *(char *)((longlong)ppppppfVar131 + lVar42 + 1) = cVar34 + '\x01';
                        }
                      }
                      else {
LAB_012b2340:
                        fVar97 = *(float *)((longlong)ppppppfVar81 + (lVar42 + 1) * 4);
                        if (DAT_02394274 <= fVar97) {
                          fVar87 = *(float *)((longlong)pppppfVar119 + (lVar42 + 1) * 4);
                          auVar123 = ZEXT416((uint)DAT_02394274);
                          if (DAT_02394274 <= fVar87) {
                            fVar97 = fVar97 / fVar87;
                            if (DAT_02390124 < fVar97) {
                              fVar97 = DAT_02390124 / fVar97;
                            }
                            if (fVar38 <= fVar97) {
                              ppppppfVar81 = local_860[lVar42 + 1];
                              auVar123._4_4_ = (float)((ulonglong)ppppppfVar81 >> 0x20);
                              fVar149 = SUB84(unaff_RDI[0x3b][lVar42 + 1],0);
                              fVar60 = (float)((ulonglong)unaff_RDI[0x3b][lVar42 + 1] >> 0x20);
                              fVar98 = SUB84(ppppppfVar81,0) * fVar149 - auVar123._4_4_ * fVar60;
                              fVar149 = SUB84(ppppppfVar81,0) * fVar60 + auVar123._4_4_ * fVar149;
                              fVar38 = (float)((ulonglong)local_a20[lVar42 + 1] >> 0x20);
                              fVar60 = SUB84(local_a20[lVar42 + 1],0);
                              auVar123._0_4_ = fVar149 * fVar60;
                              auVar123._8_8_ = 0;
                              auVar12._4_8_ = (ulonglong)ppppppfVar81 >> 0x20;
                              auVar12._0_4_ = fVar98 * fVar38 - auVar123._0_4_;
                              uVar56 = _atan2f(auVar12._0_8_,
                                               CONCAT44(fVar38,fVar38 * fVar149 + fVar60 * fVar98));
                              ppppppfVar81 = local_978;
                              fVar98 = (float)uStack_8e0;
                              fVar149 = uStack_8e0._4_4_;
                              fVar60 = (float)local_ba8._0_4_;
                              fVar38 = local_8a0._0_4_;
                              iVar40 = (uint)local_9a8;
                              if ((float)(uVar56 & _DAT_02390140) <= (float)local_8e8._0_4_) {
                                ppppppfVar131 = unaff_RDI[0x35];
                                cVar34 = *(char *)((longlong)ppppppfVar131 + lVar42 + 1);
                                goto joined_r0x012b2455;
                              }
                            }
                          }
                        }
                        *(undefined1 *)((longlong)unaff_RDI[0x35] + lVar42 + 1) = 0;
                      }
                      dVar88 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                      lVar42 = lVar42 + 1;
                    } while (uVar82 - 1 != lVar42);
                  }
                }
                else if (7 < (int)local_8b8._0_4_) {
                  uVar82 = 2;
                  if (2 < (int)(float)local_940) {
                    uVar82 = local_940 & 0xffffffff;
                  }
                  lVar42 = 1;
                  if (0xb < (int)local_8b8._0_4_) {
                    lVar42 = 1;
                    do {
                      cVar34 = *(char *)((longlong)unaff_RDI[0x35] + lVar42);
                      if (cVar34 < '\x04') {
                        *(char *)((longlong)unaff_RDI[0x35] + lVar42) = cVar34 + '\x01';
                        ppppppfVar81 = unaff_RDI[0x35];
                        cVar34 = *(char *)((longlong)ppppppfVar81 + lVar42 + 1);
                      }
                      else {
                        ppppppfVar81 = unaff_RDI[0x35];
                        cVar34 = *(char *)((longlong)ppppppfVar81 + lVar42 + 1);
                      }
                      if (cVar34 < '\x04') {
                        *(char *)((longlong)ppppppfVar81 + lVar42 + 1) = cVar34 + '\x01';
                      }
                      lVar63 = lVar42 - (uVar82 - 1 & 0xfffffffffffffffe);
                      lVar42 = lVar42 + 2;
                    } while (lVar63 != -1);
                  }
                  if ((uVar82 - 1 & 1) != 0) {
                    cVar34 = *(char *)((longlong)unaff_RDI[0x35] + lVar42);
                    if (cVar34 < '\x04') {
                      *(char *)((longlong)unaff_RDI[0x35] + lVar42) = cVar34 + '\x01';
                    }
                  }
                }
              }
              else if (7 < (int)local_8b8._0_4_) {
                uVar82 = 2;
                if (2 < (int)(float)local_940) {
                  uVar82 = local_940 & 0xffffffff;
                }
                uVar57 = (ulonglong)((uint)(uVar82 - 1) & 3);
                lVar42 = 1;
                if (2 < uVar82 - 2) {
                  uVar64 = 0;
                  do {
                    uVar66 = uVar64;
                    *(undefined1 *)((longlong)unaff_RDI[0x35] + uVar66 + 1) = 0;
                    *(undefined1 *)((longlong)unaff_RDI[0x35] + uVar66 + 2) = 0;
                    *(undefined1 *)((longlong)unaff_RDI[0x35] + uVar66 + 3) = 0;
                    *(undefined1 *)((longlong)unaff_RDI[0x35] + uVar66 + 4) = 0;
                    uVar64 = uVar66 + 4;
                  } while ((uVar82 - 1 & 0xfffffffffffffffc) != uVar66 + 4);
                  lVar42 = uVar66 + 5;
                }
                for (; uVar57 != 0; uVar57 = uVar57 - 1) {
                  *(undefined1 *)((longlong)unaff_RDI[0x35] + lVar42) = 0;
                  lVar42 = lVar42 + 1;
                }
              }
            }
            else if (7 < (int)local_8b8._0_4_) {
              uVar82 = 2;
              if (2 < (int)(float)local_940) {
                uVar82 = local_940 & 0xffffffff;
              }
              uVar57 = (ulonglong)((uint)(uVar82 - 1) & 3);
              lVar42 = 1;
              if (2 < uVar82 - 2) {
                uVar64 = 0;
                do {
                  uVar66 = uVar64;
                  *(undefined1 *)((longlong)unaff_RDI[0x35] + uVar66 + 1) = 1;
                  *(undefined1 *)((longlong)unaff_RDI[0x35] + uVar66 + 2) = 1;
                  *(undefined1 *)((longlong)unaff_RDI[0x35] + uVar66 + 3) = 1;
                  *(undefined1 *)((longlong)unaff_RDI[0x35] + uVar66 + 4) = 1;
                  uVar64 = uVar66 + 4;
                } while ((uVar82 - 1 & 0xfffffffffffffffc) != uVar66 + 4);
                lVar42 = uVar66 + 5;
              }
              for (; uVar57 != 0; uVar57 = uVar57 - 1) {
                *(undefined1 *)((longlong)unaff_RDI[0x35] + lVar42) = 1;
                lVar42 = lVar42 + 1;
              }
            }
            uVar82 = local_940;
            pppppppfVar54 = local_9e8;
            iVar40 = (int)(float)local_940;
            if (local_af8[0] == '\0') {
              fVar38 = *(float *)local_948;
              if (0 < (int)fVar38) goto LAB_012b24f5;
LAB_012b3504:
              fVar97 = *(float *)((longlong)unaff_RDI + 0x16c);
            }
            else {
              pppppppfVar75 = (float *******)(longlong)(int)local_880;
              fVar38 = *(float *)local_948;
              if (0 < (int)fVar38) {
                pvVar41 = (void *)((longlong)pppppppfVar75 * 4);
                lVar42 = 0;
                local_860 = pppppppfVar75;
                local_9a8 = dVar88;
                do {
                  _memcpy(unaff_RDI[0x34],pvVar41,(size_t)pppppppfVar75);
                  lVar42 = lVar42 + 1;
                  fVar38 = *(float *)(unaff_RDI + 0x2c);
                } while (lVar42 < (int)fVar38);
                pppppppfVar75 = local_860;
                fVar60 = (float)local_ba8._0_4_;
                dVar88 = local_9a8;
              }
              if ((int)fVar38 < 1) goto LAB_012b3504;
LAB_012b24f5:
              local_860 = (float *******)((longlong)pppppppfVar75 << 3);
              local_af8[0] = local_921;
              local_ac8._0_8_ = (longlong)((int)local_880 - iVar40) << 3;
              local_a20 = local_b68;
              uVar57 = 2;
              if (2 < iVar40) {
                uVar57 = uVar82 & 0xffffffff;
              }
              lVar42 = 0;
              do {
                sVar72 = (size_t)local_860;
                pppppfVar119 = unaff_RDI[0x3d][lVar42];
                local_978 = (float ******)unaff_RDI[0x30][lVar42];
                local_8a0 = (float *******)unaff_RDI[0x3c][lVar42];
                pppppfVar44 = unaff_RDI[0x31][lVar42];
                pppppfVar8 = unaff_RDI[0x2f][lVar42];
                pppppfVar9 = unaff_RDI[0x33][lVar42];
                local_9a8._0_4_ = (uint)lVar42;
                local_9a8._4_4_ = (undefined4)((ulonglong)lVar42 >> 0x20);
                local_8e8 = (undefined1  [8])unaff_RDI[0x2e][lVar42];
                ___bzero();
                lVar42 = DAT_028ac5c8;
                if (7 < (int)local_8b8._0_4_) {
                  if (local_af8[0] == '\0') {
                    lVar63 = 0;
                    do {
                      lVar59 = (longlong)*(char *)((longlong)unaff_RDI[0x35] + lVar63 + 1);
                      fVar60 = *(float *)(lVar42 + lVar59 * 4);
                      if (lVar59 == 0) {
                        ppppfVar61 = *(float *****)((longlong)local_8e8 + 8 + lVar63 * 8);
                        pppppfVar44[lVar63 + 1] = ppppfVar61;
                      }
                      else {
                        ppppfVar61 = pppppfVar44[lVar63 + 1];
                        ppppfVar4 = pppppfVar8[lVar63 + 1];
                        auVar123._4_4_ = (float)((ulonglong)ppppfVar61 >> 0x20);
                        fVar98 = 0.0;
                        fVar149 = SUB84(ppppfVar4,0);
                        fVar38 = (float)((ulonglong)ppppfVar4 >> 0x20);
                        auVar114._0_4_ = SUB84(ppppfVar61,0) * fVar149 - auVar123._4_4_ * fVar38;
                        auVar114._4_8_ = (ulonglong)ppppfVar61 >> 0x20;
                        auVar114._12_4_ = 0;
                        auVar123._0_4_ = SUB84(ppppfVar61,0) * fVar38 + auVar123._4_4_ * fVar149;
                        auVar123._8_8_ = 0;
                        auVar132 = insertps(auVar114,auVar123,0x10);
                        ppppfVar61 = auVar132._0_8_;
                        pppppfVar44[lVar63 + 1] = ppppfVar61;
                        fVar149 = fVar98;
                      }
                      fVar60 = fVar60 * *(float *)((longlong)pppppfVar9 + lVar63 * 4 + 4);
                      pppppfVar119[lVar63 + 1] =
                           (float ****)
                           CONCAT44(fVar60 * (float)((ulonglong)ppppfVar61 >> 0x20),
                                    fVar60 * SUB84(ppppfVar61,0));
                      lVar63 = lVar63 + 1;
                    } while (uVar57 - 1 != lVar63);
                  }
                  else {
                    lVar63 = 0;
                    do {
                      lVar59 = (longlong)*(char *)((longlong)unaff_RDI[0x35] + lVar63 + 1);
                      fVar60 = *(float *)(lVar42 + lVar59 * 4);
                      fVar38 = *(float *)((longlong)unaff_RDI[0x38] + (lVar63 + 1) * 4);
                      if (lVar59 == 0) {
                        ppppfVar61 = *(float *****)((longlong)local_8e8 + 8 + lVar63 * 8);
                        pppppfVar44[lVar63 + 1] = ppppfVar61;
                      }
                      else {
                        ppppfVar61 = pppppfVar44[lVar63 + 1];
                        ppppfVar4 = pppppfVar8[lVar63 + 1];
                        auVar123._4_4_ = (float)((ulonglong)ppppfVar61 >> 0x20);
                        fVar97 = SUB84(ppppfVar4,0);
                        fVar98 = 0.0;
                        fVar149 = 0.0;
                        fVar87 = (float)((ulonglong)ppppfVar4 >> 0x20);
                        auVar113._0_4_ = SUB84(ppppfVar61,0) * fVar97 - auVar123._4_4_ * fVar87;
                        auVar113._4_8_ = (ulonglong)ppppfVar61 >> 0x20;
                        auVar113._12_4_ = 0;
                        auVar123._0_4_ = SUB84(ppppfVar61,0) * fVar87 + auVar123._4_4_ * fVar97;
                        auVar123._8_8_ = 0;
                        auVar132 = insertps(auVar113,auVar123,0x10);
                        ppppfVar61 = auVar132._0_8_;
                        pppppfVar44[lVar63 + 1] = ppppfVar61;
                      }
                      fVar60 = fVar60 * fVar38 * *(float *)((longlong)pppppfVar9 + lVar63 * 4 + 4);
                      pppppfVar119[lVar63 + 1] =
                           (float ****)
                           CONCAT44(fVar60 * (float)((ulonglong)ppppfVar61 >> 0x20),
                                    fVar60 * SUB84(ppppfVar61,0));
                      lVar63 = lVar63 + 1;
                    } while (uVar57 - 1 != lVar63);
                  }
                }
                if ((int)(float)local_940 < (int)local_880) {
                  _memcpy(local_978,(void *)local_ac8._0_8_,sVar72);
                }
                FUN_00e83640();
                (**(code **)(DAT_02786500 + 0x38))();
                dVar88 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                lVar42 = (longlong)dVar88 + 1;
                fVar38 = *(float *)local_948;
              } while (lVar42 < (int)fVar38);
              fVar97 = *(float *)((longlong)unaff_RDI + 0x16c);
              pppppppfVar75 = local_860;
              pppppppfVar54 = local_9e8;
              fVar60 = (float)local_ba8._0_4_;
            }
            if ((int)fVar97 < 2) goto LAB_012b27fa;
            local_9a8._4_4_ = (undefined4)((ulonglong)dVar88 >> 0x20);
            if (0 < (int)fVar38) {
              local_998 = (undefined1  [8])((longlong)local_8b8._0_4_ << 2);
              local_978 = (float ******)(local_8b8._0_8_ & 0xffffffff);
              local_9a8._0_4_ = local_8b8._0_4_ + -1;
              local_940 = (ulonglong)(int)(uint)local_9a8;
              lVar42 = 0;
              do {
                ppppppfVar81 = unaff_RDI[0x3d];
                _memcpy(ppppppfVar81,(void *)local_998,(size_t)pppppppfVar75);
                pppppfVar119 = unaff_RDI[0x3c][lVar42];
                local_8e8 = (undefined1  [8])lVar42;
                pppppfVar44 = unaff_RDI[0x3d][lVar42];
                fVar60 = *(float *)((longlong)unaff_RDI + 0x16c);
                if ((int)fVar60 < 2) {
                  _memcpy(ppppppfVar81,(void *)local_998,(size_t)pppppppfVar75);
                }
                else {
                  iVar40 = (int)fVar60 * local_8b8._0_4_;
                  uVar78 = (uint)fVar60 >> 1;
                  local_8a0 = (float *******)(longlong)iVar40;
                  ___bzero();
                  fVar97 = DAT_02390124 / (float)(int)fVar60;
                  fVar38 = *(float *)pppppfVar44;
                  if ((int)local_8b8._0_4_ < 2) {
LAB_012b3753:
                    fVar87 = fVar97 * fVar38;
                    lVar42 = (ulonglong)uVar78 + 1;
                    do {
                      fVar38 = fVar38 - fVar87;
                      *(float *)((longlong)pppppfVar119 + (ulonglong)((int)lVar42 - 2) * 4) = fVar38
                      ;
                      lVar42 = lVar42 + -1;
                    } while (1 < lVar42);
                  }
                  else {
                    pfVar68 = (float *)((longlong)pppppfVar119 + (ulonglong)uVar78 * 4);
                    pppppppfVar75 = (float *******)(ulonglong)((int)fVar60 - 1U);
                    ppppppfVar81 = (float ******)((longlong)&MACH_HEADER.magic + 1);
                    do {
                      fVar87 = *(float *)((longlong)pppppfVar44 + (longlong)ppppppfVar81 * 4);
                      fVar130 = (fVar87 - fVar38) * fVar97;
                      fVar69 = fVar60;
                      if (((uint)fVar60 & 7) != 0) {
                        uVar56 = 0;
                        do {
                          *pfVar68 = fVar38;
                          pfVar68 = pfVar68 + 1;
                          fVar38 = fVar38 + fVar130;
                          uVar56 = uVar56 + 1;
                        } while (((uint)fVar60 & 7) != uVar56);
                        fVar69 = (float)((int)fVar60 - uVar56);
                      }
                      if (6 < (int)fVar60 - 1U) {
                        do {
                          *pfVar68 = fVar38;
                          pfVar68[1] = fVar38 + fVar130;
                          fVar38 = fVar38 + fVar130 + fVar130;
                          pfVar68[2] = fVar38;
                          fVar38 = fVar38 + fVar130;
                          pfVar68[3] = fVar38;
                          fVar38 = fVar38 + fVar130;
                          pfVar68[4] = fVar38;
                          fVar38 = fVar38 + fVar130;
                          pfVar68[5] = fVar38;
                          fVar38 = fVar38 + fVar130;
                          pfVar68[6] = fVar38;
                          fVar38 = fVar38 + fVar130;
                          pfVar68[7] = fVar38;
                          pfVar68 = pfVar68 + 8;
                          fVar38 = fVar38 + fVar130;
                          fVar69 = (float)((int)fVar69 + -8);
                        } while (fVar69 != 0.0);
                      }
                      ppppppfVar81 = (float ******)((longlong)ppppppfVar81 + 1);
                      fVar38 = fVar87;
                    } while (ppppppfVar81 != local_978);
                    if (1 < (uint)fVar60) {
                      fVar38 = *(float *)pppppfVar44;
                      goto LAB_012b3753;
                    }
                  }
                  auVar123 = ZEXT416(0);
                  iVar51 = (int)fVar60 * (uint)local_9a8 + uVar78;
                  if (iVar51 < iVar40) {
                    fVar60 = *(float *)((longlong)pppppfVar44 + local_940 * 4);
                    fVar97 = fVar97 * fVar60;
                    pppppppfVar52 = (float *******)(longlong)iVar51;
                    uVar82 = ~(ulonglong)pppppppfVar52;
                    uVar57 = (ulonglong)(uint)(iVar40 - iVar51) & 3;
                    if ((iVar40 - iVar51 & 3U) != 0) {
                      do {
                        *(float *)((longlong)pppppfVar119 + (longlong)pppppppfVar52 * 4) = fVar60;
                        fVar60 = fVar60 - fVar97;
                        pppppppfVar52 = (float *******)((longlong)pppppppfVar52 + 1);
                        uVar57 = uVar57 - 1;
                      } while (uVar57 != 0);
                    }
                    if ((undefined1 *)((longlong)&MACH_HEADER.magic + 2) <
                        (undefined1 *)(uVar82 + (longlong)local_8a0)) {
                      do {
                        *(float *)((longlong)pppppfVar119 + (longlong)pppppppfVar52 * 4) = fVar60;
                        *(float *)((longlong)pppppfVar119 + (longlong)pppppppfVar52 * 4 + 4) =
                             fVar60 - fVar97;
                        fVar60 = (fVar60 - fVar97) - fVar97;
                        *(float *)((longlong)pppppfVar119 + (longlong)pppppppfVar52 * 4 + 8) =
                             fVar60;
                        fVar60 = fVar60 - fVar97;
                        *(float *)((longlong)pppppfVar119 + (longlong)pppppppfVar52 * 4 + 0xc) =
                             fVar60;
                        fVar60 = fVar60 - fVar97;
                        pppppppfVar52 = (float *******)((longlong)pppppppfVar52 + 4);
                      } while (local_8a0 != pppppppfVar52);
                    }
                  }
                }
                dVar88 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                lVar42 = (longlong)local_8e8 + 1;
              } while (lVar42 < (int)*(float *)local_948);
              fVar97 = *(float *)((longlong)unaff_RDI + 0x16c);
              pppppppfVar54 = local_9e8;
              fVar60 = local_a18;
            }
            local_922 = '\x01';
            local_a18 = (DAT_02390124 / (float)(int)fVar97) * fVar60;
            *(undefined1 *)((longlong)unaff_RDI + 0x266) =
                 *(undefined1 *)((longlong)unaff_RDI + 0x265);
            *(char *)((longlong)unaff_RDI + 0x26a) = (char)local_95c;
            fVar60 = *(float *)(unaff_RDI + 0x2c);
            if ((int)fVar60 < 1) goto LAB_012b3883;
LAB_012b2831:
            local_8e8._0_4_ = local_a18;
            uVar82 = 0;
            local_9a8 = dVar88;
            do {
              pppppppfVar52 = (float *******)(**(code **)(DAT_02786500 + 0x20))();
              uVar82 = uVar82 + 1;
              dVar88 = local_9a8;
            } while ((uint)fVar60 != uVar82);
LAB_012b2880:
            local_9a8 = dVar88;
            if (local_891 == '\0') goto LAB_012b3893;
LAB_012b288d:
            local_9a8 = dVar88;
            if ((*(char *)((longlong)unaff_RDI + 0x261) == '\0') &&
               (pppppppfVar52 = local_948, 0 < (int)*(float *)local_948)) {
              lVar42 = 0;
              do {
                (**(code **)(DAT_02786500 + 0x38))();
                lVar42 = lVar42 + 1;
                pppppppfVar52 = (float *******)(longlong)(int)*(float *)local_948;
              } while (lVar42 < (longlong)pppppppfVar52);
            }
            if ((local_96b == '\0') && (pppppppfVar52 = local_948, 0 < (int)*(float *)local_948)) {
              lVar42 = 0;
              do {
                (**(code **)(DAT_02786500 + 0x38))();
                lVar42 = lVar42 + 1;
                pppppppfVar52 = (float *******)(longlong)(int)*(float *)local_948;
              } while (lVar42 < (longlong)pppppppfVar52);
            }
            local_860 = (float *******)
                        CONCAT71((int7)((ulonglong)pppppppfVar52 >> 8),(undefined1)local_844);
            goto LAB_012b297c;
          }
          if ((char)local_9a8 == '\0') {
            if (*(char *)((longlong)unaff_RDI + 0x261) == '\0') {
              ppppppfVar81 = (float ******)
                             ((longlong)(int)uVar39 *
                              (longlong)(int)*(float *)((longlong)unaff_RDI + 0x164) +
                             (longlong)unaff_RDI[0x45]);
              fVar60 = *(float *)local_948;
              uVar56 = local_9c8._0_4_;
            }
            else {
              local_891 = '\x01';
              ppppppfVar81 = unaff_RDI[0x45];
              uVar39 = 0;
              fVar60 = *(float *)local_948;
            }
            if (0 < (int)fVar60) {
              lVar42 = 0;
              do {
                ___bzero();
                unaff_RDI[0x3f][lVar42] =
                     (float *****)((longlong)(int)uVar39 * 4 + (longlong)unaff_RDI[0x3c][lVar42]);
                lVar42 = lVar42 + 1;
              } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
            }
            pppppppfVar54 = local_9e8;
            bVar48 = false;
            uVar78 = uVar56;
            if ((local_8f0 == (float *******)0x0) && (bVar48 = false, (local_a80 & 1) != 0)) {
              lVar63 = (longlong)local_a38;
              lVar42 = (longlong)ppppppfVar81 + (longlong)(int)uVar56;
              uVar78 = ((int)lVar63 - (int)lVar42) + uVar56;
              if ((int)uVar78 < 0) {
                uVar78 = 0;
              }
              bVar48 = lVar63 < lVar42;
              if (lVar42 <= lVar63) {
                uVar78 = uVar56;
              }
            }
            local_c68 = local_858;
            local_c60 = 0;
            pppppppfVar75 = (float *******)(ulonglong)(uint)local_9ac;
            FUN_012b6e60(unaff_RDI[0x3f],*(float *)((longlong)unaff_RDI + 0x164),pppppppfVar75,
                         ppppppfVar81);
            dVar88 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
            if (bVar48) {
              uVar56 = uVar78 - 100;
              if ((int)uVar78 < 100) {
                uVar56 = 0;
              }
              uVar39 = 100;
              if ((int)uVar78 < 100) {
                uVar39 = uVar78;
              }
              dVar88 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
              if (0 < (int)uVar78) {
                fVar60 = *(float *)local_948;
                dVar88 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
                if (0 < (int)fVar60) {
                  ppppppfVar81 = unaff_RDI[0x3f];
                  fVar38 = DAT_02390124 / (float)(int)uVar39;
                  pppppppfVar75 = (float *******)(ulonglong)uVar56;
                  if ((int)uVar39 < 2) {
                    uVar39 = 1;
                  }
                  uVar82 = 0;
                  auVar107 = ZEXT416((uint)DAT_02390124);
                  do {
                    auVar123._4_12_ = auVar107._4_12_;
                    auVar123._0_4_ = auVar107._0_4_ - fVar38;
                    puVar58 = (undefined1 *)(uVar82 + (longlong)pppppppfVar75);
                    auVar101 = ZEXT812(0);
                    if (0.0 <= auVar123._0_4_) {
                      auVar101._4_8_ = 0;
                      auVar101._0_4_ = auVar123._0_4_;
                    }
                    auVar107._12_4_ = 0;
                    auVar107._0_12_ = auVar101;
                    uVar57 = 0;
                    fVar97 = auVar101._0_4_;
                    if (2 < (ulonglong)(uint)fVar60 - 1) {
                      do {
                        *(float *)((longlong)ppppppfVar81[uVar57] + (longlong)puVar58 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar57] + (longlong)puVar58 * 4) *
                             fVar97;
                        *(float *)((longlong)ppppppfVar81[uVar57 + 1] + (longlong)puVar58 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar57 + 1] + (longlong)puVar58 * 4)
                             * fVar97;
                        *(float *)((longlong)ppppppfVar81[uVar57 + 2] + (longlong)puVar58 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar57 + 2] + (longlong)puVar58 * 4)
                             * fVar97;
                        fVar87 = *(float *)((longlong)ppppppfVar81[uVar57 + 3] +
                                           (longlong)puVar58 * 4) * fVar97;
                        auVar123 = ZEXT416((uint)fVar87);
                        *(float *)((longlong)ppppppfVar81[uVar57 + 3] + (longlong)puVar58 * 4) =
                             fVar87;
                        uVar57 = uVar57 + 4;
                      } while (((uint)fVar60 & 0xfffffffc) != uVar57);
                    }
                    if ((ulonglong)((uint)fVar60 & 3) != 0) {
                      uVar64 = 0;
                      do {
                        fVar87 = *(float *)((longlong)ppppppfVar81[uVar64 + uVar57] +
                                           (longlong)puVar58 * 4) * fVar97;
                        auVar123 = ZEXT416((uint)fVar87);
                        *(float *)((longlong)ppppppfVar81[uVar64 + uVar57] + (longlong)puVar58 * 4)
                             = fVar87;
                        uVar64 = uVar64 + 1;
                      } while (((uint)fVar60 & 3) != uVar64);
                    }
                    uVar82 = uVar82 + 1;
                  } while (uVar82 != uVar39);
                }
              }
            }
          }
          else {
            bVar48 = false;
            uVar78 = local_8b8._0_4_;
            if (local_8f0 == (float *******)0x0) {
              if ((local_a80 & 1) != 0) {
                lVar42 = (longlong)local_a38;
                lVar63 = (longlong)(int)local_8b8._0_4_ + (longlong)unaff_RDI[0x45];
                uVar78 = ((int)lVar42 - (int)lVar63) + local_8b8._0_4_;
                if ((int)uVar78 < 0) {
                  uVar78 = 0;
                }
                bVar48 = lVar42 < lVar63;
                if (lVar63 <= lVar42) {
                  uVar78 = local_8b8._0_4_;
                }
              }
              fVar60 = *(float *)local_948;
            }
            else {
              fVar60 = *(float *)local_948;
            }
            if (0 < (int)fVar60) {
              lVar42 = 0;
              do {
                ___bzero();
                lVar42 = lVar42 + 1;
              } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
            }
            local_c78 = local_858;
            local_c70 = 0;
            FUN_012b6e60(unaff_RDI[0x3c],*(float *)(unaff_RDI + 0x2d),local_9ac,unaff_RDI[0x45]);
            if (bVar48) {
              uVar56 = uVar78 - 100;
              if ((int)uVar78 < 100) {
                uVar56 = 0;
              }
              uVar39 = 100;
              if ((int)uVar78 < 100) {
                uVar39 = uVar78;
              }
              if (0 < (int)uVar78) {
                fVar60 = *(float *)local_948;
                if (0 < (int)fVar60) {
                  ppppppfVar81 = unaff_RDI[0x3c];
                  fVar38 = DAT_02390124 / (float)(int)uVar39;
                  if ((int)uVar39 < 2) {
                    uVar39 = 1;
                  }
                  uVar82 = 0;
                  fVar97 = DAT_02390124;
                  do {
                    fVar87 = fVar97 - fVar38;
                    lVar42 = uVar82 + uVar56;
                    fVar97 = 0.0;
                    if (0.0 <= fVar87) {
                      fVar97 = fVar87;
                    }
                    uVar57 = 0;
                    if (2 < (ulonglong)(uint)fVar60 - 1) {
                      do {
                        *(float *)((longlong)ppppppfVar81[uVar57] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar57] + lVar42 * 4) * fVar97;
                        *(float *)((longlong)ppppppfVar81[uVar57 + 1] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar57 + 1] + lVar42 * 4) * fVar97;
                        *(float *)((longlong)ppppppfVar81[uVar57 + 2] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar57 + 2] + lVar42 * 4) * fVar97;
                        *(float *)((longlong)ppppppfVar81[uVar57 + 3] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar57 + 3] + lVar42 * 4) * fVar97;
                        uVar57 = uVar57 + 4;
                      } while (((uint)fVar60 & 0xfffffffc) != uVar57);
                    }
                    if ((ulonglong)((uint)fVar60 & 3) != 0) {
                      uVar64 = 0;
                      do {
                        *(float *)((longlong)ppppppfVar81[uVar64 + uVar57] + lVar42 * 4) =
                             *(float *)((longlong)ppppppfVar81[uVar64 + uVar57] + lVar42 * 4) *
                             fVar97;
                        uVar64 = uVar64 + 1;
                      } while (((uint)fVar60 & 3) != uVar64);
                    }
                    uVar82 = uVar82 + 1;
                  } while (uVar82 != uVar39);
                }
              }
            }
            auVar123 = ZEXT816(0);
            uVar85 = (float)local_940;
            if (*(char *)((longlong)unaff_RDI + 0x2a2) != '\0') {
              ppppppfVar81 = unaff_RDI[0x1d];
              lVar42 = (longlong)(int)uVar78 + (longlong)unaff_RDI[0x45];
              unaff_RDI[0x47] = (float ******)((double)(longlong)unaff_RDI[0x45] * local_a10);
              unaff_RDI[0x48] = (float ******)((double)lVar42 * local_a10);
              pvVar41 = _pthread_getspecific((pthread_key_t)lVar42);
              pVar50 = (pthread_key_t)lVar42;
              if (pvVar41 != (void *)0x0) {
                ppppppfVar81 = unaff_RDI[0x1d];
                lVar42 = FUN_00e8b990();
                if (lVar42 != 0) {
                  ppppppfVar81 = (float ******)
                                 ppppppfVar81[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              pppppfVar119 = ppppppfVar81[10];
              pvVar41 = _pthread_getspecific(pVar50);
              if (pvVar41 != (void *)0x0) {
                pppppfVar119 = ppppppfVar81[10];
                lVar42 = FUN_00e8b990();
                if (lVar42 != 0) {
                  pppppfVar119 = (float *****)
                                 pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              ppppfVar61 = pppppfVar119[9];
              if ((DAT_027c0170 == '\0') && (iVar40 = ___cxa_guard_acquire(), iVar40 != 0)) {
                _DAT_02790158 = FUN_007ef2d0();
                _DAT_02790140 = "MUAudioSourcePrincipalItem";
                _DAT_02790148 = 0x138;
                pVar50 = 0x10fe5c0;
                _DAT_02790150 = FUN_010fe5c0;
                _DAT_02790160 = 0;
                uRam0000000002790168 = 0;
                _DAT_02790170 = 0;
                uRam0000000002790178 = 0;
                _DAT_02790180 = 0;
                uRam0000000002790188 = 0;
                _DAT_02790190 = 0;
                uRam0000000002790198 = 0;
                _DAT_027901a0 = 0;
                uRam00000000027901a8 = 0;
                _DAT_027901b0 = 0;
                uRam00000000027901b8 = 0;
                _DAT_027901c0 = 0;
                uRam00000000027901c8 = 0;
                _DAT_027901d0 = 0;
                uRam00000000027901d8 = 0;
                _DAT_027901e0 = 0;
                uRam00000000027901e8 = 0;
                _DAT_027901f0 = 0;
                uRam00000000027901f8 = 0;
                _DAT_02790200 = 0;
                ___cxa_guard_release();
                pppppppfVar54 = local_9e8;
              }
              pppppfVar44 = &DAT_02802688;
              uVar85 = (float)local_940;
              if (ppppfVar61 != (float ****)0x0) {
                (*(code *)(*ppppfVar61)[0x6c])();
                cVar34 = FUN_00e85ea0();
                if (cVar34 == '\0') {
                  pppppfVar44 = &DAT_02802688;
                }
                else {
                  pppppfVar44 = pppppfVar119 + 9;
                }
                uVar85 = (float)local_940;
              }
              auVar123 = ZEXT816(0);
              if (*pppppfVar44 != (float ****)0x0) {
                FUN_00d50b00();
                pvVar41 = _pthread_getspecific(pVar50);
                if (pvVar41 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar86 = FUN_014ed7a0(unaff_RDI[0x47],unaff_RDI[0x48]);
                local_8e8._0_4_ = uVar86;
                FUN_00d50b20();
                auVar123 = ZEXT816(0) << 0x20;
              }
            }
            pppppppfVar75 = (float *******)&local_a18;
            FUN_012ba340(uVar85,local_880,pppppppfVar75,&local_922);
            dVar88 = (double)CONCAT44(local_9a8._4_4_,(uint)local_9a8);
          }
LAB_012b27fa:
          *(undefined1 *)((longlong)unaff_RDI + 0x266) =
               *(undefined1 *)((longlong)unaff_RDI + 0x265);
          pppppppfVar52 = (float *******)(ulonglong)local_95c;
          *(char *)((longlong)unaff_RDI + 0x26a) = (char)local_95c;
          if (local_922 == '\0') goto LAB_012b2880;
          fVar60 = *(float *)(unaff_RDI + 0x2c);
          if (0 < (int)fVar60) goto LAB_012b2831;
LAB_012b3883:
          pppppppfVar52 = unaff_RDI;
          local_9a8 = dVar88;
          if (local_891 != '\0') goto LAB_012b288d;
LAB_012b3893:
          local_860 = (float *******)
                      CONCAT71((int7)((ulonglong)pppppppfVar52 >> 8),(undefined1)local_844);
          if (local_8f1 == '\0') goto LAB_012af32e;
LAB_012b29fe:
          fVar60 = *(float *)local_948;
          *(undefined1 *)((longlong)unaff_RDI + 0x264) = 0;
joined_r0x012af399:
          if (0 < (int)fVar60) {
            lVar42 = 0;
            do {
              fVar60 = (float)(**(code **)(DAT_02786500 + 0x10))();
              if (DAT_02394274 < fVar60) {
                uVar37 = 1;
                goto LAB_012b2a5f;
              }
              lVar42 = lVar42 + 1;
            } while (lVar42 < (int)*(float *)local_948);
          }
        }
        else {
          local_878[0] = 0;
          local_969 = 0;
          auVar62 = local_998;
          if (local_850 != (float *******)0x0) {
            bVar36 = *(byte *)((longlong)unaff_RDI + 0x2a1);
            pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
            if (pvVar41 == (void *)0x0) {
LAB_012adf91:
              bVar35 = *(byte *)(local_850 + 0xf);
            }
            else {
              lVar42 = FUN_00e8b990();
              if (lVar42 == 0) goto LAB_012adf91;
              bVar35 = *(byte *)(local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4] + 0xf);
              pppppppfVar52 = local_850;
            }
            if ((bVar35 == 0) && (local_a90 != 0)) {
              pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
              pppppppfVar75 = local_850;
              if (pvVar41 != (void *)0x0) {
                lVar42 = FUN_00e8b990();
                pppppppfVar75 = local_850;
                if (lVar42 != 0) {
                  pppppppfVar75 =
                       (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  pppppppfVar52 = local_850;
                }
              }
              bVar35 = *(byte *)((longlong)pppppppfVar75 + 0x7d) ^ 1;
            }
            auVar62 = local_998;
            if (bVar35 != bVar36) {
              pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
              if (pvVar41 == (void *)0x0) {
LAB_012ae089:
                bVar36 = *(byte *)(local_850 + 0xf);
              }
              else {
                lVar42 = FUN_00e8b990();
                if (lVar42 == 0) goto LAB_012ae089;
                bVar36 = *(byte *)(local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4] + 0xf);
                pppppppfVar52 = local_850;
              }
              if ((bVar36 == 0) && (local_a90 != 0)) {
                pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                pppppppfVar52 = local_850;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  pppppppfVar52 = local_850;
                  if (lVar42 != 0) {
                    pppppppfVar52 =
                         (float *******)local_850[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                bVar36 = *(byte *)((longlong)pppppppfVar52 + 0x7d) ^ 1;
              }
              *(byte *)((longlong)unaff_RDI + 0x2a1) = bVar36;
            }
          }
          ppppppfVar81 = unaff_RDI[0x20];
          uVar82 = (ulonglong)(double)ppppppfVar81[2];
          lVar63 = (longlong)auVar62 * (longlong)pppppppfVar54;
          lVar42 = (lVar63 - (longlong)local_a60) + uVar82;
          uStack_990 = 0;
          local_998 = (undefined1  [8])((double)lVar42 * local_a10);
          if (local_8d8 == (float *******)0x0) {
            auVar134._4_12_ = auVar132._4_12_;
            auVar134._0_4_ = (float)(int)lVar63;
          }
          else {
            pvVar41 = _pthread_getspecific((pthread_key_t)lVar42);
            pppppppfVar52 = local_8d8;
            if (pvVar41 != (void *)0x0) {
              lVar42 = FUN_00e8b990();
              pppppppfVar52 = local_8d8;
              if (lVar42 != 0) {
                pppppppfVar52 =
                     (float *******)local_8d8[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
              }
            }
            puVar58 = (undefined1 *)0x0;
            dVar88 = (double)(*(code *)(*pppppppfVar52)[0x7b])();
            auVar134._4_12_ = auVar132._4_12_;
            auVar134._0_4_ = (float)dVar88;
            ppppppfVar81 = unaff_RDI[0x20];
          }
          fVar60 = auVar134._0_4_;
          ppppppfVar71 = (float ******)(double)fVar60;
          ppppppfVar131 = unaff_RDI[0x46];
          pppppppfVar52 = (float *******)unaff_RDI[0x21];
          local_978 = pppppppfVar52[2];
          local_9c8._8_4_ = fVar98;
          local_9c8._0_8_ = ppppppfVar71;
          local_9c8._12_4_ = fVar149;
          unaff_RDI[0x46] = ppppppfVar71;
          local_8e8._0_4_ = fVar60;
          local_940 = CONCAT44(local_940._4_4_,(float)(int)*(float *)((longlong)unaff_RDI + 0x164));
          uStack_910 = auVar134._8_8_;
          local_9a8 = ((double)ppppppfVar131 + (double)ppppppfVar71) * DAT_023942d0;
          local_8b8._0_8_ = ppppppfVar81[2];
          local_918 = (float ******)
                      (((double)(fVar60 / (float)(int)*(float *)((longlong)unaff_RDI + 0x164)) /
                       (double)pppppppfVar52[2]) * (double)ppppppfVar81[3] + (double)local_8b8._0_8_
                      );
          local_958._0_4_ = 1;
          if (*(char *)((longlong)unaff_RDI + 0x139) == '\0') {
            local_8b8._0_8_ =
                 (double)((int)pppppppfVar54 * auVar22._0_4_) + (double)(longlong)unaff_RDI[0x45];
            if (*(char *)(unaff_RDI + 0x4e) == '\0') goto LAB_012ae2e1;
            stack0xfffffffffffff750 = (undefined1  [8])0x0;
            uVar78 = 1;
LAB_012ae7cf:
            bVar48 = true;
            auVar30._12_4_ = 0;
            auVar30._0_12_ = stack0xfffffffffffff66c;
            _local_998 = auVar30 << 0x20;
LAB_012ae7d9:
            pVar50 = (pthread_key_t)pppppppfVar52;
            local_b38._0_4_ =
                 (float)local_8e8._0_4_ / (float)(int)*(float *)((longlong)unaff_RDI + 0x164) +
                 DAT_0239011c;
            local_aa8 = (double)(longlong)local_a60;
            fVar98 = (float)local_8e8._0_4_;
            if (local_8d8 != (float *******)0x0) {
              pvVar41 = _pthread_getspecific(pVar50);
              pppppppfVar54 = local_8d8;
              if (pvVar41 != (void *)0x0) {
                lVar42 = FUN_00e8b990();
                pppppppfVar54 = local_8d8;
                if (lVar42 != 0) {
                  pppppppfVar52 = local_8d8;
                  pppppppfVar54 =
                       (float *******)local_8d8[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                }
              }
              pVar50 = (pthread_key_t)pppppppfVar52;
              dVar88 = (double)(*(code *)(*pppppppfVar54)[0x7b])
                                         (((double)local_918 - local_aa8) * local_a10,0);
              fVar98 = (float)dVar88;
            }
            local_8a0 = (float *******)CONCAT44(local_8a0._4_4_,fVar98);
            if (bVar48) {
              ppppppfVar81 = unaff_RDI[0x52];
            }
            else {
              *local_c38 = (float ******)0x0;
              local_c38[1] = (float ******)0x0;
              local_9c8._0_8_ = (float ******)(double)(longlong)unaff_RDI[0x45];
              unaff_RDI[0x51] = (float ******)(double)(longlong)unaff_RDI[0x45];
              if (local_8d8 == (float *******)0x0) {
                fVar98 = (float)local_8e8._0_4_;
              }
              else {
                pvVar41 = _pthread_getspecific(pVar50);
                pppppppfVar52 = local_8d8;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  pppppppfVar52 = local_8d8;
                  if (lVar42 != 0) {
                    pppppppfVar52 =
                         (float *******)local_8d8[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                dVar88 = (double)(*(code *)(*pppppppfVar52)[0x7b])
                                           (((double)local_9c8._0_8_ - local_aa8) * local_a10,0);
                fVar98 = (float)dVar88;
              }
              ppppppfVar81 = (float ******)(double)fVar98;
              unaff_RDI[0x52] = ppppppfVar81;
            }
            auVar132 = local_9c8._0_16_;
            local_9c8._4_4_ = 0;
            local_9c8._0_4_ = (int)(float)local_b38._0_4_;
            local_9c8._8_8_ = auVar132._8_8_;
            auVar143._0_8_ = (double)local_8a0._0_4_;
            auVar124._0_8_ = (double)(int)*(float *)((longlong)unaff_RDI + 0x164);
            auVar135._8_8_ = unaff_RDI[0x51];
            auVar135._0_8_ = ppppppfVar81;
            auVar124._8_8_ = auVar124._0_8_;
            local_b38 = divpd(auVar135,auVar124);
            auVar143._8_8_ = local_918;
            local_ba8 = divpd(auVar143,auVar124);
            dVar88 = local_ba8._0_8_;
            if (local_ba8._0_8_ <= local_b38._0_8_) {
              dVar88 = local_b38._0_8_;
            }
            uVar85 = local_ba8._8_4_;
            uVar86 = local_ba8._12_4_;
            if (local_b38._8_8_ <= local_ba8._8_8_) {
              uVar85 = local_b38._8_4_;
              uVar86 = local_b38._12_4_;
            }
            puVar58 = (undefined1 *)
                      ((longlong)(double)CONCAT44(uVar86,uVar85) - (longlong)((int)dVar88 + 10));
            puVar84 = puVar58 + 3;
            if (-1 < (longlong)puVar58) {
              puVar84 = puVar58;
            }
            local_aa8 = (double)((ulonglong)puVar84 & 0xfffffffffffffffc);
            local_844 = (int)(double)((ulonglong)(local_ba8._8_8_ - local_b38._8_8_) & _DAT_023908f0
                                     ) + (int)dVar88 * 2 + 0x14;
            if (((local_a68 & 1) == 0) || ((int)*(float *)((longlong)unaff_RDI + 0x15c) < local_844)
               ) {
              *(undefined1 *)(unaff_RDI + 0x4e) = 0;
              dVar88 = (double)unaff_RDI[0x51] +
                       (double)ppppppfVar81 * ((double)unaff_RDI[0x50] - (double)unaff_RDI[0x4f]);
              auVar93._0_8_ = (double)((ulonglong)dVar88 & _DAT_023945b0 | _DAT_023945c0) + dVar88;
              auVar93._8_8_ = _UNK_023945c8;
              auVar132 = roundsd(auVar93,auVar93,0xb);
              unaff_RDI[0x45] = (float ******)(longlong)auVar132._0_8_;
              bVar36 = 0;
              auVar32._12_4_ = 0;
              auVar32._0_12_ = stack0xfffffffffffff66c;
              _local_998 = auVar32 << 0x20;
              goto LAB_012aeb26;
            }
            bVar36 = 1;
            if (*(char *)(unaff_RDI + 0x4e) == '\0') goto LAB_012aeac3;
          }
          else {
            unaff_RDI[0x45] = (float ******)(longlong)(int)((double)local_8b8._0_8_ + DAT_023942d0);
            *(undefined1 *)(unaff_RDI + 0x4e) = 0;
LAB_012ae2e1:
            if (local_8d8 == (float *******)0x0) {
              unique0x10025dc5 = local_998;
              if ((double)local_8b8._0_8_ + (double)(fVar60 * DAT_02394214) <= (double)local_918) {
                local_958._0_4_ = 1;
                goto LAB_012ae5e8;
              }
              if (0.0 <= local_a88) {
                local_8b8._0_8_ = (double)local_8b8._0_8_ - (double)ppppppfVar71;
                register0x00001248 =
                     (undefined1  [8])((double)local_998 - local_a10 * (double)ppppppfVar71);
                local_958._0_4_ = 0;
              }
              else {
                local_958._0_4_ = 1;
                do {
                  local_8b8._0_8_ = (double)local_8b8._0_8_ - (double)ppppppfVar71;
                  register0x000012c8 =
                       (undefined1  [8])
                       ((double)register0x000012c8 - local_a10 * (double)ppppppfVar71);
                  local_958._0_4_ = (uint)local_958 - 1;
                } while ((double)local_918 <
                         (double)local_8b8._0_8_ + (double)(fVar60 * DAT_02394214));
                if ((uint)local_958 == 1) goto LAB_012ae5e8;
              }
LAB_012ae73c:
              uVar78 = (uint)local_958;
joined_r0x012ae748:
              local_958._0_4_ = uVar78;
              if ((uVar78 == 1) || ((local_a68 & 1) == 0)) goto LAB_012ae7bf;
              *(undefined1 *)(unaff_RDI + 0x4e) = 1;
              local_998._0_4_ = (int)CONCAT71((uint7)(uint3)(local_a68 >> 8),1);
              bVar48 = false;
              goto LAB_012ae7d9;
            }
            stack0xfffffffffffff750 = local_998;
            if (0.0 <= local_a88) {
              uVar78 = 1;
              if ((double)local_918 < (double)local_8b8._0_8_ + (double)(fVar60 * DAT_02394214)) {
                pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                pppppppfVar54 = local_8d8;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  pppppppfVar54 = local_8d8;
                  if (lVar42 != 0) {
                    pppppppfVar52 = local_8d8;
                    pppppppfVar54 =
                         (float *******)local_8d8[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                local_8b8._0_8_ = (double)local_8b8._0_8_ - (double)local_9c8._0_8_;
                register0x00001208 =
                     (undefined1  [8])
                     ((double)stack0xfffffffffffff750 - local_a10 * (double)local_9c8._0_8_);
                puVar58 = (undefined1 *)0x0;
                dVar88 = (double)(*(code *)(*pppppppfVar54)[0x7b])(register0x00001208);
                local_8e8._0_4_ = (float)dVar88;
                uVar78 = 0;
              }
            }
            else {
              uVar78 = 1;
              while( true ) {
                local_8e8._0_4_ = fVar60;
                if ((double)(fVar60 * DAT_02394214) + (double)local_8b8._0_8_ <= (double)local_918)
                break;
                pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                pppppppfVar54 = local_8d8;
                if (pvVar41 != (void *)0x0) {
                  lVar42 = FUN_00e8b990();
                  pppppppfVar54 = local_8d8;
                  if (lVar42 != 0) {
                    pppppppfVar52 = local_8d8;
                    pppppppfVar54 =
                         (float *******)local_8d8[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                  }
                }
                local_8b8._0_8_ = (double)local_8b8._0_8_ - (double)(float)local_8e8._0_4_;
                register0x00001248 =
                     (undefined1  [8])
                     ((double)stack0xfffffffffffff750 - local_a10 * (double)(float)local_8e8._0_4_);
                puVar58 = (undefined1 *)0x0;
                dVar88 = (double)(*(code *)(*pppppppfVar54)[0x7b])(register0x00001248);
                fVar60 = (float)dVar88;
                uVar78 = uVar78 - 1;
              }
            }
            local_958._0_4_ = uVar78;
            if (uVar78 != 1) goto LAB_012ae73c;
LAB_012ae5e8:
            uVar78 = 1;
            if ((double)local_8b8._0_8_ + (double)((float)local_8e8._0_4_ * DAT_0241c6f8) <
                (double)local_918) {
              if (local_8d8 != (float *******)0x0) {
                uVar78 = 1;
                do {
                  pvVar41 = _pthread_getspecific((pthread_key_t)pppppppfVar52);
                  pppppppfVar54 = local_8d8;
                  if (pvVar41 != (void *)0x0) {
                    lVar42 = FUN_00e8b990();
                    pppppppfVar54 = local_8d8;
                    if (lVar42 != 0) {
                      pppppppfVar52 = local_8d8;
                      pppppppfVar54 =
                           (float *******)local_8d8[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
                    }
                  }
                  register0x00001248 =
                       (undefined1  [8])
                       ((double)stack0xfffffffffffff750 + local_a10 * (double)(float)local_8e8._0_4_
                       );
                  local_8b8._0_8_ = (double)local_8b8._0_8_ + (double)(float)local_8e8._0_4_;
                  puVar58 = (undefined1 *)0x0;
                  dVar88 = (double)(*(code *)(*pppppppfVar54)[0x7b])(register0x00001248);
                  uVar78 = uVar78 + 1;
                  local_8e8._0_4_ = (float)dVar88;
                } while ((double)((float)dVar88 * DAT_0241c6f8) + (double)local_8b8._0_8_ <
                         (double)local_918);
                local_958._0_4_ = uVar78;
                goto LAB_012ae73c;
              }
              uVar78 = 1;
              do {
                local_8b8._0_8_ = (double)local_8b8._0_8_ + (double)(float)local_8e8._0_4_;
                uVar78 = uVar78 + 1;
              } while ((double)local_8b8._0_8_ + (double)((float)local_8e8._0_4_ * DAT_0241c6f8) <
                       (double)local_918);
              goto joined_r0x012ae748;
            }
LAB_012ae7bf:
            if (*(char *)(unaff_RDI + 0x4e) != '\0') goto LAB_012ae7cf;
            local_844 = 0;
            local_ba8 = ZEXT816(0);
            auVar31._12_4_ = 0;
            auVar31._0_12_ = stack0xfffffffffffff66c;
            _local_998 = auVar31 << 0x20;
LAB_012aeac3:
            if (uVar78 == 0) {
              local_9c8._0_4_ = *(float *)((longlong)unaff_RDI + 0x214);
              uVar78 = 0;
            }
            else {
              local_9c8._0_4_ =
                   (undefined4)
                   ((float)local_8e8._0_4_ / (float)(int)*(float *)((longlong)unaff_RDI + 0x164) +
                   DAT_0239011c);
              unaff_RDI[0x45] =
                   (float ******)(longlong)(int)((double)local_8b8._0_8_ + DAT_023942d0);
            }
            local_9c8._4_4_ = 0;
            bVar36 = 1;
LAB_012aeb26:
            iVar40 = (int)*(float *)((longlong)unaff_RDI + 0x15c) / 2;
            if (iVar40 < (int)local_9c8._0_4_) {
              puVar58 = (undefined1 *)local_9c8._0_8_;
              do {
                uVar56 = (int)puVar58 + (int)((ulonglong)puVar58 >> 0x1f) >> 1;
                puVar58 = (undefined1 *)CONCAT44(0,uVar56);
              } while (iVar40 < (int)uVar56);
              local_9c8._0_8_ = puVar58;
            }
          }
          fVar149 = *(float *)((longlong)unaff_RDI + 0x214);
          pppppppfVar52 = (float *******)(ulonglong)(uint)fVar149;
          local_8d0 = (float *******)CONCAT44(local_8d0._4_4_,0x3f800000);
          fVar98 = *(float *)((longlong)unaff_RDI[0x22] + 0xc);
          local_8b8._0_4_ = fVar98;
          local_878[0] = '\0';
          bVar48 = DAT_023b36e8 < fVar98 || fVar98 < DAT_023b36e4;
          local_8a0 = (float *******)CONCAT71(local_8a0._1_7_,bVar48);
          local_880 = uVar82;
          if ((bVar48) || (*(char *)((longlong)unaff_RDI + 0x2a1) != '\0')) {
            local_969 = 1;
            puVar58 = &local_969;
            ppppppfVar81 = (float ******)local_878;
            FUN_012b6860(ppppppfVar81);
            uVar85 = (undefined4)CONCAT71((int7)((ulonglong)ppppppfVar81 >> 8),local_969);
            uVar86 = (undefined4)CONCAT71((int7)((ulonglong)&local_8d0 >> 8),local_878[0]);
          }
          else {
            uVar86 = 0;
            uVar85 = 0;
          }
          uVar82 = (ulonglong)(int)fVar149;
          uVar39 = local_9c8._0_4_;
          uVar56 = uVar39 + (int)fVar149;
          local_918 = (float ******)(ulonglong)uVar56;
          local_a20 = (float *****)CONCAT44(local_a20._4_4_,uVar85);
          if ((bool)(bVar36 & (((char)uVar85 == '\0' && (char)uVar86 == '\0') &&
                              local_998[0] == '\0'))) {
            if (((uVar78 != 1) || (*(char *)((longlong)unaff_RDI + 0x261) != '\0')) ||
               (*(char *)((longlong)unaff_RDI + 0x139) != '\0')) goto LAB_012aec68;
            ppppppfVar81 = (float ******)
                           ((longlong)(int)*(float *)((longlong)unaff_RDI + 0x164) * uVar82 +
                           (longlong)unaff_RDI[0x45]);
            uVar85 = (undefined4)CONCAT71((int7)((ulonglong)puVar58 >> 8),1);
            local_95c = uVar39;
          }
          else {
            local_8f1 = '\x01';
LAB_012aec68:
            local_891 = '\x01';
            ppppppfVar81 = unaff_RDI[0x45];
            uVar85 = 0;
            fVar149 = 0.0;
            local_95c = uVar56;
          }
          local_ac8._0_4_ = uVar85;
          local_af8._0_4_ = uVar86;
          local_9e8 = pppppppfVar52;
          if (*(char *)(unaff_RDI + 0x4e) == '\0') {
            if (0 < (int)*(float *)local_948) {
              lVar42 = 0;
              do {
                ___bzero();
                unaff_RDI[0x3f][lVar42] =
                     (float *****)((longlong)(int)fVar149 * 4 + (longlong)unaff_RDI[0x3c][lVar42]);
                lVar42 = lVar42 + 1;
              } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
            }
            local_ce8 = local_858;
            local_ce0 = 0;
            FUN_012b6e60(unaff_RDI[0x3f],*(float *)((longlong)unaff_RDI + 0x164),local_9ac,
                         ppppppfVar81);
            pppppppfVar54 = local_9e8;
          }
          else {
            if (local_998[0] == '\0') {
              uVar56 = uVar39;
            }
            local_a8c = fVar149;
            if (0 < (int)*(float *)local_948) {
              lVar42 = 0;
              do {
                ___bzero();
                lVar42 = lVar42 + 1;
              } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
            }
            local_cf8 = local_858;
            local_cf0 = 0;
            uVar57 = (ulonglong)(uint)local_9ac;
            FUN_012b6e60(unaff_RDI[0x3c]);
            pppppppfVar54 = local_9e8;
            fVar98 = *(float *)local_948;
            if (0 < (int)uVar56) {
              auVar94._0_8_ = (double)(int)uVar56;
              auVar150._0_8_ = local_ba8._0_8_ - (double)local_b38._0_8_;
              auVar150._8_8_ = local_ba8._8_8_ - (double)local_b38._8_8_;
              auVar94._8_8_ = auVar94._0_8_;
              auVar132 = divpd(auVar150,auVar94);
              uVar57 = 1 - (longlong)local_aa8;
              uVar64 = 0;
              ppppppfVar81 = unaff_RDI[0x4f];
              ppppppfVar131 = unaff_RDI[0x50];
              if (local_998[0] != '\0') {
                uVar82 = uVar64;
              }
              do {
                for (dVar88 = (double)ppppppfVar131 - (double)ppppppfVar81; DAT_0238fee8 <= dVar88;
                    dVar88 = dVar88 + DAT_023b19a0) {
                }
                for (; dVar88 < 0.0; dVar88 = dVar88 + DAT_0238fee8) {
                }
                if (0 < (int)fVar98) {
                  dVar142 = (double)local_b38._8_8_ + (double)local_b38._0_8_ * dVar88;
                  lVar63 = (longlong)dVar142;
                  lVar42 = (longlong)(dVar142 - (double)local_b38._0_8_);
                  ppppppfVar71 = unaff_RDI[0x3c];
                  ppppppfVar7 = unaff_RDI[0x53];
                  uVar66 = 0;
                  do {
                    pppppfVar119 = ppppppfVar71[uVar66];
                    fVar149 = *(float *)((longlong)pppppfVar119 + (lVar63 - (longlong)local_aa8) * 4
                                        );
                    fVar149 = (*(float *)((longlong)pppppfVar119 + (uVar57 + lVar63) * 4) - fVar149)
                              * (float)(dVar142 - (double)lVar63) + fVar149;
                    fVar60 = *(float *)((longlong)pppppfVar119 + (lVar42 - (longlong)local_aa8) * 4)
                    ;
                    *(float *)((longlong)ppppppfVar7[uVar66] + uVar82 * 4) =
                         (((*(float *)((longlong)pppppfVar119 + (uVar57 + lVar42) * 4) - fVar60) *
                           (float)((dVar142 - (double)local_b38._0_8_) - (double)lVar42) + fVar60) -
                         fVar149) * (float)dVar88 + fVar149;
                    uVar66 = uVar66 + 1;
                  } while ((uint)fVar98 != uVar66);
                }
                local_b38._0_8_ = (double)local_b38._0_8_ + auVar132._0_8_;
                local_b38._8_8_ = (double)local_b38._8_8_ + auVar132._8_8_;
                for (ppppppfVar81 = (float ******)
                                    (auVar132._8_8_ / (double)local_b38._0_8_ + (double)ppppppfVar81
                                    ); DAT_0238fee8 <= (double)ppppppfVar81;
                    ppppppfVar81 = (float ******)((double)ppppppfVar81 + DAT_023b19a0)) {
                }
                ppppppfVar131 =
                     (float ******)(DAT_0238fee8 / (double)local_b38._0_8_ + (double)ppppppfVar131);
                for (; (double)ppppppfVar81 < 0.0;
                    ppppppfVar81 = (float ******)((double)ppppppfVar81 + DAT_0238fee8)) {
                }
                for (; DAT_0238fee8 <= (double)ppppppfVar131;
                    ppppppfVar131 = (float ******)((double)ppppppfVar131 + DAT_023b19a0)) {
                }
                for (; (double)ppppppfVar131 < 0.0;
                    ppppppfVar131 = (float ******)((double)ppppppfVar131 + DAT_0238fee8)) {
                }
                uVar82 = uVar82 + 1;
                uVar78 = (int)uVar64 + 1;
                uVar64 = (ulonglong)uVar78;
              } while (uVar78 != uVar56);
              unaff_RDI[0x50] = ppppppfVar131;
              unaff_RDI[0x4f] = ppppppfVar81;
            }
            unaff_RDI[0x51] =
                 (float ******)
                 ((double)(int)*(float *)((longlong)unaff_RDI + 0x164) * (double)local_b38._8_8_);
            unaff_RDI[0x52] =
                 (float ******)
                 ((double)(int)*(float *)((longlong)unaff_RDI + 0x164) * (double)local_b38._0_8_);
            if (0 < (int)fVar98) {
              lVar63 = (longlong)(int)local_95c;
              lVar42 = 0;
              do {
                ___bzero();
                _memcpy(unaff_RDI[0x53],(void *)(lVar63 << 2),(size_t)uVar57);
                lVar42 = lVar42 + 1;
              } while (lVar42 < (int)*(float *)(unaff_RDI + 0x2c));
            }
          }
          dVar88 = (double)local_978 / ((local_a00 / (double)(float)local_940) * local_ad0);
          auVar123 = ZEXT416(0);
          *(undefined1 *)((longlong)unaff_RDI + 0x139) = 0;
          pppppppfVar75 = (float *******)(ulonglong)*(byte *)((longlong)unaff_RDI + 0x2a1);
          local_cd8 = local_850;
          local_cd0 = 0;
          uVar78 = (uint)pppppppfVar54;
          fVar98 = 0.0;
          fVar149 = 0.0;
          FUN_012b7100(local_af8[0] != '\0',(ulonglong)local_8a0 & 0xff,pppppppfVar75,
                       CONCAT44((int)((ulonglong)dVar88 >> 0x20),(float)dVar88),local_9c8._0_4_,
                       &local_b7c,&local_891,&local_8f1,&local_96b,&local_96a);
          lVar42 = DAT_028ac5c0;
          cVar34 = local_8f1;
          if (local_ac8[0] == '\0') {
            if (((*(char *)((longlong)unaff_RDI + 0x261) == '\0') &&
                (fVar60 = *(float *)local_948, 0 < (int)fVar60)) && (uVar78 != 0)) {
              fVar38 = DAT_023d5f44 / (float)(int)uVar78;
              ppppppfVar81 = unaff_RDI[0x2a];
              pppppppfVar75 = (float *******)(ulonglong)(uVar78 - 1);
              fVar97 = fVar38 + DAT_0239424c;
              uVar82 = 0;
              do {
                pppppfVar119 = ppppppfVar81[uVar82];
                auVar123 = ZEXT816(0);
                uVar56 = uVar78;
                if (((ulonglong)pppppppfVar54 & 1) != 0) {
                  *(float *)pppppfVar119 = *(float *)(lVar42 + 0x8000) * *(float *)pppppfVar119;
                  pppppfVar119 = (float *****)((longlong)pppppfVar119 + 4);
                  auVar123 = ZEXT416((uint)fVar97);
                  uVar56 = uVar78 - 1;
                }
                if (uVar78 != 1) {
                  lVar63 = 0;
                  do {
                    *(float *)((longlong)pppppfVar119 + lVar63 * 4) =
                         *(float *)(lVar42 + 0x8000 + (longlong)(int)auVar123._0_4_ * 4) *
                         *(float *)((longlong)pppppfVar119 + lVar63 * 4);
                    fVar87 = auVar123._0_4_ + fVar38;
                    *(float *)((longlong)pppppfVar119 + (lVar63 + 1) * 4) =
                         *(float *)(lVar42 + 0x8000 + (longlong)(int)fVar87 * 4) *
                         *(float *)((longlong)pppppfVar119 + (lVar63 + 1) * 4);
                    auVar123._0_4_ = fVar87 + fVar38;
                    lVar63 = lVar63 + 2;
                  } while (uVar56 != (uint)lVar63);
                }
                uVar82 = uVar82 + 1;
              } while (uVar82 != (uint)fVar60);
            }
LAB_012b297c:
            fVar60 = *(float *)(unaff_RDI + 0x2c);
            cVar34 = local_8f1;
            if (0 < (int)fVar60) {
              local_8e8[0] = local_8f1;
              uVar82 = 0;
              local_9e8 = pppppppfVar54;
              do {
                (**(code **)(DAT_02786500 + 0x28))();
                uVar82 = uVar82 + 1;
              } while ((uint)fVar60 != uVar82);
              cVar34 = local_8e8[0];
            }
          }
          if (cVar34 != '\0') goto LAB_012b29fe;
LAB_012af32e:
          if (0 < (int)*(float *)local_948) {
            lVar63 = (longlong)(int)local_9c8._0_4_;
            lVar42 = 0;
            do {
              _memcpy(unaff_RDI[0x3c],(void *)(lVar63 << 2),(size_t)pppppppfVar75);
              lVar42 = lVar42 + 1;
              fVar60 = *(float *)(unaff_RDI + 0x2c);
            } while (lVar42 < (int)fVar60);
            *(undefined1 *)((longlong)unaff_RDI + 0x264) = 0;
            goto joined_r0x012af399;
          }
          uVar37 = 0;
LAB_012b2a5f:
          *(undefined1 *)((longlong)unaff_RDI + 0x264) = uVar37;
        }
        *(undefined1 *)((longlong)unaff_RDI + 0x261) = local_96a;
        ppppppfVar81 = (float ******)((double)unaff_RDI[0x41] - (double)unaff_RDI[0x44]);
        unaff_RDI[0x41] = ppppppfVar81;
        *(float *)(unaff_RDI + 0x42) = *(float *)((longlong)unaff_RDI + 0x214);
        unaff_RDI[0x44] = (float ******)(double)(int)*(float *)((longlong)unaff_RDI + 0x214);
        *(float *)((longlong)unaff_RDI + 0x214) = local_9c8._0_4_;
      }
      fVar97 = DAT_0240d158;
      fVar38 = DAT_0239011c;
      ppppppfVar131 = unaff_RDI[0x3e];
      ppppppfVar71 = unaff_RDI[0x2a];
      fVar60 = *(float *)(unaff_RDI + 0x2c);
      param_3 = (float ******)(ulonglong)(uint)fVar60;
      iVar40 = (int)(double)ppppppfVar81;
      fVar87 = (float)((double)ppppppfVar81 - (double)(int)(double)ppppppfVar81);
      lVar42 = (longlong)iVar40;
      if (*(char *)((longlong)unaff_RDI + 0x259) == '\0') {
        if (0 < (int)fVar60) {
          if (fVar60 == 1.4013e-45) {
            uVar82 = 0;
          }
          else {
            uVar82 = 0;
            do {
              fVar38 = *(float *)((longlong)ppppppfVar71[uVar82] + lVar42 * 4);
              *(float *)((longlong)ppppppfVar131 + uVar82 * 4) =
                   (*(float *)((longlong)ppppppfVar71[uVar82] + lVar42 * 4 + 4) - fVar38) * fVar87 +
                   fVar38;
              fVar38 = *(float *)((longlong)ppppppfVar71[uVar82 + 1] + lVar42 * 4);
              fVar38 = (*(float *)((longlong)ppppppfVar71[uVar82 + 1] + lVar42 * 4 + 4) - fVar38) *
                       fVar87 + fVar38;
              auVar123 = ZEXT416((uint)fVar38);
              *(float *)((longlong)ppppppfVar131 + (uVar82 + 1) * 4) = fVar38;
              uVar82 = uVar82 + 2;
            } while (((uint)fVar60 & 0xfffffffe) != uVar82);
          }
          if (((uint)fVar60 & 1) != 0) {
            fVar38 = *(float *)((longlong)ppppppfVar71[uVar82] + lVar42 * 4);
            fVar38 = (*(float *)((longlong)ppppppfVar71[uVar82] + lVar42 * 4 + 4) - fVar38) * fVar87
                     + fVar38;
            auVar123 = ZEXT416((uint)fVar38);
            *(float *)((longlong)ppppppfVar131 + uVar82 * 4) = fVar38;
          }
        }
      }
      else if (0 < (int)fVar60) {
        ppppppfVar81 = (float ******)0x0;
        do {
          pppppfVar119 = ppppppfVar71[(longlong)ppppppfVar81];
          fVar69 = *(float *)((longlong)pppppfVar119 + (longlong)(iVar40 + -1) * 4);
          auVar123 = ZEXT416((uint)fVar69);
          fVar130 = *(float *)((longlong)pppppfVar119 + lVar42 * 4);
          fVar129 = *(float *)((longlong)pppppfVar119 + (longlong)(iVar40 + 1) * 4);
          fVar98 = 0.0;
          fVar149 = 0.0;
          fVar140 = (*(float *)((longlong)pppppfVar119 + (longlong)(iVar40 + 2) * 4) - fVar69) *
                    fVar97;
          fVar141 = (fVar130 - fVar129) * fVar38;
          fVar129 = (fVar129 + fVar69) * fVar38;
          *(float *)((longlong)ppppppfVar131 + (longlong)ppppppfVar81 * 4) =
               (((fVar141 + fVar140) * fVar87 + (fVar129 - fVar130)) * fVar87 +
               (((fVar129 - fVar140) - fVar141) - fVar69)) * fVar87 + fVar130;
          ppppppfVar81 = (float ******)((longlong)ppppppfVar81 + 1);
        } while (param_3 != ppppppfVar81);
      }
      if (*(char *)((longlong)unaff_RDI + 0x25d) != '\0') {
        fVar38 = *(float *)ppppppfVar131;
        fVar97 = fVar38 + *(float *)((longlong)ppppppfVar131 + 4);
        auVar123 = ZEXT416((uint)fVar97);
        *(float *)ppppppfVar131 = fVar97;
        *(float *)((longlong)ppppppfVar131 + 4) = fVar38 - *(float *)((longlong)ppppppfVar131 + 4);
      }
      lVar42 = DAT_028ac5e0;
      fVar97 = DAT_028ac5d8;
      fVar38 = DAT_0240d15c;
      auVar132 = ZEXT416((uint)DAT_0240d15c);
      pcVar55 = (code *)local_ad8;
      if (*(code *)local_ad8 == (code)0x0) {
        if (0 < (int)fVar60) {
          pfVar68 = (float *)((longlong)unaff_RDI[0x23] + 0xc);
          if (((uint)fVar60 < 8) ||
             ((ppppppfVar131 < unaff_RDI[0x23] + 2 &&
              (pfVar68 < (float *)((longlong)ppppppfVar131 + (longlong)param_3 * 4))))) {
            ppppppfVar81 = (float ******)0x0;
          }
          else {
            ppppppfVar81 = (float ******)(ulonglong)((uint)fVar60 & 0xfffffff8);
            fVar38 = *pfVar68;
            uVar82 = ((ulonglong)(ppppppfVar81 + -1) >> 3) + 1;
            if (ppppppfVar81 + -1 == (float ******)0x0) {
              lVar42 = 0;
LAB_012b2e81:
              pfVar1 = (float *)((longlong)ppppppfVar131 + lVar42 * 4);
              pfVar2 = (float *)((longlong)ppppppfVar131 + (lVar42 + 4) * 4);
              auVar116._0_4_ = *pfVar1 * fVar38;
              auVar116._4_4_ = pfVar1[1] * fVar38;
              auVar116._8_4_ = pfVar1[2] * fVar38;
              auVar116._12_4_ = pfVar1[3] * fVar38;
              auVar123._0_4_ = *pfVar2 * fVar38;
              auVar123._4_4_ = pfVar2[1] * fVar38;
              auVar123._8_4_ = pfVar2[2] * fVar38;
              auVar123._12_4_ = pfVar2[3] * fVar38;
              *(undefined1 (*) [16])((longlong)ppppppfVar131 + lVar42 * 4) = auVar116;
              *(undefined1 (*) [16])((longlong)ppppppfVar131 + (lVar42 + 4) * 4) = auVar123;
            }
            else {
              lVar63 = -(uVar82 & 0xfffffffffffffffe);
              lVar42 = 0;
              do {
                pfVar1 = (float *)((longlong)ppppppfVar131 + lVar42 * 4);
                pfVar2 = (float *)((longlong)ppppppfVar131 + (lVar42 + 4) * 4);
                pfVar3 = (float *)((longlong)ppppppfVar131 + (lVar42 + 8) * 4);
                fVar97 = *pfVar3;
                fVar87 = pfVar3[1];
                fVar69 = pfVar3[2];
                fVar130 = pfVar3[3];
                pfVar3 = (float *)((longlong)ppppppfVar131 + (lVar42 + 0xc) * 4);
                fVar129 = *pfVar3;
                fVar140 = pfVar3[1];
                fVar98 = pfVar3[2];
                fVar149 = pfVar3[3];
                auVar115._0_4_ = *pfVar1 * fVar38;
                auVar115._4_4_ = pfVar1[1] * fVar38;
                auVar115._8_4_ = pfVar1[2] * fVar38;
                auVar115._12_4_ = pfVar1[3] * fVar38;
                auVar123._0_4_ = *pfVar2 * fVar38;
                auVar123._4_4_ = pfVar2[1] * fVar38;
                auVar123._8_4_ = pfVar2[2] * fVar38;
                auVar123._12_4_ = pfVar2[3] * fVar38;
                *(undefined1 (*) [16])((longlong)ppppppfVar131 + lVar42 * 4) = auVar115;
                *(undefined1 (*) [16])((longlong)ppppppfVar131 + (lVar42 + 4) * 4) = auVar123;
                auVar132._0_4_ = fVar97 * fVar38;
                auVar132._4_4_ = fVar87 * fVar38;
                auVar132._8_4_ = fVar69 * fVar38;
                auVar132._12_4_ = fVar130 * fVar38;
                fVar98 = fVar98 * fVar38;
                fVar149 = fVar149 * fVar38;
                *(undefined1 (*) [16])((longlong)ppppppfVar131 + (lVar42 + 8) * 4) = auVar132;
                pfVar1 = (float *)((longlong)ppppppfVar131 + (lVar42 + 0xc) * 4);
                *pfVar1 = fVar129 * fVar38;
                pfVar1[1] = fVar140 * fVar38;
                pfVar1[2] = fVar98;
                pfVar1[3] = fVar149;
                lVar42 = lVar42 + 0x10;
                lVar63 = lVar63 + 2;
              } while (lVar63 != 0);
              if ((uVar82 & 1) != 0) goto LAB_012b2e81;
            }
            pcVar55 = (code *)0x0;
            if (ppppppfVar81 == param_3) goto LAB_012b2eb0;
          }
          pcVar55 = (code *)(~(ulonglong)ppppppfVar81 + (longlong)param_3);
          uVar82 = (ulonglong)param_3 & 3;
          if (((uint)fVar60 & 3) != 0) {
            do {
              *(float *)((longlong)ppppppfVar131 + (longlong)ppppppfVar81 * 4) =
                   *pfVar68 * *(float *)((longlong)ppppppfVar131 + (longlong)ppppppfVar81 * 4);
              ppppppfVar81 = (float ******)((longlong)ppppppfVar81 + 1);
              uVar82 = uVar82 - 1;
            } while (uVar82 != 0);
          }
          if ((float ******)((longlong)&MACH_HEADER.magic + 2) < pcVar55) {
            do {
              *(float *)((longlong)ppppppfVar131 + (longlong)ppppppfVar81 * 4) =
                   *pfVar68 * *(float *)((longlong)ppppppfVar131 + (longlong)ppppppfVar81 * 4);
              *(float *)((longlong)ppppppfVar131 + (longlong)((longlong)ppppppfVar81 + 1) * 4) =
                   *pfVar68 *
                   *(float *)((longlong)ppppppfVar131 + (longlong)((longlong)ppppppfVar81 + 1) * 4);
              *(float *)((longlong)ppppppfVar131 + (longlong)((longlong)ppppppfVar81 + 2) * 4) =
                   *pfVar68 *
                   *(float *)((longlong)ppppppfVar131 + (longlong)((longlong)ppppppfVar81 + 2) * 4);
              *(float *)((longlong)ppppppfVar131 + (longlong)((longlong)ppppppfVar81 + 3) * 4) =
                   *pfVar68 *
                   *(float *)((longlong)ppppppfVar131 + (longlong)((longlong)ppppppfVar81 + 3) * 4);
              ppppppfVar81 = (float ******)((longlong)ppppppfVar81 + 4);
            } while (param_3 != ppppppfVar81);
          }
        }
      }
      else if (0 < (int)fVar60) {
        ppppppfVar81 = unaff_RDI[0x23];
        ppppppfVar71 = (float ******)0x0;
        do {
          fVar87 = *(float *)((longlong)ppppppfVar131 + (longlong)ppppppfVar71 * 4) *
                   *(float *)((longlong)ppppppfVar81 + 0xc);
          if (fVar38 <= fVar87) {
            auVar123 = ZEXT416((uint)fVar87);
            if (DAT_0239109c <= fVar87) goto LAB_012b2d00;
          }
          else {
            auVar123._0_4_ = (float)((uint)fVar87 ^ _DAT_023945e0);
            auVar123._4_4_ = (float)_UNK_023945e4;
            auVar123._8_4_ = (float)_UNK_023945e8;
            auVar123._12_4_ = (float)_UNK_023945ec;
LAB_012b2d00:
            auVar123._0_4_ = (auVar123._0_4_ + fVar38) * fVar97 + DAT_0239011c;
            uVar78 = (uint)auVar123._0_4_;
            if (0x1ffe < (int)uVar78) {
              uVar78 = 0x1fff;
            }
            pcVar55 = (code *)(ulonglong)uVar78;
            if ((int)uVar78 < 0) {
              pcVar55 = (code *)0x0;
            }
            fVar69 = *(float *)(lVar42 + (longlong)pcVar55 * 4);
            bVar48 = fVar87 < fVar38;
            fVar87 = fVar69;
            if (bVar48) {
              fVar87 = (float)((uint)fVar69 ^ _DAT_023945e0);
            }
          }
          *(float *)((longlong)ppppppfVar131 + (longlong)ppppppfVar71 * 4) = fVar87;
          ppppppfVar71 = (float ******)((longlong)ppppppfVar71 + 1);
        } while (param_3 != ppppppfVar71);
      }
LAB_012b2eb0:
      if (0 < (int)local_a2c) {
        lVar42 = (longlong)(int)fVar60;
        if (local_a2c == 1.4013e-45) {
          pcVar55 = (code *)0x0;
          iVar40 = 0;
        }
        else {
          pcVar55 = (code *)0x0;
          uVar82 = 0;
          do {
            uVar78 = (uint)pcVar55;
            if (lVar42 <= (longlong)pcVar55) {
              uVar78 = (uint)uVar82;
            }
            fVar60 = *(float *)((longlong)ppppppfVar131 + (longlong)(int)uVar78 * 4);
            pppppfVar119 = (float *****)(&local_838)[(longlong)pcVar55];
            (&local_838)[(longlong)pcVar55] = (float ******)((longlong)pppppfVar119 + 4);
            uVar82 = (ulonglong)uVar78;
            if ((longlong)pcVar55 + 1 < lVar42) {
              uVar82 = (ulonglong)((longlong)pcVar55 + 1) & 0xffffffff;
            }
            *(float *)pppppfVar119 = fVar60 + *(float *)pppppfVar119;
            iVar40 = (int)uVar82;
            fVar60 = *(float *)((longlong)ppppppfVar131 + (longlong)iVar40 * 4);
            pfVar68 = (float *)local_828[(longlong)((longlong)pcVar55 + -1)];
            local_828[(longlong)((longlong)pcVar55 + -1)] = (longlong)(pfVar68 + 1);
            *pfVar68 = fVar60 + *pfVar68;
            pcVar55 = (code *)((longlong)pcVar55 + 2);
            param_3 = local_c40;
          } while (local_c40 != (float ******)pcVar55);
        }
        if ((local_b00 & 1) != 0) {
          if ((longlong)pcVar55 < lVar42) {
            iVar40 = (int)pcVar55;
          }
          fVar60 = *(float *)((longlong)ppppppfVar131 + (longlong)iVar40 * 4);
          pppppfVar119 = (float *****)(&local_838)[(longlong)pcVar55];
          (&local_838)[(longlong)pcVar55] = (float ******)((longlong)pppppfVar119 + 4);
          *(float *)pppppfVar119 = fVar60 + *(float *)pppppfVar119;
        }
      }
      ppppppfVar81 = unaff_RDI[0x20];
      ppppppfVar81[2] = (float *****)((double)ppppppfVar81[3] + (double)ppppppfVar81[2]);
      ppppppfVar81 = unaff_RDI[0x21];
      pppppfVar119 = ppppppfVar81[2];
      ppppppfVar81[2] = (float *****)((double)ppppppfVar81[3] + (double)pppppfVar119);
      unaff_RDI[0x41] =
           (float ******)((double)ppppppfVar81[3] + (double)pppppfVar119 + (double)unaff_RDI[0x41]);
      ppppppfVar81 = unaff_RDI[0x22];
      *(float *)((longlong)ppppppfVar81 + 0xc) =
           *(float *)(ppppppfVar81 + 2) + *(float *)((longlong)ppppppfVar81 + 0xc);
      ppppppfVar81 = unaff_RDI[0x23];
      *(float *)((longlong)ppppppfVar81 + 0xc) =
           *(float *)(ppppppfVar81 + 2) + *(float *)((longlong)ppppppfVar81 + 0xc);
      *(int *)(unaff_RDI + 0x26) = (int)*(float *)(unaff_RDI + 0x26) + -1;
      pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
      ppppppfVar81 = local_888;
      if (pvVar41 != (void *)0x0) {
        lVar42 = FUN_00e8b990();
        ppppppfVar81 = local_888;
        if (lVar42 != 0) {
          ppppppfVar81 = (float ******)local_888[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
          pcVar55 = (code *)local_888;
        }
      }
      local_9e0 = local_9e0 + local_b28;
      if (*(code *)(ppppppfVar81 + 0x30) == (code)0x0) {
LAB_012b3087:
        if (*(char *)((longlong)unaff_RDI + 0x262) != '\0') goto LAB_012b3091;
LAB_012b309b:
        cVar34 = *(char *)((longlong)unaff_RDI + 0x13a);
      }
      else {
        dVar88 = (double)FUN_00b335e0();
        if ((local_9e0 <= dVar88 + local_bc0) || (*(int *)((longlong)unaff_RDI[0x1e] + 0xc) != 0))
        goto LAB_012b3087;
        if (*(char *)((longlong)unaff_RDI + 0x262) == '\0') {
          *(undefined1 *)((longlong)unaff_RDI + 0x262) = 1;
        }
LAB_012b3091:
        if (*(char *)(unaff_RDI + 0x4c) != '\0') goto LAB_012b309b;
        local_8e8 = (undefined1  [8])DAT_023934c8;
        if (local_a50 != (float ******)0x0) {
          pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
          ppppppfVar81 = local_a50;
          if (pvVar41 != (void *)0x0) {
            lVar42 = FUN_00e8b990();
            ppppppfVar81 = local_a50;
            if (lVar42 != 0) {
              ppppppfVar81 = (float ******)local_a50[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4]
              ;
              pcVar55 = (code *)local_a50;
            }
          }
          local_8e8 = (undefined1  [8])ppppppfVar81[10];
        }
        dVar88 = (double)FUN_01530ad0();
        if (dVar88 <= (double)local_8e8) {
          ppppppfVar81 = unaff_RDI[0x23];
          fVar60 = 0.0;
        }
        else {
          uVar56 = (uint)((double)local_8e8 * local_b50);
          uVar78 = -uVar56;
          if (0 < (int)uVar56) {
            uVar78 = uVar56;
          }
          pcVar55 = (code *)(ulonglong)uVar78;
          ppppppfVar81 = unaff_RDI[0x23];
          fVar60 = (float)(*(uint *)((longlong)ppppppfVar81 + 0xc) ^ _DAT_023945e0) /
                   (float)(int)uVar78;
        }
        *(float *)(ppppppfVar81 + 2) = fVar60;
        *(undefined4 *)((longlong)ppppppfVar81 + 0x14) = 0x7fffffff;
        *(undefined4 *)(unaff_RDI[0x20] + 4) = 0x7fffffff;
        *(undefined1 *)(unaff_RDI + 0x4c) = 1;
        cVar34 = *(char *)((longlong)unaff_RDI + 0x13a);
      }
      if (((cVar34 == '\0') && (DAT_02390448 <= (double)unaff_RDI[0x29])) &&
         (ppppppfVar81 = unaff_RDI[0x20], (double)unaff_RDI[0x29] <= (double)ppppppfVar81[2])) {
        pcVar55 = (code *)unaff_RDI[0x1e];
        if (*(int *)((longlong)pcVar55 + 0xc) == 0) {
          iVar51 = (int)((local_a00 * DAT_0240d2e8) / (double)ppppppfVar81[3]);
          iVar40 = -iVar51;
          if (0 < iVar51) {
            iVar40 = iVar51;
          }
          pcVar55 = (code *)unaff_RDI[0x23];
          *(float *)((longlong)pcVar55 + 0x10) =
               (float)(*(uint *)((longlong)pcVar55 + 0xc) ^ _DAT_023945e0) / (float)iVar40;
          *(undefined4 *)((longlong)pcVar55 + 0x14) = 0x7fffffff;
          *(undefined4 *)(ppppppfVar81 + 4) = 0x7fffffff;
          *(undefined1 *)(unaff_RDI + 0x4c) = 1;
        }
        unaff_RDI[0x29] = (float ******)0x7fefffffffffffff;
      }
      if (((NAN(local_b60)) || (*(char *)(unaff_RDI + 0x4c) != '\0')) || (local_9e0 <= local_b60)) {
        if (*(char *)(unaff_RDI + 0x4c) != '\0') goto LAB_012b32e4;
      }
      else {
        iVar40 = FUN_00e7d850(dVar99);
        pcVar55 = (code *)unaff_RDI[0x23];
        *(float *)((longlong)pcVar55 + 0x10) =
             (float)(*(uint *)((longlong)pcVar55 + 0xc) ^ _DAT_023945e0) / (float)iVar40;
        *(undefined4 *)((longlong)pcVar55 + 0x14) = 0x7fffffff;
        *(undefined4 *)(unaff_RDI[0x20] + 4) = 0x7fffffff;
        *(undefined1 *)(unaff_RDI + 0x4c) = 1;
LAB_012b32e4:
        pppppppfVar52 = local_920;
        if (*(float *)((longlong)unaff_RDI[0x23] + 0xc) <= 0.0) goto LAB_012b3d9b;
      }
      ppppppfVar81 = unaff_RDI[0x20];
      if ((local_a38 <= (double)ppppppfVar81[2]) || ((double)ppppppfVar81[2] < local_c58)) {
        ppppppfVar131 = unaff_RDI[0x1d];
        ppppppfVar71 = (float ******)0x0;
        if (ppppppfVar131 != (float ******)0x0) {
          pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
          if (pvVar41 != (void *)0x0) {
            ppppppfVar131 = unaff_RDI[0x1d];
            lVar42 = FUN_00e8b990();
            if (lVar42 != 0) {
              ppppppfVar131 =
                   (float ******)ppppppfVar131[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
            }
          }
          pppppfVar119 = ppppppfVar131[10];
          pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
          if (pvVar41 != (void *)0x0) {
            pppppfVar119 = ppppppfVar131[10];
            lVar42 = FUN_00e8b990();
            if (lVar42 != 0) {
              pppppfVar119 = (float *****)
                             pppppfVar119[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
            }
          }
          ppppfVar61 = pppppfVar119[9];
          pvVar41 = _pthread_getspecific((pthread_key_t)pcVar55);
          if (pvVar41 != (void *)0x0) {
            ppppfVar61 = pppppfVar119[9];
            lVar42 = FUN_00e8b990();
            if (lVar42 != 0) {
              ppppfVar61 = (float ****)ppppfVar61[(ulonglong)(*(uint *)(lVar42 + 0x154) & 1) + 4];
            }
          }
          ppppppfVar81 = (float ******)ppppfVar61[0x17];
          ppppppfVar131 = unaff_RDI[0x1f];
          if (ppppppfVar131 != ppppppfVar81) {
            if (ppppppfVar81 != (float ******)0x0) {
              local_8a0 = local_920;
              FUN_00d50b00();
            }
            unaff_RDI[0x1f] = ppppppfVar81;
            if (ppppppfVar131 != (float ******)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_012ddc30();
          local_b10 = 0;
          ppppppfVar81 = unaff_RDI[0x1d];
          if (ppppppfVar81 != (float ******)0x0) {
            FUN_00d50b00();
          }
          local_b10 = '\x01';
          local_b18 = ppppppfVar81;
          ppppppfVar81 = (float ******)FUN_012c5850();
          if ((local_b10 != '\0') && (local_b18 != (float ******)0x0)) {
            ppppppfVar81 = (float ******)FUN_00d50b20();
          }
          if (((char)local_8c8 != '\0') && (local_8d0 != (float *******)0x0)) {
            ppppppfVar81 = (float ******)FUN_00d50b20();
          }
          ppppppfVar71 = unaff_RDI[0x1d];
        }
        local_a78 = (float *******)
                    CONCAT44(local_a78._4_4_,(int)CONCAT71((int7)((ulonglong)ppppppfVar81 >> 8),1));
        if (ppppppfVar71 != (float ******)0x0) {
          unaff_RDI[0x1d] = (float ******)0x0;
          local_8a0 = local_920;
          FUN_00d50b20();
        }
      }
      uVar82 = (ulonglong)(local_a6c - 1);
    } while( true );
  }
  local_8c0 = (undefined *)0x0;
  local_870 = (float *******)0x0;
  cVar34 = '\0';
  local_890 = (float ******)0x0;
  local_9f8 = 0;
  local_950 = (float *******)0x0;
  local_9d8 = 0;
  local_930 = (float *******)0x0;
  local_9d0 = 0;
  local_938 = (float *******)0x0;
  local_9f0 = 0;
  local_8d8 = (float *******)0x0;
  local_980 = 0;
  local_908 = (float *******)0x0;
  local_860 = (float *******)0x0;
  local_8f0 = (float *******)0x0;
  uVar82 = 0;
  local_888 = (float ******)0x0;
  local_900 = 0;
  local_858 = (float ******)0x0;
joined_r0x012b3e39:
  if ((local_bb0 != (float *******)0x0) && (local_850 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  if (local_a50 != (float ******)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_8c0 != '\0') && (local_870 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar34 != '\0') && (local_890 != (float ******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_9f8 != '\0') && (local_950 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_9d8 != '\0') && (local_930 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_9d0 != '\0') && (local_938 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_9f0 != '\0') && (local_8d8 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_980 != '\0') && (local_908 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_a28 == '\0' && local_968 != (float *******)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_860 != '\0') && (local_8f0 != (float *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)uVar82 != '\0') && (local_888 != (float ******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_900 != '\0') && (local_858 != (float ******)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
LAB_012b3d9b:
  uVar82 = (ulonglong)local_868 & 0xffffffff;
  (*(code *)(*unaff_RDI)[0xcf])();
LAB_012b3ac8:
  cVar34 = (char)pppppppfVar52;
  goto joined_r0x012b3e39;
}




// ============================================================
// @0111f300 — 20762 bytes
// str: ""MULSSComponentRenderer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0111f300(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_010f3160();
  *unaff_RDI = &DAT_025d24e0;
  FUN_01124690();
  FUN_01124980();
  FUN_01124c70();
  FUN_01124f60();
  FUN_01125250();
  FUN_01125540();
  FUN_01125830();
  *(undefined4 *)(unaff_RDI + 0x24) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01125b20();
    FUN_00e87980();
  }
  FUN_01125c90();
  *(undefined4 *)(unaff_RDI + 0x26) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01125f80();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x134) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011260f0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x27) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01126260();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x139) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011263d0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x13a) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01126540();
    FUN_00e87980();
  }
  unaff_RDI[0x28] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011266b0();
    FUN_00e87980();
  }
  unaff_RDI[0x29] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01126820();
    FUN_00e87980();
  }
  unaff_RDI[0x2a] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01126990();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01126b00();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x15c) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01126c70();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01126de0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x164) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01126f50();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2d) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011270c0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01127230();
    FUN_00e87980();
  }
  unaff_RDI[0x2e] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011273a0();
    FUN_00e87980();
  }
  unaff_RDI[0x2f] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01127510();
    FUN_00e87980();
  }
  unaff_RDI[0x30] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01127680();
    FUN_00e87980();
  }
  unaff_RDI[0x31] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011277f0();
    FUN_00e87980();
  }
  unaff_RDI[0x32] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01127960();
    FUN_00e87980();
  }
  unaff_RDI[0x33] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01127ad0();
    FUN_00e87980();
  }
  unaff_RDI[0x34] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01127c40();
    FUN_00e87980();
  }
  unaff_RDI[0x35] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01127db0();
    FUN_00e87980();
  }
  FUN_01127f20();
  unaff_RDI[0x37] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01128210();
    FUN_00e87980();
  }
  unaff_RDI[0x38] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01128380();
    FUN_00e87980();
  }
  unaff_RDI[0x39] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011284f0();
    FUN_00e87980();
  }
  unaff_RDI[0x3a] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01128660();
    FUN_00e87980();
  }
  unaff_RDI[0x3b] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011287d0();
    FUN_00e87980();
  }
  unaff_RDI[0x3c] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01128940();
    FUN_00e87980();
  }
  unaff_RDI[0x3d] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01128ab0();
    FUN_00e87980();
  }
  unaff_RDI[0x3e] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01128c20();
    FUN_00e87980();
  }
  unaff_RDI[0x3f] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01128d90();
    FUN_00e87980();
  }
  unaff_RDI[0x40] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01128f00();
    FUN_00e87980();
  }
  unaff_RDI[0x41] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01129070();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x42) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011291e0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x214) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01129350();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x43) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011294c0();
    FUN_00e87980();
  }
  unaff_RDI[0x44] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01129630();
    FUN_00e87980();
  }
  unaff_RDI[0x45] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_011297a0();
    FUN_00e87980();
  }
  unaff_RDI[0x46] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01129910();
    FUN_00e87980();
  }
  unaff_RDI[0x47] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01129a80();
    FUN_00e87980();
  }
  unaff_RDI[0x48] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01129bf0();
    FUN_00e87980();
  }
  unaff_RDI[0x49] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01129d60();
    FUN_00e87980();
  }
  unaff_RDI[0x4a] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_01129ed0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x4b) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112a040();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x259) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112a1b0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x25a) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112a320();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x25b) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112a490();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x25c) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112a600();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x25d) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112a770();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x25e) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112a8e0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112aa50();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x4c) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112abc0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x261) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112ad30();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x262) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112aea0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x263) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112b010();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x264) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112b180();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x265) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112b2f0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x266) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112b460();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x267) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112b5d0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x4d) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112b740();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x269) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112b8b0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x26a) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112ba20();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x26c) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112bb90();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x4e) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112bd00();
    FUN_00e87980();
  }
  unaff_RDI[0x4f] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112be70();
    FUN_00e87980();
  }
  unaff_RDI[0x50] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112bfe0();
    FUN_00e87980();
  }
  unaff_RDI[0x51] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112c150();
    FUN_00e87980();
  }
  unaff_RDI[0x52] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112c2c0();
    FUN_00e87980();
  }
  unaff_RDI[0x53] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112c430();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x54) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112c5a0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2a1) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112c710();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2a2) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112c880();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2a3) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112c9f0();
    FUN_00e87980();
  }
  unaff_RDI[0x55] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112cb60();
    FUN_00e87980();
  }
  unaff_RDI[0x56] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112ccd0();
    FUN_00e87980();
  }
  unaff_RDI[0x57] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112ce40();
    FUN_00e87980();
  }
  unaff_RDI[0x58] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112cfb0();
    FUN_00e87980();
  }
  unaff_RDI[0x59] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112d120();
    FUN_00e87980();
  }
  unaff_RDI[0x5a] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112d290();
    FUN_00e87980();
  }
  unaff_RDI[0x5b] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112d400();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x5c) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112d570();
    FUN_00e87980();
  }
  unaff_RDI[0x5d] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112d6e0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x5e) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112d850();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x2f4) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112d9c0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x5f) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112db30();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x2fc) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112dca0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x60) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112de10();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x304) = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112df80();
    FUN_00e87980();
  }
  unaff_RDI[0x61] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112e0f0();
    FUN_00e87980();
  }
  unaff_RDI[0x62] = 0;
  if (DAT_02796b30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02796a80 = FUN_010f2dd0();
      _DAT_02796a68 = "MULSSComponentRenderer";
      _DAT_02796a70 = 0x318;
      _DAT_02796a78 = FUN_0111ed70;
      _DAT_02796a88 = 0;
      uRam0000000002796a90 = 0;
      _DAT_02796a98 = 0;
      uRam0000000002796aa0 = 0;
      _DAT_02796aa8 = 0;
      uRam0000000002796ab0 = 0;
      _DAT_02796ab8 = 0;
      uRam0000000002796ac0 = 0;
      _DAT_02796ac8 = 0;
      uRam0000000002796ad0 = 0;
      _DAT_02796ad8 = 0;
      uRam0000000002796ae0 = 0;
      _DAT_02796ae8 = 0;
      uRam0000000002796af0 = 0;
      _DAT_02796af8 = 0;
      uRam0000000002796b00 = 0;
      _DAT_02796b08 = 0;
      uRam0000000002796b10 = 0;
      _DAT_02796b18 = 0;
      _uRam0000000002796b20 = 0;
      _DAT_02796b28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02796b23 == '\0') {
    FUN_0112e260();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @012bd760 — 9630 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012bdc60) */
/* WARNING: Removing unreachable block (ram,0x012bdc70) */
/* WARNING: Removing unreachable block (ram,0x012bf54a) */
/* WARNING: Removing unreachable block (ram,0x012bf556) */
/* WARNING: Removing unreachable block (ram,0x012bf4b2) */
/* WARNING: Removing unreachable block (ram,0x012bf4e0) */
/* WARNING: Removing unreachable block (ram,0x012bf4b4) */
/* WARNING: Removing unreachable block (ram,0x012bf4e2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012bd760(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 longlong param_6,longlong param_7,longlong param_8,float *param_9,float param_10,
                 float param_11,float param_12,longlong param_13,longlong param_14,longlong param_15
                 ,longlong param_16,float *param_17,float *param_18,float param_19,float param_20,
                 float param_21,float param_22,float param_23,float param_24)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong in_RCX;
  longlong lVar12;
  uint uVar13;
  longlong in_RDX;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong unaff_RSI;
  ulonglong uVar16;
  longlong unaff_RDI;
  ulonglong uVar17;
  longlong in_R8;
  longlong in_R9;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar52;
  float unaff_XMM7_Da;
  float fVar53;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  uint local_res20;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  int local_110;
  longlong local_d8;
  longlong local_d0;
  float local_c0;
  float local_98;
  float local_48;
  float local_38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  
  FUN_012c2ab0();
  FUN_01430210();
  if ((local_120 == '\0') && (local_128 != 0)) {
    FUN_00d50b00();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  fVar27 = DAT_02390124;
  uVar15 = (ulonglong)local_res20;
  fVar45 = param_1 / unaff_XMM6_Da;
  fVar50 = DAT_02390124 / fVar45;
  uVar3 = FUN_00e7d780((float)(int)local_res20 * fVar50);
  uVar21 = 0x3ff;
  if ((int)uVar3 < 0x3ff) {
    uVar21 = uVar3;
  }
  bVar1 = in_XMM5_Da < DAT_023b36e4;
  fVar24 = in_XMM4_Da * param_1;
  bVar2 = DAT_023b36e8 < in_XMM5_Da;
  if (DAT_02394274 <= param_3 - param_2) {
    local_48 = (float)FUN_00e84a50((fVar24 - param_2) / (param_3 - param_2));
    local_38 = DAT_02390124 - local_48;
  }
  else {
    local_48 = DAT_0239011c;
    local_38 = DAT_0239011c;
  }
  local_c0 = DAT_02390124;
  if (param_13 == 0 || param_10 <= 0.0) {
LAB_012bdca4:
    if (in_RCX != 0) goto LAB_012bdcb1;
LAB_012bdd2a:
    local_d0 = 0;
  }
  else {
    ___bzero();
    ___bzero();
    auVar29 = ZEXT416((uint)DAT_02390124);
    if (0 < (int)uVar21) {
      fVar25 = _DAT_023b294c * param_11 * DAT_0239011c;
      uVar3 = 1;
      do {
        uVar19 = 0x1ff;
        if (uVar3 < 0x1ff) {
          uVar19 = (ulonglong)uVar3;
        }
        iVar4 = FUN_00e7d780();
        auVar29 = ZEXT416((uint)DAT_02390124);
        if ((int)(local_res20 - 1) <= iVar4) break;
        fVar51 = (float)(int)uVar3 * fVar45 - (float)iVar4;
        fVar46 = (*(float *)(param_15 + uVar19 * 4) * local_48 +
                 *(float *)(param_14 + uVar19 * 4) * local_38 + *(float *)(param_13 + uVar19 * 4)) *
                 fVar25;
        lVar10 = (longlong)iVar4;
        *(float *)(local_res8 + lVar10 * 4) =
             (DAT_02390124 - fVar51) * fVar46 + *(float *)(local_res8 + lVar10 * 4);
        *(float *)(local_res8 + 4 + lVar10 * 4) =
             fVar46 * fVar51 + *(float *)(local_res8 + 4 + lVar10 * 4);
        bVar23 = uVar3 != uVar21;
        uVar3 = uVar3 + 1;
      } while (bVar23);
    }
    fVar25 = DAT_02411280;
    uVar3 = _DAT_02390140;
    fVar46 = auVar29._0_4_;
    auVar30._4_12_ = auVar29._4_12_;
    if (param_10 * param_10 <= fVar46) {
      auVar29._4_12_ = auVar30._4_12_;
      auVar29._0_4_ = param_10 * param_10;
    }
    local_c0 = fVar46 - auVar29._0_4_;
    uVar5 = *(uint *)(unaff_RDI + 0x160);
    if (0 < (int)uVar5) {
      lVar10 = *(longlong *)(unaff_RDI + 0x1e8);
      uVar19 = 0;
      do {
        if (0 < (int)local_res20) {
          lVar12 = *(longlong *)(lVar10 + uVar19 * 8);
          uVar17 = 0;
          do {
            pfVar11 = (float *)(lVar12 + uVar17 * 8);
            fVar51 = *pfVar11;
            fVar47 = pfVar11[1];
            fVar53 = (float)((uint)fVar47 & uVar3);
            if ((fVar51 != 0.0) || (fVar52 = fVar53, NAN(fVar51))) {
              fVar52 = (float)((uint)fVar51 & uVar3);
              if ((fVar47 != 0.0) || (NAN(fVar47))) {
                if (fVar52 <= fVar53) {
                  fVar52 = SQRT((fVar52 / fVar53) * (fVar52 / fVar53) + fVar46);
                }
                else {
                  fVar53 = SQRT((fVar53 / fVar52) * (fVar53 / fVar52) + fVar46);
                }
                fVar52 = fVar52 * fVar53;
              }
            }
            fVar53 = *(float *)(local_res8 + uVar17 * 4) * auVar29._0_4_ + local_c0 * fVar52;
            if (fVar52 <= fVar25) {
              *(float *)(lVar12 + uVar17 * 8) = fVar53;
              *(undefined4 *)(lVar12 + 4 + uVar17 * 8) = 0;
            }
            else {
              *(float *)(lVar12 + uVar17 * 8) = fVar51 * (fVar53 / fVar52);
              *(float *)(lVar12 + 4 + uVar17 * 8) = (fVar53 / fVar52) * fVar47;
            }
            *(float *)(unaff_RSI + uVar17 * 4) = fVar53 + *(float *)(unaff_RSI + uVar17 * 4);
            uVar17 = uVar17 + 1;
          } while (uVar15 != uVar17);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar5);
      if (1 < (int)uVar5) {
        auVar30._0_4_ = fVar46 / (float)(int)uVar5;
        (**(code **)(DAT_02786500 + 0x20))(auVar30._0_8_);
        goto LAB_012bdca4;
      }
    }
    if (in_RCX == 0) goto LAB_012bdd2a;
LAB_012bdcb1:
    local_d0 = in_RCX;
    if (in_R8 != 0 || in_R9 != 0) {
      local_d0 = local_res18;
      if ((in_R8 == 0) || (in_R9 == 0)) {
        if (in_R8 == 0) {
          if (-1 < (int)uVar21) {
            if (in_R9 == 0) {
              uVar19 = 0;
              do {
                uVar17 = 0x1ff;
                if ((uint)uVar19 < 0x1ff) {
                  uVar17 = uVar19;
                }
                fVar25 = *(float *)(in_RCX + uVar17 * 4);
                uVar3 = -(uint)(fVar25 <= DAT_02394270);
                uVar26 = _powf(uVar3 & DAT_023b3e04 | ~uVar3 & (uint)SQRT(fVar25) & _DAT_02390140);
                *(undefined4 *)(local_res18 + uVar17 * 4) = uVar26;
                uVar3 = (uint)uVar19 + 1;
                uVar19 = (ulonglong)uVar3;
              } while (uVar21 + 1 != uVar3);
            }
            else {
              uVar19 = 0;
              do {
                uVar17 = 0x1ff;
                if ((uint)uVar19 < 0x1ff) {
                  uVar17 = uVar19;
                }
                fVar25 = *(float *)(in_RCX + uVar17 * 4);
                uVar5 = (uint)SQRT(fVar25) & _DAT_02390140;
                uVar3 = -(uint)(fVar25 <= DAT_02394270);
                uVar9 = uVar3 & DAT_023b3e04;
                auVar41._0_8_ = _powf();
                auVar41._8_8_ = extraout_XMM0_Qb_04;
                auVar42._4_12_ = auVar41._4_12_;
                auVar42._0_4_ = (float)auVar41._0_8_ * (float)(uVar9 | ~uVar3 & uVar5);
                uVar26 = _powf(auVar42._0_8_);
                *(undefined4 *)(local_res18 + uVar17 * 4) = uVar26;
                uVar3 = (uint)uVar19 + 1;
                uVar19 = (ulonglong)uVar3;
              } while (uVar21 + 1 != uVar3);
            }
          }
        }
        else {
          fVar46 = DAT_0239011c;
          fVar25 = local_38;
          if (-1 < (int)uVar21) goto LAB_012bdd61;
        }
      }
      else if (-1 < (int)uVar21) {
        fVar46 = DAT_024229e8;
        fVar25 = local_48 + local_38;
LAB_012bdd61:
        fVar25 = DAT_02390124 / (fVar25 + fVar46);
        if (in_R9 == 0) {
          if (uVar21 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0;
            do {
              uVar19 = 0x1ff;
              if (uVar3 < 0x1ff) {
                uVar19 = (ulonglong)uVar3;
              }
              fVar46 = (float)_powf();
              auVar37._0_8_ = _powf();
              auVar37._8_8_ = extraout_XMM0_Qb_02;
              auVar38._4_12_ = auVar37._4_12_;
              auVar38._0_4_ = (float)auVar37._0_8_ * fVar46;
              uVar26 = _powf(auVar38._0_8_,fVar25);
              *(undefined4 *)(local_res18 + uVar19 * 4) = uVar26;
              uVar5 = uVar3 + 1;
              if (0x1fe < uVar3 + 1) {
                uVar5 = 0x1ff;
              }
              fVar46 = (float)_powf();
              auVar39._0_8_ = _powf();
              auVar39._8_8_ = extraout_XMM0_Qb_03;
              auVar40._4_12_ = auVar39._4_12_;
              auVar40._0_4_ = (float)auVar39._0_8_ * fVar46;
              uVar26 = _powf(auVar40._0_8_,fVar25);
              *(undefined4 *)(local_res18 + (ulonglong)uVar5 * 4) = uVar26;
              uVar3 = uVar3 + 2;
            } while ((uVar21 + 1 & 0xfffffffe) != uVar3);
            local_d0 = local_res18;
            if ((uVar21 + 1 & 1) == 0) goto LAB_012bde37;
          }
          uVar19 = 0x1ff;
          if (uVar3 < 0x1ff) {
            uVar19 = (ulonglong)uVar3;
          }
          fVar25 = (float)_powf();
          auVar43._0_8_ = _powf();
          auVar43._8_8_ = extraout_XMM0_Qb_05;
          auVar44._4_12_ = auVar43._4_12_;
          auVar44._0_4_ = (float)auVar43._0_8_ * fVar25;
          uVar26 = _powf(auVar44._0_8_);
          *(undefined4 *)(local_res18 + uVar19 * 4) = uVar26;
          local_d0 = local_res18;
        }
        else {
          uVar19 = 0;
          do {
            uVar17 = 0x1ff;
            if ((uint)uVar19 < 0x1ff) {
              uVar17 = uVar19;
            }
            fVar25 = (float)_powf();
            fVar46 = (float)_powf();
            auVar31._0_8_ = _powf();
            auVar31._8_8_ = extraout_XMM0_Qb;
            auVar32._4_12_ = auVar31._4_12_;
            auVar32._0_4_ = (float)auVar31._0_8_ * fVar46 * fVar25;
            uVar26 = _powf(auVar32._0_8_);
            *(undefined4 *)(local_res18 + uVar17 * 4) = uVar26;
            uVar3 = (uint)uVar19 + 1;
            uVar19 = (ulonglong)uVar3;
          } while (uVar21 + 1 != uVar3);
        }
      }
    }
  }
LAB_012bde37:
  fVar27 = fVar27 / unaff_XMM7_Da;
  if (((param_7 != 0) || (param_8 != 0)) || (lVar10 = param_6, param_9 != (float *)0x0)) {
    if ((param_6 == 0 || param_7 == 0) || (param_8 == 0)) {
      fVar25 = DAT_0239011c;
      if (((param_6 != 0) && (fVar46 = local_48, param_8 != 0)) ||
         (fVar46 = local_38, param_6 != 0 && param_7 != 0)) goto LAB_012bdefd;
      fVar25 = DAT_02390124;
      if ((param_7 == 0) || (param_8 == 0)) {
        if (param_7 == 0) {
          if (param_8 != 0) {
            fVar25 = DAT_02390124 / local_48;
          }
          goto LAB_012bdf12;
        }
        goto LAB_012bdf0e;
      }
    }
    else {
      fVar25 = DAT_024229e8;
      fVar46 = local_48 + local_38;
LAB_012bdefd:
      fVar46 = fVar46 + fVar25;
LAB_012bdf0e:
      fVar25 = DAT_02390124 / fVar46;
    }
LAB_012bdf12:
    lVar10 = local_res18 + (longlong)(*(int *)(unaff_RDI + 0x15c) / 2) * 4;
    if (-1 < (int)uVar21) {
      if (param_6 == 0) {
        if (param_7 == 0) {
          if (param_8 == 0) {
            if (param_9 == (float *)0x0) {
              uVar3 = uVar21 + 1 & 3;
              uVar5 = 0;
              if (2 < uVar21) {
                uVar5 = 0;
                do {
                  uVar19 = 0x1ff;
                  if (uVar5 < 0x1ff) {
                    uVar19 = (ulonglong)uVar5;
                  }
                  *(undefined4 *)(lVar10 + uVar19 * 4) = 0x3f800000;
                  uVar9 = uVar5 + 1;
                  if (0x1fe < uVar5 + 1) {
                    uVar9 = 0x1ff;
                  }
                  *(undefined4 *)(lVar10 + (ulonglong)uVar9 * 4) = 0x3f800000;
                  uVar9 = uVar5 + 2;
                  if (0x1fe < uVar5 + 2) {
                    uVar9 = 0x1ff;
                  }
                  uVar19 = (ulonglong)(uVar5 + 3);
                  if (0x1fe < uVar5 + 3) {
                    uVar19 = 0x1ff;
                  }
                  *(undefined4 *)(lVar10 + (ulonglong)uVar9 * 4) = 0x3f800000;
                  *(undefined4 *)(lVar10 + uVar19 * 4) = 0x3f800000;
                  uVar5 = uVar5 + 4;
                } while ((uVar21 + 1 & 0xfffffffc) != uVar5);
              }
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                uVar19 = 0x1ff;
                if (uVar5 < 0x1ff) {
                  uVar19 = (ulonglong)uVar5;
                }
                *(undefined4 *)(lVar10 + uVar19 * 4) = 0x3f800000;
                uVar5 = uVar5 + 1;
              }
            }
            else {
              uVar3 = 0;
              do {
                uVar19 = 0x1ff;
                if (uVar3 < 0x1ff) {
                  uVar19 = (ulonglong)uVar3;
                }
                uVar5 = FUN_00e7d780();
                if ((int)uVar5 < 0) {
                  fVar25 = *param_9;
                }
                else if ((int)uVar5 < 0x7ff) {
                  fVar25 = (float)(int)uVar3 * param_1 * fVar27 - (float)(int)uVar5;
                  fVar25 = fVar25 * param_9[(ulonglong)uVar5 + 1] +
                           (DAT_02390124 - fVar25) * param_9[uVar5];
                }
                else {
                  fVar25 = param_9[0x7ff];
                }
                *(float *)(lVar10 + uVar19 * 4) = fVar25;
                uVar3 = uVar3 + 1;
              } while (uVar21 + 1 != uVar3);
            }
          }
          else {
            uVar19 = 0;
            do {
              uVar3 = (uint)uVar19;
              uVar17 = 0x1ff;
              if (uVar3 < 0x1ff) {
                uVar17 = uVar19;
              }
              _powf();
              fVar25 = (float)_powf();
              if (param_9 != (float *)0x0) {
                uVar5 = FUN_00e7d780();
                if ((int)uVar5 < 0) {
                  fVar46 = *param_9;
                }
                else if ((int)uVar5 < 0x7ff) {
                  fVar46 = (float)(int)uVar3 * param_1 * fVar27 - (float)(int)uVar5;
                  fVar46 = fVar46 * param_9[(ulonglong)uVar5 + 1] +
                           (DAT_02390124 - fVar46) * param_9[uVar5];
                }
                else {
                  fVar46 = param_9[0x7ff];
                }
                fVar25 = fVar25 * fVar46;
              }
              *(float *)(lVar10 + uVar17 * 4) = fVar25;
              uVar19 = (ulonglong)(uVar3 + 1);
            } while (uVar21 + 1 != uVar3 + 1);
          }
        }
        else if (param_8 == 0) {
          if (param_9 == (float *)0x0) {
            uVar3 = uVar21 + 1;
            if (uVar21 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = 0;
              do {
                uVar19 = 0x1ff;
                if (uVar5 < 0x1ff) {
                  uVar19 = (ulonglong)uVar5;
                }
                uVar28 = _powf();
                uVar26 = _powf(uVar28,fVar25);
                *(undefined4 *)(lVar10 + uVar19 * 4) = uVar26;
                uVar9 = uVar5 + 1;
                if (0x1fe < uVar5 + 1) {
                  uVar9 = 0x1ff;
                }
                _powf();
                uVar26 = _powf();
                *(undefined4 *)(lVar10 + (ulonglong)uVar9 * 4) = uVar26;
                uVar5 = uVar5 + 2;
              } while ((uVar3 & 0xfffffffe) != uVar5);
            }
            if ((uVar3 & 1) != 0) {
              uVar19 = 0x1ff;
              if (uVar5 < 0x1ff) {
                uVar19 = (ulonglong)uVar5;
              }
              _powf(uVar3,local_38);
              uVar26 = _powf();
              *(undefined4 *)(lVar10 + uVar19 * 4) = uVar26;
            }
          }
          else {
            uVar3 = 0;
            do {
              uVar19 = 0x1ff;
              if (uVar3 < 0x1ff) {
                uVar19 = (ulonglong)uVar3;
              }
              uVar28 = _powf();
              fVar46 = (float)_powf(uVar28,fVar25);
              uVar5 = FUN_00e7d780();
              if ((int)uVar5 < 0) {
                fVar51 = *param_9;
              }
              else if ((int)uVar5 < 0x7ff) {
                fVar51 = (float)(int)uVar3 * param_1 * fVar27 - (float)(int)uVar5;
                fVar51 = fVar51 * param_9[(ulonglong)uVar5 + 1] +
                         (DAT_02390124 - fVar51) * param_9[uVar5];
              }
              else {
                fVar51 = param_9[0x7ff];
              }
              *(float *)(lVar10 + uVar19 * 4) = fVar46 * fVar51;
              uVar3 = uVar3 + 1;
            } while (uVar21 + 1 != uVar3);
          }
        }
        else {
          uVar19 = 0;
          do {
            uVar3 = (uint)uVar19;
            uVar17 = 0x1ff;
            if (uVar3 < 0x1ff) {
              uVar17 = uVar19;
            }
            fVar25 = (float)_powf();
            auVar35._0_8_ = _powf();
            auVar35._8_8_ = extraout_XMM0_Qb_01;
            auVar36._4_12_ = auVar35._4_12_;
            auVar36._0_4_ = (float)auVar35._0_8_ * fVar25;
            fVar25 = (float)_powf(auVar36._0_8_);
            if (param_9 != (float *)0x0) {
              uVar5 = FUN_00e7d780();
              if ((int)uVar5 < 0) {
                fVar46 = *param_9;
              }
              else if ((int)uVar5 < 0x7ff) {
                fVar46 = (float)(int)uVar3 * param_1 * fVar27 - (float)(int)uVar5;
                fVar46 = fVar46 * param_9[(ulonglong)uVar5 + 1] +
                         (DAT_02390124 - fVar46) * param_9[uVar5];
              }
              else {
                fVar46 = param_9[0x7ff];
              }
              fVar25 = fVar25 * fVar46;
            }
            *(float *)(lVar10 + uVar17 * 4) = fVar25;
            uVar19 = (ulonglong)(uVar3 + 1);
          } while (uVar21 + 1 != uVar3 + 1);
        }
      }
      else {
        uVar3 = uVar21 + 1;
        uVar19 = 0;
        if (param_7 == 0) {
          if (param_8 == 0) {
            do {
              uVar5 = (uint)uVar19;
              uVar17 = 0x1ff;
              if (uVar5 < 0x1ff) {
                uVar17 = uVar19;
              }
              _powf();
              fVar25 = (float)_powf();
              if (param_9 != (float *)0x0) {
                uVar9 = FUN_00e7d780();
                if ((int)uVar9 < 0) {
                  fVar46 = *param_9;
                }
                else if ((int)uVar9 < 0x7ff) {
                  fVar46 = (float)(int)uVar5 * param_1 * fVar27 - (float)(int)uVar9;
                  fVar46 = fVar46 * param_9[(ulonglong)uVar9 + 1] +
                           (DAT_02390124 - fVar46) * param_9[uVar9];
                }
                else {
                  fVar46 = param_9[0x7ff];
                }
                fVar25 = fVar25 * fVar46;
              }
              *(float *)(lVar10 + uVar17 * 4) = fVar25;
              uVar19 = (ulonglong)(uVar5 + 1);
            } while (uVar3 != uVar5 + 1);
          }
          else {
            do {
              uVar5 = (uint)uVar19;
              uVar17 = 0x1ff;
              if (uVar5 < 0x1ff) {
                uVar17 = uVar19;
              }
              fVar25 = (float)_powf();
              auVar33._0_8_ = _powf();
              auVar33._8_8_ = extraout_XMM0_Qb_00;
              auVar34._4_12_ = auVar33._4_12_;
              auVar34._0_4_ = (float)auVar33._0_8_ * fVar25;
              fVar25 = (float)_powf(auVar34._0_8_);
              if (param_9 != (float *)0x0) {
                uVar9 = FUN_00e7d780();
                if ((int)uVar9 < 0) {
                  fVar46 = *param_9;
                }
                else if ((int)uVar9 < 0x7ff) {
                  fVar46 = (float)(int)uVar5 * param_1 * fVar27 - (float)(int)uVar9;
                  fVar46 = fVar46 * param_9[(ulonglong)uVar9 + 1] +
                           (DAT_02390124 - fVar46) * param_9[uVar9];
                }
                else {
                  fVar46 = param_9[0x7ff];
                }
                fVar25 = fVar25 * fVar46;
              }
              *(float *)(lVar10 + uVar17 * 4) = fVar25;
              uVar19 = (ulonglong)(uVar5 + 1);
            } while (uVar3 != uVar5 + 1);
          }
        }
        else {
          do {
            uVar5 = (uint)uVar19;
            uVar17 = 0x1ff;
            if (uVar5 < 0x1ff) {
              uVar17 = uVar19;
            }
            _powf();
            _powf();
            if (param_8 != 0) {
              _powf();
            }
            fVar25 = (float)_powf();
            if (param_9 != (float *)0x0) {
              uVar9 = FUN_00e7d780();
              if ((int)uVar9 < 0) {
                fVar46 = *param_9;
              }
              else if ((int)uVar9 < 0x7ff) {
                fVar46 = (float)(int)uVar5 * param_1 * fVar27 - (float)(int)uVar9;
                fVar46 = fVar46 * param_9[(ulonglong)uVar9 + 1] +
                         (DAT_02390124 - fVar46) * param_9[uVar9];
              }
              else {
                fVar46 = param_9[0x7ff];
              }
              fVar25 = fVar25 * fVar46;
            }
            *(float *)(lVar10 + uVar17 * 4) = fVar25;
            uVar19 = (ulonglong)(uVar5 + 1);
          } while (uVar3 != uVar5 + 1);
        }
      }
    }
  }
  iVar4 = FUN_00e7d780();
  fVar25 = 0.0;
  if (1 < (int)local_res20) {
    uVar19 = (ulonglong)((uint)(uVar15 - 1) & 7);
    if (uVar15 - 2 < 7) {
      fVar25 = 0.0;
      lVar12 = 1;
    }
    else {
      fVar25 = 0.0;
      uVar17 = 0;
      do {
        uVar20 = uVar17;
        fVar25 = fVar25 + *(float *)(unaff_RSI + 4 + uVar20 * 4) +
                 *(float *)(unaff_RSI + 8 + uVar20 * 4) + *(float *)(unaff_RSI + 0xc + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x10 + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x14 + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x18 + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x1c + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x20 + uVar20 * 4);
        uVar17 = uVar20 + 8;
      } while ((uVar15 - 1 & 0xfffffffffffffff8) != uVar20 + 8);
      lVar12 = uVar20 + 9;
    }
    if (uVar19 != 0) {
      uVar17 = 0;
      do {
        fVar25 = fVar25 + *(float *)(unaff_RSI + lVar12 * 4 + uVar17 * 4);
        uVar17 = uVar17 + 1;
      } while (uVar19 != uVar17);
    }
  }
  local_d8 = 0;
  if (((param_12 != 0.0) || (NAN(param_12))) && (param_16 != 0)) {
    if (param_12 <= 0.0) {
      param_12 = param_12 * param_12 + param_12 * param_12;
      if (DAT_02390124 < param_12) {
        param_12 = param_12 * param_12;
      }
    }
    else {
      param_12 = (float)(_DAT_023945e0 ^ (uint)param_12) * param_12;
      param_12 = param_12 + param_12;
    }
    lVar12 = (longlong)(*(int *)(unaff_RDI + 0x15c) / 2);
    local_d8 = local_res10 + lVar12 * 4;
    ___bzero();
    *(undefined4 *)(local_res10 + lVar12 * 4) = 0;
    if (0 < (int)uVar21) {
      uVar3 = 1;
      do {
        uVar19 = 0x1ff;
        if (uVar3 < 0x1ff) {
          uVar19 = (ulonglong)uVar3;
        }
        uVar5 = FUN_00e7d780((float)(int)uVar3 * param_1 * fVar27);
        uVar26 = 0;
        if (uVar5 < 0x800) {
          uVar26 = *(undefined4 *)(param_16 + (ulonglong)uVar5 * 4);
        }
        *(undefined4 *)(local_d8 + uVar19 * 4) = uVar26;
        bVar23 = uVar3 != uVar21;
        uVar3 = uVar3 + 1;
      } while (bVar23);
      uVar3 = uVar21 & 3;
      if (uVar21 - 1 < 3) {
        fVar46 = 0.0;
        uVar17 = 1;
      }
      else {
        fVar46 = 0.0;
        uVar19 = 1;
        do {
          uVar5 = (uint)uVar19;
          uVar17 = 0x1ff;
          if (uVar5 < 0x1ff) {
            uVar17 = uVar19;
          }
          uVar20 = 0x1fe;
          if (uVar5 < 0x1fe) {
            uVar20 = uVar19;
          }
          uVar16 = 0x1fd;
          if (uVar5 < 0x1fd) {
            uVar16 = uVar19;
          }
          uVar14 = 0x1fc;
          if (uVar5 < 0x1fc) {
            uVar14 = uVar19;
          }
          fVar46 = fVar46 + *(float *)(local_d8 + uVar17 * 4) +
                   *(float *)(local_d8 + 4 + uVar20 * 4) + *(float *)(local_d8 + 8 + uVar16 * 4) +
                   *(float *)(local_d8 + 0xc + uVar14 * 4);
          uVar17 = (ulonglong)(uVar5 + 4);
          uVar19 = (ulonglong)(uVar5 + 4);
        } while (uVar5 - (uVar21 & 0xfffffffc) != -3);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar19 = 0x1ff;
        if ((uint)uVar17 < 0x1ff) {
          uVar19 = uVar17;
        }
        fVar46 = fVar46 + *(float *)(local_d8 + uVar19 * 4);
        uVar17 = (ulonglong)((uint)uVar17 + 1);
      }
      if (DAT_02394274 <= fVar46) {
        (**(code **)(DAT_02786500 + 0x20))(param_11 / fVar46);
      }
    }
    fVar46 = DAT_0240d16c;
    if (-1 < (int)uVar21) {
      if (uVar21 == 0) {
        uVar3 = 0;
      }
      else {
        uVar19 = 0;
        do {
          uVar5 = (uint)uVar19;
          uVar17 = 0x1ff;
          if (uVar5 < 0x1ff) {
            uVar17 = uVar19;
          }
          pfVar11 = (float *)(local_d8 + uVar17 * 4);
          if (*pfVar11 <= fVar46 && fVar46 != *pfVar11) {
            *(undefined4 *)(local_d8 + uVar17 * 4) = 0x33d6bf95;
          }
          uVar19 = 0x1ff;
          if (uVar5 + 1 < 0x1ff) {
            uVar19 = (ulonglong)(uVar5 + 1);
          }
          pfVar11 = (float *)(local_d8 + uVar19 * 4);
          if (*pfVar11 <= fVar46 && fVar46 != *pfVar11) {
            *(undefined4 *)(local_d8 + uVar19 * 4) = 0x33d6bf95;
          }
          uVar3 = uVar5 + 2;
          uVar19 = (ulonglong)(uVar5 + 2);
        } while ((uVar21 + 1 & 0xfffffffe) != uVar3);
      }
      if ((uVar21 + 1 & 1) != 0) {
        uVar19 = 0x1ff;
        if (uVar3 < 0x1ff) {
          uVar19 = (ulonglong)uVar3;
        }
        pfVar11 = (float *)(local_d8 + uVar19 * 4);
        if (*pfVar11 <= DAT_0240d16c && DAT_0240d16c != *pfVar11) {
          *(undefined4 *)(local_d8 + uVar19 * 4) = 0x33d6bf95;
        }
      }
    }
  }
  ___bzero();
  if (-1 < (int)uVar21) {
    uVar3 = iVar4 * 2 + 1;
    fVar51 = DAT_02390124 - (float)(_DAT_02390140 & (uint)param_12);
    fVar46 = 0.0;
    if (0.0 <= fVar51) {
      fVar46 = fVar51;
    }
    uVar19 = (ulonglong)uVar3;
    iVar6 = -iVar4;
    uVar5 = 0;
    do {
      uVar9 = 0x1ff;
      if (uVar5 < 0x1ff) {
        uVar9 = uVar5;
      }
      uVar17 = (ulonglong)uVar9;
      fVar51 = DAT_02390124;
      if (local_d0 != 0) {
        fVar51 = *(float *)(local_d0 + uVar17 * 4);
      }
      fVar47 = (float)(int)uVar5;
      iVar7 = FUN_00e7d780();
      iVar8 = FUN_00e7d780();
      if ((int)uVar3 < 1) {
        local_98 = 0.0;
        fVar53 = 0.0;
      }
      else {
        iVar22 = (iVar4 + iVar7) - iVar8;
        fVar53 = 0.0;
        uVar20 = 0;
        local_98 = 0.0;
        do {
          uVar16 = (uint)(iVar6 + iVar8) + uVar20;
          fVar52 = 0.0;
          iVar18 = (int)uVar16;
          if ((0 < iVar18) && (fVar52 = 0.0, iVar18 < (int)local_res20)) {
            fVar48 = (float)((uint)((float)iVar18 - fVar45 * fVar47) & _DAT_02390140);
            fVar52 = 0.0;
            if (fVar48 < fVar45) {
              fVar52 = (float)FUN_00e84a50(DAT_02390124 - fVar48 * fVar50);
              fVar52 = fVar52 * *(float *)(unaff_RSI + (uVar16 & 0xffffffff) * 4);
            }
          }
          fVar48 = fVar53 + fVar52;
          if (iVar22 + 1 != (int)uVar20) {
            fVar48 = fVar53;
          }
          fVar53 = fVar53 + fVar52;
          if (iVar22 != (int)uVar20) {
            fVar53 = fVar48;
          }
          *(float *)(local_res10 + uVar20 * 4) = fVar52;
          local_98 = local_98 + fVar52;
          uVar20 = uVar20 + 1;
        } while (uVar19 != uVar20);
      }
      if (param_17 == (float *)0x0) {
        if ((param_23 != DAT_02390124) || (NAN(param_23) || NAN(DAT_02390124))) goto LAB_012bf022;
      }
      else {
        uVar9 = FUN_00e7d780();
        if ((int)uVar9 < 0) {
          fVar52 = *param_17;
        }
        else if ((int)uVar9 < 0x7ff) {
          fVar52 = fVar24 * fVar47 * fVar27 - (float)(int)uVar9;
          fVar52 = fVar52 * param_17[(ulonglong)uVar9 + 1] +
                   (DAT_02390124 - fVar52) * param_17[uVar9];
        }
        else {
          fVar52 = param_17[0x7ff];
        }
        fVar51 = fVar51 * fVar52;
        if ((param_23 != DAT_02390124) || (NAN(param_23) || NAN(DAT_02390124))) {
LAB_012bf022:
          fVar51 = (float)_powf();
        }
      }
      if (((param_22 != DAT_02390124) || (NAN(param_22) || NAN(DAT_02390124))) && (uVar5 != 0)) {
        fVar52 = (float)_powf();
        fVar51 = fVar51 * fVar52 * fVar47;
      }
      if (DAT_02394274 <= local_98 &&
          ((bVar1 || bVar2) ||
          (((param_6 != 0 || param_7 != 0) || param_8 != 0) || param_9 != (float *)0x0))) {
        fVar52 = in_XMM5_Da;
        if (lVar10 != 0) {
          fVar52 = *(float *)(lVar10 + uVar17 * 4) * in_XMM5_Da;
        }
        iVar22 = FUN_00e7d780();
        if ((int)uVar3 < 1) {
          fVar48 = 0.0;
        }
        else {
          uVar9 = iVar22 + iVar6;
          fVar48 = 0.0;
          uVar20 = uVar19;
          do {
            if (((0 < (int)uVar9) && ((int)uVar9 < (int)local_res20)) &&
               (fVar49 = (float)((uint)((float)(int)uVar9 - fVar45 * fVar47 * fVar52) &
                                _DAT_02390140), fVar49 < fVar45)) {
              fVar49 = (float)FUN_00e84a50(DAT_02390124 - fVar49 * fVar50);
              fVar48 = fVar48 + fVar49 * *(float *)(unaff_RSI + (ulonglong)uVar9 * 4);
            }
            uVar9 = uVar9 + 1;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        fVar51 = fVar51 * (fVar48 / local_98);
      }
      fVar52 = fVar51;
      if (local_d8 != 0) {
        if (uVar5 == 0) {
          fVar52 = fVar51 * fVar46;
        }
        else {
          fVar52 = 0.0;
          if (_DAT_0240d170 <= local_98) {
            fVar52 = *(float *)(local_d8 + uVar17 * 4) / local_98;
            fVar52 = (float)_powf((-(uint)(fVar52 < DAT_02394274) & DAT_0239425c |
                                  ~-(uint)(fVar52 < DAT_02394274) & (uint)fVar52) &
                                  -(uint)(param_12 <= 0.0) |
                                  ~-(uint)(param_12 <= 0.0) & (uint)fVar52,param_12);
            fVar52 = fVar51 * fVar52;
          }
        }
      }
      if (0 < (int)uVar3) {
        if (param_13 == 0 || param_10 <= 0.0) {
          if (iVar4 == 0) {
            lVar12 = 0;
          }
          else {
            uVar9 = iVar8 + iVar6;
            lVar12 = 0;
            do {
              if ((-1 < (int)uVar9) && ((int)uVar9 < (int)local_res20)) {
                *(float *)(local_res8 + (ulonglong)uVar9 * 4) =
                     *(float *)(local_res10 + lVar12 * 4) * fVar52 +
                     *(float *)(local_res8 + (ulonglong)uVar9 * 4);
              }
              uVar13 = uVar9 + 1;
              if ((-1 < (int)uVar13) && ((int)uVar13 < (int)local_res20)) {
                *(float *)(local_res8 + (ulonglong)uVar13 * 4) =
                     *(float *)(local_res10 + 4 + lVar12 * 4) * fVar52 +
                     *(float *)(local_res8 + (ulonglong)uVar13 * 4);
              }
              lVar12 = lVar12 + 2;
              uVar9 = uVar9 + 2;
            } while (uVar19 - 1 != lVar12);
          }
          uVar9 = (iVar8 - iVar4) + (int)lVar12;
          if ((-1 < (int)uVar9) && ((int)uVar9 < (int)local_res20)) {
            *(float *)(local_res8 + (ulonglong)uVar9 * 4) =
                 *(float *)(local_res10 + lVar12 * 4) * fVar52 +
                 *(float *)(local_res8 + (ulonglong)uVar9 * 4);
          }
        }
        else {
          iVar7 = (iVar7 + iVar4) - iVar8;
          uVar20 = 0;
          do {
            uVar16 = (uint)(iVar6 + iVar8) + uVar20;
            iVar22 = (int)uVar16;
            if ((-1 < iVar22) && (iVar22 < (int)local_res20)) {
              fVar51 = *(float *)(local_res10 + uVar20 * 4) * fVar52;
              fVar48 = fVar51;
              if (iVar7 + 1 != (int)uVar20) {
                fVar48 = local_c0 * fVar51;
              }
              if (iVar7 != (int)uVar20) {
                fVar51 = fVar48;
              }
              uVar16 = uVar16 & 0xffffffff;
              *(float *)(local_res8 + uVar16 * 4) = fVar51 + *(float *)(local_res8 + uVar16 * 4);
            }
            uVar20 = uVar20 + 1;
          } while (uVar19 != uVar20);
        }
      }
      if ((local_128 != 0) && (uVar5 != 0)) {
        local_110 = -1;
        fVar51 = (float)_logf(fVar47 * fVar24 * DAT_02394204);
        fVar51 = (fVar51 * DAT_02394208) / DAT_023908e0 + DAT_0240d174;
        local_98 = local_98 * fVar52;
        while (local_110 = local_110 + 1, local_110 < *(int *)(local_128 + 0xc)) {
          FUN_01414880();
          if ((local_130 == '\0') && (local_138 != 0)) {
            FUN_00d50b00();
          }
          iVar7 = FUN_01414ae0();
          if (iVar7 != 3) {
            pfVar11 = (float *)(uVar17 * 4 + *(longlong *)(local_138 + 0x10));
            fVar47 = fVar53 * fVar52;
LAB_012bf498:
            *pfVar11 = fVar47 + *pfVar11;
            goto LAB_012bf4a0;
          }
          fVar47 = fVar51;
          if (param_18 != (float *)0x0) {
            uVar9 = FUN_00e7d780();
            if ((int)uVar9 < 0) {
              fVar47 = *param_18;
            }
            else if ((int)uVar9 < 0x65) {
              fVar47 = (param_18[(ulonglong)uVar9 + 1] - param_18[uVar9]) *
                       (fVar51 - (float)(int)uVar9) + param_18[uVar9];
            }
            else {
              fVar47 = param_18[0x65];
            }
            fVar47 = fVar47 * DAT_0240d178 + fVar51;
          }
          uVar9 = FUN_00e7d780();
          if (-1 < (int)uVar9) {
            if ((int)uVar9 < 0x65) {
              uVar20 = (ulonglong)uVar9;
              lVar12 = *(longlong *)(local_138 + 0x10);
              *(float *)(lVar12 + uVar20 * 4) =
                   (DAT_02390124 - (fVar47 - (float)(int)uVar9)) * local_98 +
                   *(float *)(lVar12 + uVar20 * 4);
              pfVar11 = (float *)(lVar12 + uVar20 * 4 + 4);
              fVar47 = (fVar47 - (float)(int)uVar9) * local_98;
            }
            else {
              pfVar11 = (float *)(*(longlong *)(local_138 + 0x10) + 0x194);
              fVar47 = local_98;
            }
            goto LAB_012bf498;
          }
          if (local_138 != 0) {
LAB_012bf4a0:
            FUN_00d50b20();
          }
        }
        FUN_012c2730();
      }
      bVar23 = uVar5 != uVar21;
      uVar5 = uVar5 + 1;
    } while (bVar23);
  }
  fVar27 = 0.0;
  if (1 < (int)local_res20) {
    uVar19 = (ulonglong)((uint)(uVar15 - 1) & 7);
    if (uVar15 - 2 < 7) {
      fVar27 = 0.0;
      lVar10 = 1;
    }
    else {
      fVar27 = 0.0;
      uVar17 = 0;
      do {
        uVar20 = uVar17;
        fVar27 = fVar27 + *(float *)(local_res8 + 4 + uVar20 * 4) +
                 *(float *)(local_res8 + 8 + uVar20 * 4) + *(float *)(local_res8 + 0xc + uVar20 * 4)
                 + *(float *)(local_res8 + 0x10 + uVar20 * 4) +
                 *(float *)(local_res8 + 0x14 + uVar20 * 4) +
                 *(float *)(local_res8 + 0x18 + uVar20 * 4) +
                 *(float *)(local_res8 + 0x1c + uVar20 * 4) +
                 *(float *)(local_res8 + 0x20 + uVar20 * 4);
        uVar17 = uVar20 + 8;
      } while ((uVar15 - 1 & 0xfffffffffffffff8) != uVar20 + 8);
      lVar10 = uVar20 + 9;
    }
    if (uVar19 != 0) {
      uVar17 = 0;
      do {
        fVar27 = fVar27 + *(float *)(local_res8 + lVar10 * 4 + uVar17 * 4);
        uVar17 = uVar17 + 1;
      } while (uVar19 != uVar17);
    }
  }
  if ((param_20 != DAT_02390124) || (NAN(param_20) || NAN(DAT_02390124))) {
    if (DAT_02394274 <= param_21) {
      fVar45 = DAT_02390124 / (param_21 * DAT_02394244);
      fVar25 = fVar25 * fVar45;
      fVar27 = fVar27 * fVar45;
    }
    fVar27 = (float)(~-(uint)(DAT_02390124 < fVar25) & (uint)fVar27 |
                    (uint)(fVar27 / fVar25) & -(uint)(DAT_02390124 < fVar25));
    fVar25 = (float)_powf();
  }
  fVar45 = DAT_02390124;
  if (DAT_02394274 <= fVar27) {
    fVar45 = fVar25 / fVar27;
  }
  fVar27 = DAT_023908e0;
  if (fVar45 <= DAT_023908e0) {
    fVar27 = fVar45;
  }
  if (local_128 != 0) {
    for (iVar4 = 0; iVar4 < *(int *)(local_128 + 0xc); iVar4 = iVar4 + 1) {
      FUN_014148c0();
      FUN_014148e0();
    }
    FUN_012c2730();
  }
  if (((param_24 < DAT_02390124) && (DAT_02394274 <= fVar27)) &&
     (fVar45 = (float)_powf(), 1 < (int)local_res20)) {
    fVar45 = fVar45 / fVar27;
    uVar19 = uVar15 - 1;
    uVar17 = 1;
    if (7 < uVar19) {
      uVar20 = uVar19 & 0xfffffffffffffff8;
      uVar17 = uVar20 + 1;
      uVar16 = 0;
      do {
        pfVar11 = (float *)(local_res8 + 4 + uVar16 * 4);
        fVar50 = pfVar11[1];
        fVar24 = pfVar11[2];
        fVar25 = pfVar11[3];
        if (fVar45 < *pfVar11) {
          *(float *)(local_res8 + 4 + uVar16 * 4) = fVar45;
        }
        if (fVar50 <= fVar45) {
          if (fVar24 > fVar45) goto LAB_012bf99c;
LAB_012bf965:
          if (fVar45 < fVar25) goto LAB_012bf971;
LAB_012bf9af:
          pfVar11 = (float *)(local_res8 + 0x14 + uVar16 * 4);
          fVar50 = *pfVar11;
          fVar24 = pfVar11[1];
          fVar25 = pfVar11[2];
          fVar46 = pfVar11[3];
        }
        else {
          *(float *)(local_res8 + 8 + uVar16 * 4) = fVar45;
          if (fVar24 <= fVar45) goto LAB_012bf965;
LAB_012bf99c:
          *(float *)(local_res8 + 0xc + uVar16 * 4) = fVar45;
          if (fVar45 >= fVar25) goto LAB_012bf9af;
LAB_012bf971:
          *(float *)(local_res8 + 0x10 + uVar16 * 4) = fVar45;
          pfVar11 = (float *)(local_res8 + 0x14 + uVar16 * 4);
          fVar50 = *pfVar11;
          fVar24 = pfVar11[1];
          fVar25 = pfVar11[2];
          fVar46 = pfVar11[3];
        }
        if (fVar45 < fVar50) {
          *(float *)(local_res8 + 0x14 + uVar16 * 4) = fVar45;
        }
        if (fVar45 < fVar24) {
          *(float *)(local_res8 + 0x18 + uVar16 * 4) = fVar45;
        }
        if (fVar45 < fVar25) {
          *(float *)(local_res8 + 0x1c + uVar16 * 4) = fVar45;
        }
        if (fVar45 < fVar46) {
          *(float *)(local_res8 + 0x20 + uVar16 * 4) = fVar45;
        }
        uVar16 = uVar16 + 8;
      } while (uVar20 != uVar16);
      if (uVar19 == uVar20) goto LAB_012bfa38;
    }
    do {
      if (fVar45 < *(float *)(local_res8 + uVar17 * 4)) {
        *(float *)(local_res8 + uVar17 * 4) = fVar45;
      }
      uVar17 = uVar17 + 1;
    } while (uVar15 != uVar17);
  }
LAB_012bfa38:
  fVar45 = DAT_02394274;
  fVar27 = fVar27 * param_19;
  if (DAT_023d59b4 < (float)(_DAT_02390140 & (uint)param_4)) {
    fVar27 = fVar27 * ((param_4 + DAT_02390124) * local_48 +
                      (DAT_02390d34 - (param_4 + DAT_02390124)) * local_38);
  }
  if (0 < (int)local_res20) {
    uVar19 = 0;
    do {
      fVar50 = *(float *)(unaff_RSI + uVar19 * 4);
      if (fVar45 <= fVar50) {
        *(float *)(in_RDX + uVar19 * 4) = *(float *)(local_res8 + uVar19 * 4) / fVar50;
      }
      pfVar11 = (float *)(local_res8 + uVar19 * 4);
      if (*pfVar11 <= fVar45 && fVar45 != *pfVar11) {
        *(undefined4 *)(in_RDX + uVar19 * 4) = 0;
        fVar50 = 0.0;
      }
      else {
        fVar50 = *(float *)(in_RDX + uVar19 * 4);
      }
      *(float *)(in_RDX + uVar19 * 4) = fVar50 * fVar27;
      uVar19 = uVar19 + 1;
    } while (uVar15 != uVar19);
  }
  if (local_128 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @012bafd0 — 7453 bytes
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012bafd0(undefined4 param_1,int param_2,undefined4 param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  double dVar9;
  bool bVar10;
  void *pvVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  pthread_key_t pVar18;
  ulonglong in_RCX;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 in_R8D;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM4_Db;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong local_118;
  char local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_3c;
  char local_38 [8];
  
  dVar9 = (double)CONCAT44(in_XMM4_Db,in_XMM4_Da);
  lVar13 = *unaff_RSI;
  local_c8 = DAT_0240d164;
  local_c4 = in_R8D;
  if (lVar13 != 0) {
    uVar19 = in_RCX;
    pvVar11 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar11 != (void *)0x0) {
      lVar13 = *unaff_RSI;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar13 + 0x7d) == '\0') {
      lVar13 = *unaff_RSI;
      local_b8 = param_4;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x40);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0x70) == 0) {
        local_a0 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_a0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x40);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0x58) == 0) {
        local_f0 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_f0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x48);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0x58) == 0) {
        uVar20 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(undefined8 *)(*(longlong *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x50);
      local_e8 = uVar20;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0x58) == 0) {
        local_b0 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x50);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x50);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_b0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar13 + 0x88) == 0) {
        local_a8 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_a8 = *(undefined8 *)(*(longlong *)(lVar13 + 0x88) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      local_c8 = *(undefined4 *)(lVar13 + 0xac);
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x48);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      uVar28 = *(undefined4 *)(lVar12 + 0x8c);
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x50);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      uVar30 = *(undefined4 *)(lVar12 + 0x8c);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7b) == '\0') {
        local_108 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_108 = *(undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7c) == '\0') {
        local_100 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x50);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x50);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_100 = *(undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7a) == '\0') {
LAB_012bb9a5:
        uVar20 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        if (*(longlong *)(lVar13 + 0x90) == 0) goto LAB_012bb9a5;
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(undefined8 *)(*(longlong *)(lVar13 + 0x90) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x40);
      local_e0 = uVar20;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        uVar20 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(undefined8 *)(*(longlong *)(lVar12 + 0x68) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x48);
      local_d8 = uVar20;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        uVar20 = 0;
      }
      else {
        lVar13 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(undefined8 *)(*(longlong *)(lVar12 + 0x68) + 0x10);
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x50);
      local_d0 = uVar20;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) != '\0') {
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x58);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x58);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        local_c0 = 0;
        lVar13 = local_b8;
      }
      else {
        lVar12 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        lVar13 = local_b8;
        if (pvVar11 != (void *)0x0) {
          lVar12 = *unaff_RSI;
          lVar14 = FUN_00e8b990();
          if (lVar14 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
        }
        if (*(longlong *)(lVar12 + 0x98) == 0) {
          local_c0 = 0;
        }
        else {
          lVar12 = *unaff_RSI;
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          if (pvVar11 != (void *)0x0) {
            lVar12 = *unaff_RSI;
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8)
              ;
            }
          }
          local_c0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x98) + 0x10);
        }
      }
      lVar12 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *unaff_RSI;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar12 + 0xa0) == 0) {
        local_f8 = 0;
      }
      else {
        lVar12 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *unaff_RSI;
          lVar14 = FUN_00e8b990();
          if (lVar14 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
        }
        local_f8 = *(undefined8 *)(*(longlong *)(lVar12 + 0xa0) + 0x10);
      }
      lVar12 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *unaff_RSI;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar26 = *(float *)(lVar12 + 0xb8);
      lVar12 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *unaff_RSI;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar27 = *(float *)(lVar12 + 0xbc);
      lVar12 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *unaff_RSI;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar2 = *(float *)(lVar12 + 0xc0);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar12 = *(longlong *)(unaff_RDI + 0x2d8);
      uVar19 = CONCAT71((int7)(uVar19 >> 8),lVar12 < 0);
      if (lVar12 <= lVar13 && lVar12 >= 0) {
        *(ulonglong *)(unaff_RDI + 0x2d0) = local_res8;
        *(undefined8 *)(unaff_RDI + 0x2d8) = 0xffffffffffffffff;
        dVar29 = (double)local_res10 * dVar9 + DAT_023934c8;
        *(undefined1 *)(unaff_RDI + 0x2e0) = 0;
        *(double *)(unaff_RDI + 0x2e8) = dVar29;
        *(undefined8 *)(unaff_RDI + 0x2f0) = 0;
        *(undefined8 *)(unaff_RDI + 0x2f8) = 0;
        uVar19 = local_res8;
      }
      FUN_00d23340();
      local_38[0] = local_110[0];
      pcVar15 = local_110;
      if (local_110[0] == '\0') {
        pcVar15 = local_38;
      }
      *pcVar15 = '\0';
      if ((local_110[0] != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (local_118 != 0) {
        lVar13 = *(longlong *)(unaff_RDI + 0x2d8);
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if (lVar13 == -1) {
          FUN_00d23340();
          pcVar15 = local_110;
          if (local_110[0] == '\0') {
            pcVar15 = local_38;
          }
          local_38[0] = local_110[0];
          *pcVar15 = '\0';
          if ((local_110[0] != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] == '\0') && (local_118 != 0)) {
            FUN_00d50b00();
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          uVar17 = local_118;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            uVar19 = local_118;
            uVar17 = *(ulonglong *)
                      (local_118 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
          lVar13 = *(longlong *)(uVar17 + 0x50);
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          if (pvVar11 != (void *)0x0) {
            lVar13 = *(longlong *)(uVar17 + 0x50);
            lVar12 = FUN_00e8b990();
            if (lVar12 != 0) {
              lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8)
              ;
            }
          }
          lVar13 = *(longlong *)(lVar13 + 0x48);
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          lVar12 = lVar13;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar12 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
          lVar12 = *(longlong *)(lVar12 + 0x58);
          pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
          lVar14 = lVar13;
          if ((pvVar11 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            lVar14 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
          lVar12 = lVar12 + *(longlong *)(lVar14 + 0xd0);
          *(longlong *)(unaff_RDI + 0x2d8) = lVar12;
          dVar29 = (double)lVar12 * dVar9;
          fVar25 = (float)(dVar29 - (double)*(longlong *)(unaff_RDI + 0x2d0) * dVar9) * DAT_02391090
          ;
          if (DAT_02421228 <= fVar25) {
            fVar25 = DAT_02421228;
          }
          *(float *)(unaff_RDI + 0x2f0) = fVar25;
          *(double *)(unaff_RDI + 0x2e8) = dVar29 - (double)fVar25;
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if (local_118 != 0) {
            FUN_00d50b20();
          }
        }
      }
      fVar25 = 0.0;
      if ((((fVar26 != 0.0) || (NAN(fVar26))) || (0.0 < fVar27)) || ((fVar2 != 0.0 || (NAN(fVar2))))
         ) {
        uVar23 = (pthread_key_t)in_RCX + param_2;
        uVar8 = *(uint *)(unaff_RDI + 0x160);
        uVar19 = (ulonglong)uVar8;
        if ((int)uVar8 < 1) {
          fVar26 = 0.0;
        }
        else {
          if ((int)uVar23 < 1) {
            fVar26 = 0.0;
          }
          else {
            fVar26 = 0.0;
            uVar17 = 0;
            do {
              lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1e0) + uVar17 * 8);
              uVar21 = 0;
              if (2 < (ulonglong)uVar23 - 1) {
                do {
                  fVar2 = *(float *)(lVar13 + uVar21 * 4);
                  fVar25 = *(float *)(lVar13 + 4 + uVar21 * 4);
                  fVar3 = *(float *)(lVar13 + 8 + uVar21 * 4);
                  fVar4 = *(float *)(lVar13 + 0xc + uVar21 * 4);
                  fVar26 = fVar4 * fVar4 + fVar3 * fVar3 + fVar25 * fVar25 + fVar2 * fVar2 + fVar26;
                  uVar21 = uVar21 + 4;
                } while ((uVar23 & 0xfffffffc) != uVar21);
              }
              if ((ulonglong)(uVar23 & 3) != 0) {
                uVar22 = 0;
                do {
                  fVar2 = *(float *)(lVar13 + uVar21 * 4 + uVar22 * 4);
                  fVar26 = fVar26 + fVar2 * fVar2;
                  uVar22 = uVar22 + 1;
                } while ((uVar23 & 3) != uVar22);
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar19);
          }
          if (1 < (int)uVar8) {
            fVar26 = fVar26 / (float)(int)uVar8;
          }
        }
        fVar25 = SQRT(fVar26 / (float)(int)uVar23) * _DAT_0240d168;
      }
      if ((0.0 < fVar27) && (local_res18 != 0)) {
        FUN_012bcdc0(param_1,param_3,fVar25,fVar27);
        uVar19 = in_RCX;
      }
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x60);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x60);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar5 = *(char *)(lVar12 + 0x61);
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x70);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x70);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar6 = *(char *)(lVar12 + 0x61);
      lVar13 = *unaff_RSI;
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(longlong *)(lVar13 + 0x68);
      pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(longlong *)(lVar13 + 0x68);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar7 = *(char *)(lVar12 + 0x61);
      if (((cVar5 != '\0') || (cVar6 != '\0')) || (cVar7 != '\0')) {
        dVar29 = (double)local_b8 * dVar9;
        local_3c = DAT_02390d00;
        if (DAT_02394274 <= *(float *)(unaff_RDI + 0x2f0)) {
          if (*(double *)(unaff_RDI + 0x2e8) < dVar29) {
            fVar26 = (float)(dVar29 - *(double *)(unaff_RDI + 0x2e8)) /
                     *(float *)(unaff_RDI + 0x2f0);
            local_3c = 0.0;
            if (0.0 <= fVar26) {
              local_3c = fVar26;
            }
            if (DAT_02390124 < local_3c) {
              local_3c = DAT_02390124;
            }
          }
        }
        local_b8 = CONCAT44(local_b8._4_4_,
                            (float)(dVar29 - (double)*(longlong *)(unaff_RDI + 0x2d0) * dVar9));
        iVar24 = 0;
        do {
          pVar18 = (pthread_key_t)uVar19;
          if (iVar24 == 0) {
            if (cVar5 != '\0') {
              lVar13 = *unaff_RSI;
              pvVar11 = _pthread_getspecific(pVar18);
              if (pvVar11 != (void *)0x0) {
                lVar13 = *unaff_RSI;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  lVar13 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                }
              }
              lVar13 = *(longlong *)(lVar13 + 0x60);
joined_r0x012bc65d:
              if (lVar13 == 0) goto LAB_012bc7d0;
LAB_012bc6c3:
              FUN_00d50b00();
              bVar10 = false;
              lVar12 = *(longlong *)(unaff_RDI + 0x2d0);
              goto joined_r0x012bc6da;
            }
          }
          else {
            if (iVar24 == 2) {
              if (cVar7 == '\0') break;
              lVar13 = *unaff_RSI;
              pvVar11 = _pthread_getspecific(pVar18);
              if (pvVar11 != (void *)0x0) {
                lVar13 = *unaff_RSI;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  lVar13 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                }
              }
              lVar13 = *(longlong *)(lVar13 + 0x68);
              if (lVar13 != 0) goto LAB_012bc6c3;
LAB_012bc7d0:
              lVar12 = *(longlong *)(unaff_RDI + 0x2d0);
            }
            else {
              if (iVar24 == 1) {
                if (cVar6 != '\0') {
                  lVar13 = *unaff_RSI;
                  pvVar11 = _pthread_getspecific(pVar18);
                  if (pvVar11 != (void *)0x0) {
                    lVar13 = *unaff_RSI;
                    lVar12 = FUN_00e8b990();
                    if (lVar12 != 0) {
                      lVar13 = *(longlong *)
                                (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                    }
                  }
                  lVar13 = *(longlong *)(lVar13 + 0x70);
                  goto joined_r0x012bc65d;
                }
                goto LAB_012bc590;
              }
              lVar12 = *(longlong *)(unaff_RDI + 0x2d0);
            }
            bVar10 = true;
            lVar13 = 0;
joined_r0x012bc6da:
            if (lVar12 < 0) {
              pvVar11 = _pthread_getspecific((int)uVar19);
              lVar12 = lVar13;
              if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                lVar12 = *(longlong *)
                          (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
              }
              fVar26 = *(float *)(lVar12 + 0x5c);
              pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
              lVar12 = lVar13;
              if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                lVar12 = *(longlong *)
                          (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
              }
              if (*(float *)(lVar12 + 0x44) <= fVar26) {
                pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                lVar12 = lVar13;
                if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  lVar12 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
                }
                fVar26 = *(float *)(lVar12 + 0x44);
              }
              else {
                pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                  fVar26 = *(float *)(lVar13 + 0x5c);
                }
                else {
                  fVar26 = *(float *)(*(longlong *)
                                       (lVar13 + 0x20 +
                                       (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x5c);
                }
              }
              if (iVar24 == 0) goto LAB_012bc9b0;
LAB_012bc73e:
              if (iVar24 == 2) {
                if (DAT_0239424c <= local_3c) {
                  if (*(char *)(unaff_RDI + 0x2e0) == '\0') {
                    pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                    if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                      if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44)
                         ) goto LAB_012bcc4a;
                      goto LAB_012bc8f4;
                    }
                    pfVar1 = (float *)(*(longlong *)
                                        (lVar13 + 0x20 +
                                        (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                    if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc8f4;
LAB_012bcc4a:
                    *(float *)(unaff_RDI + 0x2fc) = fVar26;
                    if (fVar26 <= DAT_0239424c) goto joined_r0x012bcbc0;
                  }
                  else {
LAB_012bc8f4:
                    if (*(float *)(unaff_RDI + 0x2fc) <= DAT_0239424c) goto joined_r0x012bcbc0;
                  }
                  pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                }
              }
              else {
                if (iVar24 != 1) goto joined_r0x012bcbc0;
                if (DAT_0239424c <= local_3c) {
                  if (*(char *)(unaff_RDI + 0x2e0) == '\0') {
                    pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                    if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                      if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44)
                         ) goto LAB_012bcc19;
                      goto LAB_012bc771;
                    }
                    pfVar1 = (float *)(*(longlong *)
                                        (lVar13 + 0x20 +
                                        (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                    if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc771;
LAB_012bcc19:
                    *(float *)(unaff_RDI + 0x2f8) = fVar26;
                    fVar27 = fVar26;
                    if (fVar26 <= DAT_0239424c) goto LAB_012bcb89;
                  }
                  else {
LAB_012bc771:
                    fVar27 = *(float *)(unaff_RDI + 0x2f8);
                    if (*(float *)(unaff_RDI + 0x2f8) <= DAT_0239424c) goto LAB_012bcb89;
                  }
                  pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                  lVar12 = lVar13;
                  if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    lVar12 = *(longlong *)
                              (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
                  }
                  fVar26 = fVar27 + (*(float *)(lVar12 + 0x44) - *(float *)(unaff_RDI + 0x2f8)) *
                                    local_3c;
                }
LAB_012bcb89:
                _exp2f((fVar26 + DAT_02390d00) * DAT_023b1608);
              }
joined_r0x012bcbc0:
              if ((bool)(bVar10 | lVar13 == 0)) goto LAB_012bc590;
            }
            else {
              pvVar11 = _pthread_getspecific((int)uVar19);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar26 = (float)FUN_0188f4f0((undefined4)local_b8);
              if (iVar24 != 0) goto LAB_012bc73e;
LAB_012bc9b0:
              if (DAT_0239424c <= local_3c) {
                if (*(char *)(unaff_RDI + 0x2e0) == '\0') {
                  pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                  if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                    if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44))
                    goto LAB_012bcab5;
                    goto LAB_012bc9cb;
                  }
                  pfVar1 = (float *)(*(longlong *)
                                      (lVar13 + 0x20 +
                                      (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                  if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc9cb;
LAB_012bcab5:
                  *(float *)(unaff_RDI + 0x2f4) = fVar26;
                  if (fVar26 <= DAT_0239424c) goto LAB_012bca78;
                }
                else {
LAB_012bc9cb:
                  if (*(float *)(unaff_RDI + 0x2f4) <= DAT_0239424c) goto LAB_012bca78;
                }
                pvVar11 = _pthread_getspecific((pthread_key_t)uVar19);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
              }
LAB_012bca78:
              if (bVar10 || lVar13 == 0) goto LAB_012bc590;
            }
            FUN_00d50b20();
          }
LAB_012bc590:
          iVar24 = iVar24 + 1;
        } while (iVar24 != 3);
        if ((0.0 <= local_3c) && (*(char *)(unaff_RDI + 0x2e0) == '\0')) {
          *(undefined1 *)(unaff_RDI + 0x2e0) = 1;
        }
      }
      goto LAB_012bb121;
    }
  }
  local_f8 = 0;
  local_c0 = 0;
  local_100 = 0;
  local_108 = 0;
  local_a0 = 0;
  uVar28 = DAT_023908e0;
  uVar30 = DAT_023908e0;
LAB_012bb121:
  FUN_012bd760(param_1,uVar28,uVar30,0);
  return;
}




// ============================================================
// @012b5260 — 5471 bytes
// str: ""MUAudioSourcePrincipalItem""
// str: ""MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!""
// str: ""MULSSComponentRenderer::getProcessingBufferWithSize : not enough allocated Buffers!""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012b5260(double param_1,double param_2,double param_3,double param_4,longlong *param_5,
                 longlong *param_6)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  int iVar11;
  longlong in_RCX;
  undefined8 uVar12;
  longlong *in_RDX;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong unaff_RDI;
  double in_R8;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  int iVar24;
  undefined1 auVar23 [16];
  int iVar26;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  float in_XMM4_Da;
  float in_XMM5_Da;
  longlong local_res8;
  undefined8 *local_res10;
  undefined4 local_res18;
  longlong *local_res20;
  undefined1 uVar28;
  undefined4 local_e0;
  undefined4 uStack_dc;
  char local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  int local_b8;
  byte local_ac;
  double local_a0;
  longlong local_90;
  longlong *local_88;
  uint local_7c;
  double local_78;
  undefined1 local_44;
  undefined1 local_43;
  byte local_42;
  char local_41;
  float local_40;
  float local_3c;
  float local_38;
  char local_33;
  byte local_32;
  char local_31;
  
  local_c8 = in_RDX;
  local_40 = in_XMM5_Da;
  if (**(longlong **)(unaff_RDI + 0x1e0) == 0) {
    lVar8 = in_RCX;
    if (0 < *(int *)(unaff_RDI + 0x160)) {
      lVar8 = 0;
      local_78 = in_R8;
      do {
        if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
          auVar27._0_8_ = 0;
          do {
            if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + auVar27._0_8_) == '\0') {
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + auVar27._0_8_) = 1;
              lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + auVar27._0_8_ * 8) + 0x10;
              goto LAB_012b531d;
            }
            auVar27._0_8_ = auVar27._0_8_ + 1;
          } while (*(uint *)(unaff_RDI + 0x300) != auVar27._0_8_);
        }
        FUN_00e828a0();
        lVar13 = 0;
LAB_012b531d:
        *(longlong *)(*(longlong *)(unaff_RDI + 0x1e0) + lVar8 * 8) = lVar13;
        lVar8 = lVar8 + 1;
        iVar16 = *(int *)(unaff_RDI + 0x160);
        in_R8 = local_78;
      } while (lVar8 < iVar16);
      goto LAB_012b53b1;
    }
  }
  else {
    iVar16 = *(int *)(unaff_RDI + 0x160);
LAB_012b53b1:
    lVar8 = unaff_RDI + 0x150;
    if (0 < iVar16) {
      lVar13 = 0;
      do {
        ___bzero();
        ___bzero();
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(unaff_RDI + 0x160));
    }
  }
  local_88 = (longlong *)(unaff_RDI + 0x150);
  local_78 = (double)(longlong)in_R8;
  plVar17 = (longlong *)*local_res20;
  local_3c = DAT_02390124;
  local_38 = DAT_02390124;
  if (plVar17 != (longlong *)0x0) {
    dVar21 = *(double *)(*(longlong *)(unaff_RDI + 0x100) + 0x10) - local_78;
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
    if (pvVar6 != (void *)0x0) {
      plVar17 = (longlong *)*local_res20;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        plVar17 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
    }
    dVar21 = (double)(**(code **)(*plVar17 + 0x3d8))(dVar21 * param_4,0);
    local_38 = (float)dVar21;
  }
  plVar17 = (longlong *)*param_5;
  fVar19 = DAT_02390124;
  if (plVar17 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
    if (pvVar6 != (void *)0x0) {
      plVar17 = (longlong *)*param_5;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        plVar17 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
    }
    dVar21 = (double)(**(code **)(*plVar17 + 0x3d8))(param_1 - param_2,0);
    fVar19 = (float)dVar21;
  }
  local_3c = local_3c / fVar19;
  lVar13 = *local_c8;
  if (lVar13 != 0) {
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
    if (pvVar6 != (void *)0x0) {
      lVar13 = *local_c8;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar13 + 0x7d) != '\0') goto LAB_012b55d8;
  }
  local_3c = local_3c * local_40;
LAB_012b55d8:
  pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38 = local_38 * in_XMM4_Da;
  pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  if ((_DAT_0240d1a8 < (double)local_3c) && ((double)local_3c < DAT_0240d1b0)) {
    _logf();
  }
  fVar19 = (float)_powf();
  local_3c = local_3c * fVar19;
  if (DAT_02390124 <= local_3c) {
    local_3c = DAT_02390124;
  }
  local_33 = '\0';
  local_43 = DAT_023b36e8 < local_3c || local_3c < DAT_023b36e4;
  pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)lVar8 >> 8),local_43);
  local_ac = (byte)in_RCX;
  local_32 = local_43 | local_ac;
  if (local_32 == 1) {
    pcVar9 = &local_33;
    uVar22 = FUN_012b6860(pcVar9,&local_32);
    pVar10 = (pthread_key_t)pcVar9;
    if (*(char *)(unaff_RDI + 600) == '\0') {
      auVar27._0_8_ = (longlong)*(int *)(unaff_RDI + 0x218) / (longlong)*(int *)(unaff_RDI + 0x16c);
      FUN_012b9080(uVar22,auVar27._0_8_ & 0xffffffff);
      lVar8 = *(longlong *)(unaff_RDI + 0x1b0);
      lVar13 = CONCAT44(uStack_dc,local_e0);
      if (lVar8 == lVar13) {
        if ((local_d8 != '\0') && (lVar13 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_d8 == '\0') {
          if (lVar13 != 0) {
            FUN_00d50b00();
            lVar8 = *(longlong *)(unaff_RDI + 0x1b0);
          }
        }
        else {
          local_d8 = '\0';
        }
        *(longlong *)(unaff_RDI + 0x1b0) = lVar13;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      iVar16 = (int)auVar27._0_8_;
      local_38 = (float)(iVar16 + 3);
      if (-1 < iVar16) {
        local_38 = (float)iVar16;
      }
      local_40 = (float)param_3 / (float)*(int *)(unaff_RDI + 0x168);
      FUN_012b96f0((float)iVar16,local_d0);
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = (float)((int)local_38 >> 2);
      local_40 = local_40 / (float)iVar16;
      FUN_012a52b0();
      iVar24 = *(int *)(unaff_RDI + 0x218);
      iVar5 = iVar24 + 3;
      if (-1 < iVar24) {
        iVar5 = iVar24;
      }
      *(int *)(unaff_RDI + 0x210) = iVar5 >> 2;
      *(int *)(unaff_RDI + 0x214) = iVar5 >> 2;
      lVar8 = (longlong)~(iVar24 / 2) +
              (longlong)*(double *)(*(longlong *)(unaff_RDI + 0x100) + 0x10);
      uVar15 = (ulonglong)*(uint *)(unaff_RDI + 0x160);
      iVar24 = 0;
      local_78 = (double)CONCAT44(local_78._4_4_,0xffffffff);
      do {
        if (0 < (int)uVar15) {
          lVar13 = 0;
          do {
            ___bzero();
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(unaff_RDI + 0x160));
        }
        uVar22 = *(undefined8 *)(unaff_RDI + 0x1e0);
        FUN_012b6e60(uVar22,*(undefined4 *)(unaff_RDI + 0x164),local_res18,lVar8);
        pVar10 = (pthread_key_t)uVar22;
        local_7c = 0x3f800000;
        local_31 = '\0';
        if (*(char *)(unaff_RDI + 0x2a2) != '\0') {
          *(double *)(unaff_RDI + 0x238) = (double)lVar8 * param_4;
          *(double *)(unaff_RDI + 0x240) = (double)(*(int *)(unaff_RDI + 0x218) + lVar8) * param_4;
          lVar13 = *(longlong *)(unaff_RDI + 0xe8);
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            lVar13 = *(longlong *)(unaff_RDI + 0xe8);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = *(longlong *)(lVar13 + 0x50);
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar13 + 0x50);
            lVar13 = FUN_00e8b990();
            if (lVar13 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
            }
          }
          plVar17 = *(longlong **)(lVar7 + 0x48);
          if ((DAT_027c0170 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_02790158 = FUN_007ef2d0();
            _DAT_02790140 = "MUAudioSourcePrincipalItem";
            _DAT_02790148 = 0x138;
            pVar10 = 0x10fe5c0;
            _DAT_02790150 = FUN_010fe5c0;
            _DAT_02790160 = 0;
            uRam0000000002790168 = 0;
            _DAT_02790170 = 0;
            uRam0000000002790178 = 0;
            _DAT_02790180 = 0;
            uRam0000000002790188 = 0;
            _DAT_02790190 = 0;
            uRam0000000002790198 = 0;
            _DAT_027901a0 = 0;
            uRam00000000027901a8 = 0;
            _DAT_027901b0 = 0;
            uRam00000000027901b8 = 0;
            _DAT_027901c0 = 0;
            uRam00000000027901c8 = 0;
            _DAT_027901d0 = 0;
            uRam00000000027901d8 = 0;
            _DAT_027901e0 = 0;
            uRam00000000027901e8 = 0;
            _DAT_027901f0 = 0;
            uRam00000000027901f8 = 0;
            _DAT_02790200 = 0;
            ___cxa_guard_release();
          }
          lVar13 = DAT_02802688;
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x360))();
            cVar3 = FUN_00e85ea0();
            lVar13 = DAT_02802688;
            if (cVar3 != '\0') {
              lVar13 = *(longlong *)(lVar7 + 0x48);
            }
          }
          if (lVar13 != 0) {
            FUN_00d50b00();
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014ed7a0(*(undefined8 *)(unaff_RDI + 0x238),*(undefined8 *)(unaff_RDI + 0x240));
            FUN_00d50b20();
          }
        }
        FUN_012ba340(local_38,(int)((auVar27._0_8_ & 0xffffffff) >> 0x1f) + iVar16 >> 1,&local_7c,
                     &local_31);
        if ((local_31 != '\0') && (uVar1 = *(uint *)(unaff_RDI + 0x160), 0 < (int)uVar1)) {
          uVar15 = 0;
          do {
            (**(code **)(DAT_02786500 + 0x20))();
            uVar15 = uVar15 + 1;
          } while (uVar1 != uVar15);
        }
        uVar15 = (ulonglong)*(uint *)(unaff_RDI + 0x160);
        iVar5 = *(int *)(unaff_RDI + 0x218);
        iVar18 = local_78._0_4_ - iVar5 / 2;
        iVar26 = iVar18;
        iVar11 = -1;
        if (-1 < iVar18) {
          iVar26 = -1;
          iVar11 = iVar18;
        }
        iVar18 = iVar11 + iVar5 + iVar26 + 1;
        iVar11 = iVar5 - iVar18;
        if (iVar18 <= iVar5) {
          iVar11 = 0;
        }
        if (0 < (int)*(uint *)(unaff_RDI + 0x160)) {
          lVar13 = 0;
          do {
            (**(code **)(DAT_02786500 + 0x28))
                      (*(undefined8 *)(unaff_RDI + 0x1e0),iVar11 + iVar5 + iVar26 + 1);
            lVar13 = lVar13 + 1;
            uVar15 = (ulonglong)*(int *)(unaff_RDI + 0x160);
          } while (lVar13 < (longlong)uVar15);
        }
        lVar8 = lVar8 + *(int *)(unaff_RDI + 0x214);
        local_78 = (double)CONCAT44(local_78._4_4_,local_78._0_4_ + *(int *)(unaff_RDI + 0x214));
        iVar24 = iVar24 + 1;
      } while (iVar24 != 5);
    }
    else {
      dVar21 = *(double *)(*(longlong *)(unaff_RDI + 0x100) + 0x10);
      local_a0 = (dVar21 - local_78) + DAT_023b19a0;
      local_90 = (longlong)dVar21 + -1;
      local_e0 = 0;
      local_42 = local_32;
      local_41 = local_33;
      local_40 = -NAN;
      iVar16 = 0;
      dVar21 = param_3 / DAT_023934d0;
      do {
        plVar17 = (longlong *)*param_6;
        if (plVar17 != (longlong *)0x0) {
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar9);
          if (pvVar6 != (void *)0x0) {
            plVar17 = (longlong *)*param_6;
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              plVar17 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
          }
          dVar21 = (double)(**(code **)(*plVar17 + 0x3d8))(local_a0 * param_4,0);
        }
        local_78 = dVar21;
        if (iVar16 == 0) {
          iVar24 = FUN_00e7d850(dVar21);
          local_90 = local_90 - iVar24;
          *(double *)(unaff_RDI + 0x2b0) = local_78;
        }
        pcVar9 = (char *)FUN_00e7d850(local_78);
        iVar24 = (int)pcVar9;
        if (0 < *(int *)(unaff_RDI + 0x160)) {
          lVar8 = 0;
          do {
            ___bzero();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(unaff_RDI + 0x160));
        }
        uVar22 = *local_res10;
        uVar28 = 0;
        FUN_012b6e60(*(undefined8 *)(unaff_RDI + 0x1e0),*(undefined4 *)(unaff_RDI + 0x164),
                     local_res18,local_90);
        local_d0[0] = 0;
        local_7c = local_7c & 0xffffff00;
        local_31 = '\x01';
        local_44 = 1;
        FUN_012b7100(local_41 != '\0',local_43,(float)(param_3 / local_78),local_38,iVar24,&local_e0
                     ,&local_31,&local_44,local_d0,&local_7c,uVar22,uVar28);
        if (0 < *(int *)(unaff_RDI + 0x160)) {
          lVar8 = 0;
          do {
            (**(code **)(DAT_02786500 + 0x28))();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(unaff_RDI + 0x160));
        }
        if (iVar16 == 0) {
          uVar4 = FUN_00e7d850(local_78 / (double)*(int *)(unaff_RDI + 0x164));
          *(undefined4 *)(unaff_RDI + 0x210) = uVar4;
        }
        else if (iVar16 == 1) {
          uVar4 = FUN_00e7d850(local_78 / (double)*(int *)(unaff_RDI + 0x164));
          *(undefined4 *)(unaff_RDI + 0x214) = uVar4;
          *(double *)(unaff_RDI + 0x230) = local_78;
        }
        local_a0 = local_a0 + (double)iVar24;
        local_90 = local_90 + iVar24;
        local_40 = (float)((int)local_40 + iVar24);
        iVar16 = iVar16 + 1;
        dVar21 = local_78;
      } while (iVar16 != 3);
      iVar5 = *(int *)(unaff_RDI + 0x15c) / 2;
      iVar16 = *(int *)(unaff_RDI + 0x210);
      iVar24 = *(int *)(unaff_RDI + 0x214);
      if ((iVar5 < iVar16) || (iVar5 < iVar24)) {
        do {
          do {
            iVar16 = iVar16 / 2;
            iVar24 = iVar24 / 2;
          } while (iVar5 < iVar16);
        } while (iVar5 < iVar24);
        *(int *)(unaff_RDI + 0x210) = iVar16;
        *(int *)(unaff_RDI + 0x214) = iVar24;
      }
      if (0 < *(int *)(unaff_RDI + 0x160)) {
        lVar8 = 0;
        do {
          ___bzero();
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)(unaff_RDI + 0x160));
      }
    }
  }
  else {
    if (*(char *)(unaff_RDI + 600) == '\0') {
      iVar16 = *(int *)(unaff_RDI + 0x218);
      iVar24 = iVar16 + 3;
      if (-1 < iVar16) {
        iVar24 = iVar16;
      }
      *(int *)(unaff_RDI + 0x210) = iVar24 >> 2;
      *(int *)(unaff_RDI + 0x214) = iVar24 >> 2;
      iVar24 = *(int *)(unaff_RDI + 0x160);
    }
    else {
      *(undefined4 *)(unaff_RDI + 0x120) = 0xffffffff;
      plVar17 = (longlong *)*param_6;
      if (plVar17 == (longlong *)0x0) {
        auVar23._0_8_ = param_3 / DAT_023934d0;
        auVar23._8_8_ = auVar23._0_8_;
      }
      else {
        dVar21 = *(double *)(*(longlong *)(unaff_RDI + 0x100) + 0x10) - local_78;
        local_78 = dVar21 * param_4;
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          plVar17 = (longlong *)*param_6;
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            plVar17 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
        }
        local_78 = (double)(**(code **)(*plVar17 + 0x3d8))(local_78,0);
        dVar21 = dVar21 + local_78;
        plVar17 = (longlong *)*param_6;
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          plVar17 = (longlong *)*param_6;
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            plVar17 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
        }
        auVar23._0_8_ = (double)(**(code **)(*plVar17 + 0x3d8))(dVar21 * param_4,0);
        auVar23._8_8_ = local_78;
      }
      auVar25._0_8_ = (double)*(int *)(unaff_RDI + 0x164);
      auVar25._8_8_ = auVar25._0_8_;
      auVar27 = divpd(auVar23,auVar25);
      iVar24 = (int)(auVar27._0_8_ + _DAT_0240d120);
      auVar27._0_8_ = CONCAT44((int)(auVar27._8_8_ + _UNK_0240d128),iVar24);
      auVar27._8_8_ = 0;
      uVar12 = extractps(auVar27,1);
      uVar22 = extractps(auVar27,1);
      *(undefined8 *)(unaff_RDI + 0x210) = uVar22;
      *(int *)(unaff_RDI + 0x214) = iVar24;
      *(longlong *)(unaff_RDI + 0x230) = auVar23._0_8_;
      iVar16 = *(int *)(unaff_RDI + 0x15c) / 2;
      if ((iVar16 < (int)uVar12) || (iVar16 < iVar24)) {
        do {
          do {
            iVar24 = auVar27._8_4_;
            iVar5 = auVar27._12_4_;
            iVar11 = auVar27._0_4_ / 2;
            iVar26 = auVar27._4_4_ / 2;
            auVar27._0_8_ = CONCAT44(iVar26,iVar11);
            auVar27._8_4_ = iVar24 / 2;
            auVar27._12_4_ = iVar5 / 2;
          } while (iVar16 < iVar26);
        } while (iVar16 < iVar11);
        *(int *)(unaff_RDI + 0x210) = iVar26;
        *(int *)(unaff_RDI + 0x214) = iVar11;
      }
      iVar16 = (int)(auVar27._0_8_ >> 0x20) + (int)auVar27._0_8_;
      iVar24 = *(int *)(unaff_RDI + 0x160);
    }
    if (0 < iVar24) {
      lVar8 = 0;
      do {
        ___bzero();
        *(longlong *)(*(longlong *)(unaff_RDI + 0x1f8) + lVar8 * 8) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x150) + lVar8 * 8) + -4;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(unaff_RDI + 0x160));
    }
    FUN_012b6e60(*(undefined8 *)(unaff_RDI + 0x1f8),(longlong)*(int *)(unaff_RDI + 0x164),
                 local_res18,
                 (longlong)*(double *)(*(longlong *)(unaff_RDI + 0x100) + 0x10) -
                 (longlong)*(int *)(unaff_RDI + 0x164));
    fVar19 = DAT_0240d160;
    if (((*(int *)(*(longlong *)(unaff_RDI + 0xf0) + 0xc) == 0) &&
        (lVar8 = local_res8 - (longlong)*(double *)(*(longlong *)(unaff_RDI + 0x100) + 0x10),
        -1 < lVar8)) && (lVar8 < iVar16)) {
      local_b8 = (int)lVar8;
      if (0 < iVar16 - local_b8) {
        uVar1 = *(uint *)(unaff_RDI + 0x160);
        if ((int)uVar1 < 1) {
          *(undefined1 *)(unaff_RDI + 0x264) = 0;
          return;
        }
        lVar13 = *local_88;
        auVar27._0_8_ = 0;
        fVar20 = DAT_02390124;
        do {
          lVar7 = lVar8 + auVar27._0_8_;
          uVar15 = 0;
          if (2 < (ulonglong)uVar1 - 1) {
            do {
              lVar2 = *(longlong *)(lVar13 + uVar15 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              lVar2 = *(longlong *)(lVar13 + 8 + uVar15 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              lVar2 = *(longlong *)(lVar13 + 0x10 + uVar15 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              lVar2 = *(longlong *)(lVar13 + 0x18 + uVar15 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              uVar15 = uVar15 + 4;
            } while ((uVar1 & 0xfffffffc) != uVar15);
          }
          if ((ulonglong)(uVar1 & 3) != 0) {
            uVar14 = 0;
            do {
              lVar2 = *(longlong *)(lVar13 + uVar15 * 8 + uVar14 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              uVar14 = uVar14 + 1;
            } while ((uVar1 & 3) != uVar14);
          }
          fVar20 = fVar20 * fVar19;
          auVar27._0_8_ = auVar27._0_8_ + 1;
        } while (auVar27._0_8_ != (uint)(iVar16 - local_b8));
      }
    }
    *(undefined1 *)(unaff_RDI + 0x264) = 0;
    if (0 < *(int *)(unaff_RDI + 0x160)) {
      lVar8 = 0;
      do {
        fVar19 = (float)(**(code **)(DAT_02786500 + 0x10))();
        if (DAT_02394274 < fVar19) {
          *(undefined1 *)(unaff_RDI + 0x264) = 1;
          return;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(unaff_RDI + 0x160));
    }
  }
  return;
}




// ============================================================
// @012b7100 — 4833 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012b78ad) */
/* WARNING: Removing unreachable block (ram,0x012b78b9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012b7100(char param_1,float param_2,undefined4 param_3,longlong *param_4,uint param_5,
                 int *param_6,char *param_7,char *param_8,char *param_9,char *param_10)

{
  float fVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  dword *pdVar20;
  longlong lVar21;
  char in_DL;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  float *pfVar28;
  int unaff_ESI;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong unaff_RDI;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong in_R8;
  undefined8 uVar34;
  ulonglong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  undefined4 in_XMM5_Da;
  float fVar47;
  undefined4 in_XMM5_Db;
  uint local_res20;
  longlong local_c0;
  char local_b8;
  char local_98;
  int local_40;
  int local_3c;
  
  pfVar28 = DAT_028ac5d0;
  if ((unaff_ESI == 0) && (pfVar26 = DAT_028ac5c0, param_1 == '\0')) goto LAB_012b8249;
  uVar22 = *(uint *)(unaff_RDI + 0x160);
  uVar29 = (ulonglong)uVar22;
  uVar32 = in_R8;
  if (0 < (int)uVar22) {
    fVar36 = DAT_023d5f44 / (float)(int)param_5;
    lVar27 = *(longlong *)(unaff_RDI + 0x1e0);
    if (local_res20 == 0) {
      if (param_5 == 0) {
        uVar35 = (ulonglong)(uVar22 & 7);
        if (6 < uVar29 - 1) {
          lVar27 = -(ulonglong)(uVar22 & 0xfffffff8);
          do {
            lVar27 = lVar27 + 8;
          } while (lVar27 != 0);
        }
        for (; uVar35 != 0; uVar35 = uVar35 - 1) {
        }
      }
      else {
        uVar35 = 0;
        do {
          pfVar26 = *(float **)(lVar27 + uVar35 * 8);
          if ((param_5 & 1) == 0) {
            fVar38 = 0.0;
            uVar33 = param_5;
          }
          else {
            *pfVar26 = pfVar28[0x2000] * *pfVar26;
            pfVar26 = pfVar26 + 1;
            fVar38 = fVar36 + 0.0;
            uVar33 = param_5 - 1;
          }
          if (param_5 != 1) {
            lVar19 = 0;
            do {
              pfVar26[lVar19] = pfVar28[(longlong)(int)fVar38 + 0x2000] * pfVar26[lVar19];
              pfVar26[lVar19 + 1] =
                   pfVar28[(longlong)(int)(fVar38 + fVar36) + 0x2000] * pfVar26[lVar19 + 1];
              fVar38 = fVar38 + fVar36 + fVar36;
              lVar19 = lVar19 + 2;
            } while (uVar33 != (uint)lVar19);
          }
          uVar35 = uVar35 + 1;
          uVar32 = (ulonglong)(param_5 - 1);
        } while (uVar35 != uVar29);
      }
    }
    else {
      fVar38 = DAT_023d5f44 / (float)(int)local_res20;
      uVar33 = local_res20 - 1;
      uVar32 = (ulonglong)uVar33;
      if (param_5 == 0) {
        uVar35 = 0;
        do {
          pfVar26 = *(float **)(lVar27 + uVar35 * 8);
          if ((local_res20 & 1) == 0) {
            fVar36 = 0.0;
            uVar11 = local_res20;
          }
          else {
            *pfVar26 = *pfVar28 * *pfVar26;
            pfVar26 = pfVar26 + 1;
            uVar11 = uVar33;
            fVar36 = fVar38 + 0.0;
          }
          if (local_res20 != 1) {
            lVar19 = 0;
            do {
              pfVar26[lVar19] = pfVar28[(int)fVar36] * pfVar26[lVar19];
              pfVar26[lVar19 + 1] = pfVar28[(int)(fVar36 + fVar38)] * pfVar26[lVar19 + 1];
              fVar36 = fVar36 + fVar38 + fVar38;
              lVar19 = lVar19 + 2;
            } while (uVar11 != (uint)lVar19);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar29);
      }
      else {
        uVar35 = 0;
        do {
          pfVar18 = *(float **)(lVar27 + uVar35 * 8);
          pfVar26 = pfVar18;
          uVar11 = local_res20;
          fVar43 = 0.0;
          if ((local_res20 & 1) != 0) {
            pfVar26 = pfVar18 + 1;
            *pfVar18 = *pfVar28 * *pfVar18;
            uVar11 = uVar33;
            fVar43 = fVar38 + 0.0;
          }
          if (local_res20 != 1) {
            lVar19 = 0;
            do {
              pfVar26[lVar19] = pfVar28[(int)fVar43] * pfVar26[lVar19];
              pfVar26[lVar19 + 1] = pfVar28[(int)(fVar43 + fVar38)] * pfVar26[lVar19 + 1];
              fVar43 = fVar43 + fVar38 + fVar38;
              lVar19 = lVar19 + 2;
            } while (uVar11 != (uint)lVar19);
          }
          pfVar18 = pfVar18 + (int)local_res20;
          fVar43 = 0.0;
          uVar11 = param_5;
          if ((param_5 & 1) != 0) {
            *pfVar18 = pfVar28[0x2000] * *pfVar18;
            pfVar18 = pfVar18 + 1;
            fVar43 = fVar36 + 0.0;
            uVar11 = param_5 - 1;
          }
          if (param_5 != 1) {
            lVar19 = 0;
            do {
              pfVar18[lVar19] = pfVar28[(longlong)(int)fVar43 + 0x2000] * pfVar18[lVar19];
              pfVar18[lVar19 + 1] =
                   pfVar28[(longlong)(int)(fVar43 + fVar36) + 0x2000] * pfVar18[lVar19 + 1];
              fVar43 = fVar43 + fVar36 + fVar36;
              lVar19 = lVar19 + 2;
            } while (uVar11 != (uint)lVar19);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar29);
      }
    }
  }
  local_40 = param_5 + local_res20;
  fVar36 = DAT_02390124;
  if ((char)unaff_ESI != '\0') {
    uVar33 = 0x10;
    do {
      uVar11 = uVar33;
      uVar33 = uVar11 * 2;
    } while ((int)uVar11 < local_40);
    pdVar20 = &dylib_command_00000ff0.dylib.current_version;
    if (uVar11 < 0x1000) {
      pdVar20 = (dword *)(ulonglong)uVar11;
    }
    iVar12 = (int)pdVar20;
    if (iVar12 != *param_6) {
      FUN_012b9080(unaff_RDI,pdVar20);
      lVar27 = *(longlong *)(unaff_RDI + 0x1b0);
      if (lVar27 == local_c0) {
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
          lVar27 = *(longlong *)(unaff_RDI + 0x1b0);
        }
        *(longlong *)(unaff_RDI + 0x1b0) = local_c0;
        if (lVar27 != 0) {
          FUN_00d50b20();
        }
      }
      *param_6 = iVar12;
      uVar22 = *(uint *)(unaff_RDI + 0x160);
    }
    iVar3 = *(int *)(unaff_RDI + 0x164);
    if (0 < (int)uVar22) {
      lVar27 = 0;
      do {
        FUN_00e83530(unaff_RDI,*(undefined8 *)(*(longlong *)(unaff_RDI + 0x1e0) + lVar27 * 8));
        lVar27 = lVar27 + 1;
      } while (lVar27 < *(int *)(unaff_RDI + 0x160));
    }
    uVar29 = (ulonglong)pdVar20 >> 1;
    ___bzero();
    uVar33 = _DAT_02390140;
    fVar36 = DAT_02390124;
    uVar22 = *(uint *)(unaff_RDI + 0x160);
    uVar32 = (ulonglong)uVar22;
    if (0 < (int)uVar22) {
      pdVar20 = *(dword **)(unaff_RDI + 0x1b8);
      lVar27 = *(longlong *)(unaff_RDI + 0x1e8);
      uVar35 = 2;
      if (2 < (uint)uVar29) {
        uVar35 = uVar29;
      }
      uVar31 = 0;
      do {
        lVar19 = *(longlong *)(lVar27 + uVar31 * 8);
        uVar13 = 1;
        do {
          uVar34 = *(undefined8 *)(lVar19 + uVar13 * 8);
          fVar43 = (float)((ulonglong)uVar34 >> 0x20);
          fVar44 = (float)((uint)fVar43 & uVar33);
          fVar38 = (float)uVar34;
          if ((fVar38 != 0.0) || (fVar41 = fVar44, NAN(fVar38))) {
            fVar41 = (float)((uint)fVar38 & uVar33);
            if ((fVar43 != 0.0) || (NAN(fVar43))) {
              if (fVar41 <= fVar44) {
                fVar41 = SQRT((fVar41 / fVar44) * (fVar41 / fVar44) + fVar36) * fVar44;
              }
              else {
                fVar41 = SQRT((fVar44 / fVar41) * (fVar44 / fVar41) + fVar36) * fVar41;
              }
            }
          }
          pdVar20[uVar13] = (dword)(fVar41 + (float)pdVar20[uVar13]);
          uVar13 = uVar13 + 1;
        } while (uVar35 != uVar13);
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar32);
      if (1 < (int)uVar22) {
        (**(code **)(DAT_02786500 + 0x20))(fVar36 / (float)(int)uVar22);
      }
    }
    uVar35 = 1;
    if (1 < (uint)uVar29) {
      uVar35 = uVar29;
    }
    _memset_pattern16(pdVar20,(void *)(uVar35 * 4),(size_t)uVar32);
    local_98 = (char)in_R8;
    if (local_98 == '\0') {
      if (in_DL == '\0') goto LAB_012b7a2f;
LAB_012b77a7:
      if (*(longlong *)(unaff_RDI + 0x2b8) == 0) {
        lVar27 = 0;
      }
      else {
        lVar27 = *param_4;
        pvVar14 = _pthread_getspecific((pthread_key_t)pdVar20);
        if (pvVar14 != (void *)0x0) {
          lVar27 = *param_4;
          lVar19 = FUN_00e8b990();
          if (lVar19 != 0) {
            lVar27 = *(longlong *)(lVar27 + 0x20 + (ulonglong)(*(uint *)(lVar19 + 0x154) & 1) * 8);
          }
        }
        if (*(float *)(lVar27 + 0xbc) <= 0.0) {
          lVar27 = 0;
        }
        else {
          lVar27 = *(longlong *)(unaff_RDI + 0x170);
        }
      }
      pvVar14 = (void *)(ulonglong)param_5;
      FUN_012bafd0(param_3,local_res20,uVar29,
                   ((float)(double)CONCAT44(in_XMM5_Db,in_XMM5_Da) / (float)iVar3) / (float)iVar12);
      lVar19 = *param_4;
      uVar32 = uVar29;
      if (lVar19 == 0) {
LAB_012b7902:
        if (in_DL == '\0') {
          _memset_pattern16(pvVar14,(void *)(uVar35 * 4),(size_t)uVar32);
          goto LAB_012b7a2f;
        }
      }
      else {
        pvVar15 = _pthread_getspecific((pthread_key_t)pvVar14);
        if (pvVar15 != (void *)0x0) {
          lVar19 = *param_4;
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar19 = *(longlong *)(lVar19 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        uVar32 = uVar29;
        if (*(char *)(lVar19 + 0x78) == '\0') goto LAB_012b7902;
      }
      uVar33 = _DAT_02390140;
      fVar36 = DAT_02390124;
      if (lVar27 == 0) goto LAB_012b7a2f;
      uVar22 = *(uint *)(unaff_RDI + 0x160);
      if ((int)uVar22 < 1) goto joined_r0x012b7b10;
      lVar19 = *(longlong *)(unaff_RDI + 0x1c0);
      uVar32 = *(ulonglong *)(unaff_RDI + 0x1e8);
      uVar29 = 0;
      uVar11 = (uint)DAT_023945e0;
      do {
        lVar16 = *(longlong *)(uVar32 + uVar29 * 8);
        lVar25 = *(longlong *)(lVar27 + uVar29 * 8);
        uVar31 = 0;
        do {
          uVar34 = *(undefined8 *)(lVar16 + uVar31 * 8);
          fVar43 = (float)((ulonglong)uVar34 >> 0x20);
          fVar44 = (float)((uint)fVar43 & uVar33);
          fVar38 = (float)uVar34;
          if ((fVar38 != 0.0) || (fVar41 = fVar44, NAN(fVar38))) {
            fVar41 = (float)((uint)fVar38 & uVar33);
            if ((fVar43 != 0.0) || (NAN(fVar43))) {
              if (fVar41 <= fVar44) {
                fVar41 = SQRT((fVar41 / fVar44) * (fVar41 / fVar44) + fVar36) * fVar44;
              }
              else {
                fVar41 = SQRT((fVar44 / fVar41) * (fVar44 / fVar41) + fVar36) * fVar41;
              }
            }
          }
          fVar41 = fVar41 * *(float *)(lVar19 + uVar31 * 4);
          *(float *)(lVar16 + uVar31 * 8) = *(float *)(lVar25 + uVar31 * 8) * fVar41;
          *(float *)(lVar16 + 4 + uVar31 * 8) =
               (float)((uint)fVar41 ^ uVar11) * *(float *)(lVar25 + 4 + uVar31 * 8);
          uVar31 = uVar31 + 1;
        } while (uVar35 != uVar31);
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar22);
    }
    else {
      if ((*param_4 != 0) || (in_DL != '\0')) goto LAB_012b77a7;
LAB_012b7a2f:
      uVar22 = *(uint *)(unaff_RDI + 0x160);
      uVar29 = (ulonglong)uVar22;
      fVar36 = DAT_02390124;
      if ((int)uVar22 < 1) goto joined_r0x012b7b10;
      uVar31 = *(ulonglong *)(unaff_RDI + 0x1c0);
      lVar27 = *(longlong *)(unaff_RDI + 0x1e8);
      uVar33 = (uint)uVar35;
      if (uVar33 < 4) {
        uVar13 = 0;
        do {
          lVar19 = *(longlong *)(lVar27 + uVar13 * 8);
          uVar23 = 0;
          do {
            *(float *)(lVar19 + uVar23 * 8) =
                 *(float *)(uVar31 + uVar23 * 4) * *(float *)(lVar19 + uVar23 * 8);
            *(float *)(lVar19 + 4 + uVar23 * 8) =
                 *(float *)(uVar31 + uVar23 * 4) * *(float *)(lVar19 + 4 + uVar23 * 8);
            *(float *)(lVar19 + 8 + uVar23 * 8) =
                 *(float *)(uVar31 + 4 + uVar23 * 4) * *(float *)(lVar19 + 8 + uVar23 * 8);
            *(float *)(lVar19 + 0xc + uVar23 * 8) =
                 *(float *)(uVar31 + 4 + uVar23 * 4) * *(float *)(lVar19 + 0xc + uVar23 * 8);
            uVar23 = uVar23 + 2;
          } while ((uVar33 & 0xff8) != uVar23);
          if ((uVar35 & 1) != 0) {
            *(float *)(lVar19 + uVar23 * 8) =
                 *(float *)(uVar31 + uVar23 * 4) * *(float *)(lVar19 + uVar23 * 8);
            *(float *)(lVar19 + 4 + uVar23 * 8) =
                 *(float *)(uVar31 + uVar23 * 4) * *(float *)(lVar19 + 4 + uVar23 * 8);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar29);
      }
      else {
        uVar13 = uVar31 + uVar35 * 4;
        uVar23 = (ulonglong)(uVar33 & 0xff8);
        uVar32 = (uVar23 - 4 >> 2) + 1;
        if (uVar23 == uVar35) {
          uVar30 = 0;
          do {
            uVar4 = *(ulonglong *)(lVar27 + uVar30 * 8);
            if ((uVar4 < uVar13) && (uVar31 < uVar4 + uVar35 * 8)) {
              uVar17 = 0;
              do {
                *(float *)(uVar4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + uVar17 * 8);
                *(float *)(uVar4 + 4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + 4 + uVar17 * 8);
                *(float *)(uVar4 + 8 + uVar17 * 8) =
                     *(float *)(uVar31 + 4 + uVar17 * 4) * *(float *)(uVar4 + 8 + uVar17 * 8);
                *(float *)(uVar4 + 0xc + uVar17 * 8) =
                     *(float *)(uVar31 + 4 + uVar17 * 4) * *(float *)(uVar4 + 0xc + uVar17 * 8);
                uVar17 = uVar17 + 2;
              } while (uVar23 != uVar17);
              if ((uVar35 & 1) != 0) {
                *(float *)(uVar4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + uVar17 * 8);
                *(float *)(uVar4 + 4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + 4 + uVar17 * 8);
              }
            }
            else {
              lVar19 = 0x10;
              uVar17 = uVar32;
              do {
                pfVar26 = (float *)((uVar31 - 0x10) + lVar19);
                fVar36 = *pfVar26;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar44 = pfVar26[3];
                pfVar18 = (float *)((uVar4 - 0x20) + lVar19 * 2);
                fVar41 = pfVar18[1];
                fVar1 = pfVar18[2];
                fVar42 = pfVar18[3];
                auVar2 = *(undefined1 (*) [16])((uVar4 - 0x10) + lVar19 * 2);
                pfVar26 = (float *)(uVar4 + lVar19 * 2);
                fVar37 = *pfVar26;
                fVar45 = pfVar26[1];
                fVar47 = pfVar26[2];
                fVar5 = pfVar26[3];
                pfVar26 = (float *)(uVar4 + 0x10 + lVar19 * 2);
                fVar6 = *pfVar26;
                fVar7 = pfVar26[1];
                fVar8 = pfVar26[2];
                fVar9 = pfVar26[3];
                pfVar26 = (float *)((uVar4 - 0x20) + lVar19 * 2);
                *pfVar26 = *pfVar18 * fVar36;
                pfVar26[1] = fVar41 * fVar36;
                pfVar26[2] = fVar1 * fVar38;
                pfVar26[3] = fVar42 * fVar38;
                pfVar26 = (float *)((uVar4 - 0x10) + lVar19 * 2);
                *pfVar26 = auVar2._0_4_ * fVar43;
                pfVar26[1] = auVar2._4_4_ * fVar43;
                pfVar26[2] = auVar2._8_4_ * fVar44;
                pfVar26[3] = auVar2._12_4_ * fVar44;
                pfVar26 = (float *)(uVar31 + lVar19);
                fVar36 = *pfVar26;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar44 = pfVar26[3];
                pfVar26 = (float *)(uVar4 + lVar19 * 2);
                *pfVar26 = fVar37 * fVar36;
                pfVar26[1] = fVar45 * fVar36;
                pfVar26[2] = fVar47 * fVar38;
                pfVar26[3] = fVar5 * fVar38;
                pfVar26 = (float *)(uVar4 + 0x10 + lVar19 * 2);
                *pfVar26 = fVar6 * fVar43;
                pfVar26[1] = fVar7 * fVar43;
                pfVar26[2] = fVar8 * fVar44;
                pfVar26[3] = fVar9 * fVar44;
                lVar19 = lVar19 + 0x20;
                uVar17 = uVar17 - 2;
              } while (uVar17 != 0);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 != uVar29);
        }
        else {
          uVar30 = 0;
          do {
            uVar4 = *(ulonglong *)(lVar27 + uVar30 * 8);
            if ((uVar4 < uVar13) && (uVar31 < uVar4 + uVar35 * 8)) {
              uVar10 = 0;
            }
            else {
              lVar19 = 0x10;
              uVar17 = uVar32;
              do {
                pfVar26 = (float *)((uVar31 - 0x10) + lVar19);
                fVar36 = *pfVar26;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar44 = pfVar26[3];
                pfVar18 = (float *)((uVar4 - 0x20) + lVar19 * 2);
                fVar41 = pfVar18[1];
                fVar1 = pfVar18[2];
                fVar42 = pfVar18[3];
                auVar2 = *(undefined1 (*) [16])((uVar4 - 0x10) + lVar19 * 2);
                pfVar26 = (float *)(uVar4 + lVar19 * 2);
                fVar37 = *pfVar26;
                fVar45 = pfVar26[1];
                fVar47 = pfVar26[2];
                fVar5 = pfVar26[3];
                pfVar26 = (float *)(uVar4 + 0x10 + lVar19 * 2);
                fVar6 = *pfVar26;
                fVar7 = pfVar26[1];
                fVar8 = pfVar26[2];
                fVar9 = pfVar26[3];
                pfVar26 = (float *)((uVar4 - 0x20) + lVar19 * 2);
                *pfVar26 = *pfVar18 * fVar36;
                pfVar26[1] = fVar41 * fVar36;
                pfVar26[2] = fVar1 * fVar38;
                pfVar26[3] = fVar42 * fVar38;
                pfVar26 = (float *)((uVar4 - 0x10) + lVar19 * 2);
                *pfVar26 = auVar2._0_4_ * fVar43;
                pfVar26[1] = auVar2._4_4_ * fVar43;
                pfVar26[2] = auVar2._8_4_ * fVar44;
                pfVar26[3] = auVar2._12_4_ * fVar44;
                pfVar26 = (float *)(uVar31 + lVar19);
                fVar36 = *pfVar26;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar44 = pfVar26[3];
                pfVar26 = (float *)(uVar4 + lVar19 * 2);
                *pfVar26 = fVar37 * fVar36;
                pfVar26[1] = fVar45 * fVar36;
                pfVar26[2] = fVar47 * fVar38;
                pfVar26[3] = fVar5 * fVar38;
                pfVar26 = (float *)(uVar4 + 0x10 + lVar19 * 2);
                *pfVar26 = fVar6 * fVar43;
                pfVar26[1] = fVar7 * fVar43;
                pfVar26[2] = fVar8 * fVar44;
                pfVar26[3] = fVar9 * fVar44;
                lVar19 = lVar19 + 0x20;
                uVar17 = uVar17 - 2;
                uVar10 = uVar23;
              } while (uVar17 != 0);
            }
            uVar17 = uVar10;
            if ((uVar35 & 1) != 0) {
              *(float *)(uVar4 + uVar10 * 8) =
                   *(float *)(uVar31 + uVar10 * 4) * *(float *)(uVar4 + uVar10 * 8);
              *(float *)(uVar4 + 4 + uVar10 * 8) =
                   *(float *)(uVar31 + uVar10 * 4) * *(float *)(uVar4 + 4 + uVar10 * 8);
              uVar17 = uVar10 | 1;
            }
            if (~uVar10 != -uVar35) {
              do {
                *(float *)(uVar4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + uVar17 * 8);
                *(float *)(uVar4 + 4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + 4 + uVar17 * 8);
                *(float *)(uVar4 + 8 + uVar17 * 8) =
                     *(float *)(uVar31 + 4 + uVar17 * 4) * *(float *)(uVar4 + 8 + uVar17 * 8);
                *(float *)(uVar4 + 0xc + uVar17 * 8) =
                     *(float *)(uVar31 + 4 + uVar17 * 4) * *(float *)(uVar4 + 0xc + uVar17 * 8);
                uVar17 = uVar17 + 2;
              } while (uVar35 != uVar17);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 != uVar29);
        }
      }
    }
    fVar36 = DAT_02390124;
    if (0 < (int)uVar22) {
      lVar27 = 0;
      do {
        FUN_00e83640();
        lVar27 = lVar27 + 1;
        uVar22 = *(uint *)(unaff_RDI + 0x160);
        fVar36 = DAT_02390124;
      } while (lVar27 < (int)uVar22);
    }
  }
joined_r0x012b7b10:
  pfVar26 = pfVar28;
  DAT_02390124 = fVar36;
  if (param_1 != '\0') {
    lVar27 = *(longlong *)(unaff_RDI + 0x1c8);
    dVar40 = (double)param_2;
    uVar33 = *(uint *)(unaff_RDI + 0x15c);
    dVar39 = (double)(int)local_res20;
    dVar46 = dVar39 - dVar40 * dVar39;
    local_3c = 0;
    if (param_2 < fVar36) {
      local_3c = (int)dVar46 + 1;
      local_40 = (int)((double)(int)param_5 * dVar40 + dVar39) + 1;
      *param_10 = '\x01';
      *param_9 = '\x01';
    }
    if (0 < (int)uVar22) {
      iVar12 = uVar33 - 2;
      dVar40 = DAT_0238fee8 / dVar40;
      lVar19 = (longlong)local_3c;
      uVar22 = local_40 - local_3c;
      fVar38 = DAT_0241128c / (float)(int)uVar22;
      uVar34 = CONCAT71((int7)(uVar32 >> 8),fVar36 <= param_2);
      lVar16 = 0;
      while( true ) {
        pvVar14 = (void *)(ulonglong)uVar33;
        lVar25 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1e0) + lVar16 * 8);
        ___bzero();
        _memcpy(pvVar14,(void *)((longlong)*(int *)(unaff_RDI + 0x15c) << 2),(size_t)uVar34);
        ___bzero();
        fVar44 = DAT_0240d158;
        fVar43 = DAT_0239011c;
        if (*(char *)(unaff_RDI + 0x259) == '\0') {
          if (local_3c < local_40) {
            lVar21 = 0;
            do {
              dVar39 = ((double)((int)lVar21 + local_3c) - dVar46) * dVar40;
              if ((0.0 <= dVar39) && (dVar39 <= (double)iVar12)) {
                fVar43 = *(float *)(lVar27 + (longlong)(int)dVar39 * 4);
                *(float *)(lVar25 + lVar19 * 4 + lVar21 * 4) =
                     (*(float *)(lVar27 + 4 + (longlong)(int)dVar39 * 4) - fVar43) *
                     (float)(dVar39 - (double)(int)dVar39) + fVar43;
              }
              lVar21 = lVar21 + 1;
            } while (local_40 - lVar19 != lVar21);
          }
        }
        else if (local_3c < local_40) {
          lVar21 = 0;
          do {
            dVar39 = ((double)((int)lVar21 + local_3c) - dVar46) * dVar40;
            if ((0.0 <= dVar39) && (dVar39 <= (double)iVar12)) {
              fVar37 = (float)(dVar39 - (double)(int)dVar39);
              lVar24 = (longlong)(int)dVar39;
              fVar41 = *(float *)(lVar27 + -4 + lVar24 * 4);
              fVar1 = *(float *)(lVar27 + lVar24 * 4);
              fVar42 = *(float *)(lVar27 + 4 + lVar24 * 4);
              fVar45 = (*(float *)(lVar27 + 8 + lVar24 * 4) - fVar41) * fVar44;
              fVar47 = (fVar1 - fVar42) * fVar43;
              fVar42 = (fVar42 + fVar41) * fVar43;
              *(float *)(lVar25 + lVar19 * 4 + lVar21 * 4) =
                   (((fVar47 + fVar45) * fVar37 + (fVar42 - fVar1)) * fVar37 +
                   (((fVar42 - fVar45) - fVar47) - fVar41)) * fVar37 + fVar1;
            }
            lVar21 = lVar21 + 1;
          } while (local_40 - lVar19 != lVar21);
        }
        if (uVar22 != 0 && fVar36 > param_2) {
          pfVar18 = (float *)(lVar25 + lVar19 * 4);
          fVar43 = 0.0;
          uVar33 = uVar22;
          if ((uVar22 & 1) != 0) {
            *pfVar18 = *pfVar28 * *pfVar18;
            pfVar18 = pfVar18 + 1;
            fVar43 = fVar38 + 0.0;
            uVar33 = uVar22 - 1;
          }
          if (local_40 != local_3c + 1) {
            lVar25 = 0;
            do {
              pfVar18[lVar25] = pfVar28[(int)fVar43] * pfVar18[lVar25];
              pfVar18[lVar25 + 1] = pfVar28[(int)(fVar43 + fVar38)] * pfVar18[lVar25 + 1];
              fVar43 = fVar43 + fVar38 + fVar38;
              lVar25 = lVar25 + 2;
            } while (uVar33 != (uint)lVar25);
          }
        }
        lVar16 = lVar16 + 1;
        if (*(int *)(unaff_RDI + 0x160) <= lVar16) break;
        uVar33 = *(uint *)(unaff_RDI + 0x15c);
      }
    }
  }
LAB_012b8249:
  if ((((*param_7 != '\0') && (*param_9 == '\0')) &&
      (uVar22 = *(uint *)(unaff_RDI + 0x160), 0 < (int)uVar22)) && (local_res20 != 0)) {
    fVar36 = DAT_023d5f44 / (float)(int)local_res20;
    lVar27 = *(longlong *)(unaff_RDI + 0x1e0);
    uVar32 = 0;
    do {
      pfVar28 = *(float **)(lVar27 + uVar32 * 8);
      if ((local_res20 & 1) == 0) {
        fVar38 = 0.0;
        uVar33 = local_res20;
      }
      else {
        *pfVar28 = *pfVar26 * *pfVar28;
        pfVar28 = pfVar28 + 1;
        uVar33 = local_res20 - 1;
        fVar38 = fVar36 + 0.0;
      }
      if (local_res20 != 1) {
        lVar19 = 0;
        do {
          pfVar28[lVar19] = pfVar26[(int)fVar38] * pfVar28[lVar19];
          pfVar28[lVar19 + 1] = pfVar26[(int)(fVar38 + fVar36)] * pfVar28[lVar19 + 1];
          fVar38 = fVar38 + fVar36 + fVar36;
          lVar19 = lVar19 + 2;
        } while (uVar33 != (uint)lVar19);
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar22);
  }
  if ((*param_8 != '\0') && (*param_10 == '\0')) {
    uVar22 = *(uint *)(unaff_RDI + 0x160);
    if ((0 < (int)uVar22) && (param_5 != 0)) {
      fVar36 = DAT_023d5f44 / (float)(int)param_5;
      lVar27 = *(longlong *)(unaff_RDI + 0x1e0);
      uVar32 = 0;
      do {
        pfVar28 = (float *)(*(longlong *)(lVar27 + uVar32 * 8) + (longlong)(int)local_res20 * 4);
        if ((param_5 & 1) == 0) {
          fVar38 = 0.0;
          uVar33 = param_5;
        }
        else {
          *pfVar28 = pfVar26[0x2000] * *pfVar28;
          pfVar28 = pfVar28 + 1;
          fVar38 = fVar36 + 0.0;
          uVar33 = param_5 - 1;
        }
        if (param_5 != 1) {
          lVar19 = 0;
          do {
            pfVar28[lVar19] = pfVar26[(longlong)(int)fVar38 + 0x2000] * pfVar28[lVar19];
            pfVar28[lVar19 + 1] =
                 pfVar26[(longlong)(int)(fVar38 + fVar36) + 0x2000] * pfVar28[lVar19 + 1];
            fVar38 = fVar38 + fVar36 + fVar36;
            lVar19 = lVar19 + 2;
          } while (uVar33 != (uint)lVar19);
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar22);
    }
    *param_10 = '\x01';
  }
  return;
}




// ============================================================
// @012ba340 — 3128 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012baaf1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012ba340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  double dVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  size_t sVar26;
  int iVar27;
  undefined1 *in_RCX;
  undefined1 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  void *pvVar31;
  uint in_EDX;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  uint unaff_ESI;
  ulonglong uVar35;
  float *pfVar36;
  uint uVar37;
  void *unaff_RDI;
  float *in_R8;
  uint uVar38;
  ulonglong uVar39;
  int iVar40;
  void *pvVar41;
  int iVar42;
  ulonglong uVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  sVar26 = (size_t)in_RCX;
  uVar38 = *(uint *)((longlong)unaff_RDI + 0x160);
  puVar28 = in_RCX;
  if (0 < (int)uVar38) {
    uVar32 = 0;
    uVar44 = param_1;
    do {
      uVar44 = (**(code **)(DAT_02786500 + 0x38))(uVar44,unaff_ESI);
      uVar32 = uVar32 + 1;
    } while (uVar38 != uVar32);
    if (0 < *(int *)((longlong)unaff_RDI + 0x160)) {
      lVar33 = 0;
      do {
        uVar44 = FUN_00e83530(uVar44,*(undefined8 *)
                                      (*(longlong *)((longlong)unaff_RDI + 0x1e0) + lVar33 * 8));
        lVar33 = lVar33 + 1;
      } while (lVar33 < *(int *)((longlong)unaff_RDI + 0x160));
    }
  }
  ___bzero();
  uVar8 = _DAT_02390140;
  fVar45 = DAT_02390124;
  uVar38 = *(uint *)((longlong)unaff_RDI + 0x160);
  if (0 < (int)uVar38) {
    if ((int)in_EDX < 1) {
      puVar28 = (undefined1 *)((ulonglong)uVar38 - 1);
      uVar32 = (ulonglong)(uVar38 & 7);
      if ((undefined1 *)((longlong)&MACH_HEADER.cputype + 2) < puVar28) {
        lVar33 = -(ulonglong)(uVar38 & 0xfffffff8);
        do {
          lVar33 = lVar33 + 8;
          puVar28 = (undefined1 *)0x0;
        } while (lVar33 != 0);
      }
      for (; uVar32 != 0; uVar32 = uVar32 - 1) {
      }
    }
    else {
      puVar28 = *(undefined1 **)((longlong)unaff_RDI + 0x1e8);
      lVar33 = *(longlong *)((longlong)unaff_RDI + 0x1b8);
      uVar32 = 0;
      do {
        lVar5 = *(longlong *)(puVar28 + uVar32 * 8);
        uVar23 = 0;
        do {
          uVar4 = *(undefined8 *)(lVar5 + uVar23 * 8);
          fVar46 = (float)uVar4;
          fVar47 = (float)((ulonglong)uVar4 >> 0x20);
          fVar49 = (float)((uint)fVar47 & uVar8);
          if ((fVar46 != 0.0) || (fVar48 = fVar49, NAN(fVar46))) {
            fVar48 = (float)((uint)fVar46 & uVar8);
            if ((fVar47 != 0.0) || (NAN(fVar47))) {
              if (fVar49 < fVar48) {
                fVar48 = SQRT((fVar49 / fVar48) * (fVar49 / fVar48) + fVar45) * fVar48;
              }
              else {
                fVar48 = SQRT((fVar48 / fVar49) * (fVar48 / fVar49) + fVar45) * fVar49;
              }
            }
          }
          *(float *)(lVar33 + uVar23 * 4) = fVar48 + *(float *)(lVar33 + uVar23 * 4);
          uVar23 = uVar23 + 1;
        } while (in_EDX != uVar23);
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar38);
    }
    if (1 < (int)uVar38) {
      (**(code **)(DAT_02786500 + 0x20))(DAT_02390124 / (float)(int)uVar38);
    }
  }
  if (0 < (int)in_EDX) {
    _memset_pattern16(puVar28,(void *)((ulonglong)in_EDX << 2),sVar26);
  }
  uVar32 = (ulonglong)in_RCX & 0xffffffff;
  FUN_012b9d70(param_2,param_3,param_1,in_R8);
  dVar7 = (double)*in_R8;
  fVar45 = SUB84(dVar7,0);
  if ((dVar7 < DAT_0240d1b8) || (DAT_0240d1c0 < dVar7)) {
    *param_4 = 1;
  }
  uVar38 = *(uint *)((longlong)unaff_RDI + 0x160);
  uVar23 = (ulonglong)uVar38;
  if (0 < (int)uVar38) {
    if (1 < (int)sVar26) {
      uVar25 = *(ulonglong *)((longlong)unaff_RDI + 0x1e8);
      lVar33 = *(longlong *)((longlong)unaff_RDI + 0x1c0);
      uVar35 = (ulonglong)in_RCX & 0xffffffff;
      uVar32 = uVar35 - 1;
      if (uVar32 < 4) {
        uVar35 = 0;
        do {
          lVar5 = *(longlong *)(uVar25 + uVar35 * 8);
          lVar34 = 1;
          if (sVar26 != 2) {
            lVar34 = 1;
            do {
              *(float *)(lVar5 + lVar34 * 8) =
                   *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + lVar34 * 8);
              *(float *)(lVar5 + 4 + lVar34 * 8) =
                   *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + 4 + lVar34 * 8);
              *(float *)(lVar5 + 8 + lVar34 * 8) =
                   *(float *)(lVar33 + 4 + lVar34 * 4) * *(float *)(lVar5 + 8 + lVar34 * 8);
              fVar45 = *(float *)(lVar33 + 4 + lVar34 * 4) * *(float *)(lVar5 + 0xc + lVar34 * 8);
              *(float *)(lVar5 + 0xc + lVar34 * 8) = fVar45;
              lVar2 = lVar34 - (uVar32 & 0xfffffffffffffffe);
              lVar34 = lVar34 + 2;
            } while (lVar2 != -1);
          }
          if ((uVar32 & 1) != 0) {
            *(float *)(lVar5 + lVar34 * 8) =
                 *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + lVar34 * 8);
            fVar45 = *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + 4 + lVar34 * 8);
            *(float *)(lVar5 + 4 + lVar34 * 8) = fVar45;
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar23);
      }
      else {
        uVar1 = lVar33 + 4;
        uVar3 = lVar33 + uVar35 * 4;
        uVar24 = uVar32 & 0xfffffffffffffffc;
        if (uVar32 == uVar24) {
          uVar29 = (uVar24 - 4 >> 2) + 1;
          uVar43 = 0;
          do {
            lVar5 = *(longlong *)(uVar25 + uVar43 * 8);
            uVar39 = lVar5 + 8;
            if ((uVar39 < uVar3) && (uVar1 < lVar5 + uVar35 * 8)) {
              lVar34 = 1;
              if (sVar26 != 2) {
                lVar34 = 1;
                do {
                  *(float *)(lVar5 + lVar34 * 8) =
                       *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + lVar34 * 8);
                  *(float *)(lVar5 + 4 + lVar34 * 8) =
                       *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + 4 + lVar34 * 8);
                  *(float *)(uVar39 + lVar34 * 8) =
                       *(float *)(uVar1 + lVar34 * 4) * *(float *)(uVar39 + lVar34 * 8);
                  fVar45 = *(float *)(uVar1 + lVar34 * 4) * *(float *)(lVar5 + 0xc + lVar34 * 8);
                  *(float *)(lVar5 + 0xc + lVar34 * 8) = fVar45;
                  lVar2 = lVar34 - (uVar32 & 0xfffffffffffffffe);
                  lVar34 = lVar34 + 2;
                } while (lVar2 != -1);
              }
              if ((uVar32 & 1) != 0) {
                *(float *)(lVar5 + lVar34 * 8) =
                     *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + lVar34 * 8);
                fVar45 = *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + 4 + lVar34 * 8);
                *(float *)(lVar5 + 4 + lVar34 * 8) = fVar45;
              }
            }
            else {
              if (uVar24 - 4 == 0) {
                uVar39 = 0;
              }
              else {
                uVar39 = 0;
                lVar34 = -(uVar29 & 0xfffffffffffffffe);
                do {
                  pfVar6 = (float *)(lVar33 + 4 + uVar39 * 4);
                  fVar46 = *pfVar6;
                  fVar47 = pfVar6[1];
                  fVar49 = pfVar6[2];
                  fVar48 = pfVar6[3];
                  pfVar6 = (float *)(lVar5 + 8 + uVar39 * 8);
                  fVar9 = pfVar6[1];
                  fVar10 = pfVar6[2];
                  fVar11 = pfVar6[3];
                  pfVar36 = (float *)(lVar5 + 0x18 + uVar39 * 8);
                  fVar12 = *pfVar36;
                  fVar13 = pfVar36[1];
                  fVar14 = pfVar36[2];
                  fVar15 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 0x28 + uVar39 * 8);
                  fVar16 = *pfVar36;
                  fVar17 = pfVar36[1];
                  fVar18 = pfVar36[2];
                  fVar19 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 0x38 + uVar39 * 8);
                  fVar45 = *pfVar36;
                  fVar20 = pfVar36[1];
                  fVar21 = pfVar36[2];
                  fVar22 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 8 + uVar39 * 8);
                  *pfVar36 = *pfVar6 * fVar46;
                  pfVar36[1] = fVar9 * fVar46;
                  pfVar36[2] = fVar10 * fVar47;
                  pfVar36[3] = fVar11 * fVar47;
                  pfVar6 = (float *)(lVar5 + 0x18 + uVar39 * 8);
                  *pfVar6 = fVar12 * fVar49;
                  pfVar6[1] = fVar13 * fVar49;
                  pfVar6[2] = fVar14 * fVar48;
                  pfVar6[3] = fVar15 * fVar48;
                  pfVar6 = (float *)(lVar33 + 0x14 + uVar39 * 4);
                  fVar46 = *pfVar6;
                  fVar47 = pfVar6[1];
                  fVar49 = pfVar6[2];
                  fVar48 = pfVar6[3];
                  fVar45 = fVar45 * fVar49;
                  pfVar6 = (float *)(lVar5 + 0x28 + uVar39 * 8);
                  *pfVar6 = fVar16 * fVar46;
                  pfVar6[1] = fVar17 * fVar46;
                  pfVar6[2] = fVar18 * fVar47;
                  pfVar6[3] = fVar19 * fVar47;
                  pfVar6 = (float *)(lVar5 + 0x38 + uVar39 * 8);
                  *pfVar6 = fVar45;
                  pfVar6[1] = fVar20 * fVar49;
                  pfVar6[2] = fVar21 * fVar48;
                  pfVar6[3] = fVar22 * fVar48;
                  uVar39 = uVar39 + 8;
                  lVar34 = lVar34 + 2;
                } while (lVar34 != 0);
                if ((uVar29 & 1) == 0) goto LAB_012ba760;
              }
              uVar39 = uVar39 | 1;
              pfVar6 = (float *)(lVar33 + uVar39 * 4);
              fVar46 = *pfVar6;
              fVar47 = pfVar6[1];
              fVar49 = pfVar6[2];
              fVar48 = pfVar6[3];
              pfVar6 = (float *)(lVar5 + uVar39 * 8);
              fVar9 = pfVar6[1];
              fVar10 = pfVar6[2];
              fVar11 = pfVar6[3];
              pfVar36 = (float *)(lVar5 + 0x10 + uVar39 * 8);
              fVar12 = pfVar36[1];
              fVar13 = pfVar36[2];
              fVar14 = pfVar36[3];
              fVar45 = *pfVar36 * fVar49;
              pfVar36 = (float *)(lVar5 + uVar39 * 8);
              *pfVar36 = *pfVar6 * fVar46;
              pfVar36[1] = fVar9 * fVar46;
              pfVar36[2] = fVar10 * fVar47;
              pfVar36[3] = fVar11 * fVar47;
              pfVar6 = (float *)(lVar5 + 0x10 + uVar39 * 8);
              *pfVar6 = fVar45;
              pfVar6[1] = fVar12 * fVar49;
              pfVar6[2] = fVar13 * fVar48;
              pfVar6[3] = fVar14 * fVar48;
            }
LAB_012ba760:
            uVar43 = uVar43 + 1;
          } while (uVar43 != uVar23);
        }
        else {
          uVar29 = (uVar24 - 4 >> 2) + 1;
          uVar32 = -uVar35;
          uVar43 = 0;
          do {
            lVar5 = *(longlong *)(uVar25 + uVar43 * 8);
            if ((uVar3 <= lVar5 + 8U) || (uVar39 = 1, lVar5 + uVar35 * 8 <= uVar1)) {
              uVar39 = uVar24 + 1;
              if (uVar24 - 4 == 0) {
                uVar30 = 0;
              }
              else {
                uVar30 = 0;
                lVar34 = -(uVar29 & 0xfffffffffffffffe);
                do {
                  pfVar6 = (float *)(lVar33 + 4 + uVar30 * 4);
                  fVar46 = *pfVar6;
                  fVar47 = pfVar6[1];
                  fVar49 = pfVar6[2];
                  fVar48 = pfVar6[3];
                  pfVar6 = (float *)(lVar5 + 8 + uVar30 * 8);
                  fVar9 = pfVar6[1];
                  fVar10 = pfVar6[2];
                  fVar11 = pfVar6[3];
                  pfVar36 = (float *)(lVar5 + 0x18 + uVar30 * 8);
                  fVar12 = *pfVar36;
                  fVar13 = pfVar36[1];
                  fVar14 = pfVar36[2];
                  fVar15 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 0x28 + uVar30 * 8);
                  fVar16 = *pfVar36;
                  fVar17 = pfVar36[1];
                  fVar18 = pfVar36[2];
                  fVar19 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 0x38 + uVar30 * 8);
                  fVar45 = *pfVar36;
                  fVar20 = pfVar36[1];
                  fVar21 = pfVar36[2];
                  fVar22 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 8 + uVar30 * 8);
                  *pfVar36 = *pfVar6 * fVar46;
                  pfVar36[1] = fVar9 * fVar46;
                  pfVar36[2] = fVar10 * fVar47;
                  pfVar36[3] = fVar11 * fVar47;
                  pfVar6 = (float *)(lVar5 + 0x18 + uVar30 * 8);
                  *pfVar6 = fVar12 * fVar49;
                  pfVar6[1] = fVar13 * fVar49;
                  pfVar6[2] = fVar14 * fVar48;
                  pfVar6[3] = fVar15 * fVar48;
                  pfVar6 = (float *)(lVar33 + 0x14 + uVar30 * 4);
                  fVar46 = *pfVar6;
                  fVar47 = pfVar6[1];
                  fVar49 = pfVar6[2];
                  fVar48 = pfVar6[3];
                  fVar45 = fVar45 * fVar49;
                  pfVar6 = (float *)(lVar5 + 0x28 + uVar30 * 8);
                  *pfVar6 = fVar16 * fVar46;
                  pfVar6[1] = fVar17 * fVar46;
                  pfVar6[2] = fVar18 * fVar47;
                  pfVar6[3] = fVar19 * fVar47;
                  pfVar6 = (float *)(lVar5 + 0x38 + uVar30 * 8);
                  *pfVar6 = fVar45;
                  pfVar6[1] = fVar20 * fVar49;
                  pfVar6[2] = fVar21 * fVar48;
                  pfVar6[3] = fVar22 * fVar48;
                  uVar30 = uVar30 + 8;
                  lVar34 = lVar34 + 2;
                } while (lVar34 != 0);
                if ((uVar29 & 1) == 0) goto LAB_012baa50;
              }
              uVar30 = uVar30 | 1;
              pfVar6 = (float *)(lVar33 + uVar30 * 4);
              fVar46 = *pfVar6;
              fVar47 = pfVar6[1];
              fVar49 = pfVar6[2];
              fVar48 = pfVar6[3];
              pfVar6 = (float *)(lVar5 + uVar30 * 8);
              fVar9 = pfVar6[1];
              fVar10 = pfVar6[2];
              fVar11 = pfVar6[3];
              pfVar36 = (float *)(lVar5 + 0x10 + uVar30 * 8);
              fVar12 = pfVar36[1];
              fVar13 = pfVar36[2];
              fVar14 = pfVar36[3];
              fVar45 = *pfVar36 * fVar49;
              pfVar36 = (float *)(lVar5 + uVar30 * 8);
              *pfVar36 = *pfVar6 * fVar46;
              pfVar36[1] = fVar9 * fVar46;
              pfVar36[2] = fVar10 * fVar47;
              pfVar36[3] = fVar11 * fVar47;
              pfVar6 = (float *)(lVar5 + 0x10 + uVar30 * 8);
              *pfVar6 = fVar45;
              pfVar6[1] = fVar12 * fVar49;
              pfVar6[2] = fVar13 * fVar48;
              pfVar6[3] = fVar14 * fVar48;
            }
LAB_012baa50:
            uVar30 = uVar39;
            if (((ulonglong)in_RCX & 1) == 0) {
              *(float *)(lVar5 + uVar39 * 8) =
                   *(float *)(lVar33 + uVar39 * 4) * *(float *)(lVar5 + uVar39 * 8);
              fVar45 = *(float *)(lVar33 + uVar39 * 4) * *(float *)(lVar5 + 4 + uVar39 * 8);
              *(float *)(lVar5 + 4 + uVar39 * 8) = fVar45;
              uVar30 = uVar39 + 1;
            }
            if (~uVar39 != uVar32) {
              do {
                *(float *)(lVar5 + uVar30 * 8) =
                     *(float *)(lVar33 + uVar30 * 4) * *(float *)(lVar5 + uVar30 * 8);
                *(float *)(lVar5 + 4 + uVar30 * 8) =
                     *(float *)(lVar33 + uVar30 * 4) * *(float *)(lVar5 + 4 + uVar30 * 8);
                *(float *)(lVar5 + 8 + uVar30 * 8) =
                     *(float *)(uVar1 + uVar30 * 4) * *(float *)(lVar5 + 8 + uVar30 * 8);
                fVar45 = *(float *)(uVar1 + uVar30 * 4) * *(float *)(lVar5 + 0xc + uVar30 * 8);
                *(float *)(lVar5 + 0xc + uVar30 * 8) = fVar45;
                uVar30 = uVar30 + 2;
              } while (uVar35 != uVar30);
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 != uVar23);
        }
      }
    }
    lVar33 = 0;
    do {
      uVar44 = FUN_00e83640(fVar45,*(undefined8 *)
                                    (*(longlong *)((longlong)unaff_RDI + 0x1e0) + lVar33 * 8));
      fVar45 = (float)(**(code **)(DAT_02786500 + 0x38))(uVar44,unaff_ESI);
      lVar33 = lVar33 + 1;
      uVar38 = *(uint *)((longlong)unaff_RDI + 0x160);
    } while (lVar33 < (int)uVar38);
  }
  if (1 < *(int *)((longlong)unaff_RDI + 0x16c)) {
    if (0 < (int)uVar38) {
      pvVar41 = (void *)((longlong)(int)unaff_ESI << 2);
      iVar27 = unaff_ESI - 1;
      if ((int)unaff_ESI < 2) {
        lVar33 = 0;
        do {
          _memcpy(*(void **)((longlong)unaff_RDI + 0x1e8),pvVar41,(size_t)uVar32);
          lVar5 = *(longlong *)(*(longlong *)((longlong)unaff_RDI + 0x1e0) + lVar33 * 8);
          pfVar6 = *(float **)(*(longlong *)((longlong)unaff_RDI + 0x1e8) + lVar33 * 8);
          uVar38 = *(uint *)((longlong)unaff_RDI + 0x16c);
          if ((int)uVar38 < 2) {
            _memcpy(unaff_RDI,pvVar41,(size_t)uVar32);
          }
          else {
            iVar42 = uVar38 * unaff_ESI;
            fVar46 = DAT_02390124 / (float)(int)uVar38;
            ___bzero();
            fVar45 = *pfVar6;
            fVar47 = fVar46 * fVar45;
            lVar34 = (ulonglong)(uVar38 >> 1) + 1;
            do {
              fVar45 = fVar45 - fVar47;
              *(float *)(lVar5 + (ulonglong)((int)lVar34 - 2) * 4) = fVar45;
              lVar34 = lVar34 + -1;
            } while (1 < lVar34);
            iVar40 = uVar38 * iVar27 + (uVar38 >> 1);
            if (iVar40 < iVar42) {
              fVar45 = pfVar6[iVar27];
              fVar46 = fVar46 * fVar45;
              uVar23 = (ulonglong)iVar40;
              uVar25 = ~uVar23;
              uVar35 = (ulonglong)(uint)(iVar42 - iVar40) & 3;
              if ((iVar42 - iVar40 & 3U) != 0) {
                do {
                  *(float *)(lVar5 + uVar23 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  uVar23 = uVar23 + 1;
                  uVar35 = uVar35 - 1;
                } while (uVar35 != 0);
              }
              if (2 < uVar25 + (longlong)iVar42) {
                do {
                  *(float *)(lVar5 + uVar23 * 4) = fVar45;
                  *(float *)(lVar5 + 4 + uVar23 * 4) = fVar45 - fVar46;
                  fVar45 = (fVar45 - fVar46) - fVar46;
                  *(float *)(lVar5 + 8 + uVar23 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  *(float *)(lVar5 + 0xc + uVar23 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  uVar23 = uVar23 + 4;
                } while ((longlong)iVar42 != uVar23);
              }
            }
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 < *(int *)((longlong)unaff_RDI + 0x160));
      }
      else {
        uVar23 = (ulonglong)unaff_ESI;
        lVar33 = 0;
        uVar32 = uVar23;
        do {
          pvVar31 = *(void **)((longlong)unaff_RDI + 0x1e8);
          _memcpy(pvVar31,pvVar41,(size_t)uVar32);
          lVar5 = *(longlong *)(*(longlong *)((longlong)unaff_RDI + 0x1e0) + lVar33 * 8);
          pfVar6 = *(float **)(*(longlong *)((longlong)unaff_RDI + 0x1e8) + lVar33 * 8);
          uVar38 = *(uint *)((longlong)unaff_RDI + 0x16c);
          if ((int)uVar38 < 2) {
            _memcpy(pvVar31,pvVar41,(size_t)uVar32);
          }
          else {
            iVar42 = uVar38 * unaff_ESI;
            uVar8 = uVar38 >> 1;
            fVar46 = DAT_02390124 / (float)(int)uVar38;
            ___bzero();
            pfVar36 = (float *)(lVar5 + (ulonglong)uVar8 * 4);
            uVar32 = 1;
            fVar45 = *pfVar6;
            do {
              fVar47 = pfVar6[uVar32];
              fVar49 = (fVar47 - fVar45) * fVar46;
              uVar37 = uVar38;
              if ((uVar38 & 7) != 0) {
                uVar37 = 0;
                do {
                  *pfVar36 = fVar45;
                  pfVar36 = pfVar36 + 1;
                  fVar45 = fVar45 + fVar49;
                  uVar37 = uVar37 + 1;
                } while ((uVar38 & 7) != uVar37);
                uVar37 = uVar38 - uVar37;
              }
              if (6 < uVar38 - 1) {
                do {
                  *pfVar36 = fVar45;
                  pfVar36[1] = fVar45 + fVar49;
                  fVar45 = fVar45 + fVar49 + fVar49;
                  pfVar36[2] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[3] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[4] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[5] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[6] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[7] = fVar45;
                  pfVar36 = pfVar36 + 8;
                  fVar45 = fVar45 + fVar49;
                  uVar37 = uVar37 - 8;
                } while (uVar37 != 0);
              }
              uVar32 = uVar32 + 1;
              fVar45 = fVar47;
            } while (uVar32 != uVar23);
            if (1 < uVar38) {
              fVar45 = *pfVar6;
              fVar47 = fVar46 * fVar45;
              lVar34 = (ulonglong)uVar8 + 1;
              do {
                fVar45 = fVar45 - fVar47;
                *(float *)(lVar5 + (ulonglong)((int)lVar34 - 2) * 4) = fVar45;
                lVar34 = lVar34 + -1;
              } while (1 < lVar34);
            }
            iVar40 = uVar38 * iVar27 + uVar8;
            uVar32 = uVar23;
            if (iVar40 < iVar42) {
              fVar45 = pfVar6[iVar27];
              fVar46 = fVar46 * fVar45;
              uVar25 = (ulonglong)iVar40;
              uVar35 = ~uVar25;
              uVar32 = (ulonglong)(uint)(iVar42 - iVar40) & 3;
              if ((iVar42 - iVar40 & 3U) != 0) {
                do {
                  *(float *)(lVar5 + uVar25 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  uVar25 = uVar25 + 1;
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
              uVar32 = uVar23;
              if (2 < uVar35 + (longlong)iVar42) {
                do {
                  *(float *)(lVar5 + uVar25 * 4) = fVar45;
                  *(float *)(lVar5 + 4 + uVar25 * 4) = fVar45 - fVar46;
                  fVar45 = (fVar45 - fVar46) - fVar46;
                  *(float *)(lVar5 + 8 + uVar25 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  *(float *)(lVar5 + 0xc + uVar25 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  uVar25 = uVar25 + 4;
                } while ((longlong)iVar42 != uVar25);
              }
            }
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 < *(int *)((longlong)unaff_RDI + 0x160));
      }
    }
    *param_4 = 1;
    *in_R8 = (DAT_02390124 / (float)*(int *)((longlong)unaff_RDI + 0x16c)) * *in_R8;
  }
  return;
}




// ============================================================
// @012b84d0 — 2937 bytes
// str: ""MULSSComponentRenderer::getInstanceBufferWithSize : byteSize too big!""
// str: ""MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!""
// str: ""MULSSComponentRenderer::getProcessingBufferWithSize : not enough allocated Buffers!""
// ============================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_012b84d0(undefined8 param_1,int param_2,char *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 uVar10;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  
  if (*(char *)(unaff_RDI + 0x265) != '\0') {
    iVar1 = param_2 * 8;
    uVar8 = (ulonglong)*(uint *)(unaff_RDI + 0x160);
    bVar9 = true;
    if (0 < (int)*(uint *)(unaff_RDI + 0x160)) {
      lVar12 = 0;
      do {
        lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + lVar12 * 8);
        if (lVar11 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8647;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar11 = 0;
LAB_012b8647:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + lVar12 * 8) = lVar11;
          lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + lVar12 * 8);
        }
        lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + lVar12 * 8);
        if (lVar7 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b86e7;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar7 = 0;
LAB_012b86e7:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + lVar12 * 8) = lVar7;
          lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + lVar12 * 8);
        }
        lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x180) + lVar12 * 8);
        if (lVar2 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8787;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar2 = 0;
LAB_012b8787:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x180) + lVar12 * 8) = lVar2;
          lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x180) + lVar12 * 8);
        }
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x188) + lVar12 * 8);
        if (lVar3 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8827;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar3 = 0;
LAB_012b8827:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x188) + lVar12 * 8) = lVar3;
          lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x188) + lVar12 * 8);
        }
        lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x198) + lVar12 * 8);
        if (lVar4 == 0) {
          if (*(int *)(unaff_RDI + 0x304) < param_2) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8907;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar4 = 0;
LAB_012b8907:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x198) + lVar12 * 8) = lVar4;
          lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x198) + lVar12 * 8);
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + lVar12 * 8);
          if (lVar5 == 0) goto LAB_012b8934;
LAB_012b8869:
          lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar12 * 8);
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + lVar12 * 8);
          if (lVar5 != 0) goto LAB_012b8869;
LAB_012b8934:
          if (*(int *)(unaff_RDI + 0x304) < param_2) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b89a7;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar5 = 0;
LAB_012b89a7:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + lVar12 * 8) = lVar5;
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + lVar12 * 8);
          lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar12 * 8);
        }
        if (lVar6 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8552;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar6 = 0;
LAB_012b8552:
          *(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar12 * 8) = lVar6;
          lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar12 * 8);
        }
        if (lVar11 == 0) {
          bVar9 = false;
        }
        if (lVar7 == 0) {
          bVar9 = false;
        }
        if (lVar2 == 0) {
          bVar9 = false;
        }
        if (lVar3 == 0) {
          bVar9 = false;
        }
        if (lVar4 == 0) {
          bVar9 = false;
        }
        if (lVar5 == 0) {
          bVar9 = false;
        }
        if (lVar6 == 0) {
          bVar9 = false;
        }
        lVar12 = lVar12 + 1;
        uVar8 = (ulonglong)*(int *)(unaff_RDI + 0x160);
      } while (lVar12 < (longlong)uVar8);
    }
    lVar12 = *(longlong *)(unaff_RDI + 0x1a8);
    if (lVar12 == 0) {
      if (*(int *)(unaff_RDI + 0x304) * 4 < param_2) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
            lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8ac7;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar12 = 0;
LAB_012b8ac7:
      *(longlong *)(unaff_RDI + 0x1a8) = lVar12;
      uVar8 = (ulonglong)*(uint *)(unaff_RDI + 0x160);
    }
    if (lVar12 == 0) {
      bVar9 = false;
    }
    if (0 < (int)uVar8) {
      lVar12 = *(longlong *)(unaff_RDI + 0x1e8);
      lVar11 = 0;
      do {
        lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
        if (lVar7 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8b1e;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar12 = 0;
LAB_012b8b1e:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x1e8) + lVar11 * 8) = lVar12;
          lVar12 = *(longlong *)(unaff_RDI + 0x1e8);
          uVar8 = (ulonglong)*(uint *)(unaff_RDI + 0x160);
          lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
        }
        if (lVar7 == 0) {
          bVar9 = false;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uVar8);
    }
    lVar12 = *(longlong *)(unaff_RDI + 0x1c8);
    if (lVar12 == 0) {
      if (*(int *)(unaff_RDI + 0x304) < unaff_ESI) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
            lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8c78;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar12 = 0;
LAB_012b8c78:
      *(longlong *)(unaff_RDI + 0x1c8) = lVar12;
      lVar11 = *(longlong *)(unaff_RDI + 0x1d8);
    }
    else {
      lVar11 = *(longlong *)(unaff_RDI + 0x1d8);
    }
    if (lVar11 == 0) {
      if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
            lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8d07;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar11 = 0;
LAB_012b8d07:
      *(longlong *)(unaff_RDI + 0x1d8) = lVar11;
    }
    if (((lVar11 == 0) || (lVar12 == 0)) || (!bVar9)) {
      *(undefined8 *)(unaff_RDI + 0x228) = param_1;
      *param_4 = 1;
      *(undefined1 *)(unaff_RDI + 0x265) = 0;
    }
  }
  if (*param_3 == '\0') {
    return;
  }
  iVar1 = *(int *)(unaff_RDI + 0x160);
  if (iVar1 < 1) {
    uVar10 = true;
    lVar12 = *(longlong *)(unaff_RDI + 0x1b8);
  }
  else {
    lVar12 = *(longlong *)(unaff_RDI + 0x1e8);
    uVar10 = true;
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
      if (lVar7 == 0) {
        if (*(int *)(unaff_RDI + 0x304) * 4 < param_2 * 8) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
          uVar8 = 0;
          do {
            if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
              lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
              goto LAB_012b8da2;
            }
            uVar8 = uVar8 + 1;
          } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
        }
        FUN_00e828a0();
        lVar12 = 0;
LAB_012b8da2:
        *(longlong *)(*(longlong *)(unaff_RDI + 0x1e8) + lVar11 * 8) = lVar12;
        lVar12 = *(longlong *)(unaff_RDI + 0x1e8);
        iVar1 = *(int *)(unaff_RDI + 0x160);
        lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
      }
      if (lVar7 == 0) {
        uVar10 = false;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar1);
    lVar12 = *(longlong *)(unaff_RDI + 0x1b8);
  }
  if (lVar12 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < param_2) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
          goto LAB_012b8f18;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
    }
    FUN_00e828a0();
    lVar12 = 0;
LAB_012b8f18:
    *(longlong *)(unaff_RDI + 0x1b8) = lVar12;
    lVar11 = *(longlong *)(unaff_RDI + 0x1c0);
  }
  else {
    lVar11 = *(longlong *)(unaff_RDI + 0x1c0);
  }
  if (lVar11 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < param_2) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
          lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
          goto LAB_012b8fa8;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
    }
    FUN_00e828a0();
    lVar11 = 0;
LAB_012b8fa8:
    *(longlong *)(unaff_RDI + 0x1c0) = lVar11;
    lVar7 = *(longlong *)(unaff_RDI + 0x1d0);
  }
  else {
    lVar7 = *(longlong *)(unaff_RDI + 0x1d0);
  }
  if (lVar7 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
          lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
          *(longlong *)(unaff_RDI + 0x1d0) = lVar7;
          goto joined_r0x012b8e86;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
    }
    FUN_00e828a0();
    *(undefined8 *)(unaff_RDI + 0x1d0) = 0;
  }
  else {
joined_r0x012b8e86:
    if (((lVar7 != 0) && (lVar11 != 0)) && ((lVar12 != 0 && ((bool)uVar10)))) {
      return;
    }
  }
  *param_3 = '\0';
  return;
}




// ============================================================
// @012bcdc0 — 2341 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012bd6f1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012bcdc0(float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  float *pfVar6;
  float *pfVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint in_ECX;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  ulonglong uVar24;
  uint in_EDX;
  longlong lVar25;
  uint uVar26;
  longlong unaff_RSI;
  longlong lVar27;
  longlong unaff_RDI;
  ulonglong uVar28;
  ulonglong uVar29;
  uint in_R8D;
  longlong in_R9;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  float fVar33;
  double dVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  char local_res8;
  longlong local_90;
  char local_88;
  double local_40;
  
  uVar18 = in_ECX + in_EDX;
  uVar31 = in_ECX;
  uVar26 = in_EDX;
  if ((in_R9 != 0) && (local_res8 != '\0')) {
    *(undefined8 *)(unaff_RDI + 0x2a8) = 0;
    *(undefined1 *)(unaff_RDI + 0x2a3) = 1;
    uVar26 = 0;
    uVar31 = uVar18;
  }
  local_40 = (double)*(int *)(unaff_RDI + 0x164) / *(double *)(unaff_RDI + 0x2b0);
  dVar8 = ((double)*(int *)(unaff_RDI + 0x164) / (double)param_2 - local_40) / (double)(int)uVar31;
  *(double *)(unaff_RDI + 0x2b0) = (double)param_2;
  if (in_R9 == 0) {
    FUN_012a61d0();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    FUN_012a6280();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    if (0 < (int)uVar31) {
      fVar40 = (param_1 + DAT_0241b660) * DAT_0239425c;
      fVar38 = 0.0;
      if (0.0 <= fVar40) {
        fVar38 = fVar40;
      }
      fVar40 = DAT_02390124;
      if (fVar38 <= DAT_02390124) {
        fVar40 = fVar38;
      }
      fVar38 = DAT_02390124 - fVar40;
      lVar30 = (longlong)(int)uVar26;
      dVar34 = *(double *)(unaff_RDI + 0x2a8);
      uVar26 = 0;
      do {
        iVar20 = FUN_00e7d850(dVar34 * _DAT_0240d1d0);
        iVar19 = iVar20 + -0x4000;
        if (iVar20 < 0x4000) {
          iVar19 = iVar20;
        }
        *(float *)(*(longlong *)(unaff_RDI + 0x2b8) + lVar30 * 4) =
             *(float *)(*(longlong *)(local_90 + 0x10) + (longlong)iVar19 * 4) * fVar40 +
             *(float *)(*(longlong *)(local_90 + 0x10) + (longlong)iVar19 * 4) * fVar38;
        for (dVar34 = *(double *)(unaff_RDI + 0x2a8) + local_40; DAT_0238fee8 <= dVar34;
            dVar34 = dVar34 + DAT_023b19a0) {
        }
        *(double *)(unaff_RDI + 0x2a8) = dVar34;
        local_40 = local_40 + dVar8;
        lVar30 = lVar30 + 1;
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar31);
    }
    if (local_90 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  else if (0 < (int)uVar31) {
    lVar30 = (longlong)(int)uVar26;
    dVar34 = *(double *)(unaff_RDI + 0x2a8);
    uVar26 = 0;
    do {
      iVar19 = FUN_00e7d850(dVar34 * DAT_024110f0);
      cVar5 = *(char *)(unaff_RDI + 0x2a3);
      if (cVar5 == '\0') {
        iVar20 = iVar19 + -0x200;
        if (iVar19 < 0x200) {
          iVar20 = iVar19;
        }
        iVar20 = iVar20 + 0x1e00;
      }
      else {
        iVar20 = iVar19 + -0x200;
        if (iVar19 < 0x2000) {
          iVar20 = iVar19;
        }
      }
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x2b8) + lVar30 * 4) =
           *(undefined4 *)(in_R9 + (longlong)iVar20 * 4);
      dVar34 = *(double *)(unaff_RDI + 0x2a8) + local_40;
      *(double *)(unaff_RDI + 0x2a8) = dVar34;
      if (cVar5 == '\0') {
        if (DAT_0238fee8 <= dVar34) {
          do {
            dVar34 = dVar34 + DAT_023b19a0;
          } while (DAT_0238fee8 <= dVar34);
          *(double *)(unaff_RDI + 0x2a8) = dVar34;
        }
      }
      else if (DAT_023b2560 <= dVar34) {
        dVar34 = dVar34 + _DAT_0240d1c8;
        *(double *)(unaff_RDI + 0x2a8) = dVar34;
        *(undefined1 *)(unaff_RDI + 0x2a3) = 0;
      }
      local_40 = local_40 + dVar8;
      lVar30 = lVar30 + 1;
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar31);
  }
  if (0 < *(int *)(unaff_RDI + 0x160)) {
    pfVar6 = *(float **)(unaff_RDI + 0x1d0);
    lVar30 = *(longlong *)(unaff_RDI + 0x2c0);
    fVar40 = DAT_02390124 - param_4;
    param_3 = param_3 * param_4;
    fVar42 = DAT_023d5f44 / (float)(int)in_EDX;
    pfVar1 = pfVar6 + (int)in_EDX;
    fVar38 = DAT_023d5f44 / (float)(int)in_ECX;
    uVar32 = (ulonglong)uVar18;
    uVar28 = (ulonglong)(uVar18 & 0xfffffff8);
    uVar29 = (uVar28 - 8 >> 3) + 1;
    lVar27 = 0;
    do {
      pfVar7 = *(float **)(*(longlong *)(unaff_RDI + 0x1e0) + lVar27 * 8);
      ___bzero();
      if (0 < (int)uVar18) {
        pfVar23 = *(float **)(unaff_RDI + 0x2b8);
        if (uVar18 < 8) {
LAB_012bd6c0:
          uVar24 = 0;
        }
        else {
          if (pfVar6 < pfVar7 + uVar32 && pfVar7 < pfVar6 + uVar32) goto LAB_012bd6c0;
          uVar24 = 0;
          if (pfVar23 + uVar32 <= pfVar6 || pfVar6 + uVar32 <= pfVar23) {
            if (uVar28 - 8 == 0) {
              lVar21 = 0;
LAB_012bd3b4:
              pfVar2 = pfVar7 + lVar21;
              fVar33 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar36 = pfVar2[3];
              pfVar3 = pfVar7 + lVar21 + 4;
              fVar37 = *pfVar3;
              fVar41 = pfVar3[1];
              fVar39 = pfVar3[2];
              fVar10 = pfVar3[3];
              pfVar3 = pfVar23 + lVar21;
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar4 = pfVar23 + lVar21 + 4;
              fVar14 = *pfVar4;
              fVar15 = pfVar4[1];
              fVar16 = pfVar4[2];
              fVar17 = pfVar4[3];
              pfVar4 = pfVar6 + lVar21;
              *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
              pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
              pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
              pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
              pfVar2 = pfVar6 + lVar21 + 4;
              *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
              pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
              pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
              pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
            }
            else {
              lVar21 = 0;
              lVar25 = -(uVar29 & 0xfffffffffffffffe);
              do {
                pfVar2 = pfVar7 + lVar21;
                fVar33 = pfVar2[1];
                fVar9 = pfVar2[2];
                fVar36 = pfVar2[3];
                pfVar3 = pfVar7 + lVar21 + 4;
                fVar37 = *pfVar3;
                fVar41 = pfVar3[1];
                fVar39 = pfVar3[2];
                fVar10 = pfVar3[3];
                pfVar3 = pfVar23 + lVar21;
                fVar11 = pfVar3[1];
                fVar12 = pfVar3[2];
                fVar13 = pfVar3[3];
                pfVar4 = pfVar23 + lVar21 + 4;
                fVar14 = *pfVar4;
                fVar15 = pfVar4[1];
                fVar16 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar4 = pfVar6 + lVar21;
                *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
                pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
                pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
                pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
                pfVar2 = pfVar6 + lVar21 + 4;
                *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
                pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
                pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
                pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
                pfVar2 = pfVar7 + lVar21 + 8;
                fVar33 = pfVar2[1];
                fVar9 = pfVar2[2];
                fVar36 = pfVar2[3];
                pfVar3 = pfVar7 + lVar21 + 0xc;
                fVar37 = *pfVar3;
                fVar41 = pfVar3[1];
                fVar39 = pfVar3[2];
                fVar10 = pfVar3[3];
                pfVar3 = pfVar23 + lVar21 + 8;
                fVar11 = pfVar3[1];
                fVar12 = pfVar3[2];
                fVar13 = pfVar3[3];
                pfVar4 = pfVar23 + lVar21 + 0xc;
                fVar14 = *pfVar4;
                fVar15 = pfVar4[1];
                fVar16 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar4 = pfVar6 + lVar21 + 8;
                *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
                pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
                pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
                pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
                pfVar2 = pfVar6 + lVar21 + 0xc;
                *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
                pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
                pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
                pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
                lVar21 = lVar21 + 0x10;
                lVar25 = lVar25 + 2;
              } while (lVar25 != 0);
              if ((uVar29 & 1) != 0) goto LAB_012bd3b4;
            }
            uVar24 = uVar28;
            if (uVar28 == uVar32) goto LAB_012bd494;
          }
        }
        uVar22 = uVar24;
        if ((uVar18 & 1) != 0) {
          pfVar6[uVar24] = pfVar23[uVar24] * param_3 + pfVar7[uVar24] * fVar40;
          uVar22 = uVar24 | 1;
        }
        if (~uVar24 != -uVar32) {
          do {
            pfVar6[uVar22] = pfVar23[uVar22] * param_3 + pfVar7[uVar22] * fVar40;
            pfVar6[uVar22 + 1] = pfVar23[uVar22 + 1] * param_3 + pfVar7[uVar22 + 1] * fVar40;
            uVar22 = uVar22 + 2;
          } while (uVar32 != uVar22);
        }
      }
LAB_012bd494:
      pfVar7 = DAT_028ac5d0;
      if (in_EDX != 0) {
        pfVar23 = pfVar6;
        fVar33 = 0.0;
        uVar31 = in_EDX;
        if ((in_EDX & 1) != 0) {
          *pfVar6 = *DAT_028ac5d0 * *pfVar6;
          pfVar23 = pfVar6 + 1;
          fVar33 = fVar42 + 0.0;
          uVar31 = in_EDX - 1;
        }
        if (in_EDX != 1) {
          lVar21 = 0;
          do {
            pfVar23[lVar21] = pfVar7[(int)fVar33] * pfVar23[lVar21];
            pfVar23[lVar21 + 1] = pfVar7[(int)(fVar33 + fVar42)] * pfVar23[lVar21 + 1];
            fVar33 = fVar33 + fVar42 + fVar42;
            lVar21 = lVar21 + 2;
          } while (uVar31 != (uint)lVar21);
        }
      }
      if (in_ECX != 0) {
        pfVar23 = pfVar1;
        fVar33 = 0.0;
        uVar31 = in_ECX;
        if ((in_ECX & 1) != 0) {
          *pfVar1 = pfVar7[0x2000] * *pfVar1;
          pfVar23 = pfVar1 + 1;
          fVar33 = fVar38 + 0.0;
          uVar31 = in_ECX - 1;
        }
        if (in_ECX != 1) {
          lVar21 = 0;
          do {
            pfVar23[lVar21] = pfVar7[(longlong)(int)fVar33 + 0x2000] * pfVar23[lVar21];
            pfVar23[lVar21 + 1] =
                 pfVar7[(longlong)(int)(fVar33 + fVar38) + 0x2000] * pfVar23[lVar21 + 1];
            fVar33 = fVar33 + fVar38 + fVar38;
            lVar21 = lVar21 + 2;
          } while (uVar31 != (uint)lVar21);
        }
      }
      uVar35 = ___bzero();
      FUN_00e83530(uVar35,pfVar6);
      uVar26 = _DAT_023945e0;
      fVar9 = DAT_02394274;
      uVar31 = _DAT_02390140;
      fVar33 = DAT_02390124;
      if (0 < (int)in_R8D) {
        lVar21 = *(longlong *)(unaff_RSI + lVar27 * 8);
        uVar24 = 0;
        do {
          uVar35 = *(undefined8 *)(lVar30 + uVar24 * 8);
          fVar36 = (float)uVar35;
          fVar37 = (float)((ulonglong)uVar35 >> 0x20);
          fVar41 = (float)((uint)fVar37 & uVar31);
          if ((fVar36 != 0.0) || (fVar39 = fVar41, NAN(fVar36))) {
            fVar39 = (float)((uint)fVar36 & uVar31);
            if ((fVar37 != 0.0) || (NAN(fVar37))) {
              if (fVar39 <= fVar41) {
                fVar39 = SQRT((fVar39 / fVar41) * (fVar39 / fVar41) + fVar33);
              }
              else {
                fVar41 = SQRT((fVar41 / fVar39) * (fVar41 / fVar39) + fVar33);
              }
              fVar39 = fVar39 * fVar41;
            }
          }
          fVar41 = 0.0;
          if (fVar9 < fVar39) {
            fVar41 = fVar33 / fVar39;
          }
          *(float *)(lVar21 + uVar24 * 8) = fVar36 * fVar41;
          *(float *)(lVar21 + 4 + uVar24 * 8) = (float)((uint)fVar37 ^ uVar26) * fVar41;
          uVar24 = uVar24 + 1;
        } while (in_R8D != uVar24);
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < *(int *)(unaff_RDI + 0x160));
  }
  return;
}




// ============================================================
// @01c22370 — 2198 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c22ba9) */
/* WARNING: Removing unreachable block (ram,0x01c22bb5) */
/* WARNING: Removing unreachable block (ram,0x01c22853) */
/* WARNING: Removing unreachable block (ram,0x01c22863) */
/* WARNING: Removing unreachable block (ram,0x01c22401) */
/* WARNING: Removing unreachable block (ram,0x01c2240d) */
/* WARNING: Removing unreachable block (ram,0x01c2265e) */
/* WARNING: Removing unreachable block (ram,0x01c2266e) */
/* WARNING: Removing unreachable block (ram,0x01c22bc3) */
/* WARNING: Removing unreachable block (ram,0x01c22bcf) */

void FUN_01c22370(undefined8 param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 **ppuVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  char local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 *local_48;
  char local_40 [8];
  
  FUN_01c219e0();
  puVar6 = local_70;
  if (local_70 == (undefined8 *)*unaff_RSI) {
    cVar5 = '\x01';
  }
  else {
    FUN_01c219e0();
    if (local_48 == (undefined8 *)0x0) {
      cVar5 = '\0';
    }
    else {
      if (*unaff_RSI == 0) {
        cVar5 = '\0';
      }
      else {
        FUN_01c219e0();
        cVar5 = (**(code **)(*(longlong *)CONCAT71(uStack_87,local_88) + 0x50))();
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if ((local_68[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    pcVar4 = DAT_02572370;
    local_78 = puVar6;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(unaff_RDI + 0x1d0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((param_2 != '\0') && (*(longlong *)(unaff_RDI + 0x1d0) != 0)) {
      *(undefined8 *)(unaff_RDI + 0x1d0) = 0;
      FUN_00d50b20();
    }
    puVar6 = (undefined8 *)*unaff_RSI;
    if (*(longlong *)(unaff_RDI + 0x168) == 0) {
      if (puVar6 != (undefined8 *)0x0) {
        local_68[0] = '\0';
        local_70 = (undefined8 *)0x0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        local_60 = puVar6;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar10 = -local_58._4_4_;
            }
            else {
              iVar10 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar10 = 0;
            }
            local_58 = CONCAT44(iVar10,(int)local_58);
          }
          lVar7 = (longlong)(int)local_58;
          iVar10 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
          local_70 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
          FUN_01c231c0();
          puVar6 = (undefined8 *)CONCAT71(uStack_87,local_88);
          if (local_80 == '\0') {
            if (puVar6 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_40[0] = '\0';
          local_48 = puVar6;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_0038d420();
      }
    }
    else if (puVar6 != (undefined8 *)0x0) {
      local_68[0] = '\0';
      local_70 = (undefined8 *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = puVar6;
      while( true ) {
        lVar7 = (longlong)(int)local_58;
        iVar10 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar10);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
        puVar6 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
        local_70 = puVar6;
        if (local_68[0] == '\0') {
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar4)();
        do {
          local_40[0] = '\0';
          local_48 = puVar6;
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(longlong **)(unaff_RDI + 0x168) + 0x370))();
          puVar12 = local_48;
          if (local_48 == puVar6) {
LAB_01c2263d:
            puVar12 = puVar6;
            if (local_40[0] != '\0') {
LAB_01c22643:
              if (local_48 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_40[0] == '\0') {
              if (local_48 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              if (puVar6 != (undefined8 *)0x0) {
                FUN_00d50b20();
                puVar6 = puVar12;
                goto LAB_01c2263d;
              }
              if (local_40[0] == '\0') goto LAB_01c22651;
              goto LAB_01c22643;
            }
            if (puVar6 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
          }
LAB_01c22651:
          puVar6 = puVar12;
        } while (puVar12 != (undefined8 *)0x0);
        if (*(int *)((longlong)puVar8 + 0xc) != 0) {
          local_40[0] = '\0';
          local_48 = puVar8;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar10 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar10 = 0;
          }
          local_58 = CONCAT44(iVar10,(int)local_58);
        }
      }
      FUN_0038d420();
    }
    if (*(int *)(unaff_RDI + 0x160) == 1) {
      if ((*(longlong *)(unaff_RDI + 0x188) != 0) && (*(int *)((longlong)local_78 + 0xc) != 0)) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar4)();
        local_68[0] = '\0';
        local_70 = (undefined8 *)0x0;
        local_60 = local_78;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        bVar2 = false;
        puVar6 = (undefined8 *)0x0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar10 = -local_58._4_4_;
            }
            else {
              iVar10 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar10 = 0;
            }
            local_58 = CONCAT44(iVar10,(int)local_58);
          }
          lVar7 = (longlong)(int)local_58;
          iVar10 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
          local_70 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
          FUN_00d23340();
          puVar12 = local_48;
          local_88 = local_40[0];
          pcVar9 = local_40;
          if (local_40[0] == '\0') {
            pcVar9 = &local_88;
          }
          *pcVar9 = '\0';
          if ((local_40[0] != '\0') && (puVar12 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 == '\0') && (puVar12 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          puVar12 = local_70;
          puVar13 = puVar6;
          if (local_50 + (int)local_58 == 0) {
            if (local_70 == puVar6) {
              bVar3 = bVar2;
              if ((!bVar2) && (local_70 != (undefined8 *)0x0)) {
                puVar12 = puVar6;
                if (local_68[0] != '\0') goto LAB_01c22af6;
                FUN_00d50b00();
                bVar3 = true;
              }
            }
            else if (local_68[0] == '\0') {
              if (local_70 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              puVar13 = puVar12;
              if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
LAB_01c22af6:
              local_68[0] = '\0';
              puVar13 = puVar12;
              bVar3 = true;
            }
            FUN_00d23740();
            bVar2 = bVar3;
          }
          puVar6 = puVar13;
        }
        FUN_01c2d530();
        FUN_01ce8890();
        if (puVar8 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((*(int *)(unaff_RDI + 0x160) == 0) && (*(longlong *)(unaff_RDI + 0x180) != 0)) {
      if (*(int *)((longlong)local_78 + 0xc) == 0) {
        FUN_01dd4c60();
      }
      else {
        FUN_00d23310();
        puVar6 = local_70;
        ppuVar11 = &local_48;
        if (local_68[0] != '\0') {
          ppuVar11 = (undefined8 **)local_68;
        }
        local_48 = (undefined8 *)CONCAT71(local_48._1_7_,local_68[0]);
        *(char *)ppuVar11 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01eda650();
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((param_2 != '\0') && (lVar7 = *(longlong *)(unaff_RDI + 0x1d0), lVar7 != lVar1)) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x1d0) = lVar1;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c651f0 — 2179 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c65855) */
/* WARNING: Removing unreachable block (ram,0x01c6585e) */
/* WARNING: Removing unreachable block (ram,0x01c655ed) */
/* WARNING: Removing unreachable block (ram,0x01c655f9) */
/* WARNING: Removing unreachable block (ram,0x01c654f4) */
/* WARNING: Removing unreachable block (ram,0x01c65500) */
/* WARNING: Removing unreachable block (ram,0x01c6598f) */
/* WARNING: Removing unreachable block (ram,0x01c6599c) */

void FUN_01c651f0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  int extraout_var;
  int extraout_var_00;
  void *pvVar8;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  ulonglong uVar9;
  int extraout_var_04;
  int extraout_var_05;
  int extraout_var_06;
  pthread_key_t pVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong unaff_RDI;
  longlong lVar13;
  bool bVar14;
  undefined8 uVar15;
  int iStack_94;
  longlong local_90;
  char local_88;
  int iStack_64;
  ulonglong local_60;
  char local_58;
  undefined8 local_48;
  char local_40;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &DAT_02572358;
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar2 = *(longlong *)(unaff_RDI + 0x2b0);
  *(undefined8 **)(unaff_RDI + 0x2b0) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  pcVar5 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar2 = *(longlong *)(unaff_RDI + 0x2b8);
  *(undefined8 **)(unaff_RDI + 0x2b8) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  (*pcVar5)();
  FUN_00c92170();
  FUN_00c92160();
  lVar2 = *(longlong *)(unaff_RDI + 0x2c0);
  *(undefined8 **)(unaff_RDI + 0x2c0) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00e7bdb0();
  FUN_00e7bdb0();
  FUN_00e7bcc0();
  cVar6 = FUN_016bf360();
  iStack_94 = extraout_var;
  iStack_64 = extraout_var_00;
  if (cVar6 != '\0') {
    cVar6 = FUN_016bf500();
    if (cVar6 == '\0') {
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = FUN_016bf0f0();
      uVar15 = FUN_00e7b970();
      FUN_016c4760(uVar15,0);
      iStack_94 = extraout_var_01;
    }
    cVar6 = FUN_016bf530();
    if (cVar6 == '\0') {
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = FUN_016bf100();
      uVar15 = FUN_00e7b820();
      FUN_016c4760(uVar15,0);
      iStack_64 = extraout_var_02;
    }
  }
  lVar2 = local_90;
  uVar11 = *(uint *)(unaff_RDI + 0x1cc);
  if (uVar11 < 0x16) {
    puVar12 = &LAB_00330040;
    if ((0x330040U >> (uVar11 & 0x1f) & 1) == 0) {
      puVar12 = (undefined1 *)0xc0000;
      if ((0xc0000U >> (uVar11 & 0x1f) & 1) != 0) {
        FUN_00e7bdb0();
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_016c2730();
        iStack_64 = extraout_var_05;
        if (cVar6 != '\0') {
          FUN_00e7bdb0();
          iStack_94 = extraout_var_06;
        }
      }
    }
    else {
      FUN_00e7bdb0();
      iStack_64 = extraout_var_03;
    }
  }
  pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016d8ab0();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  cVar6 = FUN_016bf360();
  if (((cVar6 != '\0') && (uVar9 = FUN_016bf0f0(), uVar9 >> 0x20 != 0)) &&
     (uVar9 = FUN_016bf100(), uVar9 >> 0x20 != 0)) {
    local_90 = FUN_016bf100();
    FUN_00e7c260();
    local_60 = FUN_016bf0f0();
    local_48._4_4_ = (int)((ulonglong)local_90 >> 0x20);
    bVar14 = local_48._4_4_ != 0;
    local_48 = local_90;
    if (((bVar14) && (local_60 >> 0x20 != 0)) && (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
      FUN_00e7bdb0();
      iStack_64 = extraout_var_04;
    }
  }
  FUN_01c44d20();
  if (local_88 == '\0') {
    if (local_90 == 0) goto LAB_01c65a20;
    FUN_00d50b00();
  }
  else if (local_90 == 0) goto LAB_01c65a20;
  if (0 < *(int *)(local_90 + 0xc)) {
    lVar13 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(local_90 + 0x10) + lVar13 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)puVar12;
      if (local_48 != 0) {
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_01507970();
        puVar12 = (undefined1 *)(local_60 >> 0x20);
        if ((iStack_94 == 0) || (uVar11 = (uint)(local_60 >> 0x20), uVar11 == 0)) {
LAB_01c657f7:
          if (((iStack_64 == 0) || ((int)puVar12 == 0)) || (cVar6 = FUN_00e7c020(), cVar6 == '\0'))
          {
            local_40 = '\0';
            FUN_00d21140();
            lVar4 = *(longlong *)(unaff_RDI + 0x2b8);
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar15 = FUN_016c98e0();
            iVar1 = *(int *)(lVar4 + 0x18);
            FUN_00c8e340(uVar15,1);
            *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar1) = uVar15;
            lVar4 = *(longlong *)(unaff_RDI + 0x2c0);
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar15 = FUN_01508610();
            uVar15 = FUN_016c98e0(uVar15,0);
            iVar1 = *(int *)(lVar4 + 0x18);
            FUN_00c8e340();
            *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar1) = uVar15;
            bVar14 = local_48 != 0;
            local_48 = lVar3;
            if (bVar14) {
              FUN_00d50b20();
            }
            goto LAB_01c65640;
          }
        }
        else {
          cVar6 = FUN_00e7c020();
          if (cVar6 == '\0') {
            puVar12 = (undefined1 *)(ulonglong)uVar11;
            goto LAB_01c657f7;
          }
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
LAB_01c65640:
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < *(int *)(local_90 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_01c65a20:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00a9866e — 2106 bytes
// str: ""version""
// str: ""machineId""
// str: ""issuerId""
// str: ""lastAuthChangeDate""
// str: ""modDate""
// ============================================================

int FUN_00a9866e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  longlong *plVar61;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xc);
  iVar3 = FUN_00aa9c4e();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,2);
  iVar6 = (**(code **)(*unaff_RSI + 0x78))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(0xb,8);
  iVar9 = (**(code **)(*unaff_RSI + 0x90))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(0xc,0xb);
  iVar12 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0xd,0xb);
  iVar15 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar16 = (**(code **)(*unaff_RSI + 0x38))();
  iVar17 = (**(code **)(*unaff_RSI + 0x30))(0xe,0xb);
  iVar18 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar19 = (**(code **)(*unaff_RSI + 0x38))();
  iVar20 = (**(code **)(*unaff_RSI + 0x30))(0xf,0xb);
  iVar21 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar22 = (**(code **)(*unaff_RSI + 0x38))();
  iVar23 = (**(code **)(*unaff_RSI + 0x30))(0x10,8);
  iVar24 = (**(code **)(*unaff_RSI + 0x90))();
  iVar25 = (**(code **)(*unaff_RSI + 0x38))();
  iVar26 = (**(code **)(*unaff_RSI + 0x30))(0x11,0xb);
  iVar27 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar28 = (**(code **)(*unaff_RSI + 0x38))();
  iVar29 = (**(code **)(*unaff_RSI + 0x30))(0x12,0xb);
  iVar30 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar31 = (**(code **)(*unaff_RSI + 0x38))();
  iVar32 = (**(code **)(*unaff_RSI + 0x30))(0x13,8);
  iVar33 = (**(code **)(*unaff_RSI + 0x90))();
  iVar34 = (**(code **)(*unaff_RSI + 0x38))();
  iVar35 = (**(code **)(*unaff_RSI + 0x30))(0x14,0xb);
  iVar36 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar37 = (**(code **)(*unaff_RSI + 0x38))();
  iVar38 = (**(code **)(*unaff_RSI + 0x30))(0x15,0xb);
  iVar39 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar40 = (**(code **)(*unaff_RSI + 0x38))();
  iVar41 = (**(code **)(*unaff_RSI + 0x30))(0x16,0xb);
  iVar42 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar43 = (**(code **)(*unaff_RSI + 0x38))();
  iVar44 = (**(code **)(*unaff_RSI + 0x30))(0x17,0xb);
  iVar45 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar46 = (**(code **)(*unaff_RSI + 0x38))();
  iVar47 = (**(code **)(*unaff_RSI + 0x30))(0x18,0xb);
  iVar48 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar49 = (**(code **)(*unaff_RSI + 0x38))();
  iVar50 = (**(code **)(*unaff_RSI + 0x30))(0x19,8);
  iVar51 = (**(code **)(*unaff_RSI + 0x90))();
  iVar52 = (**(code **)(*unaff_RSI + 0x38))();
  iVar53 = (**(code **)(*unaff_RSI + 0x30))(0x1a,0xb);
  iVar54 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar55 = (**(code **)(*unaff_RSI + 0x38))();
  iVar56 = (**(code **)(*unaff_RSI + 0x30))(0x1b,8);
  iVar57 = (**(code **)(*unaff_RSI + 0x90))();
  iVar58 = (**(code **)(*unaff_RSI + 0x38))();
  iVar59 = (**(code **)(*unaff_RSI + 0x30))(0x1c,0xf);
  iVar60 = (**(code **)(*unaff_RSI + 0x58))();
  iVar60 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
           iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
           iVar42 + iVar43 + iVar44 + iVar45 + iVar46 + iVar47 + iVar48 + iVar49 + iVar50 + iVar51 +
           iVar52 + iVar53 + iVar54 + iVar55 + iVar56 + iVar57 + iVar58 + iVar59 + iVar60;
  for (plVar61 = *(longlong **)(unaff_RDI + 0x170); plVar61 != *(longlong **)(unaff_RDI + 0x178);
      plVar61 = plVar61 + 4) {
    iVar1 = (**(code **)(*plVar61 + 0x18))();
    iVar60 = iVar60 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x1d,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar60 + iVar2 + iVar3 + iVar4;
  for (plVar61 = *(longlong **)(unaff_RDI + 0x188); plVar61 != *(longlong **)(unaff_RDI + 400);
      plVar61 = plVar61 + 4) {
    iVar1 = (**(code **)(*plVar61 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x1e,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (plVar61 = *(longlong **)(unaff_RDI + 0x1a0); plVar61 != *(longlong **)(unaff_RDI + 0x1a8);
      plVar61 = plVar61 + 4) {
    iVar1 = (**(code **)(*plVar61 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x40))();
  iVar4 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
}




// ============================================================
// @012b6860 — 1514 bytes
// str: ""MULSSComponentRenderer::getInstanceBufferWithSize : byteSize too big!""
// str: ""MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!""
// str: ""MULSSComponentRenderer::getProcessingBufferWithSize : not enough allocated Buffers!""
// ============================================================

void FUN_012b6860(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(unaff_RDI + 0x15c);
  lVar5 = *(longlong *)(unaff_RDI + 0x1c8);
  if (lVar5 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b690c;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar5 = 0;
LAB_012b690c:
    *(longlong *)(unaff_RDI + 0x1c8) = lVar5;
  }
  iVar8 = iVar8 / 2;
  iVar1 = *(int *)(unaff_RDI + 0x160);
  if (iVar1 < 1) {
    bVar7 = true;
  }
  else {
    lVar3 = *(longlong *)(unaff_RDI + 0x1e8);
    bVar7 = true;
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      if (lVar6 == 0) {
        if (*(int *)(unaff_RDI + 0x304) * 4 < iVar8 * 8) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
          uVar4 = 0;
          do {
            if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
              lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
              goto LAB_012b6972;
            }
            uVar4 = uVar4 + 1;
          } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
        }
        FUN_00e828a0();
        lVar3 = 0;
LAB_012b6972:
        *(longlong *)(*(longlong *)(unaff_RDI + 0x1e8) + lVar9 * 8) = lVar3;
        lVar3 = *(longlong *)(unaff_RDI + 0x1e8);
        iVar1 = *(int *)(unaff_RDI + 0x160);
        lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      }
      if (lVar6 == 0) {
        bVar7 = false;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1b8);
  if (lVar3 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6ae7;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar3 = 0;
LAB_012b6ae7:
    *(longlong *)(unaff_RDI + 0x1b8) = lVar3;
    lVar9 = *(longlong *)(unaff_RDI + 0x1c0);
  }
  else {
    lVar9 = *(longlong *)(unaff_RDI + 0x1c0);
  }
  if (lVar9 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar9 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6b66;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar9 = 0;
LAB_012b6b66:
    *(longlong *)(unaff_RDI + 0x1c0) = lVar9;
    lVar6 = *(longlong *)(unaff_RDI + 0x1d0);
  }
  else {
    lVar6 = *(longlong *)(unaff_RDI + 0x1d0);
  }
  if (lVar6 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6bf6;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar6 = 0;
LAB_012b6bf6:
    *(longlong *)(unaff_RDI + 0x1d0) = lVar6;
    lVar10 = *(longlong *)(unaff_RDI + 0x2c0);
  }
  else {
    lVar10 = *(longlong *)(unaff_RDI + 0x2c0);
  }
  if (lVar10 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar10 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6c87;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar10 = 0;
LAB_012b6c87:
    *(longlong *)(unaff_RDI + 0x2c0) = lVar10;
    lVar2 = *(longlong *)(unaff_RDI + 0x2c8);
  }
  else {
    lVar2 = *(longlong *)(unaff_RDI + 0x2c8);
  }
  if (lVar2 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6d16;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar2 = 0;
LAB_012b6d16:
    *(longlong *)(unaff_RDI + 0x2c8) = lVar2;
  }
  if (lVar3 == 0) {
    bVar7 = false;
  }
  if (lVar9 == 0) {
    bVar7 = false;
  }
  if (lVar6 == 0) {
    bVar7 = false;
  }
  if (lVar10 == 0) {
    bVar7 = false;
  }
  if (lVar2 == 0) {
    bVar7 = false;
  }
  iVar8 = *(int *)(unaff_RDI + 0x160);
  if (0 < iVar8) {
    lVar3 = *(longlong *)(unaff_RDI + 0x170);
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      if (lVar6 == 0) {
        if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
          uVar4 = 0;
          do {
            if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
              lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
              goto LAB_012b6d7e;
            }
            uVar4 = uVar4 + 1;
          } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
        }
        FUN_00e828a0();
        lVar3 = 0;
LAB_012b6d7e:
        *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + lVar9 * 8) = lVar3;
        lVar3 = *(longlong *)(unaff_RDI + 0x170);
        iVar8 = *(int *)(unaff_RDI + 0x160);
        lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      }
      if (lVar6 == 0) {
        bVar7 = false;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar8);
  }
  if (!bVar7) {
    *param_2 = 0;
    *unaff_RSI = *(undefined4 *)(*(longlong *)(unaff_RDI + 0x110) + 0xc);
  }
  if (lVar5 == 0) {
    *param_1 = 0;
  }
  return;
}




// ============================================================
// @012b9d70 — 1431 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012b9d70(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  float *in_RCX;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong in_RDX;
  longlong unaff_RSI;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  size_t in_R8D;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  *param_4 = 1.0;
  param_2 = param_2 / param_3;
  if (DAT_0239011c * (float)(int)in_R8D < param_2) {
    return;
  }
  _memcpy(in_RCX,(void *)((longlong)(int)in_R8D << 2),in_R8D);
  *in_RCX = 0.0;
  FUN_015c1480(param_2);
  fVar21 = _UNK_0241109c;
  fVar20 = _UNK_02411098;
  fVar22 = _UNK_02411094;
  fVar19 = DAT_02394274;
  uVar15 = (ulonglong)in_R8D;
  if (0 < (int)in_R8D) {
    if (in_R8D < 8) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulonglong)(in_R8D & 0xfffffff8);
      uVar10 = 0;
      do {
        pfVar8 = in_RCX + uVar10;
        fVar1 = pfVar8[1];
        fVar2 = pfVar8[2];
        fVar3 = pfVar8[3];
        if (*pfVar8 < fVar19) {
          in_RCX[uVar10] = 1.1754944e-38;
        }
        if (fVar1 < fVar22) {
          in_RCX[uVar10 + 1] = 1.1754944e-38;
        }
        if (fVar2 < fVar20) {
          in_RCX[uVar10 + 2] = 1.1754944e-38;
          if (fVar3 < fVar21) goto LAB_012b9f06;
LAB_012b9e95:
          pfVar8 = in_RCX + uVar10 + 4;
          fVar1 = *pfVar8;
          fVar2 = pfVar8[1];
          fVar3 = pfVar8[2];
          fVar4 = pfVar8[3];
        }
        else {
          if (fVar21 <= fVar3) goto LAB_012b9e95;
LAB_012b9f06:
          in_RCX[uVar10 + 3] = 1.1754944e-38;
          pfVar8 = in_RCX + uVar10 + 4;
          fVar1 = *pfVar8;
          fVar2 = pfVar8[1];
          fVar3 = pfVar8[2];
          fVar4 = pfVar8[3];
        }
        if (fVar1 < fVar19) {
          in_RCX[uVar10 + 4] = 1.1754944e-38;
        }
        if (fVar2 < fVar22) {
          in_RCX[uVar10 + 5] = 1.1754944e-38;
        }
        if (fVar3 < fVar20) {
          in_RCX[uVar10 + 6] = 1.1754944e-38;
        }
        if (fVar4 < fVar21) {
          in_RCX[uVar10 + 7] = 1.1754944e-38;
        }
        uVar10 = uVar10 + 8;
      } while (uVar11 != uVar10);
      fVar19 = DAT_02394274;
      if (uVar11 == uVar15) goto LAB_012b9f50;
    }
    do {
      if (in_RCX[uVar11] <= fVar19 && fVar19 != in_RCX[uVar11]) {
        in_RCX[uVar11] = 1.1754944e-38;
      }
      uVar11 = uVar11 + 1;
    } while (uVar15 != uVar11);
  }
LAB_012b9f50:
  fVar22 = DAT_0239011c;
  iVar17 = in_R8D - 1;
  fVar19 = *in_RCX;
  fVar20 = param_2;
  iVar5 = (int)(DAT_0239011c + param_2);
  iVar18 = 0;
  do {
    iVar6 = iVar5;
    uVar9 = iVar6 - iVar18;
    if (uVar9 != 0 && iVar18 <= iVar6) {
      uVar13 = (ulonglong)iVar6;
      fVar21 = (in_RCX[uVar13] - fVar19) / (float)(int)uVar9;
      uVar16 = (ulonglong)iVar18;
      uVar11 = ~uVar16;
      uVar10 = (ulonglong)uVar9 & 3;
      if ((uVar9 & 3) != 0) {
        do {
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 1] = fVar19;
          uVar16 = uVar16 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (2 < uVar11 + uVar13) {
        do {
          in_RCX[uVar16 + 1] = fVar19 + fVar21;
          fVar19 = fVar19 + fVar21 + fVar21;
          in_RCX[uVar16 + 2] = fVar19;
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 3] = fVar19;
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 4] = fVar19;
          uVar16 = uVar16 + 4;
        } while (uVar13 != uVar16);
      }
    }
    fVar20 = fVar20 + param_2;
    iVar5 = (int)(fVar20 + fVar22);
    iVar18 = iVar6;
  } while ((int)(fVar20 + fVar22) < (int)in_R8D);
  if (iVar6 + 1 < (int)in_R8D) {
    lVar14 = (longlong)(iVar6 + 1);
    uVar9 = (in_R8D - iVar6) - 2;
    if (6 < uVar9) {
      uVar16 = (ulonglong)uVar9 + 1;
      uVar13 = uVar16 & 0xfffffffffffffff8;
      uVar11 = (uVar13 - 8 >> 3) + 1;
      uVar10 = (ulonglong)((uint)uVar11 & 3);
      if (uVar13 - 8 < 0x18) {
        lVar7 = 0;
      }
      else {
        lVar12 = -(uVar11 & 0xfffffffffffffffc);
        lVar7 = 0;
        do {
          pfVar8 = in_RCX + lVar14 + lVar7;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 4;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 8;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0xc;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x10;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x14;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x18;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x1c;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          lVar7 = lVar7 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar10 != 0) {
        lVar12 = 0;
        do {
          pfVar8 = (float *)((longlong)in_RCX + lVar12 + (lVar7 + lVar14) * 4);
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = (float *)((longlong)in_RCX + lVar12 + (lVar7 + lVar14) * 4 + 0x10);
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          lVar12 = lVar12 + 0x20;
        } while (uVar10 << 5 != lVar12);
      }
      if (uVar16 == uVar13) goto LAB_012ba13e;
      lVar14 = lVar14 + uVar13;
    }
    do {
      in_RCX[lVar14] = fVar19;
      lVar14 = lVar14 + 1;
    } while (in_R8D != (size_t)lVar14);
  }
LAB_012ba13e:
  fVar19 = DAT_02394274;
  if (1 < (int)in_R8D) {
    uVar11 = 1;
    do {
      if (fVar19 <= in_RCX[uVar11]) {
        fVar22 = (float)(int)uVar11 * param_1;
        if ((float)iVar17 <= fVar22) {
          fVar22 = in_RCX[iVar17];
        }
        else {
          fVar22 = (in_RCX[(longlong)(int)fVar22 + 1] - in_RCX[(int)fVar22]) *
                   (fVar22 - (float)(int)fVar22) + in_RCX[(int)fVar22];
        }
        *(float *)(in_RDX + uVar11 * 4) =
             (fVar22 / in_RCX[uVar11]) * *(float *)(in_RDX + uVar11 * 4);
      }
      uVar11 = uVar11 + 1;
    } while (uVar15 != uVar11);
  }
  fVar22 = DAT_02390d00;
  fVar19 = DAT_02390124;
  fVar20 = DAT_02390124 / (float)(int)((float)(int)in_R8D * DAT_0239426c);
  pfVar8 = (float *)(in_RDX + (longlong)iVar17 * 4);
  fVar21 = 0.0;
  do {
    *pfVar8 = (*pfVar8 + fVar22) * fVar21 + fVar19;
    fVar21 = fVar21 + fVar20;
    pfVar8 = pfVar8 + -1;
  } while (fVar21 < fVar19);
  fVar22 = 0.0;
  fVar20 = 0.0;
  if (1 < (int)in_R8D) {
    uVar11 = (ulonglong)((uint)(uVar15 - 1) & 3);
    if (uVar15 - 2 < 3) {
      fVar20 = 0.0;
      lVar14 = 1;
      fVar22 = 0.0;
    }
    else {
      fVar20 = 0.0;
      fVar22 = 0.0;
      uVar10 = 0;
      do {
        uVar13 = uVar10;
        fVar21 = *(float *)(unaff_RSI + 4 + uVar13 * 4);
        fVar1 = *(float *)(unaff_RSI + 8 + uVar13 * 4);
        fVar2 = *(float *)(unaff_RSI + 0xc + uVar13 * 4);
        fVar3 = *(float *)(unaff_RSI + 0x10 + uVar13 * 4);
        fVar22 = fVar22 + fVar21 + fVar1 + fVar2 + fVar3;
        fVar20 = fVar3 * *(float *)(in_RDX + 0x10 + uVar13 * 4) +
                 fVar2 * *(float *)(in_RDX + 0xc + uVar13 * 4) +
                 fVar1 * *(float *)(in_RDX + 8 + uVar13 * 4) +
                 fVar21 * *(float *)(in_RDX + 4 + uVar13 * 4) + fVar20;
        uVar10 = uVar13 + 4;
      } while ((uVar15 - 1 & 0xfffffffffffffffc) != uVar13 + 4);
      lVar14 = uVar13 + 5;
    }
    if (uVar11 != 0) {
      uVar15 = 0;
      do {
        fVar21 = *(float *)(unaff_RSI + lVar14 * 4 + uVar15 * 4);
        fVar22 = fVar22 + fVar21;
        fVar20 = fVar20 + fVar21 * *(float *)(in_RDX + lVar14 * 4 + uVar15 * 4);
        uVar15 = uVar15 + 1;
      } while (uVar11 != uVar15);
    }
  }
  if (DAT_02394274 < fVar20) {
    fVar19 = fVar22 / fVar20;
  }
  *param_4 = fVar19;
  return;
}




// ============================================================
// @01c64c20 — 1055 bytes
// ============================================================

void FUN_01c64c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined *puVar5;
  longlong unaff_RDI;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 local_90 [8];
  undefined1 local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  double local_60;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x2b0) == 0) {
    uVar7 = FUN_01c44d20(param_1,param_2,param_3,param_4,0);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar7 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = 1;
    FUN_01c44700(uVar7,local_90);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = param_2;
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar5 = &DAT_02572358;
    *puVar1 = &DAT_02572358;
    (*DAT_02572370)();
    lVar2 = *(longlong *)(unaff_RDI + 0x2b0);
    local_58 = puVar1;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar6 = 0;
      do {
        pVar4 = (pthread_key_t)puVar5;
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar6 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_48 = lVar2;
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_60 = *(double *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x2b8) + 0x10) + lVar6 * 8);
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_01507970();
        dVar8 = (double)FUN_016c98e0(uVar7,0);
        if ((local_60 != dVar8) || (NAN(local_60) || NAN(dVar8))) {
LAB_01c64f29:
          puVar1 = local_58;
          local_40 = local_48;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = *(double *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x2c0) + 0x10) + lVar6 * 8)
          ;
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01508610();
          dVar8 = (double)FUN_016c98e0(uVar7,0);
          if ((local_60 != dVar8) || (puVar1 = local_58, NAN(local_60) || NAN(dVar8)))
          goto LAB_01c64f29;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        lVar2 = *(longlong *)(unaff_RDI + 0x2b0);
        puVar5 = (undefined *)(longlong)*(int *)(lVar2 + 0xc);
      } while (lVar6 < (longlong)puVar5);
    }
    local_68 = '\0';
    local_70 = puVar1;
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @008c5ce8 — 944 bytes
// ============================================================

int FUN_008c5ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar9 = unaff_RDI + 0x40;
  lVar10 = unaff_RDI + 0x24;
  lVar11 = unaff_RDI + 0x20;
  lVar12 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,uVar13,uVar14,
                       uVar15);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar13 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1) {
    case 1:
      if (local_3c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x25c) = 1;
      goto LAB_008c604a;
    case 2:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x25d) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x25e) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_3c == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0x28);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0x30); lVar5 != lVar6; lVar5 = lVar5 + -0x30) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x30))();
        }
        *(longlong *)(unaff_RDI + 0x30) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
        FUN_008c60dc();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x28) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x30;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x25f) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 5:
      if (local_3c == 0xc) {
        iVar3 = FUN_008892fe();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x260) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 6:
      if (local_3c == 0xc) {
        iVar3 = FUN_0088b06e();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x261) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      if (iVar1 == 0xc44) {
        if (local_3c == 0xc) {
          iVar3 = FUN_008f1210();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x262) = 1;
          goto LAB_008c604a;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (iVar1 == 10000) {
        if (local_3c == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x263) = 1;
          goto LAB_008c604a;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar3 = iVar3 + iVar2;
LAB_008c604a:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ============================================================
// @012b9080 — 863 bytes
// ============================================================

void FUN_012b9080(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *unaff_RDI;
  longlong *plVar3;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_54 = param_2;
  FUN_00da5ad0();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar2;
  FUN_00da6c20();
  local_b0 = DAT_027bec88;
  if (DAT_027bec88 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_000175c0(param_1,&local_b0);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar2 + 0x18))();
    FUN_00da6c20();
    plVar1 = DAT_027bec88;
    local_98 = '\0';
    local_a0 = plVar2;
    if (DAT_027bec88 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_40 = plVar1;
    local_38 = '\0';
    FUN_00ca0840(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d46530();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = plVar1;
  local_88 = '\0';
  FUN_012c20e0(param_1,&local_90);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_00e83120();
    if ((((local_40 != (longlong *)0x0) && (plVar3 = local_40, local_38 == '\0')) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = '\0';
    local_70 = plVar1;
    local_68 = '\0';
    local_80 = plVar3;
    FUN_012c2030(param_1,&local_70);
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = local_60;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @008b91c8 — 649 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x008b9433) */

int FUN_008b91c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_36,&local_44);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0xc44) {
      if (local_36 == 1) {
        if (local_44 == 0xb) {
          iVar3 = (**(code **)(*unaff_RSI + 0x150))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x2c8) = 1;
          goto LAB_008b93a9;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_44 == 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x2c9) = 1;
          goto LAB_008b93a9;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_008b935f:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_008b93a3:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xc44) {
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008b93a3;
      }
      iVar3 = FUN_008f7b82();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x2ca) = 1;
    }
    else {
      if (local_36 != 0xc45) goto LAB_008b935f;
      if (local_44 != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008b93a3;
      }
      *(undefined8 *)(unaff_RDI + 0x2b8) = *(undefined8 *)(unaff_RDI + 0x2b0);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x2b8) - *(longlong *)(unaff_RDI + 0x2b0);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x2b8) = *(longlong *)(unaff_RDI + 0x2b0) + uVar5;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x2cb) = 1;
    }
LAB_008b93a9:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ============================================================
// @012b9ad0 — 634 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012b9ad0(ulonglong param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  
  iVar8 = 1;
  if (param_3 != 0) {
    iVar8 = param_3;
  }
  if (0 < (int)param_2) {
    lVar11 = (longlong)param_4;
    uVar10 = 0;
    do {
      puVar1 = *(uint **)(local_res8 + uVar10 * 8);
      puVar2 = *(undefined8 **)(local_res10 + uVar10 * 8);
      param_1 = FUN_00e83530(param_1,*(undefined8 *)(unaff_RSI + uVar10 * 8));
      if (local_res18 == 0) {
        if (param_3 == 0) {
          *puVar2 = 0x3f800000;
        }
        fVar7 = DAT_023b4df0;
        uVar5 = _DAT_02390140;
        fVar4 = DAT_02390124;
        lVar9 = (longlong)iVar8;
        if (iVar8 < param_4) {
          do {
            while( true ) {
              param_1 = *(ulonglong *)(puVar1 + lVar9 * 2);
              fVar14 = (float)(param_1 >> 0x20);
              fVar15 = (float)((uint)fVar14 & uVar5);
              fVar13 = (float)param_1;
              if ((fVar13 == 0.0) && (fVar12 = fVar15, !NAN(fVar13))) break;
              fVar12 = (float)((uint)fVar13 & uVar5);
              if ((fVar14 == 0.0) && (!NAN(fVar14))) break;
              if (fVar12 <= fVar15) {
                fVar12 = SQRT((fVar12 / fVar15) * (fVar12 / fVar15) + fVar4) * fVar15;
                break;
              }
              fVar12 = fVar12 * SQRT((fVar15 / fVar12) * (fVar15 / fVar12) + fVar4);
              if (fVar12 <= fVar7) goto LAB_012b9cb0;
LAB_012b9cf1:
              param_1 = CONCAT44(fVar14 * (fVar4 / fVar12),fVar13 * (fVar4 / fVar12));
              puVar2[lVar9] = param_1;
              lVar9 = lVar9 + 1;
              if (lVar11 == lVar9) goto LAB_012b9b30;
            }
            if (fVar7 < fVar12) goto LAB_012b9cf1;
LAB_012b9cb0:
            puVar2[lVar9] = 0x3f800000;
            lVar9 = lVar9 + 1;
          } while (lVar11 != lVar9);
        }
      }
      else {
        puVar3 = *(uint **)(local_res18 + uVar10 * 8);
        if (param_3 == 0) {
          param_1 = (ulonglong)*puVar1;
          *puVar3 = *puVar1;
          *puVar2 = 0x3f800000;
        }
        fVar7 = DAT_023b4df0;
        uVar6 = _UNK_02390144;
        uVar5 = _DAT_02390140;
        fVar4 = DAT_02390124;
        lVar9 = (longlong)iVar8;
        if (iVar8 < param_4) {
          do {
            while( true ) {
              param_1 = *(ulonglong *)(puVar1 + lVar9 * 2);
              fVar14 = (float)(param_1 >> 0x20);
              fVar15 = (float)((uint)fVar14 & uVar5);
              fVar13 = (float)param_1;
              if ((fVar13 == 0.0) && (fVar12 = fVar15, !NAN(fVar13))) break;
              fVar12 = (float)((uint)fVar13 & uVar5);
              param_1 = CONCAT44((uint)fVar14 & uVar6,fVar12);
              if ((fVar14 == 0.0) && (!NAN(fVar14))) break;
              if (fVar15 < fVar12) {
                fVar12 = SQRT((fVar15 / fVar12) * (fVar15 / fVar12) + fVar4) * fVar12;
                break;
              }
              fVar13 = (fVar12 / fVar15) * (fVar12 / fVar15) + fVar4;
              param_1 = CONCAT44((uint)fVar14 & uVar6,fVar13);
              fVar12 = SQRT(fVar13) * fVar15;
              puVar3[lVar9] = (uint)fVar12;
              if (fVar12 <= fVar7) goto LAB_012b9bb0;
LAB_012b9c1a:
              param_1 = CONCAT44((fVar4 / fVar12) *
                                 (float)((ulonglong)*(undefined8 *)(puVar1 + lVar9 * 2) >> 0x20),
                                 (fVar4 / fVar12) * (float)*(undefined8 *)(puVar1 + lVar9 * 2));
              puVar2[lVar9] = param_1;
              lVar9 = lVar9 + 1;
              if (lVar11 == lVar9) goto LAB_012b9b30;
            }
            puVar3[lVar9] = (uint)fVar12;
            if (fVar7 < fVar12) goto LAB_012b9c1a;
LAB_012b9bb0:
            puVar2[lVar9] = 0x3f800000;
            lVar9 = lVar9 + 1;
          } while (lVar11 != lVar9);
        }
      }
LAB_012b9b30:
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_2);
  }
  return;
}




// ============================================================
// @012b6e60 — 548 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012b705f) */
/* WARNING: Removing unreachable block (ram,0x012b7068) */
/* WARNING: Removing unreachable block (ram,0x012b7030) */
/* WARNING: Removing unreachable block (ram,0x012b7039) */

void FUN_012b6e60(pthread_key_t param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar7;
  double dVar8;
  byte local_res10;
  char local_res18;
  longlong local_60;
  char local_58;
  
  plVar6 = (longlong *)*unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  iVar2 = (**(code **)(*plVar6 + 0x3a0))();
  if (iVar2 < param_3) {
    plVar6 = (longlong *)*unaff_RSI;
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar6 = (longlong *)*unaff_RSI;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    param_3 = (**(code **)(*plVar6 + 0x3a0))();
  }
  iVar2 = FUN_00b33120();
  if (iVar2 < param_3) {
    param_3 = FUN_00b33120();
  }
  pVar5 = 1;
  if (local_res18 == '\0') {
    pVar5 = (uint)local_res10 * 2;
  }
  plVar6 = (longlong *)*unaff_RSI;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  dVar8 = DAT_0238fee8 / (double)param_2;
  (**(code **)(*unaff_RDI + 0x420))();
  uVar7 = (**(code **)(*unaff_RDI + 0x5f8))();
  cVar1 = (**(code **)(*plVar6 + 0x388))(dVar8,uVar7,param_3,param_4);
  if (cVar1 == '\0') {
    (**(code **)(*unaff_RDI + 0x5d0))();
    if (local_58 == '\0') {
      if (local_60 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
      return;
    }
    FUN_012dc360();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @019e75f0 — 505 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019e76dd) */
/* WARNING: Removing unreachable block (ram,0x019e76e6) */

void FUN_019e75f0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  longlong local_60;
  char local_58;
  
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x430);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x430) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(longlong *)(unaff_RDI + 0x1c0) = *unaff_RSI;
  uVar8 = FUN_00e7d6f0();
  *(undefined8 *)(unaff_RDI + 0x1d0) = uVar8;
  *(undefined8 *)(unaff_RDI + 0x1d8) = param_1;
  *(undefined8 *)(unaff_RDI + 0x1c8) = 0;
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_019e76eb;
    }
  }
  else if (local_60 != 0) {
LAB_019e76eb:
    if (*(int *)(local_60 + 0xc) < 1) {
      iVar5 = 0;
      fVar9 = 0.0;
    }
    else {
      fVar9 = 0.0;
      iVar6 = 0;
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific(in_ECX);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar7 = (float)FUN_013de3b0();
        bVar3 = !NAN(fVar7) && !NAN(fVar7);
        in_ECX = CONCAT31((int3)(in_ECX >> 8),bVar3);
        if (!NAN(fVar7)) {
          fVar9 = fVar9 + fVar7;
        }
        iVar5 = iVar5 + (uint)bVar3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_60 + 0xc));
    }
    FUN_001150f0();
    FUN_00d50b20();
    if (iVar5 != 0) {
      fVar9 = fVar9 / (float)iVar5;
      goto LAB_019e77d8;
    }
  }
  fVar9 = 0.0;
LAB_019e77d8:
  *(float *)(unaff_RDI + 0x1e0) = fVar9;
  return;
}



