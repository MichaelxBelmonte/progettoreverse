// Function: FUN_00e67a40
// Address: 00e67a40
// Size: 3570 bytes
// Class: GNString
// String references:
//   "%I"
//   "%@"
//   "0X%llX"


/* WARNING: Removing unreachable block (ram,0x00e67eac) */
/* WARNING: Removing unreachable block (ram,0x00e67eb8) */
/* WARNING: Removing unreachable block (ram,0x00e67dcd) */
/* WARNING: Removing unreachable block (ram,0x00e67dd9) */
/* WARNING: Removing unreachable block (ram,0x00e67f8b) */
/* WARNING: Removing unreachable block (ram,0x00e67f97) */
/* WARNING: Removing unreachable block (ram,0x00e6806a) */
/* WARNING: Removing unreachable block (ram,0x00e68076) */

void FUN_00e67a40(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  char cVar9;
  longlong *plVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_178;
  char local_170;
  undefined8 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined *local_60;
  char local_58;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  plVar10 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar10 + 0x18))();
  if (*(longlong **)(unaff_RSI + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RSI + 0x20) + 0x370))();
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_178 != 0) {
      FUN_00d50b00();
    }
    local_40 = local_178;
    local_38 = '\x01';
    FUN_00d8cb40();
    puVar6 = local_70;
    puVar5 = DAT_027878d0;
    if ((char)local_68 == '\0') {
      if (local_70 != (undefined8 *)0x0) {
        FUN_00d50b00();
        puVar5 = DAT_027878d0;
      }
    }
    else {
      local_68 = local_68 & 0xffffff00;
    }
    DAT_027878d0 = puVar5;
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    local_58 = '\0';
    local_60 = puVar5;
    FUN_00ca0840();
    if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    local_64 = (**(code **)(**(longlong **)(unaff_RSI + 0x20) + 0x378))();
    local_68 = 1;
    local_70 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_70);
    puVar8 = local_60;
    puVar5 = DAT_02784ab0;
    if (local_58 == '\0') {
      if (local_60 != (undefined *)0x0) {
        FUN_00d50b00();
        puVar5 = DAT_02784ab0;
      }
    }
    else {
      local_58 = '\0';
    }
    DAT_02784ab0 = puVar5;
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    local_48 = local_48 & 0xffffff00;
    local_50 = (undefined8 *)puVar5;
    FUN_00ca0840();
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = DAT_02784ab0;
  if (param_2 == '\0') {
    if (DAT_02784ab0 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e61ae0();
    puVar6 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    puVar5 = DAT_02784ab0;
    if (puVar6 != (undefined8 *)0x0) {
      if (DAT_02784ab0 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      local_50 = (undefined8 *)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar5 = DAT_02787870;
    if (DAT_02787870 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e61ae0();
    puVar6 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    puVar5 = DAT_02787870;
    if (puVar6 != (undefined8 *)0x0) {
      if (DAT_02787870 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      local_50 = (undefined8 *)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar5 = DAT_027878e0;
    if (DAT_027878e0 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e61ae0();
    puVar6 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    puVar5 = DAT_027878e0;
    if (puVar6 != (undefined8 *)0x0) {
      if (DAT_027878e0 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      local_50 = (undefined8 *)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar5 = DAT_027878e8;
    if (DAT_027878e8 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e61ae0();
    puVar6 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    puVar5 = DAT_027878e8;
    if (puVar6 != (undefined8 *)0x0) {
      if (DAT_027878e8 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      local_50 = (undefined8 *)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e7e010();
    puVar5 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_50 = (undefined8 *)puVar5;
    local_48 = local_48 & 0xffffff00;
    FUN_00ca1b70();
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_48 & 0xffffff00;
  local_50 = (undefined8 *)lVar1;
  FUN_00ca1b70();
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00dfd1c0();
  puVar5 = local_60;
  lVar1 = DAT_027855c0;
  if (local_58 == '\0') {
    if (local_60 != (undefined *)0x0) {
      FUN_00d50b00();
      lVar1 = DAT_027855c0;
    }
  }
  else {
    local_58 = '\0';
  }
  DAT_027855c0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_48 & 0xffffff00;
  local_50 = (undefined8 *)lVar1;
  FUN_00ca0840();
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027878f0;
  if (DAT_027878f0 != 0) {
    FUN_00d50b00();
  }
  puVar5 = DAT_027855a0;
  if (DAT_027855a0 != (undefined *)0x0) {
    FUN_00d50b00();
  }
  local_50 = (undefined8 *)puVar5;
  local_48 = local_48 & 0xffffff00;
  FUN_00ca0840();
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  bVar4 = true;
  bVar3 = true;
  if ((*(longlong *)(unaff_RSI + 0x20) != 0) &&
     (FUN_00e00960(), puVar6 = local_50, local_50 != (undefined8 *)0x0)) {
    if ((char)local_48 == '\0') {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)((longlong)puVar6 + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d25fa0();
      puVar7 = local_50;
      if ((char)local_48 == '\0') {
        if (local_50 != (undefined8 *)0x0) {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (puVar7 != (undefined8 *)0x0) {
        plVar2 = *(longlong **)(unaff_RSI + 0x20);
        FUN_00d28390();
        cVar9 = (**(code **)(*plVar2 + 0x380))();
        lVar1 = DAT_02787900;
        if (cVar9 == '\0') {
          lVar1 = *(longlong *)((longlong)puVar6 + 0x10);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          puVar5 = DAT_02787870;
          if (DAT_02787870 != (undefined *)0x0) {
            FUN_00d50b00();
          }
          local_50 = (undefined8 *)puVar5;
          local_48 = local_48 & 0xffffff00;
          FUN_00ca0840();
          if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar5 != (undefined *)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_02787900 != 0) {
            FUN_00d50b00();
          }
          puVar5 = DAT_027855a0;
          if (DAT_027855a0 != (undefined *)0x0) {
            FUN_00d50b00();
          }
          local_50 = (undefined8 *)puVar5;
          local_48 = local_48 & 0xffffff00;
          FUN_00ca0840();
          if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar5 != (undefined *)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = *(longlong *)((longlong)puVar6 + 0x10);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          puVar5 = DAT_027855b8;
          if (DAT_027855b8 != (undefined *)0x0) {
            FUN_00d50b00();
          }
          local_50 = (undefined8 *)puVar5;
          local_48 = local_48 & 0xffffff00;
          FUN_00ca0840();
          if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar5 != (undefined *)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    lVar1 = DAT_02787908;
    if (*(longlong *)((longlong)puVar6 + 0x18) != 0) {
      if (DAT_02787908 != 0) {
        FUN_00d50b00();
      }
      puVar5 = DAT_027855a0;
      if (DAT_027855a0 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      local_50 = (undefined8 *)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_48 = 1;
      local_50 = (undefined8 *)&DAT_024da828;
      local_40 = *(longlong *)((longlong)puVar6 + 0x18);
      FUN_00d8cb40();
      puVar7 = local_70;
      puVar5 = DAT_02787910;
      if ((char)local_68 == '\0') {
        if (local_70 != (undefined8 *)0x0) {
          FUN_00d50b00();
          puVar5 = DAT_02787910;
        }
      }
      else {
        local_68 = local_68 & 0xffffff00;
      }
      DAT_02787910 = puVar5;
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      local_58 = '\0';
      local_60 = puVar5;
      FUN_00ca0840();
      if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int *)((longlong)puVar6 + 0xc) != 0) {
      local_64 = FUN_00d2c950();
      local_68 = 1;
      local_70 = &DAT_024cc6f0;
      FUN_00d8cb40(&DAT_024cc6f0,&local_70);
      puVar8 = local_60;
      puVar5 = DAT_02784ab0;
      if (local_58 == '\0') {
        if (local_60 != (undefined *)0x0) {
          FUN_00d50b00();
          puVar5 = DAT_02784ab0;
        }
      }
      else {
        local_58 = '\0';
      }
      DAT_02784ab0 = puVar5;
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      local_48 = local_48 & 0xffffff00;
      local_50 = (undefined8 *)puVar5;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      if (puVar8 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar4 = false;
    bVar3 = false;
  }
  if (param_2 == '\0') {
    FUN_00e6f320();
    bVar3 = bVar4;
  }
  *unaff_RDI = plVar10;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}


