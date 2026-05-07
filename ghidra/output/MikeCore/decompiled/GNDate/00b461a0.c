// Function: FUN_00b461a0
// Address: 00b461a0
// Size: 1641 bytes
// Class: GNDate


/* WARNING: Removing unreachable block (ram,0x00b462ec) */
/* WARNING: Removing unreachable block (ram,0x00b462f8) */

void FUN_00b461a0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  longlong local_58;
  int local_4c;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if (unaff_ESI == 0) {
    return;
  }
  FUN_00c8e690();
  lVar3 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_38 = lVar3;
  FUN_00c92170();
  ___bzero();
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x398))();
  lVar3 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027653a0;
  if (lVar3 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  do {
    FUN_00ccdbb0();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (lVar3 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    unaff_ESI = unaff_ESI + -1;
  } while (unaff_ESI != 0);
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x398))();
  lVar3 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027653a0;
  if (lVar3 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  for (uVar5 = *(ulonglong *)(unaff_RDI + 0x48); uVar5 != 0; uVar5 = uVar5 - uVar4) {
    uVar4 = 0x1000;
    if (uVar5 < 0x1001) {
      uVar4 = uVar5 & 0xffffffff;
    }
    local_58 = local_58 - uVar4;
    local_4c = (int)uVar4;
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (lVar3 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x380))
              (&local_4c,*(undefined8 *)(local_38 + 0x10));
    bVar6 = local_48 != 0;
    bVar7 = local_4c != (int)uVar4;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027653a0;
    if (bVar6 || bVar7) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (lVar3 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))
              (local_4c,*(undefined8 *)(local_38 + 0x10));
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (lVar3 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
  lVar1 = local_38;
  lVar3 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar3 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  lVar3 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  ___bzero();
  if (lVar1 == lVar3) {
    FUN_00d50b20();
  }
  else {
    if (lVar1 == 0) {
      uVar5 = *(longlong *)(unaff_RDI + 0x48) - local_58;
      local_38 = lVar3;
      goto joined_r0x00b4670e;
    }
    FUN_00d50b20();
    local_38 = lVar3;
  }
  uVar5 = *(longlong *)(unaff_RDI + 0x48) - local_58;
joined_r0x00b4670e:
  if (uVar5 == 0) {
    *(longlong *)(unaff_RDI + 0x40) = local_58;
    if (local_38 == 0) {
      return;
    }
  }
  else {
    do {
      uVar4 = 0x1000;
      if (uVar5 < 0x1001) {
        uVar4 = uVar5 & 0xffffffff;
      }
      local_4c = (int)uVar4;
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x380))
                (&local_4c,*(undefined8 *)(local_38 + 0x10));
      bVar6 = local_48 != 0;
      bVar7 = local_4c != (int)uVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027653a0;
      if (bVar6 || bVar7) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    *(longlong *)(unaff_RDI + 0x40) = local_58;
  }
  FUN_00d50b20();
  return;
}


