// Function: FUN_00e6cbd0
// Address: 00e6cbd0
// Size: 1364 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00e6cd38) */
/* WARNING: Removing unreachable block (ram,0x00e6cd44) */
/* WARNING: Removing unreachable block (ram,0x00e6cc76) */
/* WARNING: Removing unreachable block (ram,0x00e6cc7b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00e6cbd0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined8 local_50;
  longlong *local_48;
  char local_40;
  
  if (*unaff_RSI == 0) {
    return 0;
  }
  FUN_00dbbbc0();
  plVar7 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = '\0';
  local_70 = (longlong *)0x0;
  local_80 = plVar7;
  FUN_00da5ad0();
  local_58 = local_40 != '\0';
  local_60 = local_48;
  if ((bool)local_58) {
    local_40 = '\0';
  }
  local_50 = FUN_00da7170();
  uVar10 = FUN_00da7180();
  if (local_60 == (longlong *)0x0) {
    bVar2 = false;
    plVar7 = (longlong *)0x0;
  }
  else {
    bVar2 = false;
    plVar6 = (longlong *)0x0;
    do {
      local_98 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar1 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_98 = '\x01';
      local_a0 = lVar1;
      FUN_00e91f70(uVar10,&local_a0);
      plVar7 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e94a20();
      FUN_00e92260((int)DAT_02394dd8);
      (**(code **)(*plVar7 + 0x398))(0,0);
      FUN_00e925a0();
      plVar7 = local_48;
      if (local_48 == plVar6) {
        plVar7 = plVar6;
        bVar3 = bVar2;
        if ((bVar2) || (local_48 == (longlong *)0x0)) goto joined_r0x00e6ce69;
        bVar3 = true;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_00e6ce55;
        }
      }
      else if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar2) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar6 = plVar7;
LAB_00e6ce55:
          plVar7 = plVar6;
          bVar3 = true;
        }
joined_r0x00e6ce69:
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = true;
        if ((bVar2) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar3;
      if (local_70 != (longlong *)0x0) {
        FUN_00e97f20();
      }
      FUN_00d50b20();
      uVar10 = FUN_00da7180();
      if (local_60 == (longlong *)0x0) break;
      local_60 = (longlong *)0x0;
      if (local_58 == '\0') {
        local_58 = '\0';
        break;
      }
      uVar10 = FUN_00d50b20();
      local_58 = '\0';
      plVar6 = plVar7;
    } while (local_60 != (longlong *)0x0);
  }
  local_60 = (longlong *)0x0;
  if ((local_68 != '\0') && (local_60 = (longlong *)0x0, local_70 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  plVar9 = local_80;
  plVar6 = DAT_027878c0;
  if (plVar7 == (longlong *)0x0) {
    uVar10 = 0;
    goto LAB_00e6d071;
  }
  if (DAT_027878c0 != (longlong *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  lVar1 = DAT_02787890;
  if (DAT_02787890 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  pplVar8 = &local_70;
  FUN_000175c0(uVar10,&local_b0);
  plVar7 = local_70;
  if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
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
    plVar9 = local_80;
  }
  if (plVar7 == (longlong *)0x0) {
LAB_00e6cfb9:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00e6cfb9;
  }
  local_88 = 0;
  plVar7 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  local_88 = '\x01';
  local_90 = plVar7;
  uVar10 = (**(code **)(*plVar6 + 0x50))();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (bVar2) {
    FUN_00d50b20();
  }
LAB_00e6d071:
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar10;
}


