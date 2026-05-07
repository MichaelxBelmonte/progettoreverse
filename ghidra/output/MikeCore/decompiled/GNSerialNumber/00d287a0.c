// Function: FUN_00d287a0
// Address: 00d287a0
// Size: 1205 bytes
// Class: GNSerialNumber
// String references:
//   "serial number format mistmatch"
//   "%01X"
//   "serial number key format mistmatch"


/* WARNING: Removing unreachable block (ram,0x00d288eb) */
/* WARNING: Removing unreachable block (ram,0x00d288f7) */

undefined8 * FUN_00d287a0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RDI;
  int iVar7;
  int local_5c;
  longlong *local_50;
  int local_44;
  longlong *local_40;
  uint local_38;
  int local_34;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025795a8;
  (*DAT_025795c0)();
  lVar2 = DAT_0277d258;
  if (DAT_0277d258 != 0) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  plVar3 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00ddb860();
  local_50 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
    local_50 = (longlong *)0x0;
  }
  else {
    if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if (((char)local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_00d288d5;
      FUN_00d50b20();
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    bVar1 = false;
  }
LAB_00d288d5:
  iVar5 = FUN_00d8c7a0();
  if (iVar5 < 1) {
LAB_00d28ad1:
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (plVar3 == (longlong *)0x0) goto LAB_00d28c3e;
  }
  else {
    if (0 < param_2) {
      iVar7 = 0;
      do {
        cVar4 = (**(code **)(*local_50 + 0x430))();
        lVar2 = DAT_0277d248;
        if (cVar4 == '\0') {
          if (DAT_0277d248 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc7b40();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        if (iVar7 == 0) {
          local_38 = 1;
          local_40 = &DAT_024cc6f0;
          local_34 = local_44;
          FUN_00d94d80();
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x430))();
          lVar2 = DAT_0277d248;
          if (cVar4 == '\0') {
            if (DAT_0277d248 != 0) {
              FUN_00d50b00();
            }
            FUN_00cc7b40();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          cVar4 = (**(code **)(*plVar3 + 0x388))();
          if (cVar4 != '\0') {
            (**(code **)(*plVar3 + 0x378))();
          }
          local_34 = local_5c + -0x10 + local_44;
          if (local_5c + local_44 < 0x10) {
            local_34 = local_5c + local_44;
          }
          local_38 = 1;
          local_40 = &DAT_024cc6f0;
          FUN_00d94d80(&DAT_024cc6f0,&local_40);
        }
        iVar7 = iVar7 + 1;
      } while (iVar5 != iVar7);
      goto LAB_00d28ad1;
    }
    do {
      cVar4 = (**(code **)(*local_50 + 0x430))();
      lVar2 = DAT_0277d248;
      if (cVar4 == '\0') {
        if (DAT_0277d248 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(*plVar3 + 0x430))();
      lVar2 = DAT_0277d248;
      if (cVar4 == '\0') {
        if (DAT_0277d248 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(*plVar3 + 0x388))();
      if (cVar4 != '\0') {
        (**(code **)(*plVar3 + 0x378))();
      }
      local_34 = local_5c + -0xf + local_44;
      if (local_5c + local_44 < 0x10) {
        local_34 = local_5c + local_44;
      }
      local_38 = 1;
      local_40 = &DAT_024cc6f0;
      FUN_00d94d80(local_5c,&local_40);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  FUN_00d50b20();
LAB_00d28c3e:
  if (!bVar1 && local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


