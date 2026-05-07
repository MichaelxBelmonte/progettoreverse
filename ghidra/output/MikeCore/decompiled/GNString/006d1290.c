// Function: FUN_006d1290
// Address: 006d1290
// Size: 742 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006d1290(code *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  longlong **pplVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar4 = FUN_01d70da0();
  FUN_01d701d0(extraout_XMM0_Da,uVar4);
  uVar4 = FUN_01d66da0();
  local_78 = DAT_02726cf0;
  if (DAT_02726cf0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_70 = '\x01';
  pplVar7 = &local_58;
  FUN_000175c0(uVar4,&local_78);
  plVar1 = local_58;
  if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = FUN_0005d920;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_006d1346:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_006d1346;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_006cb500();
  plVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_006d14b5;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) goto LAB_006d14b5;
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  local_48 = plVar2;
  local_38 = 0;
  local_40 = 0;
  if (0 < *(int *)((longlong)plVar2 + 0xc)) {
    lVar8 = 0;
    do {
      local_58 = *(longlong **)(plVar2[2] + lVar8 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = '\0';
      local_68 = plVar1;
      FUN_012e60e0();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = lVar8 + 1;
      local_40 = CONCAT44(local_40._4_4_,(int)lVar8);
    } while ((int)lVar8 < *(int *)((longlong)plVar2 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006d14b5:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}


