// Function: FUN_0025a470
// Address: 0025a470
// Size: 2091 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025a470(uint64_t param_1,byte param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  void *pvVar9;
  void* pVar10;
  int64_t this_ptr;
  int64_t *plVar11;
  bool bVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar11 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar11 = local_40;
    local_50 = CONCAT71(local_50._1_7_,local_38[0]);
    plVar8 = &local_50;
    if (local_38[0] != '\0') {
      plVar8 = (int64_t *)local_38;
    }
    *(char *)plVar8 = '\0';
    if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 == (int64_t *)0x0) {
      plVar11 = *(int64_t **)(this_ptr + 0x90);
LAB_0025a526:
      FUN_00d50b00();
    }
    else if ((char)local_50 == '\0') goto LAB_0025a526;
    uVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *plVar11))();
    uVar7 = (uint64_t)uVar5;
    FUN_00d50b20();
    if (((byte)uVar5 & param_2) == 0) goto LAB_0025a4bc;
    plVar11 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar11))();
    plVar8 = local_40;
    local_68._0_1_ = local_38[0];
    plVar6 = (int64_t *)local_38;
    if (local_38[0] == '\0') {
      plVar6 = &local_68;
    }
    *(char *)plVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0025a5aa:
      FUN_00d50b00();
    }
    else if ((char)local_68 == '\0') goto LAB_0025a5aa;
    (**(code **)(*plVar8 + 0xe40))();
    local_58 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 == 0) || (*(int *)(local_58 + 0xc) == 0)) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar11 = local_40;
      plVar8 = &local_68;
      if (local_38[0] != '\0') {
        plVar8 = (int64_t *)local_38;
      }
      local_68._0_1_ = local_38[0];
      *(char *)plVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 == (int64_t *)0x0) {
        plVar11 = *(int64_t **)(this_ptr + 0x90);
        if (plVar11 != (int64_t *)0x0) goto LAB_0025a67a;
        plVar11 = (int64_t *)0x0;
        plVar8 = (int64_t *)0x0;
      }
      else {
        if ((char)local_68 == '\0') {
LAB_0025a67a:
          FUN_00d50b00();
        }
        plVar8 = *(int64_t **)(this_ptr + 0x90);
      }
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar8 = local_40;
      plVar6 = (int64_t *)local_38;
      if (local_38[0] == '\0') {
        plVar6 = &local_78;
      }
      local_78._0_1_ = local_38[0];
      *(char *)plVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
        plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0025a6d6:
        FUN_00d50b00();
      }
      else if ((char)local_78 == '\0') goto LAB_0025a6d6;
      uVar13 = (**(code **)(*plVar8 + 0xe38))();
      local_90 = 0;
      local_98 = CONCAT71(local_68._1_7_,(char)local_68);
      if (local_60 == '\0') {
        if (local_98 != 0) {
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_90 = '\x01';
      FUN_019bf590(uVar13,&local_98);
      lVar2 = local_50;
      if (local_58 == local_50) {
LAB_0025a79c:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          if (local_58 == 0) {
            local_58 = lVar2;
          }
          else {
            local_58 = lVar2;
            FUN_00d50b20();
          }
          goto LAB_0025a79c;
        }
        if (local_58 != 0) {
          local_58 = local_50;
          FUN_00d50b20();
        }
        local_48 = '\0';
        local_58 = lVar2;
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_58 == 0) goto LAB_0025a4ba;
    }
    if (*(int *)(local_58 + 0xc) != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_40 + 0x450))();
      if (cVar3 == '\0') {
        FUN_01e561b0();
        if (local_50 == 0) {
          bVar12 = true;
        }
        else {
          FUN_01e561b0();
          FUN_01d8f0f0();
          bVar12 = CONCAT71(local_68._1_7_,(char)local_68) != 0;
          if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar12 = false;
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar12) {
        if (*(int64_t *)(this_ptr + 0x160) == 0) {
          plVar8 = (int64_t *)FUN_00276e00();
          (**(code **)(*plVar8 + 0x18))();
          plVar11 = *(int64_t **)(this_ptr + 0x160);
          if (plVar11 == plVar8) {
            FUN_00d50b20();
          }
          else {
            *(int64_t **)(this_ptr + 0x160) = plVar8;
            if (plVar11 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        lVar2 = g_026f6fd0;
        if (g_026f6fd0 != 0) {
          FUN_00d50b00();
        }
        dVar14 = (double)FUN_00e7d6f0();
        uVar7 = (uint64_t)(dVar14 * g_023907c0);
        dVar14 = dVar14 * g_023907c0 - g_023907c8;
        pVar10 = 0xaaaaaaab;
        uVar13 = FUN_0071a120();
        if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
            (uVar13 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        bVar4 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
        local_50 = lVar2;
        local_48 = '\0';
        FUN_000175c0(uVar13,&local_50);
        plVar11 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          local_38[0] = '\0';
          local_40 = plVar11;
          bVar4 = FUN_00c70bc0();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((plVar11 != (int64_t *)0x0 & bVar4) == 1) {
          iVar1 = *(int *)(this_ptr + 0x198);
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (iVar1 == 0) {
            FUN_006f3f00();
            (**(code **)(*(int64_t *)CONCAT71(local_78._1_7_,(char)local_78) + 0x628))();
            pvVar9 = _pthread_getspecific(pVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_004a1110();
            pvVar9 = _pthread_getspecific(pVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01313ad0();
            local_88 = local_40;
            local_80 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_80 = '\x01';
            FUN_00805bd0();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if (lVar2 != 0) {
          FUN_00d50b20();
        }
        FUN_00364a30();
        lVar2 = *(int64_t *)(this_ptr + 0x160);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01d83990();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar7 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
        FUN_00d50b20();
        goto LAB_0025a4bc;
      }
    }
    FUN_00d50b20();
  }
LAB_0025a4ba:
  uVar7 = 0;
LAB_0025a4bc:
  return uVar7 & 0xffffffff;
}

