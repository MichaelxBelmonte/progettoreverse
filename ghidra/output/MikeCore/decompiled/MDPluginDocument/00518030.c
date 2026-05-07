// Function: FUN_00518030
// Address: 00518030
// Size: 1343 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x005182c5) */
/* WARNING: Removing unreachable block (ram,0x005182d1) */
/* WARNING: Removing unreachable block (ram,0x005180aa) */
/* WARNING: Removing unreachable block (ram,0x005180b3) */
/* WARNING: Removing unreachable block (ram,0x005183b9) */
/* WARNING: Removing unreachable block (ram,0x005183c2) */

void FUN_00518030(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x108);
  if (lVar1 == *unaff_RSI) {
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
    (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x498))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_005180b8;
      }
LAB_00518180:
      bVar4 = true;
    }
    else {
      if (local_40 == (longlong *)0x0) goto LAB_00518180;
LAB_005180b8:
      FUN_00517ef0();
      FUN_00cafd20();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(unaff_RDI + 0x110);
      if (lVar2 != 0) {
        local_80 = 0;
        FUN_00d50b00();
        local_80 = '\x01';
        local_88 = lVar2;
        (**(code **)(*local_40 + 0x3a8))();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00cbcef0();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x3c8))();
      bVar4 = false;
    }
    FUN_01f27fe0();
    FUN_00d50b00();
    FUN_000c3c10();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((!bVar4) && (*(longlong *)(unaff_RDI + 0x308) == 0)) {
      FUN_00cb1f10();
      FUN_00db3760();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00cb1f10();
      FUN_00db65f0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(char *)(unaff_RDI + 0x359) != '\0') {
      FUN_00756eb0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00756eb0();
        (**(code **)(*local_40 + 0x4a8))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (!bVar4) {
      FUN_00d50b20();
    }
  }
  lVar2 = *unaff_RSI;
  lVar3 = *(longlong *)(unaff_RDI + 0x108);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x108) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x7b0))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*unaff_RSI == 0) goto LAB_005184a0;
  FUN_01f27fe0();
  FUN_00d50b00();
  local_a8 = *unaff_RSI;
  local_a0 = '\0';
  FUN_000c3900(param_1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x498))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_005183c7;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_005183c7:
    FUN_00cafd20();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x110);
    if (lVar2 != 0) {
      FUN_00d50b00();
      (**(code **)(*local_40 + 0x3a0))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x308) == 0) {
      local_90 = '\0';
      local_98 = (longlong *)0x0;
      FUN_00cb1fa0();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        (**(code **)(*local_98 + 0x10))();
        FUN_00d50b20();
      }
    }
    FUN_00cbceb0();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x3c8))();
    FUN_00517510();
    FUN_00d50b20();
  }
  FUN_00518a80();
LAB_005184a0:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


