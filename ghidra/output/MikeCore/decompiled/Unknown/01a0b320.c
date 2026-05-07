// Function: FUN_01a0b320
// Address: 01a0b320
// Size: 2476 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a0b473) */
/* WARNING: Removing unreachable block (ram,0x01a0bbc7) */
/* WARNING: Removing unreachable block (ram,0x01a0bbd3) */
/* WARNING: Removing unreachable block (ram,0x01a0b6d8) */
/* WARNING: Removing unreachable block (ram,0x01a0b6e4) */
/* WARNING: Removing unreachable block (ram,0x01a0baad) */
/* WARNING: Removing unreachable block (ram,0x01a0bab9) */
/* WARNING: Removing unreachable block (ram,0x01a0bc07) */
/* WARNING: Removing unreachable block (ram,0x01a0bc13) */
/* WARNING: Removing unreachable block (ram,0x01a0b47f) */
/* WARNING: Removing unreachable block (ram,0x01a0b757) */
/* WARNING: Removing unreachable block (ram,0x01a0b763) */

void FUN_01a0b320(void)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined7 uVar10;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  byte bVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  ulonglong local_78;
  byte local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  longlong *local_40;
  char local_38 [8];
  
  plVar3 = local_60;
  FUN_01a58dc0();
  if (local_58[0] == '\0') {
    if (local_60 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (longlong *)0x0) {
    return;
  }
  FUN_01a5a220();
  FUN_019b43a0();
  if (*(char *)(unaff_RDI + 0x48) == '\0') {
    while (*(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc) != 0) {
      FUN_00d23340();
      local_38[0] = local_58[0];
      pcVar5 = local_58;
      if (local_58[0] == '\0') {
        pcVar5 = local_38;
      }
      *pcVar5 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a07db0();
      if ((local_38[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_38[0] = local_58[0];
      pcVar5 = local_58;
      if (local_58[0] == '\0') {
        pcVar5 = local_38;
      }
      *pcVar5 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_60 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
    local_68 = (longlong *)0x0;
    local_70 = 0;
    local_40 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    goto LAB_01a0bcc8;
  }
  (**(code **)(*local_60 + 0xa60))();
  (**(code **)(*local_60 + 0x9b8))();
  local_68 = local_60;
  if (local_60 == (longlong *)0x0) {
    uVar14 = 1;
    local_68 = (longlong *)0x0;
    local_48 = 0;
  }
  else if (local_58[0] == '\0') {
    uVar6 = FUN_00d50b00();
    uVar14 = 0;
    local_48 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
      local_48 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      uVar14 = 0;
    }
  }
  else {
    uVar14 = 0;
    local_48 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
  }
  lVar16 = *(longlong *)(unaff_RDI + 0x40);
  uVar17 = *(uint *)(lVar16 + 0xc);
  plVar18 = (longlong *)(ulonglong)uVar17;
  local_40 = (longlong *)CONCAT44(local_40._4_4_,uVar14);
  if (0 < (int)uVar17) {
    plVar15 = (longlong *)0x0;
    local_78 = 0;
    do {
      uVar17 = uVar17 - 1;
      uVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar16 + 0x10) + (ulonglong)uVar17 * 8) +
                          0x928))();
      uVar10 = (undefined7)((ulonglong)uVar6 >> 8);
      cVar4 = (char)local_78;
      if (local_60 == plVar15) {
        plVar19 = plVar15;
        if ((cVar4 == '\0') && (local_60 != (longlong *)0x0)) {
          local_78 = CONCAT71(uVar10,1);
          if (local_58[0] != '\0') goto LAB_01a0b66e;
          local_78 = CONCAT71(uVar10,1);
          FUN_00d50b00();
        }
joined_r0x01a0b63c:
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar19 = local_60;
        if (local_58[0] == '\0') {
          if (local_60 != (longlong *)0x0) {
            uVar6 = FUN_00d50b00();
          }
          local_78 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          if ((cVar4 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto joined_r0x01a0b63c;
        }
        local_78 = CONCAT71(uVar10,1);
        if ((cVar4 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01a0b66e:
      plVar15 = plVar19;
      if (local_68 == (longlong *)0x0) {
LAB_01a0b720:
        FUN_01a07db0();
        (**(code **)(**(longlong **)
                       (*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x10) +
                       (ulonglong)uVar17 * 8) + 0x478))();
        FUN_00d23620();
      }
      else {
        local_58[0] = '\0';
        cVar4 = FUN_00d24090();
        if ((local_58[0] != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_60 = plVar15;
        if ((cVar4 == '\0') ||
           (cVar4 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *plVar3))
                              (), cVar4 == '\0')) goto LAB_01a0b720;
        FUN_01a09480();
        FUN_0198a800();
      }
      if ((longlong)plVar18 < 2) goto LAB_01a0b7b5;
      plVar18 = (longlong *)((longlong)plVar18 + -1);
      lVar16 = *(longlong *)(unaff_RDI + 0x40);
    } while( true );
  }
  local_78 = 0;
  plVar15 = (longlong *)0x0;
LAB_01a0b7b5:
  (**(code **)(*plVar3 + 0xa58))();
  (**(code **)(*plVar3 + 0x9b8))();
  local_70 = (byte)local_48;
  if (local_60 == local_68) {
    if (((byte)local_40 & local_60 != (longlong *)0x0) == 1) {
      local_70 = 1;
      if (local_58[0] != '\0') goto LAB_01a0b894;
      local_70 = 1;
      FUN_00d50b00();
    }
joined_r0x01a0b884:
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar20 = local_68 != (longlong *)0x0;
      local_70 = 1;
      local_68 = local_60;
      if (((byte)local_48 & bVar20) == 1) {
        FUN_00d50b20();
        local_70 = 1;
      }
      goto joined_r0x01a0b884;
    }
    bVar11 = local_70 & local_68 != (longlong *)0x0;
    local_70 = 1;
    if (bVar11 == 1) {
      local_68 = local_60;
      FUN_00d50b20();
    }
    else {
      local_68 = local_60;
    }
  }
LAB_01a0b894:
  pcVar2 = DAT_02629698;
  if ((local_68 == (longlong *)0x0) || (*(int *)((longlong)local_68 + 0xc) < 1)) {
    local_50 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
  }
  else {
    lVar16 = 0;
    local_48 = 0;
    local_40 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    do {
      lVar7 = local_68[2];
      plVar19 = *(longlong **)(lVar7 + lVar16 * 8);
      plVar9 = local_68;
      if (plVar15 == plVar19) {
        if (((char)local_78 == '\0') && (plVar15 != (longlong *)0x0)) {
          local_78 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          plVar18 = (longlong *)0x0;
          FUN_00d50b00();
        }
LAB_01a0b970:
        pVar12 = (pthread_key_t)plVar9;
        lVar7 = *(longlong *)(unaff_RDI + 0x40);
        iVar1 = *(int *)(lVar7 + 0xc);
      }
      else {
        if (plVar19 != (longlong *)0x0) {
          plVar18 = (longlong *)(local_78 & 0xffffffff);
          lVar7 = FUN_00d50b00();
        }
        pVar12 = (pthread_key_t)plVar9;
        if (((char)local_78 != '\0') && (plVar15 != (longlong *)0x0)) {
          plVar18 = (longlong *)(local_78 & 0xffffffff);
          uVar6 = FUN_00d50b20();
          local_78 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          plVar15 = plVar19;
          goto LAB_01a0b970;
        }
        local_78 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        lVar7 = *(longlong *)(unaff_RDI + 0x40);
        iVar1 = *(int *)(lVar7 + 0xc);
        plVar15 = plVar19;
      }
      if (0 < iVar1) {
        lVar13 = 0;
        do {
          pVar12 = (pthread_key_t)plVar9;
          (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar13 * 8) + 0x928))();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar18 = local_60;
          if (local_60 == plVar15) {
            if (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x10) + lVar13 * 8) !=
                0) {
              FUN_00d50b00();
              FUN_00d50b20();
              goto LAB_01a0b8ed;
            }
            break;
          }
          lVar13 = lVar13 + 1;
          lVar7 = *(longlong *)(unaff_RDI + 0x40);
          pVar12 = *(pthread_key_t *)(lVar7 + 0xc);
          plVar9 = (longlong *)(longlong)(int)pVar12;
        } while (lVar13 < (longlong)plVar9);
      }
      pvVar8 = _pthread_getspecific(pVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01263cf0();
      if ((cVar4 == '\0') &&
         (cVar4 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *plVar3))()
         , cVar4 != '\0')) {
        plVar9 = (longlong *)FUN_00e8fc40();
        FUN_0006daf0();
        *(undefined2 *)(plVar9 + 0x29) = 0;
        plVar9[0x28] = 0;
        *(undefined8 *)((longlong)plVar9 + 0x14c) = 0;
        *(undefined8 *)((longlong)plVar9 + 0x154) = 0;
        plVar9[0x2b] = 0;
        plVar9[0x2c] = 0;
        *plVar9 = (longlong)&DAT_02629680;
        plVar9[2] = (longlong)&DAT_0262a008;
        plVar9[0x27] = (longlong)&DAT_0262a048;
        plVar9[0x2d] = (longlong)&DAT_0262a078;
        plVar9[0x2e] = 0;
        *(undefined1 *)(plVar9 + 0x2f) = 0;
        (*pcVar2)();
        plVar19 = local_50;
        if (plVar9 == local_40) {
          if ((char)local_50 == '\0') {
            plVar19 = (longlong *)CONCAT71((int7)((ulonglong)local_50 >> 8),1);
            plVar9 = local_40;
          }
          else {
            FUN_00d50b20();
            plVar9 = local_40;
          }
        }
        else {
          plVar19 = (longlong *)CONCAT71((int7)((ulonglong)plVar18 >> 8),1);
          if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_40 = plVar9;
        FUN_01a07db0();
        (**(code **)(*plVar3 + 0x450))();
        local_60 = local_40;
        FUN_01a09480();
        FUN_0198a800();
        local_58[0] = '\0';
        uVar6 = FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
        local_48 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        local_50 = (longlong *)((ulonglong)plVar19 & 0xffffffff);
        plVar18 = plVar19;
      }
LAB_01a0b8ed:
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)((longlong)local_68 + 0xc));
    if ((local_48 & 1) != 0) {
      FUN_01a58dc0();
      (**(code **)(*local_60 + 0xb48))();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (((char)local_78 != '\0') && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a0bcc8:
  FUN_00d50b20();
  if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != 0) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


