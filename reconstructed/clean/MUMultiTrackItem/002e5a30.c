// Function: FUN_002e5a30
// Address: 002e5a30
// Size: 4599 bytes
// Class: MUMultiTrackItem
// String references:
//   "MUMultiTrackItem"

uint64_t FUN_002e5a30(int param_1,int64_t *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  void*puVar12;
  int64_t lVar13;
  code *pcVar14;
  void *pvVar15;
  int64_t lVar16;
  code *pcVar17;
  code **ppcVar18;
  code *pcVar19;
  int iVar20;
  char *pcVar21;
  int64_t *plVar22;
  code *pcVar23;
  undefined7 uVar24;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_e0;
  char local_d8;
  code *local_b8;
  code *local_b0;
  code *local_98;
  code *local_80;
  char local_78 [8];
  code *local_70;
  uint64_t local_68;
  int local_60;
  char local_58 [8];
  code *local_50;
  char local_48;
  code *local_40;
  int local_38;
  
  local_38 = param_1;
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar17 = &g_02572358;
  *puVar12 = &g_02572358;
  local_40 = g_02572370;
  (*g_02572370)();
  (**(code **)(*this_ptr + 0x9a0))();
  pcVar5 = local_80;
  if ((((local_78[0] == '\0') && (local_80 != 0x0)) && (FUN_00d50b00(), local_78[0] != '\0')
      ) && (local_80 != 0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0x0) {
    local_78[0] = '\0';
    local_80 = 0x0;
    local_70 = *arg1;
    local_68 = 0xffffffff;
    local_60 = 0;
    iVar11 = -1;
    while( true ) {
      lVar13 = (int64_t)(int)local_68;
      iVar20 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar20);
      if (*(int *)(local_70 + 0xc) <= iVar20) break;
      pcVar17 = *(code **)(*(int64_t *)(local_70 + 0x10) + 8 + lVar13 * 8);
      local_80 = pcVar17;
      if ((g_026fe4e0 == '\0') && (iVar20 = ___cxa_guard_acquire(), iVar20 != 0)) {
        g_026d7a88 = FUN_00d4fe50();
        g_026d7a70 = "MUMultiTrackItem";
        g_026d7a78 = 0x60;
        g_026d7a80 = FUN_0006eae0;
        g_026d7a90 = 0;
        ram_00000000026d7a98 = 0;
        g_026d7aa0 = 0;
        g_026d7b18 = 0;
        ram_00000000026d7b20 = 0;
        g_026d7b28 = 0;
        g_026d7b2a = 1;
        g_026d7aa8 = 0;
        ram_00000000026d7ab0 = 0;
        g_026d7ab8 = 0;
        ram_00000000026d7ac0 = 0;
        g_026d7ac8 = 0;
        ram_00000000026d7ad0 = 0;
        g_026d7ad8 = 0;
        ram_00000000026d7ae0 = 0;
        g_026d7ae8 = 0;
        ram_00000000026d7af0 = 0;
        g_026d7af8 = 0;
        ram_00000000026d7b00 = 0;
        g_026d7b08 = 0;
        ram_00000000026d7b10 = 0;
        g_026d7b33 = 0;
        g_026d7b2b = 0;
        ___cxa_guard_release();
      }
      ppcVar18 = (code **)&g_02802688;
      if (pcVar17 != 0x0) {
        (**(code **)(*(int64_t *)pcVar17 + 0x360))();
        cVar10 = FUN_00e85ea0();
        ppcVar18 = &local_80;
        if (cVar10 == '\0') {
          ppcVar18 = (code **)&g_02802688;
        }
      }
      if (*(char *)(ppcVar18 + 1) == '\0') {
        if (*ppcVar18 != 0x0) {
          FUN_00d50b00();
          goto LAB_002e5be1;
        }
LAB_002e5e1c:
        FUN_00083b20();
        goto LAB_002e5ee1;
      }
      *(void*)(ppcVar18 + 1) = 0;
      if (*ppcVar18 == 0x0) goto LAB_002e5e1c;
LAB_002e5be1:
      FUN_002e58e0();
      pcVar17 = local_50;
      if (local_48 == '\0') {
        if (local_50 != 0x0) {
          FUN_00d50b00();
          if ((local_48 != '\0') && (local_50 != 0x0)) {
            FUN_00d50b20();
          }
          goto LAB_002e5c50;
        }
LAB_002e5cb0:
        bVar1 = true;
      }
      else {
        if (local_50 == 0x0) goto LAB_002e5cb0;
LAB_002e5c50:
        if (iVar11 < 0) {
          iVar11 = FUN_01ed4e60();
LAB_002e5cfe:
          local_48 = '\0';
          local_50 = pcVar17;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0x0)) {
            FUN_00d50b20();
          }
          bVar1 = false;
        }
        else {
          iVar20 = FUN_01ed4e60();
          bVar1 = true;
          if (iVar11 == iVar20) goto LAB_002e5cfe;
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (bVar1) goto LAB_002e5e1c;
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar20 = -local_68._4_4_;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar20 = 0;
        }
        local_68 = CONCAT44(iVar20,(int)local_68);
      }
    }
    pcVar17 = local_70;
    FUN_00083b20();
  }
  if (*(int *)((int64_t)puVar12 + 0xc) == 0) {
LAB_002e5ee1:
    pcVar17 = 0x0;
    goto LAB_002e6b7c;
  }
  pcVar14 = FUN_00e8fc40();
  FUN_00d4ff40();
  *(void**)pcVar14 = &g_02572358;
  (*local_40)();
  FUN_00d23310();
  pcVar6 = local_80;
  pcVar19 = CONCAT71((int7)((uint64_t)pcVar17 >> 8),local_78[0]);
  pcVar21 = local_58;
  if (local_78[0] != '\0') {
    pcVar21 = local_78;
  }
  local_58[0] = local_78[0];
  *pcVar21 = '\0';
  if ((local_78[0] != '\0') && (local_80 != 0x0)) {
    FUN_00d50b20();
  }
  pvVar15 = _pthread_getspecific((void*)pcVar19);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar15 = _pthread_getspecific((void*)pcVar19);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  pcVar17 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != 0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (pcVar6 != 0x0)) {
    FUN_00d50b20();
  }
  if (pcVar17 != 0x0) {
    local_78[0] = '\0';
    local_80 = 0x0;
    local_70 = pcVar17;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar11 = -local_68._4_4_;
        }
        else {
          iVar11 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar11);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar11 = 0;
        }
        local_68 = CONCAT44(iVar11,(int)local_68);
      }
      lVar13 = (int64_t)(int)local_68;
      iVar11 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar11);
      if (*(int *)(local_70 + 0xc) <= iVar11) break;
      local_80 = *(code **)(*(int64_t *)(local_70 + 0x10) + 8 + lVar13 * 8);
      local_48 = '\0';
      local_50 = local_80;
      cVar10 = FUN_00d23d70();
      if ((local_48 != '\0') && (local_50 != 0x0)) {
        FUN_00d50b20();
      }
      if (cVar10 != '\0') {
        local_50 = local_80;
        local_48 = '\0';
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != 0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pcVar19 = local_70;
    FUN_000be170();
    FUN_00d50b20();
  }
  FUN_00757c60();
  pcVar6 = local_80;
  if ((((local_78[0] == '\0') && (local_80 != 0x0)) && (FUN_00d50b00(), local_78[0] != '\0')
      ) && (local_80 != 0x0)) {
    FUN_00d50b20();
  }
  pvVar15 = _pthread_getspecific((void*)pcVar19);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pcVar7 = local_80;
  if (local_78[0] == '\0') {
    if (local_80 != 0x0) {
      FUN_00d50b00();
      if ((local_78[0] != '\0') && (local_80 != 0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002e6111;
    }
    plVar22 = (int64_t *)*param_2;
    if (plVar22 == (int64_t *)0x0) goto LAB_002e629a;
LAB_002e611d:
    if ((g_026fe4e0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
      g_026d7a88 = FUN_00d4fe50();
      g_026d7a70 = "MUMultiTrackItem";
      g_026d7a78 = 0x60;
      g_026d7a80 = FUN_0006eae0;
      g_026d7a90 = 0;
      ram_00000000026d7a98 = 0;
      g_026d7aa0 = 0;
      g_026d7b18 = 0;
      ram_00000000026d7b20 = 0;
      g_026d7b28 = 0;
      g_026d7b2a = 1;
      g_026d7aa8 = 0;
      ram_00000000026d7ab0 = 0;
      g_026d7ab8 = 0;
      ram_00000000026d7ac0 = 0;
      g_026d7ac8 = 0;
      ram_00000000026d7ad0 = 0;
      g_026d7ad8 = 0;
      ram_00000000026d7ae0 = 0;
      g_026d7ae8 = 0;
      ram_00000000026d7af0 = 0;
      g_026d7af8 = 0;
      ram_00000000026d7b00 = 0;
      g_026d7b08 = 0;
      ram_00000000026d7b10 = 0;
      g_026d7b33 = 0;
      g_026d7b2b = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar22 + 0x360))();
    cVar10 = FUN_00e85ea0();
    if (cVar10 == '\0') {
      param_2 = &g_02802688;
    }
    lVar13 = *param_2;
    lVar16 = param_2[1];
    if (((char)lVar16 == '\0') || (lVar13 == 0)) {
      if (lVar13 != 0) goto LAB_002e620a;
      bVar1 = false;
    }
    else {
      FUN_00d50b00();
LAB_002e620a:
      FUN_002e58e0();
      local_40 = local_80;
      pcVar19 = local_80;
      if (local_80 == 0x0) {
        local_40 = 0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (((local_78[0] == '\0') && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != 0x0)) {
          FUN_00d50b20();
        }
      }
      if ((char)lVar16 != '\0') {
        FUN_00d50b20();
      }
      if (local_40 != 0x0) goto LAB_002e62a9;
    }
    local_40 = 0x0;
    pcVar17 = 0x0;
  }
  else {
LAB_002e6111:
    plVar22 = (int64_t *)*param_2;
    if (plVar22 != (int64_t *)0x0) goto LAB_002e611d;
    lVar13 = 0;
    if (pcVar7 == 0x0) {
LAB_002e629a:
      lVar13 = 0;
      bVar1 = false;
      local_40 = 0x0;
    }
    else {
      FUN_00d50b00();
      bVar1 = true;
      local_40 = pcVar7;
    }
LAB_002e62a9:
    pvVar15 = _pthread_getspecific((void*)pcVar19);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pcVar8 = local_80;
    if ((local_78[0] != '\0') && (local_80 != 0x0)) {
      FUN_00d50b20();
    }
    if ((pcVar7 != local_40) && (pcVar14 != 0x0)) {
      local_78[0] = '\0';
      local_80 = 0x0;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_70 = pcVar14;
      while( true ) {
        lVar16 = (int64_t)(int)local_68;
        iVar11 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar11);
        if (*(int *)(local_70 + 0xc) <= iVar11) break;
        local_80 = *(code **)(*(int64_t *)(local_70 + 0x10) + 8 + lVar16 * 8);
        pvVar15 = _pthread_getspecific((void*)*(int64_t *)(local_70 + 0x10));
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar11 = *(int *)(local_50 + 0xc);
        if ((local_48 != '\0') && (local_50 != 0x0)) {
          FUN_00d50b20();
        }
        if ((iVar11 != 0) || (local_80 == local_40)) {
          FUN_000be170();
          pcVar17 = 0x0;
          goto joined_r0x002e649a;
        }
        lVar13 = 0;
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar11 = -local_68._4_4_;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar11 = 0;
          }
          local_68 = CONCAT44(iVar11,(int)local_68);
        }
      }
      pcVar19 = local_70;
      FUN_000be170();
    }
    pcVar17 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
    if (param_3 == '\0') {
      if (pcVar8 == 0x0) {
        local_b8 = 0x0;
        bVar3 = false;
      }
      else {
        pvVar15 = _pthread_getspecific((void*)pcVar19);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7fb0();
        local_b8 = local_80;
        pcVar19 = local_80;
        if (local_80 == 0x0) {
          bVar3 = false;
          local_b8 = 0x0;
        }
        else {
          bVar3 = true;
          if (((local_78[0] == '\0') && (FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != 0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (pcVar14 != 0x0) {
        local_78[0] = '\0';
        local_80 = 0x0;
        local_60 = 0;
        local_68 = 0;
        if (*(int *)(pcVar14 + 0xc) < 1) {
          local_b0 = 0x0;
          bVar4 = false;
          local_70 = pcVar14;
        }
        else {
          lVar13 = 0;
          bVar4 = false;
          local_b0 = 0x0;
          local_70 = pcVar14;
          do {
            pcVar17 = *(code **)(*(int64_t *)(pcVar14 + 0x10) + lVar13 * 8);
            local_80 = pcVar17;
            if (pcVar8 == 0x0) {
              local_98 = 0x0;
              bVar2 = false;
            }
            else {
              pvVar15 = _pthread_getspecific((void*)pcVar19);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              local_98 = local_50;
              pcVar19 = local_50;
              if (local_50 == 0x0) {
                bVar2 = false;
                local_98 = 0x0;
              }
              else {
                bVar2 = true;
                if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
                   (local_50 != 0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            pvVar15 = _pthread_getspecific((void*)pcVar19);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6a50();
            pvVar15 = _pthread_getspecific((void*)pcVar19);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e68b0();
            iVar11 = local_38;
            if ((local_48 != '\0') && (local_50 != 0x0)) {
              FUN_00d50b20();
            }
            if (local_b0 != 0x0) {
              pvVar15 = _pthread_getspecific((void*)pcVar19);
              if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar19 = local_40;
              }
              FUN_012e6160();
              local_50 = local_b0;
              local_48 = '\0';
              iVar11 = FUN_00d237a0();
              if ((local_48 != '\0') && (local_50 != 0x0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
              iVar11 = iVar11 + 1;
            }
            pvVar15 = _pthread_getspecific((void*)pcVar19);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pcVar19 = local_40;
            }
            FUN_012e6160();
            if (*(int *)(local_50 + 0xc) < iVar11) {
              iVar11 = *(int *)(local_50 + 0xc);
            }
            if ((local_48 != '\0') && (local_50 != 0x0)) {
              FUN_00d50b20();
            }
            pvVar15 = _pthread_getspecific((void*)pcVar19);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pcVar19 = local_40;
            }
            FUN_012e66e0();
            if (pcVar8 != 0x0) {
              pvVar15 = _pthread_getspecific((void*)pcVar19);
              if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar19 = local_98;
              }
              FUN_0150fe10();
              pvVar15 = _pthread_getspecific((void*)pcVar19);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150f380();
              if ((local_48 != '\0') && (local_50 != 0x0)) {
                FUN_00d50b20();
              }
              pvVar15 = _pthread_getspecific((void*)pcVar19);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150f1c0();
            }
            if (pcVar17 == local_b0) {
              pcVar23 = local_b0;
              bVar9 = bVar4;
              if ((!bVar4) && (pcVar17 != 0x0)) {
                FUN_00d50b00();
                bVar9 = true;
              }
            }
            else {
              if (pcVar17 != 0x0) {
                FUN_00d50b00();
              }
              bVar9 = true;
              pcVar23 = pcVar17;
              if ((bVar4) && (local_b0 != 0x0)) {
                FUN_00d50b20();
              }
            }
            bVar4 = bVar9;
            FUN_01d243a0();
            local_38 = iVar11;
            if ((bVar2) && (local_98 != 0x0)) {
              FUN_00d50b20();
            }
            lVar13 = lVar13 + 1;
            local_68 = CONCAT44(local_68._4_4_,(int)lVar13);
            local_b0 = pcVar23;
          } while ((int)lVar13 < *(int *)(pcVar14 + 0xc));
        }
        FUN_000be170();
        pcVar17 = pcVar14;
        if ((bVar4) && (local_b0 != 0x0)) {
          FUN_00d50b20();
        }
      }
      uVar24 = (undefined7)((uint64_t)pcVar17 >> 8);
      if (bVar3) {
        pcVar17 = CONCAT71(uVar24,1);
        if (local_b8 != 0x0) {
          FUN_00d50b20();
        }
      }
      else {
        pcVar17 = CONCAT71(uVar24,1);
      }
    }
  }
joined_r0x002e649a:
  if (pcVar7 != 0x0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_40 != 0x0)) {
    FUN_00d50b20();
  }
  if (pcVar6 != 0x0) {
    FUN_00d50b20();
  }
  if (pcVar14 != 0x0) {
    FUN_00d50b20();
  }
LAB_002e6b7c:
  if (pcVar5 != 0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  return (uint64_t)pcVar17 & 0xffffffff;
}

