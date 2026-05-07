// Function: FUN_00e10bc0
// Address: 00e10bc0
// Size: 3374 bytes
// Class: Unknown
// String references:
//   "getVariablesForClassname: class for variable not registered:%@"
//   "getVariablesForClassname: delimiters not found for variable of class:%@"


/* WARNING: Removing unreachable block (ram,0x00e11872) */
/* WARNING: Removing unreachable block (ram,0x00e10f12) */
/* WARNING: Removing unreachable block (ram,0x00e10f1e) */
/* WARNING: Removing unreachable block (ram,0x00e10dd8) */
/* WARNING: Removing unreachable block (ram,0x00e10de4) */
/* WARNING: Removing unreachable block (ram,0x00e1104b) */
/* WARNING: Removing unreachable block (ram,0x00e11057) */
/* WARNING: Removing unreachable block (ram,0x00e1187e) */

undefined8 * FUN_00e10bc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar15;
  longlong *local_b8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  uint local_58 [2];
  longlong local_50;
  char local_48;
  ulonglong local_40;
  byte local_31;
  
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  pcVar5 = DAT_02572370;
  (*DAT_02572370)();
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*pcVar5)();
  (**(code **)(*unaff_RSI + 0x370))();
  plVar15 = local_a0;
  if (local_98 == '\0') {
    if (local_a0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  FUN_00ddb860();
  plVar13 = local_60;
  if ((char)local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = local_58[0] & 0xffffff00;
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_98 = '\0';
  local_a0 = (longlong *)0x0;
  local_90 = plVar13;
  FUN_00c80cd0();
  local_b8 = local_60;
  if (local_60 == (longlong *)0x0) {
    local_7c = 1;
    local_b8 = (longlong *)0x0;
  }
  else {
    if ((char)local_58[0] == '\0') {
      FUN_00d50b00();
      local_7c = 0;
      if (((char)local_58[0] == '\0') || (local_60 == (longlong *)0x0)) goto LAB_00e10dcf;
      FUN_00d50b20();
    }
    else {
      local_58[0] = local_58[0] & 0xffffff00;
    }
    local_7c = 0;
  }
LAB_00e10dcf:
  lVar14 = DAT_027816e8;
  if ((char)local_7c != '\0') {
    if (DAT_027816e8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *param_2;
    local_58[0] = 1;
    local_60 = &DAT_024c5048;
    local_48 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_00cc7b40();
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00e12c50();
  local_68 = local_60;
  if (local_60 == (longlong *)0x0) {
    bVar3 = true;
    local_68 = (longlong *)0x0;
    local_88 = 0;
  }
  else {
    if ((char)local_58[0] == '\0') {
      uVar10 = FUN_00d50b00();
      bVar3 = false;
      local_88 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      if (((char)local_58[0] == '\0') || (local_60 == (longlong *)0x0)) goto LAB_00e10f09;
      FUN_00d50b20();
    }
    else {
      local_58[0] = local_58[0] & 0xffffff00;
      local_88 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
    }
    bVar3 = false;
  }
LAB_00e10f09:
  lVar14 = DAT_027816e8;
  if (bVar3) {
    if (DAT_027816e8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *param_2;
    local_58[0] = 1;
    local_60 = &DAT_024c5048;
    local_48 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_00cc7b40();
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  local_40 = 0;
  plVar15 = (longlong *)0x0;
  do {
    do {
      cVar7 = (**(code **)(*local_90 + 0x388))();
      if ((cVar7 != '\0') || (cVar7 = (**(code **)(*local_90 + 0x3b8))(&local_a0,0), cVar7 == '\0'))
      {
        iVar1 = *(int *)((longlong)puVar9 + 0xc);
        if (iVar1 == 0) {
          *unaff_RDI = puVar8;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
        else {
          if (0 < iVar1) {
            lVar14 = 0;
            do {
              FUN_00e12970();
              (**(code **)(*unaff_RSI + 0x390))();
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)((longlong)puVar9 + 0xc));
          }
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
        }
        if ((char)local_7c == '\0' && local_b8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (((byte)local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (!bVar3 && local_68 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((iVar1 != 0) && (puVar8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        return unaff_RDI;
      }
      (**(code **)(*local_90 + 0x380))();
      FUN_00d8c7a0();
      (**(code **)(*local_90 + 0x3d0))();
      plVar13 = local_a0;
      FUN_00d23310();
      plVar4 = local_60;
      local_78 = (char)local_58[0];
      puVar11 = local_58;
      if ((char)local_58[0] == '\0') {
        puVar11 = (uint *)&local_78;
      }
      *(undefined1 *)puVar11 = 0;
      if (((char)local_58[0] != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 == '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*plVar13 + 0x50))();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar12 = local_40;
      if (cVar7 != '\0') {
        FUN_00c811e0();
        plVar13 = local_60;
        if (local_60 == plVar15) {
          local_31 = (byte)local_40;
          if (((byte)local_40 == 0) && (local_60 != (longlong *)0x0)) {
            plVar13 = plVar15;
            if ((char)local_58[0] != '\0') goto LAB_00e11182;
            local_31 = 1;
            FUN_00d50b00();
          }
        }
        else {
          if ((char)local_58[0] == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar15 = plVar13;
              goto LAB_00e111d0;
            }
          }
          else {
            if (((byte)local_40 != 0) && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00e11182:
            local_58[0] = local_58[0] & 0xffffff00;
          }
          local_31 = 1;
          plVar15 = plVar13;
        }
LAB_00e111d0:
        if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar6 = local_31;
        local_40 = (ulonglong)local_31;
        (**(code **)(*plVar15 + 0x18))();
        local_40 = (ulonglong)bVar6;
        FUN_00e12960();
        FUN_00d23340();
        plVar4 = local_60;
        plVar13 = local_90;
        local_78 = (char)local_58[0];
        puVar11 = local_58;
        if ((char)local_58[0] == '\0') {
          puVar11 = (uint *)&local_78;
        }
        *(undefined1 *)puVar11 = 0;
        if (((char)local_58[0] != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar12 = (ulonglong)local_31;
        if (plVar4 != (longlong *)0x0) {
          FUN_00d23340();
          plVar4 = local_60;
          local_78 = (char)local_58[0];
          puVar11 = local_58;
          if ((char)local_58[0] == '\0') {
            puVar11 = (uint *)&local_78;
          }
          *(undefined1 *)puVar11 = 0;
          if (((char)local_58[0] != '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 == '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00e128e0();
          uVar12 = (ulonglong)local_31;
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if (*(int *)((longlong)local_68 + 0xc) == 1) {
          FUN_00e10a70();
          plVar4 = local_60;
          if (((char)local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          cVar7 = (**(code **)(*plVar13 + 0x3e0))();
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          bVar6 = local_31;
          if (cVar7 == '\0') {
            uVar12 = (ulonglong)local_31;
          }
          else {
            local_40 = (ulonglong)local_31;
            (**(code **)(*plVar13 + 0x380))();
            local_40 = (ulonglong)bVar6;
            FUN_00e12980();
            (**(code **)(*unaff_RSI + 0x370))();
            FUN_00e12970();
            FUN_00e129a0();
            FUN_00e7b4e0();
            FUN_00d8e3d0();
            plVar13 = local_60;
            if ((char)local_58[0] == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58[0] = local_58[0] & 0xffffff00;
            }
            uVar12 = (ulonglong)local_31;
            (**(code **)(*plVar15 + 0x388))();
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
              FUN_00d50b20();
            }
            local_58[0] = local_58[0] & 0xffffff00;
            local_60 = plVar15;
            FUN_00d21140();
            if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_58[0] = local_58[0] & 0xffffff00;
          local_60 = plVar15;
          FUN_00d21140();
          if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_40 = uVar12;
      plVar13 = local_a0;
      FUN_00d23340();
      plVar4 = local_60;
      local_78 = (char)local_58[0];
      puVar11 = local_58;
      if ((char)local_58[0] == '\0') {
        puVar11 = (uint *)&local_78;
      }
      *(undefined1 *)puVar11 = 0;
      if (((char)local_58[0] != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 == '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*plVar13 + 0x50))();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    } while (cVar7 == '\0');
    FUN_00d23340();
    plVar13 = local_60;
    local_78 = (char)local_58[0];
    puVar11 = local_58;
    if ((char)local_58[0] == '\0') {
      puVar11 = (uint *)&local_78;
    }
    *(undefined1 *)puVar11 = 0;
    if (((char)local_58[0] != '\0') && (plVar13 != (longlong *)0x0)) {
      puVar11 = (uint *)FUN_00d50b20();
    }
    if (plVar13 == plVar15) {
      puVar11 = (uint *)0x0;
      if (((byte)local_40 == '\0') && (plVar13 != (longlong *)0x0)) {
        plVar13 = plVar15;
        if (local_78 == '\0') {
          puVar11 = (uint *)FUN_00d50b00();
        }
        goto LAB_00e11660;
      }
      plVar4 = plVar15;
      if ((local_78 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_78 == '\0') {
        if (plVar13 != (longlong *)0x0) {
          puVar11 = (uint *)FUN_00d50b00();
        }
        if (((byte)local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
          puVar11 = (uint *)FUN_00d50b20();
        }
      }
      else if (((byte)local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
        puVar11 = (uint *)FUN_00d50b20();
      }
LAB_00e11660:
      local_40 = CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
      plVar4 = plVar13;
    }
    plVar15 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      local_58[0] = local_58[0] & 0xffffff00;
      local_60 = plVar4;
      FUN_00d21140();
      if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_90 + 0x380))();
      FUN_00e12980();
      (**(code **)(*unaff_RSI + 0x370))();
      FUN_00e12970();
      FUN_00e129a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
      plVar15 = local_60;
      if ((char)local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = local_58[0] & 0xffffff00;
      }
      (**(code **)(*plVar4 + 0x388))();
      if (plVar15 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
      plVar15 = plVar4;
    }
  } while( true );
}


