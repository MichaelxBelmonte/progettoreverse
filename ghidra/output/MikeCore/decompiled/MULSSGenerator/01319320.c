// Function: FUN_01319320
// Address: 01319320
// Size: 1259 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x0131956a) */
/* WARNING: Removing unreachable block (ram,0x01319577) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01319320(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined7 uVar8;
  longlong *plVar7;
  char unaff_SIL;
  longlong lVar9;
  longlong **pplVar10;
  longlong *plVar11;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  pthread_key_t local_40;
  char local_3c;
  longlong *local_38;
  
  local_40 = param_1;
  local_3c = unaff_SIL;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_68;
  FUN_012e78c0();
  plVar7 = local_68;
  if ((DAT_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
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
  if (plVar7 == (longlong *)0x0) {
LAB_013193b9:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_013193b9;
  }
  plVar11 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((ulonglong)plVar7 >> 8);
  if (((char)local_40 == '\0') || (param_2 != '\0')) {
    if (plVar11 != (longlong *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      plVar1 = local_68;
      plVar7 = (longlong *)CONCAT71(uVar8,local_68 == (longlong *)0x0);
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar1 == (longlong *)0x0) || (local_3c == '\0')) goto LAB_01319626;
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c64a0();
    }
LAB_01319624:
    plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  else {
    if (plVar11 == (longlong *)0x0) goto LAB_01319624;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_68;
    plVar7 = (longlong *)CONCAT71(uVar8,local_68 != (longlong *)0x0);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 == (longlong *)0x0) && (local_3c != '\0')) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      param_1 = 0x2607248;
      *puVar6 = &DAT_02607248;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x76) = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar6[0x18] = 0;
      puVar6[0x19] = 0;
      puVar6[0x1a] = 0;
      (*DAT_02607260)();
      FUN_012c64a0();
      plVar7 = (longlong *)0x0;
      if (puVar6 == (undefined8 *)0x0) goto LAB_01319624;
      FUN_00d50b20();
      plVar7 = (longlong *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    }
  }
LAB_01319626:
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_01319740;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) goto LAB_01319740;
  local_60 = '\0';
  local_68 = (longlong *)0x0;
  local_58 = plVar1;
  local_48 = 0;
  local_50 = 0;
  local_38 = plVar11;
  if (0 < *(int *)((longlong)plVar1 + 0xc)) {
    uVar2 = (char)local_40;
    lVar9 = 0;
    do {
      local_68 = *(longlong **)(plVar1[2] + lVar9 * 8);
      cVar3 = FUN_01319320(uVar2,0);
      plVar7 = (longlong *)((ulonglong)plVar7 & 0xff);
      if (cVar3 == '\0') {
        plVar7 = (longlong *)0x0;
      }
      lVar9 = lVar9 + 1;
      local_50 = CONCAT44(local_50._4_4_,(int)lVar9);
    } while ((int)lVar9 < *(int *)((longlong)plVar1 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  plVar11 = local_38;
LAB_01319740:
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return (ulonglong)plVar7 & 0xffffffff;
}


