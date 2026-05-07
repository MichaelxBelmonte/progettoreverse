// Function: FUN_006ce3a0
// Address: 006ce3a0
// Size: 4153 bytes
// Class: GNList
// String references:
//   "GNList"
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x006ce490) */
/* WARNING: Removing unreachable block (ram,0x006ce49c) */
/* WARNING: Removing unreachable block (ram,0x006ce4cf) */
/* WARNING: Removing unreachable block (ram,0x006ce4db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ce3a0(code *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  char *pcVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  undefined4 uVar11;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  longlong *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  *(undefined1 *)((longlong)unaff_RDI + 0xd9) = 0;
  (**(code **)(*unaff_RDI + 0x630))();
  plVar3 = local_40;
  if ((DAT_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    param_1 = FUN_00018210;
    _DAT_026cd470 = FUN_00018210;
    _DAT_026cd480 = 0;
    uRam00000000026cd488 = 0;
    _DAT_026cd490 = 0;
    _DAT_026cd508 = 0;
    uRam00000000026cd510 = 0;
    _DAT_026cd518 = 0;
    DAT_026cd51a = 6;
    _DAT_026cd498 = 0;
    uRam00000000026cd4a0 = 0;
    _DAT_026cd4a8 = 0;
    uRam00000000026cd4b0 = 0;
    _DAT_026cd4b8 = 0;
    uRam00000000026cd4c0 = 0;
    _DAT_026cd4c8 = 0;
    uRam00000000026cd4d0 = 0;
    _DAT_026cd4d8 = 0;
    uRam00000000026cd4e0 = 0;
    _DAT_026cd4e8 = 0;
    uRam00000000026cd4f0 = 0;
    _DAT_026cd4f8 = 0;
    uRam00000000026cd500 = 0;
    DAT_026cd523 = 0;
    _DAT_026cd51b = 0;
    ___cxa_guard_release();
  }
  pplVar10 = (longlong **)&DAT_02802688;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      FUN_000823a0();
      cVar4 = FUN_00e8da30();
      pplVar10 = &local_40;
      if (cVar4 == '\0') {
        pplVar10 = (longlong **)&DAT_02802688;
      }
    }
  }
  local_58 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00451020();
  FUN_00451020();
  FUN_006cb500();
  plVar3 = local_40;
  if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_006cc1e0();
  if ((plVar3 == (longlong *)0x0) || (*(int *)((longlong)plVar3 + 0xc) == 0)) goto LAB_006cf13e;
  FUN_00d23310();
  plVar1 = local_40;
  pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
  pcVar9 = &local_50;
  if (local_38[0] != '\0') {
    pcVar9 = local_38;
  }
  local_50 = local_38[0];
  *pcVar9 = '\0';
  if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_60 = FUN_00e8b990();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  if ((local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) goto LAB_006cf13e;
  *(undefined1 *)(unaff_RDI + 0x1b) = 1;
  FUN_00d50b00();
  local_250 = DAT_02726c40;
  if (DAT_02726c40 != 0) {
    FUN_00d50b00();
  }
  local_248 = '\x01';
  local_240 = local_60;
  local_238 = '\0';
  if ((DAT_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  uVar11 = FUN_00e86210();
  local_230 = DAT_02708700;
  if (DAT_02708700 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_228 = '\x01';
  FUN_00c841b0(uVar11,&local_230);
  local_b8 = 0;
  local_c0 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_b8 = '\x01';
  local_218 = '\0';
  local_220 = 0;
  FUN_000bfbc0(&local_240,&local_250,0xa0,&local_c0);
  plVar1 = (longlong *)unaff_RDI[0x34];
  plVar7 = plVar1;
  if (plVar1 != local_40) {
    if (local_38[0] == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_006ce713;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)unaff_RDI[0x34];
      unaff_RDI[0x34] = (longlong)local_40;
      plVar7 = local_40;
    }
    else {
      local_38[0] = '\0';
      plVar7 = local_40;
LAB_006ce713:
      unaff_RDI[0x34] = (longlong)plVar7;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x34] != 0) {
    if ((DAT_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
    uVar11 = FUN_00e86210();
    local_210 = DAT_02726c50;
    if (DAT_02726c50 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_208 = '\x01';
    uVar11 = FUN_00c841b0(uVar11,&local_210);
    local_b0 = local_40;
    local_a8 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_a8 = '\x01';
    local_1f8 = '\0';
    local_200 = 0;
    FUN_000bfd00(uVar11,&local_200);
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    FUN_006ddb00();
    uVar11 = FUN_00e86210();
    local_1f0 = DAT_02726c58;
    if (DAT_02726c58 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_1e8 = '\x01';
    uVar11 = FUN_00c841b0(uVar11,&local_1f0);
    local_a0 = local_40;
    local_98 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_98 = '\x01';
    local_1d8 = '\0';
    local_1e0 = 0;
    FUN_000bfd00(uVar11,&local_1e0);
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_1d0 = DAT_02726c60;
  if (DAT_02726c60 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = '\x01';
  local_1c0 = local_60;
  local_1b8 = '\0';
  FUN_004fbac0();
  uVar11 = FUN_00e86210();
  local_1b0 = DAT_02726c68;
  if (DAT_02726c68 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_1a8 = '\x01';
  FUN_00c841b0(uVar11,&local_1b0);
  local_88 = 0;
  local_90 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_88 = '\x01';
  local_198 = '\0';
  local_1a0 = 0;
  FUN_000bfbc0(&local_1c0,&local_1d0,0xa0,&local_90);
  plVar1 = (longlong *)unaff_RDI[0x35];
  plVar7 = plVar1;
  if (plVar1 != local_40) {
    if (local_38[0] == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_006ceb8f;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)unaff_RDI[0x35];
      unaff_RDI[0x35] = (longlong)local_40;
      plVar7 = local_40;
    }
    else {
      local_38[0] = '\0';
      plVar7 = local_40;
LAB_006ceb8f:
      unaff_RDI[0x35] = (longlong)plVar7;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_190 = DAT_02726c70;
  if (DAT_02726c70 != 0) {
    FUN_00d50b00();
  }
  local_188 = '\x01';
  local_180 = local_60;
  local_178 = '\0';
  FUN_000823a0();
  uVar11 = FUN_00e86210();
  local_170 = DAT_02726c78;
  if (DAT_02726c78 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_168 = '\x01';
  FUN_00c841b0(uVar11,&local_170);
  local_78 = 0;
  local_80 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  local_158 = '\0';
  local_160 = 0;
  FUN_000bfbc0(&local_180,&local_190,0xa0,&local_80);
  plVar1 = (longlong *)unaff_RDI[0x36];
  plVar7 = plVar1;
  if (plVar1 != local_40) {
    if (local_38[0] == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_006cedbd;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)unaff_RDI[0x36];
      unaff_RDI[0x36] = (longlong)local_40;
      plVar7 = local_40;
    }
    else {
      local_38[0] = '\0';
      plVar7 = local_40;
LAB_006cedbd:
      unaff_RDI[0x36] = (longlong)plVar7;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_000823a0();
  uVar11 = FUN_00e86210();
  local_150 = DAT_02726c80;
  if (DAT_02726c80 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_148 = '\x01';
  uVar11 = FUN_00c841b0(uVar11,&local_150);
  local_70 = local_40;
  local_68 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_68 = '\x01';
  local_138 = '\0';
  local_140 = 0;
  FUN_000bfd00(uVar11,&local_140);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_130 = DAT_026defb0;
  if (DAT_026defb0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02726c90;
  local_128 = '\x01';
  if (DAT_02726c90 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar2;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_000bf690(&local_120,&local_130,&local_110);
  plVar1 = (longlong *)unaff_RDI[0x37];
  plVar7 = plVar1;
  if (plVar1 != local_40) {
    if (local_38[0] == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_006cf072;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)unaff_RDI[0x37];
      unaff_RDI[0x37] = (longlong)local_40;
      plVar7 = local_40;
    }
    else {
      local_38[0] = '\0';
      plVar7 = local_40;
LAB_006cf072:
      unaff_RDI[0x37] = (longlong)plVar7;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_006cf13e:
  FUN_006ca460();
  FUN_006c9280();
  FUN_006c9eb0();
  local_38[0] = '\0';
  local_40 = (longlong *)0x0;
  FUN_006db470();
  FUN_006d0340();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


