// Function: FUN_0008f9e0
// Address: 0008f9e0
// Size: 1857 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MUBarSignature"


/* WARNING: Removing unreachable block (ram,0x0008ffad) */
/* WARNING: Removing unreachable block (ram,0x0008ffb9) */
/* WARNING: Removing unreachable block (ram,0x0008ffc7) */
/* WARNING: Removing unreachable block (ram,0x0008ffd3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0008f9e0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 in_RAX;
  void *pvVar7;
  char *pcVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *unaff_RDI;
  longlong *plVar12;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar5 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if (param_2 == 0) {
    return uVar5;
  }
  pplVar11 = &local_48;
  (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x980))();
  plVar1 = local_48;
  if ((DAT_026d8a28 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027ed1e8 = FUN_00d4fe50();
    _DAT_027ed1d0 = "MUBarSignature";
    _DAT_027ed1d8 = 0x18;
    _DAT_027ed1e0 = FUN_00092680;
    _DAT_027ed1f0 = 0;
    uRam00000000027ed1f8 = 0;
    _DAT_027ed200 = 0;
    _DAT_027ed278 = 0;
    uRam00000000027ed280 = 0;
    _DAT_027ed288 = 0;
    DAT_027ed28a = 2;
    _DAT_027ed208 = 0;
    uRam00000000027ed210 = 0;
    _DAT_027ed218 = 0;
    uRam00000000027ed220 = 0;
    _DAT_027ed228 = 0;
    uRam00000000027ed230 = 0;
    _DAT_027ed238 = 0;
    uRam00000000027ed240 = 0;
    _DAT_027ed248 = 0;
    uRam00000000027ed250 = 0;
    _DAT_027ed258 = 0;
    uRam00000000027ed260 = 0;
    _DAT_027ed268 = 0;
    uRam00000000027ed270 = 0;
    DAT_027ed293 = 0;
    _DAT_027ed28b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0008fa51:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0008fa51;
  }
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)unaff_RDI[0x13];
    lVar2 = unaff_RDI[0x25];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x978))();
    if (lVar2 == 0) {
      return uVar5;
    }
    FUN_00d50b20();
    return uVar5;
  }
  FUN_0008b310();
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_00090032;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (longlong *)0x0) goto LAB_00090032;
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar12 = unaff_RDI;
  do {
    (**(code **)(*plVar12 + 0x370))();
    plVar10 = local_48;
    if (local_48 == plVar12) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_0008fbc7;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar8 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar8 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar12 = plVar10;
LAB_0008fbc7:
        local_38[0] = '\x01';
        pcVar8 = local_40;
        plVar10 = plVar12;
      }
      *pcVar8 = '\0';
      plVar12 = plVar10;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar10 = &DAT_02802688;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar10 = (longlong *)&stack0xffffffffffffffa0;
      if (cVar4 == '\0') {
        plVar10 = &DAT_02802688;
      }
    }
    if (*plVar10 != 0) {
      if ((local_38[0] == '\0') && (plVar12 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_0008fd3b;
    }
  } while (plVar12 != (longlong *)0x0);
  plVar12 = (longlong *)0x0;
LAB_0008fd3b:
  pVar9 = (pthread_key_t)plVar10;
  FUN_00d50b20();
  if (plVar12 == (longlong *)0x0) {
    bVar3 = true;
  }
  else {
    FUN_006577f0();
    if (local_40[0] == '\0') {
      if (local_48 == (longlong *)0x0) goto LAB_0008fdf7;
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_0008fd9c:
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_40[0] == '\0') {
        if (local_48 == (longlong *)0x0) goto LAB_0008ff28;
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0008fe27:
        FUN_00d50b00();
        local_38[0] = '\0';
        plVar12 = unaff_RDI;
        do {
          (**(code **)(*plVar12 + 0x370))();
          plVar10 = local_48;
          if (local_48 == plVar12) {
            if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) &&
               (plVar10 = plVar12, local_40[0] != '\0')) goto LAB_0008fe97;
          }
          else {
            if (local_40[0] == '\0') {
              if (local_38[0] == '\0') {
                pcVar8 = local_38;
              }
              else {
                FUN_00d50b20();
                pcVar8 = local_38;
              }
            }
            else {
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
LAB_0008fe97:
              local_38[0] = '\x01';
              pcVar8 = local_40;
            }
            *pcVar8 = '\0';
            plVar12 = plVar10;
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00082eb0();
          plVar10 = &DAT_02802688;
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x360))();
            cVar4 = FUN_00e85ea0();
            plVar10 = (longlong *)&stack0xffffffffffffffa0;
            if (cVar4 == '\0') {
              plVar10 = &DAT_02802688;
            }
          }
          if (*plVar10 != 0) {
            if ((local_38[0] == '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            break;
          }
        } while (plVar12 != (longlong *)0x0);
        FUN_00d50b20();
        if (plVar12 != (longlong *)0x0) {
          FUN_0078e590();
        }
        (**(code **)(*plVar1 + 0x3b0))();
        FUN_01c45560();
        if (unaff_RDI[0x25] != 0) {
          unaff_RDI[0x25] = 0;
          FUN_00d50b20();
        }
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        bVar3 = false;
        FUN_00d50b20();
      }
      else {
        if (local_48 != (longlong *)0x0) goto LAB_0008fe27;
LAB_0008ff28:
        bVar3 = true;
      }
      FUN_00d50b20();
    }
    else {
      if (local_48 != (longlong *)0x0) goto LAB_0008fd9c;
LAB_0008fdf7:
      bVar3 = true;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (!bVar3) {
    FUN_00d50b20();
    return uVar5;
  }
LAB_00090032:
  FUN_00d50b20();
  return 0;
}


