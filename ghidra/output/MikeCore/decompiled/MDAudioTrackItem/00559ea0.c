// Function: FUN_00559ea0
// Address: 00559ea0
// Size: 3295 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"


/* WARNING: Removing unreachable block (ram,0x0055a3ff) */
/* WARNING: Removing unreachable block (ram,0x0055a40b) */
/* WARNING: Removing unreachable block (ram,0x00559fcd) */
/* WARNING: Removing unreachable block (ram,0x00559fd9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559ea0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong **pplVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  longlong local_130;
  char local_128;
  longlong *local_f8;
  char local_f0;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 != 1) || (iVar6 = FUN_01d3b630(), iVar6 != 1)) {
    FUN_01e459c0();
    return;
  }
  uVar7 = FUN_01d3b590();
  uVar8 = FUN_01d3b590();
  iVar6 = FUN_01d3b620();
  if (iVar6 == 1) {
    FUN_01d3abf0();
    uVar12 = FUN_01e466c0();
    FUN_01bc84c0();
    FUN_01bc5de0();
    cVar4 = FUN_01bc0690();
    if (cVar4 == '\0') {
      bVar5 = 0;
    }
    else {
      FUN_01bc84c0();
      FUN_01bc5de0();
      FUN_01bc0990();
      FUN_01bc84c0();
      if (local_f0 == '\0') {
        if (local_f8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_f0 = '\0';
      }
      local_40 = local_f8;
      local_38 = '\0';
      bVar5 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_f8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    uVar8 = (uVar8 & 2) >> 1;
    bVar5 = bVar5 ^ 1 | (byte)uVar8;
    if (bVar5 == 1) {
      FUN_01bc84c0();
      FUN_01bc5de0();
      cVar4 = FUN_01bc0690();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        FUN_01bc84c0();
        FUN_01bc5de0();
        FUN_01bbfb40();
        FUN_01bc84c0();
        FUN_01bc5de0();
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        FUN_01bef350(uVar8,(uVar7 & 4) >> 2,0);
        if (local_70 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01bc84c0();
      FUN_01bc5de0();
      FUN_01bc84c0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01bc1970(uVar8,(uVar7 & 4) >> 2,0);
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar2 = DAT_026f6de0;
    if (DAT_026f6de0 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (ulonglong)(dVar13 * DAT_023907c0);
    uVar9 = (longlong)(dVar13 * DAT_023907c0 - _DAT_023907c8) & (longlong)uVar9 >> 0x3f | uVar9;
    uVar14 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar14 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    bVar10 = (char)uVar9 + (char)(uVar9 / 3) * -3;
    local_50 = lVar2;
    local_48 = '\0';
    FUN_000175c0(uVar14,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar10 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((plVar3 != (longlong *)0x0 & bVar10) == 1) {
      cVar4 = FUN_0055b680(uVar12);
      if (cVar4 == '\0') {
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (bVar5 == 0) {
          FUN_01bc84c0();
          FUN_01bc5de0();
          FUN_01bc84c0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          uVar7 = (uVar7 & 4) >> 2;
          FUN_01bc1970(0,uVar7,0);
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_01bc84c0();
          FUN_01bc5de0();
          FUN_01bbfb40();
          FUN_01bc84c0();
          FUN_01bc5de0();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_01bef350(0,uVar7,0);
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar2 != 0) {
      FUN_00d50b20();
    }
    cVar4 = FUN_01e420b0();
    if (cVar4 != '\0') {
      return;
    }
    FUN_01e42250();
    FUN_01bc84c0();
    FUN_01bc5d70();
    cVar4 = FUN_01e42170();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      return;
    }
    FUN_01e42030();
    FUN_01bc84c0();
    FUN_01bc5d70();
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01d8cd90();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 == '\0') {
      return;
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  iVar6 = FUN_01d3b620();
  if (iVar6 != 2) {
    return;
  }
  FUN_01bc84c0();
  FUN_01bc5de0();
  FUN_01bbfb40();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01bc84c0();
  FUN_01bc5de0();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01bef350((uVar8 & 2) >> 1,(uVar7 & 4) >> 2,1);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01bc84c0();
  pplVar11 = &local_40;
  FUN_01bc5de0();
  plVar1 = local_40;
  if ((DAT_02700970 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026d78f8 = FUN_0006e710();
    _DAT_026d78e0 = "MDAudioTrackItem";
    _DAT_026d78e8 = 0x70;
    _DAT_026d78f0 = FUN_0006e6c0;
    _DAT_026d7900 = 0;
    uRam00000000026d7908 = 0;
    _DAT_026d7910 = 0;
    _DAT_026d7988 = 0;
    uRam00000000026d7990 = 0;
    _DAT_026d7998 = 0;
    DAT_026d799a = 1;
    _DAT_026d7918 = 0;
    uRam00000000026d7920 = 0;
    _DAT_026d7928 = 0;
    uRam00000000026d7930 = 0;
    _DAT_026d7938 = 0;
    uRam00000000026d7940 = 0;
    _DAT_026d7948 = 0;
    uRam00000000026d7950 = 0;
    _DAT_026d7958 = 0;
    uRam00000000026d7960 = 0;
    _DAT_026d7968 = 0;
    uRam00000000026d7970 = 0;
    _DAT_026d7978 = 0;
    uRam00000000026d7980 = 0;
    DAT_026d79a3 = 0;
    _DAT_026d799b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_0055a1ab;
  }
  pplVar11 = (longlong **)&DAT_02802688;
LAB_0055a1ab:
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00075b90();
    if (local_40 != (longlong *)0x0) {
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_002ecd30();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


