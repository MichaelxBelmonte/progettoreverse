// Function: FUN_00bf87d0
// Address: 00bf87d0
// Size: 642 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00bf896b) */
/* WARNING: Removing unreachable block (ram,0x00bf8974) */
/* WARNING: Removing unreachable block (ram,0x00bf893b) */
/* WARNING: Removing unreachable block (ram,0x00bf8944) */
/* WARNING: Removing unreachable block (ram,0x00bf8907) */
/* WARNING: Removing unreachable block (ram,0x00bf8910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00bf87d0(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_68;
  char local_60;
  undefined4 local_34;
  
  plVar5 = (longlong *)*unaff_RSI;
  uVar6 = FUN_00053ac0();
  if (plVar5 == (longlong *)0x0) {
LAB_00bf8818:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RSI;
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_00bf8818;
  }
  lVar2 = plVar5[1];
  if (((char)lVar2 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00bf883f:
    uVar6 = FUN_00d459e0();
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
    return uVar6;
  }
  if (*plVar5 != 0) goto LAB_00bf883f;
  plVar5 = (longlong *)*unaff_RSI;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_01, iVar4 != 0)) {
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
    uVar6 = ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00bf88a3:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da_00;
    if (cVar3 == '\0') goto LAB_00bf88a3;
  }
  lVar2 = unaff_RSI[1];
  if (((char)lVar2 == '\0') || (*unaff_RSI == 0)) {
    if (*unaff_RSI == 0) {
      return 0;
    }
  }
  else {
    uVar6 = FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x5e8))(uVar6,param_2);
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00bf8915;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_00bf8915:
    local_34 = (**(code **)(*local_68 + 0x380))();
    bVar1 = false;
    goto LAB_00bf8979;
  }
  local_34 = FUN_00c71d60();
  bVar1 = true;
LAB_00bf8979:
  if (!bVar1) {
    FUN_00d50b20();
  }
  if ((char)lVar2 == '\0') {
    return local_34;
  }
  FUN_00d50b20();
  return local_34;
}


