// Function: FUN_01a7e770
// Address: 01a7e770
// Size: 2605 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a7e9be) */
/* WARNING: Removing unreachable block (ram,0x01a7e9ca) */
/* WARNING: Removing unreachable block (ram,0x01a7ebff) */
/* WARNING: Removing unreachable block (ram,0x01a7ec0b) */

void FUN_01a7e770(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  void *pvVar10;
  longlong *plVar11;
  char *pcVar12;
  pthread_key_t pVar13;
  undefined8 uVar14;
  longlong unaff_RDI;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong local_130;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  uint local_8c;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  longlong *local_78;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_58;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  FUN_01a5a220();
  FUN_01a58dc0();
  local_78 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  uVar8 = FUN_019b43a0();
  plVar11 = local_78;
  if (*(char *)(unaff_RDI + 0x40) == '\0') {
    while (*(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc) != 0) {
      FUN_00d23340();
      plVar11 = local_40;
      local_88 = local_38[0];
      pcVar12 = local_38;
      if (local_38[0] == '\0') {
        pcVar12 = &local_88;
      }
      *pcVar12 = '\0';
      if ((local_38[0] != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = 0;
      local_c0 = '\0';
      local_b8 = 0;
      local_b0 = '\0';
      FUN_01a81ae0(1,&local_b8);
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar11 = local_40;
      local_88 = local_38[0];
      pcVar12 = local_38;
      if (local_38[0] == '\0') {
        pcVar12 = &local_88;
      }
      *pcVar12 = '\0';
      if ((local_38[0] != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar11 + 0x478))();
      if (local_88 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
    goto LAB_01a7f19b;
  }
  (**(code **)(*local_78 + 0xa60))();
  (**(code **)(*plVar11 + 0x9b8))();
  plVar11 = local_40;
  local_58 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_78 + 0x9e0))();
  plVar3 = local_40;
  if (((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_98 = plVar3;
  uVar14 = CONCAT71((int7)((ulonglong)param_1 >> 8),plVar11 == (longlong *)0x0);
  lVar17 = *(longlong *)(unaff_RDI + 0x38);
  uVar16 = *(uint *)(lVar17 + 0xc);
  local_130 = (ulonglong)uVar16;
  local_8c = (uVar8 ^ 1) & 0xff;
  if (0 < (int)uVar16) {
    do {
      uVar16 = uVar16 - 1;
      plVar2 = *(longlong **)(*(longlong *)(lVar17 + 0x10) + (ulonglong)uVar16 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar9 = (**(code **)(*plVar2 + 0x928))();
      plVar5 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a7e907;
        }
        local_6c = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
LAB_01a7ea50:
        FUN_01a7f860();
        plVar6 = local_40;
        local_48[0] = local_38[0];
        pcVar12 = local_38;
        if (local_38[0] == '\0') {
          pcVar12 = local_48;
        }
        *pcVar12 = '\0';
        if ((local_38[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          local_68 = plVar5;
          lVar17 = plVar6[2];
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          iVar1 = *(int *)(lVar17 + 0xc);
          FUN_00d50b20();
          if (iVar1 == 1) {
            FUN_01a81c00();
            plVar2 = (longlong *)CONCAT71(uStack_87,local_88);
            if (local_80 == '\0') {
              if (plVar2 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            local_38[0] = '\0';
            local_40 = plVar2;
            FUN_00ca13a0();
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_40 = plVar2;
            FUN_00d23f50();
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        local_108 = 0;
        local_100 = '\0';
        uVar14 = 0;
        FUN_01a81ae0(1,&local_108);
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(**(longlong **)
                       (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) +
                       (ulonglong)uVar16 * 8) + 0x478))();
        FUN_00d23620();
        if ((local_48[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_6c == '\0') goto LAB_01a7ec4e;
      }
      else {
LAB_01a7e907:
        uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),plVar5 == (longlong *)0x0);
        local_6c = (undefined4)uVar14;
        if ((plVar3 == (longlong *)0x0 || plVar11 == (longlong *)0x0) || plVar5 == (longlong *)0x0)
        goto LAB_01a7ea50;
        local_38[0] = '\0';
        local_40 = plVar5;
        cVar7 = FUN_00d24090();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar7 == '\0') && (cVar7 = FUN_01a87c60(), cVar7 == '\0')) {
LAB_01a7ea40:
          local_6c = 0;
          goto LAB_01a7ea50;
        }
        local_38[0] = '\0';
        local_40 = plVar5;
        cVar7 = FUN_00d24090();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar7 == '\0') ||
           (cVar7 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *local_78
                                ))(), cVar7 == '\0')) goto LAB_01a7ea40;
        FUN_01a87bd0();
        FUN_0198a800();
LAB_01a7ec4e:
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((longlong)local_130 < 2) break;
      local_130 = local_130 - 1;
      lVar17 = *(longlong *)(unaff_RDI + 0x38);
    } while( true );
  }
  plVar3 = local_78;
  (**(code **)(*local_78 + 0xa58))();
  (**(code **)(*plVar3 + 0x9b8))();
  plVar3 = local_40;
  if (plVar11 == local_40) {
LAB_01a7ee4f:
    if (local_38[0] != '\0') {
LAB_01a7ee55:
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar11 != (longlong *)0x0) {
        local_58 = plVar3;
        FUN_00d50b20();
        goto LAB_01a7ee4f;
      }
      local_58 = plVar3;
      if (local_38[0] == '\0') goto LAB_01a7ee69;
      goto LAB_01a7ee55;
    }
    if (plVar11 == (longlong *)0x0) {
      local_58 = local_40;
    }
    else {
      local_58 = local_40;
      FUN_00d50b20();
    }
  }
LAB_01a7ee69:
  if (local_58 == (longlong *)0x0) {
    bVar15 = false;
  }
  else if (*(int *)((longlong)local_58 + 0xc) < 1) {
    bVar15 = false;
  }
  else {
    lVar17 = 0;
    bVar15 = false;
    do {
      lVar4 = *(longlong *)(local_58[2] + lVar17 * 8);
      plVar11 = local_58;
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      pVar13 = (pthread_key_t)plVar11;
      FUN_01a7b2c0();
      if (local_40 == (longlong *)0x0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar7 = FUN_01263cf0();
        if (cVar7 == '\0') {
          local_f0 = '\0';
          local_f8 = lVar4;
          cVar7 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *local_78))
                            ();
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if (cVar7 != '\0') {
            plVar11 = (longlong *)FUN_00e8fc40();
            FUN_0086a5a0();
            (**(code **)(*plVar11 + 0x18))();
            local_e0 = '\0';
            local_a0 = 0;
            local_e8 = lVar4;
            FUN_00d50b00();
            local_a0 = '\x01';
            local_a8 = unaff_RDI;
            FUN_01a81ae0(1,&local_a8);
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            local_d0 = '\0';
            local_d8 = plVar11;
            (**(code **)(*local_78 + 0x450))();
            if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01a87bd0();
            FUN_0198a800();
            local_38[0] = '\0';
            local_40 = plVar11;
            FUN_00d21140();
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01a7f860();
            plVar11 = local_40;
            local_88 = local_38[0];
            pcVar12 = local_38;
            if (local_38[0] == '\0') {
              pcVar12 = &local_88;
            }
            *pcVar12 = '\0';
            if ((local_38[0] != '\0') && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((plVar11 != (longlong *)0x0) && (FUN_01a77150(), local_88 != '\0')) {
              FUN_00d50b20();
            }
            bVar15 = true;
            FUN_00d50b20();
          }
        }
      }
      else if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)((longlong)local_58 + 0xc));
  }
  if (local_98 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (bVar15) {
    (**(code **)(*local_78 + 0xb48))();
  }
LAB_01a7f19b:
  FUN_00d50b20();
  return;
}


