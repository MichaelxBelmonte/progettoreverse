// Function: FUN_012a8c90
// Address: 012a8c90
// Size: 45108 bytes
// Class: MULSSComponentRenderer
// String references:
//   "MUScrubbingTimeProgressor"
//   "MUAudioSourcePrincipalItem"
//   "MUAudioSourceSibilantItem"
//   "MULSSComponentRenderer::getInstanceBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : not enough allocated Buffers!"


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


