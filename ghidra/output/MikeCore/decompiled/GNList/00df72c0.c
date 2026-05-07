// Function: FUN_00df72c0
// Address: 00df72c0
// Size: 726 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00df73f3) */
/* WARNING: Removing unreachable block (ram,0x00df73fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df72c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar5;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
LAB_00df7390:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if ((DAT_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
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
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
LAB_00df7334:
      param_2 = &DAT_02802688;
    }
    else {
      if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      }
      cVar3 = FUN_00e8da30();
      if (cVar3 == '\0') goto LAB_00df7334;
    }
    lVar2 = param_2[1];
    if (((char)lVar2 == '\0') || (*param_2 == 0)) {
      if (*param_2 == 0) goto LAB_00df7390;
    }
    else {
      FUN_00d50b00();
    }
    uVar5 = (**(code **)(*unaff_RSI + 0x3d0))();
    local_38 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38 = '\x01';
    local_40 = local_50;
    FUN_00d95130(uVar5,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


