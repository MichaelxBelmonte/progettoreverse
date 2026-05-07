// Function: FUN_00dd7810
// Address: 00dd7810
// Size: 1719 bytes
// Class: GNValue
// String references:
//   "Cannot create value with typed string %@"


/* WARNING: Removing unreachable block (ram,0x00dd7d54) */
/* WARNING: Removing unreachable block (ram,0x00dd7d60) */
/* WARNING: Removing unreachable block (ram,0x00dd7cb4) */
/* WARNING: Removing unreachable block (ram,0x00dd7cc0) */
/* WARNING: Removing unreachable block (ram,0x00dd7c11) */
/* WARNING: Removing unreachable block (ram,0x00dd7c1d) */
/* WARNING: Removing unreachable block (ram,0x00dd7b6e) */
/* WARNING: Removing unreachable block (ram,0x00dd7b7a) */
/* WARNING: Removing unreachable block (ram,0x00dd7ac8) */
/* WARNING: Removing unreachable block (ram,0x00dd7ad4) */
/* WARNING: Removing unreachable block (ram,0x00dd7a25) */
/* WARNING: Removing unreachable block (ram,0x00dd7a31) */

undefined8 FUN_00dd7810(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  
  iVar7 = FUN_00d8c7a0();
  if ((iVar7 == 0) || (cVar6 = FUN_00d8ca70(), lVar3 = DAT_02772088, cVar6 != '('))
  goto LAB_00dd7e91;
  if (DAT_02772088 != 0) {
    FUN_00d50b00();
  }
  iVar7 = FUN_00d90650();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (iVar7 != -1) {
    FUN_00d97ce0(param_1,iVar7 + 1);
    plVar4 = local_60;
    if (((((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_58 != '\0')) && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d8f140(param_1,iVar7 + 1);
    plVar5 = local_60;
    plVar1 = (longlong *)*unaff_RSI;
    if (plVar1 == local_60) {
      if (((char)unaff_RSI[1] != '\0') || (local_60 == (longlong *)0x0)) goto LAB_00dd798c;
      if ((char)local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_00dd7984;
      }
LAB_00dd794d:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    else {
      lVar3 = unaff_RSI[1];
      if ((char)local_58 != '\0') {
        *unaff_RSI = (longlong)local_60;
        if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00dd794d;
      }
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar5;
      if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00dd7984:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00dd798c:
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = DAT_02784098;
    if (DAT_02784098 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840a0;
    if (cVar6 != '\0') {
      FUN_00d96ea0();
      FUN_00dd65e0();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840a0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840a8;
    if (cVar6 != '\0') {
      FUN_00d96b50();
      FUN_00dd6740();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840a8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840b0;
    if (cVar6 != '\0') {
      FUN_00d971f0();
      FUN_00dd67f0();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840b0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840b8;
    if (cVar6 != '\0') {
      FUN_00d96410();
      FUN_00dd6480();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840b8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840c0;
    if (cVar6 != '\0') {
      FUN_00d967b0();
      FUN_00dd6530();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840c0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840c8;
    if (cVar6 != '\0') {
      FUN_00d97540();
      FUN_00dd6690();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840c8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (cVar6 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      iVar7 = FUN_00d8c7a0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (iVar7 == 1) {
        FUN_00d8ca70();
        FUN_00dd68a0();
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
    FUN_00d50b20();
  }
  lVar3 = DAT_027732f0;
  if (DAT_027732f0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *unaff_RSI;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar2;
  FUN_00cc7b40(param_1,&local_60);
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_00dd7e91:
  FUN_00dd6e60();
  return unaff_RDI;
}


