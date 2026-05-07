// Function: FUN_00bf7ca0
// Address: 00bf7ca0
// Size: 951 bytes
// Class: GNData
// String references:
//   "GNData"


/* WARNING: Removing unreachable block (ram,0x00bf7f7a) */
/* WARNING: Removing unreachable block (ram,0x00bf7f83) */
/* WARNING: Removing unreachable block (ram,0x00bf7e6c) */
/* WARNING: Removing unreachable block (ram,0x00bf7e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf7ca0(undefined4 param_1,longlong *param_2,size_t param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  int iVar8;
  longlong local_a0;
  char local_98;
  longlong local_60;
  char local_58;
  size_t local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong local_40;
  char local_31;
  
  plVar4 = (longlong *)*unaff_RSI;
  local_50 = param_3;
  local_4c = param_1;
  local_48 = param_2;
  if ((DAT_026d0220 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    _DAT_02789140 = FUN_000378a0;
    _DAT_02789150 = 0;
    uRam0000000002789158 = 0;
    _DAT_02789160 = 0;
    uRam0000000002789168 = 0;
    _DAT_02789170 = 0;
    uRam0000000002789178 = 0;
    _DAT_02789180 = 0;
    uRam0000000002789188 = 0;
    _DAT_02789190 = 0;
    uRam0000000002789198 = 0;
    _DAT_027891a0 = 0;
    uRam00000000027891a8 = 0;
    _DAT_027891b0 = 0;
    uRam00000000027891b8 = 0;
    _DAT_027891c0 = 0;
    uRam00000000027891c8 = 0;
    _DAT_027891d0 = 0;
    uRam00000000027891d8 = 0;
    _DAT_027891e0 = 0;
    uRam00000000027891e8 = 0;
    _DAT_027891f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_00bf7cfa:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_00bf7cfa;
  }
  lVar1 = *plVar4;
  cVar3 = (char)plVar4[1];
  if ((cVar3 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) goto LAB_00bf7f2d;
  }
  else {
    FUN_00d50b00();
  }
  lVar7 = DAT_0276bca8;
  plVar2 = (longlong *)*local_48;
  local_31 = cVar3;
  if (DAT_0276bca8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = DAT_0276bcb0;
  if (cVar3 == '\0') {
    plVar2 = (longlong *)*local_48;
    if (DAT_0276bcb0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((cVar3 != '\0') && (lVar7 = *(longlong *)(unaff_RDI + 0xa0), lVar7 != 0)) {
      FUN_00d50b00();
      goto LAB_00bf7e08;
    }
  }
  else {
    lVar7 = *(longlong *)(unaff_RDI + 0x98);
    if (lVar7 != 0) {
      FUN_00d50b00();
LAB_00bf7e08:
      iVar8 = *(int *)(lVar1 + 0x18);
      iVar5 = iVar8 + 3;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      iVar5 = iVar5 >> 2;
      iVar8 = *(int *)(lVar7 + 0x18);
      iVar6 = iVar8 + 3;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      iVar8 = (iVar6 >> 2) - iVar5;
      local_40 = lVar1;
      if (iVar8 != 0 && iVar5 <= iVar6 >> 2) {
        FUN_00c8e690();
        if ((local_98 == '\0') && (local_a0 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        lVar1 = *unaff_RSI;
        if (lVar1 == local_a0) {
          if (((char)unaff_RSI[1] == '\0') && (local_a0 != 0)) goto LAB_00bf7ec7;
          if (local_a0 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          *unaff_RSI = local_a0;
          if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_00bf7ec7:
          *(undefined1 *)(unaff_RSI + 1) = 1;
        }
        _memcpy(plVar4,(void *)(longlong)(iVar5 * 4),param_3);
        _memcpy(plVar4,(void *)(longlong)(iVar8 * 4),param_3);
      }
      FUN_00d50b20();
    }
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
LAB_00bf7f2d:
  local_60 = *local_48;
  local_58 = '\0';
  FUN_00d5adf0((undefined1)local_4c,&local_60,(undefined1)local_50);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


